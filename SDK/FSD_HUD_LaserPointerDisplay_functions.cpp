// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_LaserPointerDisplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.UpdateCommands
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUD_LaserPointerDisplay_C::UpdateCommands()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.UpdateCommands");

	UHUD_LaserPointerDisplay_C_UpdateCommands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_LaserPointerDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Construct");

	UHUD_LaserPointerDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnEquipped
// (BlueprintCallable, BlueprintEvent)

void UHUD_LaserPointerDisplay_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnEquipped");

	UHUD_LaserPointerDisplay_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Update Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerDisplay_C::Update_Display(struct FHitResult* Hit, float* distance, struct FText* Name, struct FText* Description, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Update Display");

	UHUD_LaserPointerDisplay_C_Update_Display_Params params;
	params.Hit = Hit;
	params.distance = distance;
	params.Name = Name;
	params.Description = Description;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Point Of Interest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerDisplay_C::Point_Of_Interest(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Point Of Interest");

	UHUD_LaserPointerDisplay_C_Point_Of_Interest_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerDisplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.PreConstruct");

	UHUD_LaserPointerDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnBoscoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABosco**                 Bosco                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerDisplay_C::OnBoscoChanged(class ABosco** Bosco)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnBoscoChanged");

	UHUD_LaserPointerDisplay_C_OnBoscoChanged_Params params;
	params.Bosco = Bosco;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartScan
// (BlueprintCallable, BlueprintEvent)

void UHUD_LaserPointerDisplay_C::StartScan()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StartScan");

	UHUD_LaserPointerDisplay_C_StartScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StopScan
// (BlueprintCallable, BlueprintEvent)

void UHUD_LaserPointerDisplay_C::StopScan()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.StopScan");

	UHUD_LaserPointerDisplay_C_StopScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnUnequipped
// (BlueprintCallable, BlueprintEvent)

void UHUD_LaserPointerDisplay_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnUnequipped");

	UHUD_LaserPointerDisplay_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ExecuteUbergraph_HUD_LaserPointerDisplay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerDisplay_C::ExecuteUbergraph_HUD_LaserPointerDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ExecuteUbergraph_HUD_LaserPointerDisplay");

	UHUD_LaserPointerDisplay_C_ExecuteUbergraph_HUD_LaserPointerDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ScanComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHUD_LaserPointerDisplay_C::ScanComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ScanComplete__DelegateSignature");

	UHUD_LaserPointerDisplay_C_ScanComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
