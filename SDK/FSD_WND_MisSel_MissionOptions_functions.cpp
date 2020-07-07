// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MisSel_MissionOptions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetSelectedDifficulty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDifficultySetting*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDifficultySetting* UWND_MisSel_MissionOptions_C::GetSelectedDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetSelectedDifficulty");

	UWND_MisSel_MissionOptions_C_GetSelectedDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateConfirmButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::UpdateConfirmButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateConfirmButton");

	UWND_MisSel_MissionOptions_C_UpdateConfirmButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMissionLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLocked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Explanation                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWND_MisSel_MissionOptions_C::SetMissionLocked(bool* IsLocked, struct FText* Explanation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMissionLocked");

	UWND_MisSel_MissionOptions_C_SetMissionLocked_Params params;
	params.IsLocked = IsLocked;
	params.Explanation = Explanation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleModeChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode>* Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionOptions_C::HandleModeChange(TEnumAsByte<EMissionSelection_Mode>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleModeChange");

	UWND_MisSel_MissionOptions_C_HandleModeChange_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetPassword
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Password                       (Parm, OutParm)
// bool                           HasPassword                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionOptions_C::GetPassword(struct FText* Password, bool* HasPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetPassword");

	UWND_MisSel_MissionOptions_C_GetPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Password != nullptr)
		*Password = params.Password;
	if (HasPassword != nullptr)
		*HasPassword = params.HasPassword;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.IsFriendsOnly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWND_MisSel_MissionOptions_C::IsFriendsOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.IsFriendsOnly");

	UWND_MisSel_MissionOptions_C_IsFriendsOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateHazardBonus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::UpdateHazardBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateHazardBonus");

	UWND_MisSel_MissionOptions_C_UpdateHazardBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA994BEDE78
// (BlueprintCallable, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnFailure_E07C54DA4555FCCB80821BA994BEDE78()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA994BEDE78");

	UWND_MisSel_MissionOptions_C_OnFailure_E07C54DA4555FCCB80821BA994BEDE78_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA994BEDE78
// (BlueprintCallable, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnSuccess_E07C54DA4555FCCB80821BA994BEDE78()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA994BEDE78");

	UWND_MisSel_MissionOptions_C_OnSuccess_E07C54DA4555FCCB80821BA994BEDE78_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA9DC34619D
// (BlueprintCallable, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnFailure_E07C54DA4555FCCB80821BA9DC34619D()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA9DC34619D");

	UWND_MisSel_MissionOptions_C_OnFailure_E07C54DA4555FCCB80821BA9DC34619D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA9DC34619D
// (BlueprintCallable, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnSuccess_E07C54DA4555FCCB80821BA9DC34619D()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA9DC34619D");

	UWND_MisSel_MissionOptions_C_OnSuccess_E07C54DA4555FCCB80821BA9DC34619D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionOptions_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.PreConstruct");

	UWND_MisSel_MissionOptions_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.Construct");

	UWND_MisSel_MissionOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ShowMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode>* Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionOptions_C::ShowMode(TEnumAsByte<EMissionSelection_Mode>* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ShowMode");

	UWND_MisSel_MissionOptions_C_ShowMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMission
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionOptions_C::SetMission(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMission");

	UWND_MisSel_MissionOptions_C_SetMission_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWND_MisSel_MissionOptions_C::BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature");

	UWND_MisSel_MissionOptions_C_BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// unsigned char*                 CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionOptions_C::BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature(struct FText* Text, unsigned char* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature");

	UWND_MisSel_MissionOptions_C_BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionOptions_C::BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature");

	UWND_MisSel_MissionOptions_C_BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ResetSelectedDifficulty
// (BlueprintCallable, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::ResetSelectedDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ResetSelectedDifficulty");

	UWND_MisSel_MissionOptions_C_ResetSelectedDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWND_MisSel_MissionOptions_C::BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWND_MisSel_MissionOptions_C_BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ExecuteUbergraph_WND_MisSel_MissionOptions
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionOptions_C::ExecuteUbergraph_WND_MisSel_MissionOptions(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ExecuteUbergraph_WND_MisSel_MissionOptions");

	UWND_MisSel_MissionOptions_C_ExecuteUbergraph_WND_MisSel_MissionOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnDifficultyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDifficultySetting**     NewDifficulty                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWND_MisSel_MissionOptions_C::OnDifficultyChanged__DelegateSignature(class UDifficultySetting** NewDifficulty, class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnDifficultyChanged__DelegateSignature");

	UWND_MisSel_MissionOptions_C_OnDifficultyChanged__DelegateSignature_Params params;
	params.NewDifficulty = NewDifficulty;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnJoinMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnJoinMission__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnJoinMission__DelegateSignature");

	UWND_MisSel_MissionOptions_C_OnJoinMission__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartMission__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnStartMission__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartMission__DelegateSignature");

	UWND_MisSel_MissionOptions_C_OnStartMission__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
