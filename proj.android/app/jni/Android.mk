LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

$(call import-add-path,$(LOCAL_PATH)/../../../cocos2d)
$(call import-add-path,$(LOCAL_PATH)/../../../cocos2d/external)
$(call import-add-path,$(LOCAL_PATH)/../../../cocos2d/cocos)
$(call import-add-path,$(LOCAL_PATH)/../../../cocos2d/cocos/audio/include)

LOCAL_MODULE := MyGame_shared

LOCAL_MODULE_FILENAME := libMyGame

LOCAL_SRC_FILES := $(LOCAL_PATH)/hellocpp/main.cpp \
                   $(LOCAL_PATH)/Android.cpp \
                   $(LOCAL_PATH)/../../../Classes/AppDelegate.cpp \
                   $(LOCAL_PATH)/../../../Classes/BaseScene.cpp \
                   $(LOCAL_PATH)/../../../Classes/Common/Common.cpp \
                   $(LOCAL_PATH)/../../../Classes/Common/Message.cpp \
                   $(LOCAL_PATH)/../../../Classes/Common/Http.cpp \
                   $(LOCAL_PATH)/../../../Classes/Common/WebViewScene.cpp \
                   $(LOCAL_PATH)/../../../Classes/Main/MainScene.cpp \
                   $(LOCAL_PATH)/../../../Classes/Main/DialogPersonalCenterLayer.cpp \
                   $(LOCAL_PATH)/../../../Classes/Main/DialogSettingsLayer.cpp \
                   $(LOCAL_PATH)/../../../Classes/Resources/Login.cpp \
                   $(LOCAL_PATH)/../../../Classes/Resources/Main.cpp \
                   $(LOCAL_PATH)/../../../Classes/Resources/Dialog.cpp \
                   $(LOCAL_PATH)/../../../Classes/Resources/Canence.cpp \
                   $(LOCAL_PATH)/../../../Classes/Resources/PianoGame.cpp \
                   $(LOCAL_PATH)/../../../Classes/Resources/DadGuess.cpp \
                   $(LOCAL_PATH)/../../../Classes/DataBase/DataBase.cpp \
                   $(LOCAL_PATH)/../../../Classes/DataBase/DataTableUser.cpp \
                   $(LOCAL_PATH)/../../../Classes/DataBase/DataTableFile.cpp \
                   $(LOCAL_PATH)/../../../Classes/DataBase/DataTableCard.cpp \
                   $(LOCAL_PATH)/../../../Classes/DadGuess/DadGuessUpdateScene.cpp \
                   $(LOCAL_PATH)/../../../Classes/PianoGame/PianoGameMainScene.cpp \
                   $(LOCAL_PATH)/../../../Classes/PianoGame/PianoGameMusicListLayer.cpp \
                   $(LOCAL_PATH)/../../../Classes/PianoGame/PianoGameMusicListScrollView.cpp \
                   $(LOCAL_PATH)/../../../Classes/DataBase/sqlite3/sqlite3.c \
                   $(LOCAL_PATH)/../../../Classes/Login/LoginScene.cpp \
                   $(LOCAL_PATH)/../../../Classes/Cadence/CadenceGameMainScene.cpp \
                   $(LOCAL_PATH)/../../../Classes/C2DXShareSDK/C2DXShareSDK.cpp \
                   $(LOCAL_PATH)/../../../Classes/C2DXShareSDK/Android/ShareSDKUtils.cpp \
                   $(LOCAL_PATH)/../../../Classes/C2DXShareSDK/Android/JSON/CCJSONConverter.cpp \
                   $(LOCAL_PATH)/../../../Classes/C2DXShareSDK/Android/JSON/cJSON/cJSON.c

                   


LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../Classes \
                    $(LOCAL_PATH)/../../../Classes/DataBase \
                    $(LOCAL_PATH)/../../../Classes/Login \
                    $(LOCAL_PATH)/../../../Classes/Main \
                    $(LOCAL_PATH)/../../../Classes/Common \
                    $(LOCAL_PATH)/../../../Classes/DataBase/sqlite3 \
                    $(LOCAL_PATH)/../../../Classes/Resources \
                    $(LOCAL_PATH)/../../../Classes/PianoGame \
                    $(LOCAL_PATH)/../../../Classes/DadGuess \
                    $(LOCAL_PATH)/../../../Classes/Cadence \
                    $(LOCAL_PATH)/../../../Classes/C2DXShareSDK \
                    $(LOCAL_PATH)/../../../Classes/C2DXShareSDK/Android \
                    $(LOCAL_PATH)/../../../Classes/C2DXShareSDK/Android/JSON \
                    $(LOCAL_PATH)/../../../Classes/C2DXShareSDK/Android/JSON/cJSON

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cocos2dx_static

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-add-path, $(LOCAL_PATH)/../../../cocos2d)
$(call import-module, cocos)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
