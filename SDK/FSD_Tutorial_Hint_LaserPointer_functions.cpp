// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_LaserPointer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnInitialized
// (Event, Protected, BlueprintEvent)

void UTutorial_Hint_LaserPointer_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnInitialized");

	UTutorial_Hint_LaserPointer_C_ReceiveOnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnMarkerPlaced_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ELaserPointerTargetType*       TypeOfTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_LaserPointer_C::OnMarkerPlaced_Event(struct FVector* Location, struct FText* Name, struct FLinearColor* Color, class AActor** Target, ELaserPointerTargetType* TypeOfTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnMarkerPlaced_Event");

	UTutorial_Hint_LaserPointer_C_OnMarkerPlaced_Event_Params params;
	params.Location = Location;
	params.Name = Name;
	params.Color = Color;
	params.Target = Target;
	params.TypeOfTarget = TypeOfTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ExecuteUbergraph_Tutorial_Hint_LaserPointer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_Hint_LaserPointer_C::ExecuteUbergraph_Tutorial_Hint_LaserPointer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ExecuteUbergraph_Tutorial_Hint_LaserPointer");

	UTutorial_Hint_LaserPointer_C_ExecuteUbergraph_Tutorial_Hint_LaserPointer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
