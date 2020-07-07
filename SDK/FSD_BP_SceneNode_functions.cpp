// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SceneNode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SceneNode.BP_SceneNode_C.GetRoot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SceneRoot_C*         TheRoot                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SceneNode_C::GetRoot(class ABP_SceneRoot_C** TheRoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneNode.BP_SceneNode_C.GetRoot");

	ABP_SceneNode_C_GetRoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheRoot != nullptr)
		*TheRoot = params.TheRoot;
}


// Function BP_SceneNode.BP_SceneNode_C.OnSetNodeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewVisibility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SceneNode_C::OnSetNodeVisibility(bool* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneNode.BP_SceneNode_C.OnSetNodeVisibility");

	ABP_SceneNode_C_OnSetNodeVisibility_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SceneNode.BP_SceneNode_C.SetActorVisibilityRecursive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Node                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NewVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SceneNode_C::SetActorVisibilityRecursive(class AActor** Node, bool* NewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneNode.BP_SceneNode_C.SetActorVisibilityRecursive");

	ABP_SceneNode_C_SetActorVisibilityRecursive_Params params;
	params.Node = Node;
	params.NewVisible = NewVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SceneNode.BP_SceneNode_C.SetNodeVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SceneNode_C::SetNodeVisibility(bool* NewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SceneNode.BP_SceneNode_C.SetNodeVisibility");

	ABP_SceneNode_C_SetNodeVisibility_Params params;
	params.NewVisible = NewVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
