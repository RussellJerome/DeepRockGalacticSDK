// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_LaserPointer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_LaserPointer.WPN_LaserPointer_C.SetLaserBeamMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       InCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::SetLaserBeamMaterial(class APlayerCharacter** InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.SetLaserBeamMaterial");

	AWPN_LaserPointer_C_SetLaserBeamMaterial_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.SetBeamVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::SetBeamVisibility(bool* bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.SetBeamVisibility");

	AWPN_LaserPointer_C_SetBeamVisibility_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture**               Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Can_Place                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::CanPlacePOI(struct FVector* Location, class UTexture** Icon, bool* Can_Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI");

	AWPN_LaserPointer_C_CanPlacePOI_Params params;
	params.Location = Location;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Can_Place != nullptr)
		*Can_Place = params.Can_Place;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor
// (Private, BlueprintCallable, BlueprintEvent)

void AWPN_LaserPointer_C::UpdateBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor");

	AWPN_LaserPointer_C_UpdateBackgroundColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::SetBackgroundColor(struct FLinearColor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor");

	AWPN_LaserPointer_C_SetBackgroundColor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWPN_LaserPointer_C::Adjust_Beam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam");

	AWPN_LaserPointer_C_Adjust_Beam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              PointTransform                 (Parm, OutParm, IsPlainOldData)

void AWPN_LaserPointer_C::GetPointTransform(struct FTransform* PointTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform");

	AWPN_LaserPointer_C_GetPointTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointTransform != nullptr)
		*PointTransform = params.PointTransform;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_LaserPointer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript");

	AWPN_LaserPointer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_LaserPointer_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped");

	AWPN_LaserPointer_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget**            Crosshair                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWPN_LaserPointer_C::BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget** Crosshair)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature");

	AWPN_LaserPointer_C_BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature_Params params;
	params.Crosshair = Crosshair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             TargetIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::OnPointOfInterest(class AActor** TargetActor, struct FVector* TargetLocation, class UTexture2D** TargetIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest");

	AWPN_LaserPointer_C_OnPointOfInterest_Params params;
	params.TargetActor = TargetActor;
	params.TargetLocation = TargetLocation;
	params.TargetIcon = TargetIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_LaserPointer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay");

	AWPN_LaserPointer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ToggleLaserVisible
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          aVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::ToggleLaserVisible(bool* aVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ToggleLaserVisible");

	AWPN_LaserPointer_C_ToggleLaserVisible_Params params;
	params.aVisible = aVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       ItemOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::AddedToInventory(class APlayerCharacter** ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.AddedToInventory");

	AWPN_LaserPointer_C_AddedToInventory_Params params;
	params.ItemOwner = ItemOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnScanComplete
// (BlueprintCallable, BlueprintEvent)

void AWPN_LaserPointer_C::OnScanComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnScanComplete");

	AWPN_LaserPointer_C_OnScanComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Name                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ELaserPointerTargetType*       TypeOfTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::OnMarkerPlaced_Event(struct FVector* Location, struct FText* Name, struct FLinearColor* Color, class AActor** Target, ELaserPointerTargetType* TypeOfTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced_Event");

	AWPN_LaserPointer_C_OnMarkerPlaced_Event_Params params;
	params.Location = Location;
	params.Name = Name;
	params.Color = Color;
	params.Target = Target;
	params.TypeOfTarget = TypeOfTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_LaserPointer_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped");

	AWPN_LaserPointer_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::OnPOIDestroyed(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed");

	AWPN_LaserPointer_C_OnPOIDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick");

	AWPN_LaserPointer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LaserPointer_C::ExecuteUbergraph_WPN_LaserPointer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer");

	AWPN_LaserPointer_C_ExecuteUbergraph_WPN_LaserPointer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
