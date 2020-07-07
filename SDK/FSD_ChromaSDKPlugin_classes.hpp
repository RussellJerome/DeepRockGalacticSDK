#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ChromaSDKPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// 0x00E0 (0x0108 - 0x0028)
class UChromaSDKPluginAnimation1DObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	float                                              OverrideFrameTime;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0038(0x0088) (Edit)
	EChromaSDKDevice1DEnum                             Device;                                                   // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	TArray<struct FChromaSDKColorFrame1D>              Frames;                                                   // 0x00C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x00D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject");
		return ptr;
	}


	void Unload();
	void Stop();
	void PlayWithOnComplete(struct FScriptDelegate* OnComplete);
	void Play();
	void Load();
	bool IsPlaying();
	bool IsLoaded();
	TArray<struct FChromaSDKColorFrame1D> GetFrames();
};


// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// 0x00E0 (0x0108 - 0x0028)
class UChromaSDKPluginAnimation2DObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	float                                              OverrideFrameTime;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0038(0x0088) (Edit)
	EChromaSDKDevice2DEnum                             Device;                                                   // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	TArray<struct FChromaSDKColorFrame2D>              Frames;                                                   // 0x00C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x00D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject");
		return ptr;
	}


	void Unload();
	void Stop();
	void PlayWithOnComplete(struct FScriptDelegate* OnComplete);
	void Play();
	void Load();
	bool IsPlaying();
	bool IsLoaded();
	TArray<struct FChromaSDKColorFrame2D> GetFrames();
};


// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UChromaSDKPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary");
		return ptr;
	}


	TArray<struct FChromaSDKColors> STATIC_SetMouseLedColor(EChromaSDKMouseLed* led, struct FLinearColor* Color, TArray<struct FChromaSDKColors>* Colors);
	TArray<struct FChromaSDKColors> STATIC_SetKeyboardKeyColor(EChromaSDKKeyboardKey* Key, struct FLinearColor* Color, TArray<struct FChromaSDKColors>* Colors);
	bool STATIC_IsPlatformWindows();
	bool STATIC_IsInitialized();
	int STATIC_GetMaxRow(EChromaSDKDevice2DEnum* Device);
	int STATIC_GetMaxLeds(EChromaSDKDevice1DEnum* Device);
	int STATIC_GetMaxColumn(EChromaSDKDevice2DEnum* Device);
	class FString STATIC_DebugToString(struct FChromaSDKGuid* EffectId);
	TArray<struct FChromaSDKColors> STATIC_CreateRandomColors2D(EChromaSDKDevice2DEnum* Device);
	TArray<struct FLinearColor> STATIC_CreateRandomColors1D(EChromaSDKDevice1DEnum* Device);
	TArray<struct FChromaSDKColors> STATIC_CreateColors2D(EChromaSDKDevice2DEnum* Device);
	TArray<struct FLinearColor> STATIC_CreateColors1D(EChromaSDKDevice1DEnum* Device);
	int STATIC_ChromaSDKUnInit();
	int STATIC_ChromaSDKSetEffect(struct FChromaSDKGuid* EffectId);
	int STATIC_ChromaSDKInit();
	int STATIC_ChromaSDKDeleteEffect(struct FChromaSDKGuid* EffectId);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectStatic(EChromaSDKDeviceEnum* Device, struct FLinearColor* Color);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectNone(EChromaSDKDeviceEnum* Device);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom2D(EChromaSDKDevice2DEnum* Device, TArray<struct FChromaSDKColors>* Colors);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom1D(EChromaSDKDevice1DEnum* Device, TArray<struct FLinearColor>* Colors);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
