#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct EndScreenMoveSet.EndScreenMoveSet
// 0x0100
struct FEndScreenMoveSet
{
	float                                              Weight_20_9172AF0F49C74900EC45C29EEE7FB775;               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<TSoftObjectPtr<class UAnimSequence>>        Walks_42_3B0B99FD43910DD750F305953173B9CB;                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TSoftObjectPtr<class UAnimSequence>>        Poses_Optional_43_3339A57A4D10CBD0C5C74690F351D108;       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TSoftObjectPtr<class UAnimSequence>                Loop_44_0E4E6C8A4331EA36DF87AA9DE7E30AB1;                 // 0x0028(0x0028) (Edit, BlueprintVisible)
	TArray<TSoftObjectPtr<class UAnimSequence>>        Breaks_45_342F70184394DAB7D1A06B927C9CEDA1;               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TSoftObjectPtr<class UClass>                       Attachment_Class_25_9EA6E9964122F7482D241BB69A8EE5B7;     // 0x0060(0x0028) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TSoftObjectPtr<class UAnimSequence>                Attachment_Walk_46_8D4D47EA48F66FA99BB048BCD07D34FB;      // 0x0088(0x0028) (Edit, BlueprintVisible)
	TSoftObjectPtr<class UAnimSequence>                Attachment_Pose_47_9862A0C744322DD618B426902448DC92;      // 0x00B0(0x0028) (Edit, BlueprintVisible)
	TSoftObjectPtr<class UAnimSequence>                Attachment_Loop_48_CB65E924422DC1F25BFB5194B0E606E5;      // 0x00D8(0x0028) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
