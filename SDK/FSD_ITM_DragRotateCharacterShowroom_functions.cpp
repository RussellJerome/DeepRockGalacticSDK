// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DragRotateCharacterShowroom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UITM_DragRotateCharacterShowroom_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonUp");

	UITM_DragRotateCharacterShowroom_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UITM_DragRotateCharacterShowroom_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseButtonDown");

	UITM_DragRotateCharacterShowroom_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UITM_DragRotateCharacterShowroom_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnMouseMove");

	UITM_DragRotateCharacterShowroom_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_DragRotateCharacterShowroom_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.Construct");

	UITM_DragRotateCharacterShowroom_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnShowCharacterSelectorRotate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Pitch                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Yaw                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DragRotateCharacterShowroom_C::OnShowCharacterSelectorRotate(float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.OnShowCharacterSelectorRotate");

	UITM_DragRotateCharacterShowroom_C_OnShowCharacterSelectorRotate_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.ExecuteUbergraph_ITM_DragRotateCharacterShowroom
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DragRotateCharacterShowroom_C::ExecuteUbergraph_ITM_DragRotateCharacterShowroom(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DragRotateCharacterShowroom.ITM_DragRotateCharacterShowroom_C.ExecuteUbergraph_ITM_DragRotateCharacterShowroom");

	UITM_DragRotateCharacterShowroom_C_ExecuteUbergraph_ITM_DragRotateCharacterShowroom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
