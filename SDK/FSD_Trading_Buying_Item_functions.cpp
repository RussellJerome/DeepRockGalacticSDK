// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Trading_Buying_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trading_Buying_Item.Trading_Buying_Item_C.Buy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Purchased                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::Buy(bool* Purchased, int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.Buy");

	UTrading_Buying_Item_C_Buy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Purchased != nullptr)
		*Purchased = params.Purchased;
	if (Price != nullptr)
		*Price = params.Price;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.GetCost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::GetCost(int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.GetCost");

	UTrading_Buying_Item_C_GetCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.GetAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::GetAmount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.GetAmount");

	UTrading_Buying_Item_C_GetAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.SetAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::SetAmount(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.SetAmount");

	UTrading_Buying_Item_C_SetAmount_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTrading_Buying_Item_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.OnMouseButtonUp");

	UTrading_Buying_Item_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.GetResource
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UResourceData*           Resource                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::GetResource(class UResourceData** Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.GetResource");

	UTrading_Buying_Item_C_GetResource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Resource != nullptr)
		*Resource = params.Resource;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::SetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.SetSelected");

	UTrading_Buying_Item_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::SetHovered(bool* IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.SetHovered");

	UTrading_Buying_Item_C_SetHovered_Params params;
	params.IsHovered = IsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.PreConstruct");

	UTrading_Buying_Item_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.SetResource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceData**          NewResource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::SetResource(class UResourceData** NewResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.SetResource");

	UTrading_Buying_Item_C_SetResource_Params params;
	params.NewResource = NewResource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTrading_Buying_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.Construct");

	UTrading_Buying_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTrading_Buying_Item_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.OnMouseEnter");

	UTrading_Buying_Item_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTrading_Buying_Item_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.OnMouseLeave");

	UTrading_Buying_Item_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.BndEvt__Trading_Counter_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::BndEvt__Trading_Counter_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.BndEvt__Trading_Counter_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UTrading_Buying_Item_C_BndEvt__Trading_Counter_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.ExecuteUbergraph_Trading_Buying_Item
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::ExecuteUbergraph_Trading_Buying_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.ExecuteUbergraph_Trading_Buying_Item");

	UTrading_Buying_Item_C_ExecuteUbergraph_Trading_Buying_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.OnAmountChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTrading_Buying_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTrading_Buying_Item_C::OnAmountChanged__DelegateSignature(class UTrading_Buying_Item_C** Item, int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.OnAmountChanged__DelegateSignature");

	UTrading_Buying_Item_C_OnAmountChanged__DelegateSignature_Params params;
	params.Item = Item;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTrading_Buying_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTrading_Buying_Item_C::OnClicked__DelegateSignature(class UTrading_Buying_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.OnClicked__DelegateSignature");

	UTrading_Buying_Item_C_OnClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.OnHoverEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTrading_Buying_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTrading_Buying_Item_C::OnHoverEnd__DelegateSignature(class UTrading_Buying_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.OnHoverEnd__DelegateSignature");

	UTrading_Buying_Item_C_OnHoverEnd__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trading_Buying_Item.Trading_Buying_Item_C.OnHoverBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTrading_Buying_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTrading_Buying_Item_C::OnHoverBegin__DelegateSignature(class UTrading_Buying_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trading_Buying_Item.Trading_Buying_Item_C.OnHoverBegin__DelegateSignature");

	UTrading_Buying_Item_C_OnHoverBegin__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
