#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	Local_49 = { 189.5964f, -956.0344f, 29.5771f };
	Local_52 = { 190.2424f, -956.379f, 28.63f };
	unk_0xC80D2B3478FFF428(0, 26, 1);
	if (func_24(unk_0x06736567F820A39E()))
	{
		if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) != 0)
		{
			unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
		}
	}
	if (unk_0x9CEB376419A71A96(83))
	{
		func_21(0);
	}
	unk_0x198E497B820DA913(sLocal_44);
	unk_0x18DF389F542183A3("BARY1", 7);
	while (!unk_0x7B43775D6E0D7325(sLocal_44) || !unk_0x7710127C9E7C52D8(7))
	{
		unk_0xC80D2B3478FFF428(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC80D2B3478FFF428(0, 26, 1);
	func_24(unk_0x06736567F820A39E());
	iLocal_46 = unk_0x1ADBAAC322D61F73() + 13000;
	iLocal_47 = unk_0xA6055C735E3DD877(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, Local_52, func_17(1.12f), 0))
	{
		unk_0xC80D2B3478FFF428(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC80D2B3478FFF428(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x1ADBAAC322D61F73() + 1000;
	unk_0xC80D2B3478FFF428(0, 26, 1);
	while (true)
	{
		func_24(unk_0x06736567F820A39E());
		if (unk_0x1ADBAAC322D61F73() < iLocal_48)
		{
			unk_0xC80D2B3478FFF428(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x06736567F820A39E(), Local_52, 1) > 70f)
		{
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_1(&uLocal_42, 0);
			func_21(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (unk_0xCC30869D6AB6D4ED(*uParam0))
		{
			unk_0xD02CD3284DDA0268(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x61EEBF9B5AB9820D(uParam0);
		}
		else
		{
			unk_0xFFC497D1FB0F3253(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xBDA1F5E8A36BFA07(uParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(uParam0, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x06736567F820A39E()) && func_10(uLocal_43)) && !func_9()) && unk_0x1ADBAAC322D61F73() > iLocal_46) && func_8(unk_0x06736567F820A39E(), uLocal_43, 1) < 20f) && !unk_0x80C449C5D85C42A1())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x1ADBAAC322D61F73() + unk_0xA6055C735E3DD877(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xE27C8E42A97895CF(&Global_14578, 0);
	Global_15715 = iParam3;
	StringCopy(&Global_15702, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_47)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_47++;
	if (iLocal_47 > 4)
	{
		iLocal_47 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xCCE0A12014F4F2E9(uParam2, 0);
			}
			else
			{
				unk_0xCCE0A12014F4F2E9(uParam2, 1);
			}
		}
		if (!unk_0xCFC04A38F256EE06(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5E0FA44E176DE736(uParam2, 0);
			}
			else
			{
				unk_0x5E0FA44E176DE736(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xBDA1F5E8A36BFA07(uParam0, 0))
	{
		Var0 = { unk_0xF4745590D18D14B8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(uParam0, 0) };
	}
	if (!unk_0xBDA1F5E8A36BFA07(uParam1, 0))
	{
		Var3 = { unk_0xF4745590D18D14B8(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF4745590D18D14B8(uParam1, 0) };
	}
	return unk_0xA1F52EC3ECE1D42E(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x3A55B6AA596FF586(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0x93F4FB97D1F2E7A1(uLocal_43, 0);
			unk_0xCB298EE227ED902F(uLocal_43, 1000, 1);
		}
		if (func_10(uLocal_41))
		{
			unk_0x93F4FB97D1F2E7A1(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0x93F4FB97D1F2E7A1(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0xC9A01F9792B3D486(uLocal_43))
		{
			unk_0xB7E6C6AE18F1EDA6(uLocal_43, 1, 0);
		}
		unk_0x08660D6522AC2288(uLocal_43, 1, 0, 0, 0);
		unk_0xBA63517ADBC1E5E3(uLocal_43, 1);
		unk_0x194510CFB3606077(uLocal_43, 0);
		unk_0xA26A1133034ECD59(uLocal_43, 0);
		unk_0xE7065A6CD6FEB3A6(uLocal_43, "POSTBARRY");
		unk_0xDEA5F99894469373(uLocal_43, joaat("player"));
		unk_0xE110948ECF59689C(uLocal_43, 0, 0);
		unk_0x93F4FB97D1F2E7A1(uLocal_43, 1);
		unk_0xA9AD2484206C8140(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0xEF32567B3A5047F5(uLocal_43, func_17(1.12f));
		unk_0x93F4FB97D1F2E7A1(uLocal_43, 1);
		unk_0x28B5966B12DC5B0F(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x3195125C126B79C6(uLocal_43, unk_0x06736567F820A39E(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0xBECC89ACB4E5D4ED(iVar0);
		if (unk_0x5C9FE32E2FF37989(iVar0))
		{
			if (unk_0xC1EDB61CE0A4B94E(*uParam0))
			{
				unk_0xDAF1451794AD09A3(uParam0);
			}
			*uParam0 = unk_0xB500796AAD639F82(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x6DF76F53F418FB2D(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xBD5A2DDC459E90C6(*uParam0, 3) == 0)
				{
					unk_0x47222A663B914109(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x0B87AFC0B2EECA19(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_87477[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

float func_17(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_18()
{
	if (unk_0x9DD14F307389ACD8(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0x8CF711709719C86E(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0xC9A01F9792B3D486(uLocal_41))
			{
				unk_0xB7E6C6AE18F1EDA6(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xA9AD2484206C8140(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0xEF32567B3A5047F5(uLocal_41, func_17(-2.01f));
			unk_0x93F4FB97D1F2E7A1(uLocal_41, 1);
		}
	}
	if (unk_0x9DD14F307389ACD8(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0x8CF711709719C86E(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0xC9A01F9792B3D486(uLocal_40))
			{
				unk_0xB7E6C6AE18F1EDA6(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xA9AD2484206C8140(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0xEF32567B3A5047F5(uLocal_40, func_17(-1.68f));
			unk_0x93F4FB97D1F2E7A1(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), Local_49, func_17(-1.68f));
		unk_0xA9AD2484206C8140(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0xEF32567B3A5047F5(uLocal_40, func_17(-1.68f));
		unk_0x93F4FB97D1F2E7A1(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x9DD14F307389ACD8(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0x8CF711709719C86E(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!unk_0xC9A01F9792B3D486(uLocal_42))
			{
				unk_0xB7E6C6AE18F1EDA6(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0xA9AD2484206C8140(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0xEF32567B3A5047F5(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0xA9AD2484206C8140(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0xEF32567B3A5047F5(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0xE6B4261E1DAB4EE0(iParam1, Param2, 1, 1, 0);
	unk_0xEF32567B3A5047F5(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (unk_0xCC30869D6AB6D4ED(*uParam0))
		{
			unk_0xD02CD3284DDA0268(*uParam0, 1, 1);
		}
		unk_0xF30CBC00D9F6D48D(uParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&uLocal_43);
	}
	else
	{
		func_22(&uLocal_43, 1, 0, 1);
	}
	if (func_10(uLocal_41))
	{
		unk_0x93F4FB97D1F2E7A1(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0x93F4FB97D1F2E7A1(uLocal_40, 0);
	}
	if (bParam0)
	{
		func_20(&uLocal_40);
		func_20(&uLocal_41);
		func_20(&uLocal_42);
	}
	else
	{
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
		func_1(&uLocal_42, 0);
	}
	unk_0x6B09668CBB188BED(sLocal_44);
	unk_0x035F40534E3C26BD(7, 0);
	unk_0xF5DF8F3392CDD07B();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (!unk_0xCFC04A38F256EE06(*uParam0))
		{
			unk_0x215FFA3EE011BA3C(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xFB31564A849CEAF4(*uParam0);
			}
			unk_0x97C5D2BB8E47131D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xBA63517ADBC1E5E3(*uParam0, 0);
			}
		}
		unk_0x5318F6C4C2B82FA7(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(*uParam0, 0))
		{
			unk_0x215FFA3EE011BA3C(*uParam0, 0);
		}
		if (!unk_0xC9A01F9792B3D486(*uParam0))
		{
			unk_0xB7E6C6AE18F1EDA6(*uParam0, 1, 0);
		}
		unk_0xDAF1451794AD09A3(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		return 0;
	}
	return !unk_0xBDA1F5E8A36BFA07(uParam0, 0);
}

