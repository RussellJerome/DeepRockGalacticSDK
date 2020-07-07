#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TimeSynth_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TimeSynth.TimeSynthVolumeGroup
// 0x0008 (0x0030 - 0x0028)
class UTimeSynthVolumeGroup : public UObject
{
public:
	float                                              DefaultVolume;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeSynth.TimeSynthVolumeGroup");
		return ptr;
	}

};


// Class TimeSynth.TimeSynthClip
// 0x0040 (0x0068 - 0x0028)
class UTimeSynthClip : public UObject
{
public:
	TArray<struct FTimeSynthClipSound>                 Sounds;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   VolumeScaleDb;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PitchScaleSemitones;                                      // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimeSynthTimeDef                           FadeInTime;                                               // 0x0048(0x0008) (Edit, BlueprintVisible)
	bool                                               bApplyFadeOut;                                            // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FTimeSynthTimeDef                           FadeOutTime;                                              // 0x0054(0x0008) (Edit, BlueprintVisible)
	struct FTimeSynthTimeDef                           ClipDuration;                                             // 0x005C(0x0008) (Edit, BlueprintVisible)
	ETimeSynthEventClipQuantization                    ClipQuantization;                                         // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeSynth.TimeSynthClip");
		return ptr;
	}

};


// Class TimeSynth.TimeSynthComponent
// 0x09A0 (0x1010 - 0x0670)
class UTimeSynthComponent : public USynthComponent
{
public:
	struct FTimeSynthQuantizationSettings              QuantizationSettings;                                     // 0x0670(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      bEnableSpectralAnalysis : 1;                              // 0x0684(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0685(0x0003) MISSED OFFSET
	TArray<float>                                      FrequenciesToAnalyze;                                     // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ETimeSynthFFTSize                                  FFTSize;                                                  // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0699(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlaybackTime;                                           // 0x06A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bIsFilterAEnabled : 1;                                    // 0x06B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsFilterBEnabled : 1;                                    // 0x06B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	struct FTimeSynthFilterSettings                    FilterASettings;                                          // 0x06B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimeSynthFilterSettings                    FilterBSettings;                                          // 0x06C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsEnvelopeFollowerEnabled : 1;                           // 0x06CC(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06CD(0x0003) MISSED OFFSET
	struct FTimeSynthEnvelopeFollowerSettings          EnvelopeFollowerSettings;                                 // 0x06D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x934];                                     // 0x06DC(0x0934) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeSynth.TimeSynthComponent");
		return ptr;
	}


	void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup** InVolumeGroup, ETimeSynthEventClipQuantization* EventQuantization, struct FTimeSynthTimeDef* FadeTime);
	void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup** InVolumeGroup, ETimeSynthEventClipQuantization* EventQuantization);
	void StopClipWithFadeOverride(struct FTimeSynthClipHandle* InClipHandle, ETimeSynthEventClipQuantization* EventQuantization, struct FTimeSynthTimeDef* FadeTime);
	void StopClip(struct FTimeSynthClipHandle* InClipHandle, ETimeSynthEventClipQuantization* EventQuantization);
	void SetVolumeGroup(class UTimeSynthVolumeGroup** InVolumeGroup, float* VolumeDb, float* FadeTimeSec);
	void SetSeed(int* InSeed);
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings* InQuantizationSettings);
	void SetFilterSettings(ETimeSynthFilter* Filter, struct FTimeSynthFilterSettings* InSettings);
	void SetFilterEnabled(ETimeSynthFilter* Filter, bool* bIsEnabled);
	void SetFFTSize(ETimeSynthFFTSize* InFFTSize);
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings* InSettings);
	void SetEnvelopeFollowerEnabled(bool* bInIsEnabled);
	void SetBPM(float* BeatsPerMinute);
	void ResetSeed();
	struct FTimeSynthClipHandle PlayClip(class UTimeSynthClip** InClip, class UTimeSynthVolumeGroup** InVolumeGroup);
	TArray<struct FTimeSynthSpectralData> GetSpectralData();
	float GetEnvelopeFollowerValue();
	int GetBPM();
	void AddQuantizationEventDelegate(ETimeSynthEventQuantization* QuantizationType, struct FScriptDelegate* OnQuantizationEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
