// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_MinersManual_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_MinersManual._MENU_MinersManual_C.IsCreatureUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEnemyMinersManualData** enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUnlocked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::IsCreatureUnlocked(class UEnemyMinersManualData** enemy, bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.IsCreatureUnlocked");

	U_MENU_MinersManual_C_IsCreatureUnlocked_Params params;
	params.enemy = enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUnlocked != nullptr)
		*IsUnlocked = params.IsUnlocked;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_MENU_MinersManual_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyDown");

	U_MENU_MinersManual_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OpenPageInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMinersManualSection*          Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TSoftObjectPtr<class UClass>*  Page                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void U_MENU_MinersManual_C::OpenPageInternal(EMinersManualSection* Section, TSoftObjectPtr<class UClass>* Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OpenPageInternal");

	U_MENU_MinersManual_C_OpenPageInternal_Params params;
	params.Section = Section;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.GetButtonInfoFromSoftPage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UClass>*  Page                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMM_ButtonInfo          OutButton                      (Parm, OutParm)

void U_MENU_MinersManual_C::GetButtonInfoFromSoftPage(TSoftObjectPtr<class UClass>* Page, struct FMM_ButtonInfo* OutButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.GetButtonInfoFromSoftPage");

	U_MENU_MinersManual_C_GetButtonInfoFromSoftPage_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutButton != nullptr)
		*OutButton = params.OutButton;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_MENU_MinersManual_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnMouseButtonUp");

	U_MENU_MinersManual_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_MENU_MinersManual_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnKeyUp");

	U_MENU_MinersManual_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectOverview
// (Public, BlueprintCallable, BlueprintEvent)

void U_MENU_MinersManual_C::SelectOverview()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectOverview");

	U_MENU_MinersManual_C_SelectOverview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.LoadSinglePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UClass>*  PageRef                        (BlueprintVisible, BlueprintReadOnly, Parm)

void U_MENU_MinersManual_C::LoadSinglePage(TSoftObjectPtr<class UClass>* PageRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.LoadSinglePage");

	U_MENU_MinersManual_C_LoadSinglePage_Params params;
	params.PageRef = PageRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectResourcesPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::SelectResourcesPage(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectResourcesPage");

	U_MENU_MinersManual_C_SelectResourcesPage_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectBiome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::SelectBiome(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectBiome");

	U_MENU_MinersManual_C_SelectBiome_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectCreature
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::SelectCreature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectCreature");

	U_MENU_MinersManual_C_SelectCreature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectCombat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::SelectCombat(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectCombat");

	U_MENU_MinersManual_C_SelectCombat_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectBasics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::SelectBasics(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectBasics");

	U_MENU_MinersManual_C_SelectBasics_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectMissionType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::SelectMissionType(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectMissionType");

	U_MENU_MinersManual_C_SelectMissionType_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B51F0A3566
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_2761E01142014CAB4B0485B51F0A3566(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B51F0A3566");

	U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B51F0A3566_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8");

	U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BD4C4E45E8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDAF081D51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_E250F66347FD856DD4BCA4BDAF081D51(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDAF081D51");

	U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BDAF081D51_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B52E4010C5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_2761E01142014CAB4B0485B52E4010C5(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B52E4010C5");

	U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B52E4010C5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD7D04604B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_E250F66347FD856DD4BCA4BD7D04604B(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BD7D04604B");

	U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BD7D04604B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF");

	U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B5FC4C6DDF_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C56F864BC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9C56F864BC(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C56F864BC");

	U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C56F864BC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF15F73D6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9CF15F73D6(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF15F73D6");

	U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CF15F73D6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6");

	U_MENU_MinersManual_C_OnLoaded_E250F66347FD856DD4BCA4BDC879A4A6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B59B3DD428
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_2761E01142014CAB4B0485B59B3DD428(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_2761E01142014CAB4B0485B59B3DD428");

	U_MENU_MinersManual_C_OnLoaded_2761E01142014CAB4B0485B59B3DD428_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CDF02186B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9CDF02186B(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CDF02186B");

	U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CDF02186B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF666E15C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9CF666E15C(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9CF666E15C");

	U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9CF666E15C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C821EC396
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9C821EC396(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C821EC396");

	U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C821EC396_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C0BF30CCE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OnLoaded_268D15ED4E2079C066017E9C0BF30CCE(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OnLoaded_268D15ED4E2079C066017E9C0BF30CCE");

	U_MENU_MinersManual_C_OnLoaded_268D15ED4E2079C066017E9C0BF30CCE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SetLoreScreenContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoreScreen_Master_C**   InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void U_MENU_MinersManual_C::SetLoreScreenContent(class ULoreScreen_Master_C** InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SetLoreScreenContent");

	U_MENU_MinersManual_C_SetLoreScreenContent_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void U_MENU_MinersManual_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.Construct");

	U_MENU_MinersManual_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.PreConstruct");

	U_MENU_MinersManual_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.ButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::ButtonClicked(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.ButtonClicked");

	U_MENU_MinersManual_C_ButtonClicked_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMinersManualSection*          Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          SelectFirst                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::SelectSection(EMinersManualSection* Section, bool* SelectFirst)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectSection");

	U_MENU_MinersManual_C_SelectSection_Params params;
	params.Section = Section;
	params.SelectFirst = SelectFirst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectPageFromObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                IdentifyingObject              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::SelectPageFromObject(class UObject** IdentifyingObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectPageFromObject");

	U_MENU_MinersManual_C_SelectPageFromObject_Params params;
	params.IdentifyingObject = IdentifyingObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.SelectSinglePage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMinersManualSinglePage*       Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::SelectSinglePage(EMinersManualSinglePage* Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.SelectSinglePage");

	U_MENU_MinersManual_C_SelectSinglePage_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.StepBack
// (BlueprintCallable, BlueprintEvent)

void U_MENU_MinersManual_C::StepBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.StepBack");

	U_MENU_MinersManual_C_StepBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.OpenFromSavegameID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMinersManualSection*          Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid*                  ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::OpenFromSavegameID(EMinersManualSection* Section, struct FGuid* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.OpenFromSavegameID");

	U_MENU_MinersManual_C_OpenFromSavegameID_Params params;
	params.Section = Section;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _MENU_MinersManual._MENU_MinersManual_C.ExecuteUbergraph__MENU_MinersManual
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_MENU_MinersManual_C::ExecuteUbergraph__MENU_MinersManual(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_MinersManual._MENU_MinersManual_C.ExecuteUbergraph__MENU_MinersManual");

	U_MENU_MinersManual_C_ExecuteUbergraph__MENU_MinersManual_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
