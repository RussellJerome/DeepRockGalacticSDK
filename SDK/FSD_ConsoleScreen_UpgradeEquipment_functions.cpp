// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreen_UpgradeEquipment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreen_UpgradeEquipment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.Construct");

	UConsoleScreen_UpgradeEquipment_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_UpgradeEquipment_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.PreConstruct");

	UConsoleScreen_UpgradeEquipment_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnItemUnlocked_Event
// (BlueprintCallable, BlueprintEvent)

void UConsoleScreen_UpgradeEquipment_C::OnItemUnlocked_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnItemUnlocked_Event");

	UConsoleScreen_UpgradeEquipment_C_OnItemUnlocked_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.UpdateNotification
// (BlueprintCallable, BlueprintEvent)

void UConsoleScreen_UpgradeEquipment_C::UpdateNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.UpdateNotification");

	UConsoleScreen_UpgradeEquipment_C_UpdateNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.ExecuteUbergraph_ConsoleScreen_UpgradeEquipment
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreen_UpgradeEquipment_C::ExecuteUbergraph_ConsoleScreen_UpgradeEquipment(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.ExecuteUbergraph_ConsoleScreen_UpgradeEquipment");

	UConsoleScreen_UpgradeEquipment_C_ExecuteUbergraph_ConsoleScreen_UpgradeEquipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
