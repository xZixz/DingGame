LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

$(call import-add-path,$(LOCAL_PATH)/../../cocos2d)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/external)
$(call import-add-path,$(LOCAL_PATH)/../../cocos2d/cocos)

LOCAL_MODULE := cocos2dcpp_shared

LOCAL_MODULE_FILENAME := libcocos2dcpp

LOCAL_SRC_FILES := hellocpp/main.cpp \
				   ../../Classes/controller/GamePlayController.cpp \
				   ../../Classes/model/Ball.cpp\
				   ../../Classes/model/GameModel.cpp\
				   ../../Classes/model/Stick.cpp\
				   ../../Classes/model/Target.cpp\
				   ../../Classes/view/BallLayer.cpp\
				   ../../Classes/view/GamePlayView.cpp\
				   ../../Classes/view/HudLayer.cpp\
				   ../../Classes/view/StickLayer.cpp\
				   ../../Classes/view/UserInputLayer.cpp\
				   ../../Classes/view/GameScene.cpp\
                   ../../Classes/AppDelegate.cpp \
                   ../../Classes/HelloWorldScene.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END


LOCAL_STATIC_LIBRARIES := cocos2dx_static

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module,.)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
