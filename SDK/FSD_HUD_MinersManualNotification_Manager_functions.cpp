// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_MinersManualNotification_Manager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_MinersManualNotification_Manager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.Construct");

	UHUD_MinersManualNotification_Manager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.OnMinersManualNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMinersManualSection*          Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid*                  ObjectID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_MinersManualNotification_Manager_C::OnMinersManualNotification(EMinersManualSection* Section, struct FGuid* ObjectID, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.OnMinersManualNotification");

	UHUD_MinersManualNotification_Manager_C_OnMinersManualNotification_Params params;
	params.Section = Section;
	params.ObjectID = ObjectID;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.ExecuteUbergraph_HUD_MinersManualNotification_Manager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_MinersManualNotification_Manager_C::ExecuteUbergraph_HUD_MinersManualNotification_Manager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MinersManualNotification_Manager.HUD_MinersManualNotification_Manager_C.ExecuteUbergraph_HUD_MinersManualNotification_Manager");

	UHUD_MinersManualNotification_Manager_C_ExecuteUbergraph_HUD_MinersManualNotification_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
