// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_ServerList_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateLocked
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerList_C::UpdateLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateLocked");

	UITM_DeepDives_ServerList_C_UpdateLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.JoinServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* InSession                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_ServerList_C::JoinServer(struct FBlueprintSessionResult* InSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.JoinServer");

	UITM_DeepDives_ServerList_C_JoinServer_Params params;
	params.InSession = InSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.FinishUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerList_C::FinishUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.FinishUpdate");

	UITM_DeepDives_ServerList_C_FinishUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_ServerList_C::UpdateServer(struct FBlueprintSessionResult* ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.UpdateServer");

	UITM_DeepDives_ServerList_C_UpdateServer_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.BeginUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_DeepDives_ServerList_C::BeginUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.BeginUpdate");

	UITM_DeepDives_ServerList_C_BeginUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerList_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.PreConstruct");

	UITM_DeepDives_ServerList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_DeepDives_ServerList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.Construct");

	UITM_DeepDives_ServerList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.ExecuteUbergraph_ITM_DeepDives_ServerList
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_DeepDives_ServerList_C::ExecuteUbergraph_ITM_DeepDives_ServerList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.ExecuteUbergraph_ITM_DeepDives_ServerList");

	UITM_DeepDives_ServerList_C_ExecuteUbergraph_ITM_DeepDives_ServerList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnJoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Session                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_DeepDives_ServerList_C::OnJoinServer__DelegateSignature(struct FBlueprintSessionResult* Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DeepDives_ServerList.ITM_DeepDives_ServerList_C.OnJoinServer__DelegateSignature");

	UITM_DeepDives_ServerList_C_OnJoinServer__DelegateSignature_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
