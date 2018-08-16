//
//  DialogPersonalCenter.hpp
//  dadpat-mobile
//
//  Created by 吴思 on 2018/8/9.
//

#ifndef __DIALOG_PERSONAL_CENTER_LAYER_H__
#define __DIALOG_PERSONAL_CENTER_LAYER_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include <functional>

class DialogPersonalCenterLayer: public cocos2d::Layer
{
public:
    CREATE_FUNC( DialogPersonalCenterLayer );
    
    void show();
    void hide();
    
    std::function<void()> hideCallBack;
    
protected:
    virtual bool init( void ) override;
    
    void clearAllActions();

private:
    
    void refreshSexRedio( Ref * p_girlRedio, Ref * p_boyRedio );
    
    bool m_isGirl;
    
    cocos2d::DrawNode * m_vague;
    cocos2d::Sprite * m_dialogCentBackground;
    cocos2d::ui::Button * m_dialogCentSaveButton;
    cocos2d::ui::EditBox * m_nameEditBox;
    cocos2d::Vec2 m_dialogCentBackgroundHiedPos, m_dialogCentBackgroundShowPos, m_dialogCentSaveButtonHidePos, m_dialogCentSaveButtonShowPos, m_nameEditBoxShowPos, m_nameEditBoxHidePos;
};

#endif //__DIALOG_PERSONAL_CENTER_LAYER_H__