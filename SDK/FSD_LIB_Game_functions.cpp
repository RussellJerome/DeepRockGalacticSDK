// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Game_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_Game.LIB_Game_C.IsFlaggedVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget**                InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFlaggedVisible               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_IsFlaggedVisible(class UWidget** InWidget, class UObject** __WorldContext, bool* IsFlaggedVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.IsFlaggedVisible");

	ULIB_Game_C_IsFlaggedVisible_Params params;
	params.InWidget = InWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFlaggedVisible != nullptr)
		*IsFlaggedVisible = params.IsFlaggedVisible;
}


// Function LIB_Game.LIB_Game_C.SetSoftTextureAndTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TSoftObjectPtr<class UTexture2D>* Texture                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          bMatchSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_SetSoftTextureAndTint(class UImage** Target, TSoftObjectPtr<class UTexture2D>* Texture, bool* bMatchSize, struct FLinearColor* Tint, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.SetSoftTextureAndTint");

	ULIB_Game_C_SetSoftTextureAndTint_Params params;
	params.Target = Target;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;
	params.Tint = Tint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_Game.LIB_Game_C.SetTextureAndTint
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMatchSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_SetTextureAndTint(class UImage** Target, class UTexture2D** Texture, bool* bMatchSize, struct FLinearColor* Tint, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.SetTextureAndTint");

	ULIB_Game_C_SetTextureAndTint_Params params;
	params.Target = Target;
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;
	params.Tint = Tint;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_Game.LIB_Game_C.UpdateBool
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Variable                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValueChanged                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_UpdateBool(bool* InValue, class UObject** __WorldContext, bool* Variable, bool* ValueChanged, bool* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.UpdateBool");

	ULIB_Game_C_UpdateBool_Params params;
	params.InValue = InValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Variable != nullptr)
		*Variable = params.Variable;
	if (ValueChanged != nullptr)
		*ValueChanged = params.ValueChanged;
	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function LIB_Game.LIB_Game_C.SetVisibilityIf
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility*              Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_SetVisibilityIf(class UWidget** Widget, ESlateVisibility* Visibility, bool* Condition, class UObject** __WorldContext, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.SetVisibilityIf");

	ULIB_Game_C_SetVisibilityIf_Params params;
	params.Widget = Widget;
	params.Visibility = Visibility;
	params.Condition = Condition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
}


// Function LIB_Game.LIB_Game_C.LoadMission
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoftObjectPath*        NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_LoadMission(struct FSoftObjectPath* NewParam, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.LoadMission");

	ULIB_Game_C_LoadMission_Params params;
	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LIB_Game.LIB_Game_C.SelectVisibility
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility*              FALSE                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility*              TRUE                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVisible                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           VisibilityChanged              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               New_Visibility                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_SelectVisibility(class UWidget** Widget, ESlateVisibility* FALSE, ESlateVisibility* TRUE, bool* Index, class UObject** __WorldContext, bool* IsVisible, bool* VisibilityChanged, ESlateVisibility* New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.SelectVisibility");

	ULIB_Game_C_SelectVisibility_Params params;
	params.Widget = Widget;
	params.FALSE = FALSE;
	params.TRUE = TRUE;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
	if (VisibilityChanged != nullptr)
		*VisibilityChanged = params.VisibilityChanged;
	if (New_Visibility != nullptr)
		*New_Visibility = params.New_Visibility;
}


// Function LIB_Game.LIB_Game_C.IsOnSpaceRig
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnSpaceRig                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_IsOnSpaceRig(class UObject** __WorldContext, bool* OnSpaceRig)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.IsOnSpaceRig");

	ULIB_Game_C_IsOnSpaceRig_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OnSpaceRig != nullptr)
		*OnSpaceRig = params.OnSpaceRig;
}


// Function LIB_Game.LIB_Game_C.GetPLSBase
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APLS_Base_C*             AsPLS_Base                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_GetPLSBase(class UObject** __WorldContext, class APLS_Base_C** AsPLS_Base)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetPLSBase");

	ULIB_Game_C_GetPLSBase_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPLS_Base != nullptr)
		*AsPLS_Base = params.AsPLS_Base;
}


// Function LIB_Game.LIB_Game_C.IsKickReason
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EDisconnectReason*             DisconnectReason               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Kicked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_IsKickReason(EDisconnectReason* DisconnectReason, class UObject** __WorldContext, bool* Kicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.IsKickReason");

	ULIB_Game_C_IsKickReason_Params params;
	params.DisconnectReason = DisconnectReason;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Kicked != nullptr)
		*Kicked = params.Kicked;
}


// Function LIB_Game.LIB_Game_C.GetBPGameState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_GameState_C*         AsBP_Game_State                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_GetBPGameState(class UObject** __WorldContext, class ABP_GameState_C** AsBP_Game_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetBPGameState");

	ULIB_Game_C_GetBPGameState_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Game_State != nullptr)
		*AsBP_Game_State = params.AsBP_Game_State;
}


// Function LIB_Game.LIB_Game_C.GetBPGameInstance
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBP_GameInstance_C*      AsBP_Game_Instance             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_C::STATIC_GetBPGameInstance(class UObject** __WorldContext, class UBP_GameInstance_C** AsBP_Game_Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetBPGameInstance");

	ULIB_Game_C_GetBPGameInstance_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Game_Instance != nullptr)
		*AsBP_Game_Instance = params.AsBP_Game_Instance;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
