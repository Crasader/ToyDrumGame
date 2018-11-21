//
//  DataTableCardAudio.cpp
//  dadpat-mobile
//
//  Created by 吴思 on 2018/11/15.
//

#include "DataTableCardAudio.h"
#include <sstream>

DataCardAudioInfo::DataCardAudioInfo() : DataCardAudioInfo( "", "", "", AudioType::commentary )
{
    
}

DataCardAudioInfo::DataCardAudioInfo( const std::string & p_id, const std::string & p_cardId, const std::string & p_fileId, AudioType p_audioType ) : id( p_id ), cardId( p_cardId ), fileId( p_fileId ), audioType( p_audioType )
{
    
}

std::string DataCardAudioInfo::toJson( void ) const
{
    std::stringstream t_sstr;
    
    t_sstr << "{ ";
    
    t_sstr << "\"id\": \"" << id << "\", ";
    t_sstr << "\"cardId\": \"" << cardId << "\", ";
    t_sstr << "\"fileId\": \"" << fileId << "\", ";
    t_sstr << "\"audioType\": " << audioType;
    
    t_sstr << " }";
    
    return t_sstr.str();
}

DataTableCardAudio & DataTableCardAudio::instance( void )
{
    static DataTableCardAudio * sm_instance = nullptr;
    if( !sm_instance )
    {
        sm_instance = new DataTableCardAudio();
        
        if( !sm_instance->init() )
        {
            printf( "DataTableCardAudio init faild! \n" );
        }
    }
    
    return *sm_instance;
}

bool DataTableCardAudio::insert( const DataCardAudioInfo & p_cardAudioInfo ) const
{
    
    std::stringstream t_ssql;
    
    t_ssql << "INSERT INTO " << DataTableCardAudioName << "( id, cardId, fileId, audioType ) VALUES( "
    << "\"" << p_cardAudioInfo.id << "\", "
    << "\"" << p_cardAudioInfo.cardId << "\", "
    << "\"" << p_cardAudioInfo.fileId << "\", "
    << p_cardAudioInfo.audioType
    << ");";
    std::string t_sql = t_ssql.str();

    return DataBase::instance().exec( t_sql );
}

std::vector< DataCardAudioInfo > DataTableCardAudio::list( const std::string & p_cardId ) const
{
    std::vector< DataCardAudioInfo > t_result;
    
    std::stringstream t_ssql;
    
    t_ssql << "SELECT * FROM " << DataTableCardAudioName << " WHERE cardId=\"" << p_cardId << "\"";
    
    auto t_list = DataBase::instance().query( t_ssql.str() );
    
    for( auto t_row : t_list )
    {
        t_result.push_back( dataRowToDataCardAudioInfo( t_row ) );
    }
    
    return t_result;
}

DataCardAudioInfo DataTableCardAudio::find( const std::string & p_id ) const
{
    DataCardAudioInfo t_result;
    
    std::stringstream t_ssql;
    t_ssql << "SELECT * FROM " << DataTableCardAudioName <<  " WHERE id= \"" << p_id << "\"";
    std::string t_sql = t_ssql.str();
    
    auto t_list = DataBase::instance().query( t_sql );
    
    if( t_list.size() == 1 )
    {
        t_result = dataRowToDataCardAudioInfo( *t_list.begin() );
    }
    
    return t_result;
}

bool DataTableCardAudio::update( const DataCardAudioInfo & p_cardAudioInfo ) const
{
    bool t_needUpdate = false;
    
    DataCardAudioInfo t_oldInfo = find( p_cardAudioInfo.id );
    if( t_oldInfo.id.length() <= 0 )
    {
        return false;
    }
    
    std::stringstream t_ssql;
    t_ssql << "UPDATE " << DataTableCardAudioName << " SET ";
    
    if( p_cardAudioInfo.cardId != t_oldInfo.cardId )
    {
        if( t_needUpdate )
        {
            t_ssql << ", ";
        }else{
            t_needUpdate = true;
        }
        
        t_ssql << "cardId = \"" << p_cardAudioInfo.cardId << "\"";
    }
    
    if( p_cardAudioInfo.fileId != t_oldInfo.fileId )
    {
        if( t_needUpdate )
        {
            t_ssql << ", ";
        }else{
            t_needUpdate = true;
        }
        
        t_ssql << "fileId = \"" << p_cardAudioInfo.fileId << "\"";
    }
    
    if( p_cardAudioInfo.audioType != t_oldInfo.audioType )
    {
        if( t_needUpdate )
        {
            t_ssql << ", ";
        }else{
            t_needUpdate = true;
        }
        
        t_ssql << "audioType = " << p_cardAudioInfo.audioType;
    }
    
    if( !t_needUpdate )
    {
        return true;
    }
    
    t_ssql << " WHERE id=\"" << p_cardAudioInfo.id << "\"";
    
    return DataBase::instance().exec( t_ssql.str() );
}

bool DataTableCardAudio::remove( const std::string & p_id ) const
{
    std::stringstream t_ssql;
    t_ssql << "DELETE FROM " << DataTableCardAudioName << " WHERE id=\"" << p_id << "\"";
    std::string t_sql = t_ssql.str();
    
    return DataBase::instance().exec( t_sql );
}


bool DataTableCardAudio::drop( void ) const
{
    return DataBase::instance().exec( DataTableCardAudioDrapSql );
}


bool DataTableCardAudio::init( void ) const
{
    if( !DataBase::instance().exec( DataTableCardAudioCreateSql ) )
    {
        return false;
    }
    return true;
}

DataCardAudioInfo DataTableCardAudio::dataRowToDataCardAudioInfo( std::map<std::string, std::string> & p_dataRow ) const
{
    DataCardAudioInfo::AudioType t_audioType;
    switch (atoi( p_dataRow["audioType"].c_str() )) {
        case 0:
            t_audioType = DataCardAudioInfo::AudioType::commentary;
            break;
        case 1:
            t_audioType = DataCardAudioInfo::AudioType::hue;
            break;
            
        default:
            break;
    }
    return DataCardAudioInfo( p_dataRow["id"], p_dataRow["cardId"], p_dataRow["fileId"], t_audioType );
}