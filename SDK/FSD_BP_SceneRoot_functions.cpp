// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SceneRoot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SceneRoot.BP_SceneRoot_C.InitializeMaps
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SceneRoot_C::InitializeMaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneRoot.BP_SceneRoot_C.InitializeMaps");

	ABP_SceneRoot_C_InitializeMaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SceneRoot.BP_SceneRoot_C.GetAllActiveActors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)

void ABP_SceneRoot_C::GetAllActiveActors(TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneRoot.BP_SceneRoot_C.GetAllActiveActors");

	ABP_SceneRoot_C_GetAllActiveActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function BP_SceneRoot.BP_SceneRoot_C.RegisterSceneNode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SceneNode_C**        Node                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NameID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SceneRoot_C::RegisterSceneNode(class ABP_SceneNode_C** Node, struct FName* NameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneRoot.BP_SceneRoot_C.RegisterSceneNode");

	ABP_SceneRoot_C_RegisterSceneNode_Params params;
	params.Node = Node;
	params.NameID = NameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SceneRoot.BP_SceneRoot_C.SetSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SceneRoot_C::SetSwitch(class FString* Name, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneRoot.BP_SceneRoot_C.SetSwitch");

	ABP_SceneRoot_C_SetSwitch_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SceneRoot.BP_SceneRoot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SceneRoot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneRoot.BP_SceneRoot_C.ReceiveBeginPlay");

	ABP_SceneRoot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SceneRoot.BP_SceneRoot_C.ExecuteUbergraph_BP_SceneRoot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SceneRoot_C::ExecuteUbergraph_BP_SceneRoot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneRoot.BP_SceneRoot_C.ExecuteUbergraph_BP_SceneRoot");

	ABP_SceneRoot_C_ExecuteUbergraph_BP_SceneRoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
