// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_ServerEntry_Team_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.SetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_ServerList_Entry_PlayerIcons_C** TeamWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UClass*>          Players                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          IsClassLocked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_ServerEntry_Team_C::SetData(class UITM_ServerList_Entry_PlayerIcons_C** TeamWidget, bool* IsClassLocked, TArray<class UClass*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.SetData");

	UTOOLTIP_ServerEntry_Team_C_SetData_Params params;
	params.TeamWidget = TeamWidget;
	params.IsClassLocked = IsClassLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_ServerEntry_Team_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.PreConstruct");

	UTOOLTIP_ServerEntry_Team_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Team
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_ServerEntry_Team_C::ExecuteUbergraph_TOOLTIP_ServerEntry_Team(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Team.TOOLTIP_ServerEntry_Team_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Team");

	UTOOLTIP_ServerEntry_Team_C_ExecuteUbergraph_TOOLTIP_ServerEntry_Team_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
