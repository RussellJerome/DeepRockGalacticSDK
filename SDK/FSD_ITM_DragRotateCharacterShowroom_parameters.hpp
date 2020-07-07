#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DragRotateCharacterShowroom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonUp
struct UITM_DragRotateCharacterShowroom_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonDown
struct UITM_DragRotateCharacterShowroom_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseMove
struct UITM_DragRotateCharacterShowroom_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.Construct
struct UITM_DragRotateCharacterShowroom_C_Construct_Params
{
};

// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnShowCharacterSelectorRotate
struct UITM_DragRotateCharacterShowroom_C_OnShowCharacterSelectorRotate_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.ExecuteUbergraph_ITM_DragRotateCharacterShowroom
struct UITM_DragRotateCharacterShowroom_C_ExecuteUbergraph_ITM_DragRotateCharacterShowroom_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
