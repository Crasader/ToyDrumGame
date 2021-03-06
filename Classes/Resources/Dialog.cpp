// ---------------------------------------
// Sprite definitions for Dialog
// Generated with TexturePacker 4.8.3
//
// https://www.codeandweb.com/texturepacker
// ---------------------------------------

#include "Dialog.hpp"

USING_NS_CC;

namespace TexturePacker
{

void Dialog::addSpriteFramesToCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->addSpriteFramesWithFile("Dialog.plist");
};

void Dialog::removeSpriteFramesFromCache()
{
    SpriteFrameCache *cache = SpriteFrameCache::getInstance();
    cache->removeSpriteFramesFromFile("Dialog.plist");
};


// ---------------------
// sprite name constants
// ---------------------
const std::string Dialog::confirmButton             = "ConfirmButton.png";
const std::string Dialog::listSpaceLine             = "ListSpaceLine.png";
const std::string Dialog::loginByPhone              = "LoginByPhone.png";
const std::string Dialog::loginByWeChat             = "LoginByWeChat.png";
const std::string Dialog::loginByXinlang            = "LoginByXinlang.png";
const std::string Dialog::personalCenterBackground  = "PersonalCenterBackground.png";
const std::string Dialog::personalHeadBackground    = "PersonalHeadBackground.png";
const std::string Dialog::personalHeadBorder        = "PersonalHeadBorder.png";
const std::string Dialog::redioButtonNormal         = "RedioButtonNormal.png";
const std::string Dialog::redioButtonSelectedBlue   = "RedioButtonSelectedBlue.png";
const std::string Dialog::redioButtonSelectedOrange = "RedioButtonSelectedOrange.png";
const std::string Dialog::saveButton                = "SaveButton.png";
const std::string Dialog::settingBackground         = "SettingBackground.png";
const std::string Dialog::settingsContentBackground = "SettingsContentBackground.png";
const std::string Dialog::swichEnabled              = "SwichEnabled.png";
const std::string Dialog::swichNormal               = "SwichNormal.png";
const std::string Dialog::texteditBackground        = "TexteditBackground.png";

// ---------------------------------------------------------
// convenience functions returing pointers to Sprite objects
// ---------------------------------------------------------
Sprite* Dialog::createConfirmButtonSprite()
{
    return Sprite::createWithSpriteFrameName(confirmButton);
}

Sprite* Dialog::createListSpaceLineSprite()
{
    return Sprite::createWithSpriteFrameName(listSpaceLine);
}

Sprite* Dialog::createLoginByPhoneSprite()
{
    return Sprite::createWithSpriteFrameName(loginByPhone);
}

Sprite* Dialog::createLoginByWeChatSprite()
{
    return Sprite::createWithSpriteFrameName(loginByWeChat);
}

Sprite* Dialog::createLoginByXinlangSprite()
{
    return Sprite::createWithSpriteFrameName(loginByXinlang);
}

Sprite* Dialog::createPersonalCenterBackgroundSprite()
{
    return Sprite::createWithSpriteFrameName(personalCenterBackground);
}

Sprite* Dialog::createPersonalHeadBackgroundSprite()
{
    return Sprite::createWithSpriteFrameName(personalHeadBackground);
}

Sprite* Dialog::createPersonalHeadBorderSprite()
{
    return Sprite::createWithSpriteFrameName(personalHeadBorder);
}

Sprite* Dialog::createRedioButtonNormalSprite()
{
    return Sprite::createWithSpriteFrameName(redioButtonNormal);
}

Sprite* Dialog::createRedioButtonSelectedBlueSprite()
{
    return Sprite::createWithSpriteFrameName(redioButtonSelectedBlue);
}

Sprite* Dialog::createRedioButtonSelectedOrangeSprite()
{
    return Sprite::createWithSpriteFrameName(redioButtonSelectedOrange);
}

Sprite* Dialog::createSaveButtonSprite()
{
    return Sprite::createWithSpriteFrameName(saveButton);
}

Sprite* Dialog::createSettingBackgroundSprite()
{
    return Sprite::createWithSpriteFrameName(settingBackground);
}

Sprite* Dialog::createSettingsContentBackgroundSprite()
{
    return Sprite::createWithSpriteFrameName(settingsContentBackground);
}

Sprite* Dialog::createSwichEnabledSprite()
{
    return Sprite::createWithSpriteFrameName(swichEnabled);
}

Sprite* Dialog::createSwichNormalSprite()
{
    return Sprite::createWithSpriteFrameName(swichNormal);
}

Sprite* Dialog::createTexteditBackgroundSprite()
{
    return Sprite::createWithSpriteFrameName(texteditBackground);
}


}; // namespace

