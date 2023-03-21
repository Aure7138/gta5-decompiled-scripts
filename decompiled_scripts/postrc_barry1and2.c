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
	unk_0x9C7EE7DE7041A3F4(0, 26, 1);
	if (func_24(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) != 0)
		{
			unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 0, 0);
		}
	}
	if (unk_0x76BF814AB8D4CAB8(83))
	{
		func_21(0);
	}
	unk_0x831CD0FBFB26EC7E(sLocal_44);
	unk_0x8E058779F430F4D7("BARY1", 7);
	while (!unk_0x028356968FDD2DF2(sLocal_44) || !unk_0x9F22E45F3CF7EACA(7))
	{
		unk_0x9C7EE7DE7041A3F4(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x9C7EE7DE7041A3F4(0, 26, 1);
	func_24(unk_0x18F7BE9ACB7D08F4());
	iLocal_46 = unk_0x5AFB8ED811F05E4D() + 13000;
	iLocal_47 = unk_0x61E9B3BFA06B017B(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, Local_52, func_17(1.12f), 0))
	{
		unk_0x9C7EE7DE7041A3F4(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x9C7EE7DE7041A3F4(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x5AFB8ED811F05E4D() + 1000;
	unk_0x9C7EE7DE7041A3F4(0, 26, 1);
	while (true)
	{
		func_24(unk_0x18F7BE9ACB7D08F4());
		if (unk_0x5AFB8ED811F05E4D() < iLocal_48)
		{
			unk_0x9C7EE7DE7041A3F4(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x18F7BE9ACB7D08F4(), Local_52, 1) > 70f)
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
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (unk_0xA3D5B4AC814DFA69(*uParam0))
		{
			unk_0x964B3F361C3DBDF4(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xF0862FA354B164C4(uParam0);
		}
		else
		{
			unk_0xFC528B61F5E1D89B(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(uParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x18F7BE9ACB7D08F4()) && func_10(uLocal_43)) && !func_9()) && unk_0x5AFB8ED811F05E4D() > iLocal_46) && func_8(unk_0x18F7BE9ACB7D08F4(), uLocal_43, 1) < 20f) && !unk_0xEFD3E4A202A0D9DA())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x5AFB8ED811F05E4D() + unk_0x61E9B3BFA06B017B(12000, 18000));
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
	unk_0xD2A9C3F486236CC5(&Global_14622, 0);
	Global_15759 = iParam3;
	StringCopy(&Global_15746, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
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
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(uParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(uParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(uParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(uParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(uParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(uParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x7824A0A217B1F7A8(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0x73D7E57BF0ED7FEB(uLocal_43, 0);
			unk_0x276E12CD8AF23A06(uLocal_43, 1000, 1);
		}
		if (func_10(uLocal_41))
		{
			unk_0x73D7E57BF0ED7FEB(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0x73D7E57BF0ED7FEB(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0x90D1FDC9D31B7BE1(uLocal_43))
		{
			unk_0x337F2213526139E0(uLocal_43, 1, 0);
		}
		unk_0xD8D896F64358DA36(uLocal_43, 1, 0, 0, 0);
		unk_0x40E2910BAF39B1C7(uLocal_43, 1);
		unk_0xD592E5486B0119A2(uLocal_43, 0);
		unk_0x44EB7E24C5D75087(uLocal_43, 0);
		unk_0x97236214E312A8E7(uLocal_43, "POSTBARRY");
		unk_0x641E77554763EF06(uLocal_43, joaat("player"));
		unk_0xF342BF6A7A4C7A8F(uLocal_43, 0, 0);
		unk_0x73D7E57BF0ED7FEB(uLocal_43, 1);
		unk_0x990FFD4FB6ADD630(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(uLocal_43, func_17(1.12f));
		unk_0x73D7E57BF0ED7FEB(uLocal_43, 1);
		unk_0xB5746603774C4C9D(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x6016A20BFEAEFE11(uLocal_43, unk_0x18F7BE9ACB7D08F4(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x9016574B77A748EE(iVar0);
		if (unk_0xEDFE27D1AEA0EA7F(iVar0))
		{
			if (unk_0x31F12808DC47A9E5(*uParam0))
			{
				unk_0x63C116C2153FAA3C(uParam0);
			}
			*uParam0 = unk_0x364B87C5C64BD100(26, iVar0, Param2, uParam5, 0, 0);
			unk_0xFB644935627FBD9A(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x6363507A3F1C0EFE(*uParam0, 3) == 0)
				{
					unk_0xDEA702F2138E0B35(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x419C9117019F2E5A(iVar0);
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
	Global_88808[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
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
	if (unk_0x0DDC3D6589A9421A(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0x7F058F004EA8664C(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0x90D1FDC9D31B7BE1(uLocal_41))
			{
				unk_0x337F2213526139E0(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x990FFD4FB6ADD630(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(uLocal_41, func_17(-2.01f));
			unk_0x73D7E57BF0ED7FEB(uLocal_41, 1);
		}
	}
	if (unk_0x0DDC3D6589A9421A(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0x7F058F004EA8664C(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0x90D1FDC9D31B7BE1(uLocal_40))
			{
				unk_0x337F2213526139E0(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x990FFD4FB6ADD630(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(uLocal_40, func_17(-1.68f));
			unk_0x73D7E57BF0ED7FEB(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), Local_49, func_17(-1.68f));
		unk_0x990FFD4FB6ADD630(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(uLocal_40, func_17(-1.68f));
		unk_0x73D7E57BF0ED7FEB(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x0DDC3D6589A9421A(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0x7F058F004EA8664C(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!unk_0x90D1FDC9D31B7BE1(uLocal_42))
			{
				unk_0x337F2213526139E0(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0x990FFD4FB6ADD630(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x990FFD4FB6ADD630(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0x7082ECB3731CD86C(iParam1, Param2, 1, 1, 0);
	unk_0xB88121FF8A34A66F(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (unk_0xA3D5B4AC814DFA69(*uParam0))
		{
			unk_0x964B3F361C3DBDF4(*uParam0, 1, 1);
		}
		unk_0x5BE35A26B9097351(uParam0);
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
		unk_0x73D7E57BF0ED7FEB(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0x73D7E57BF0ED7FEB(uLocal_40, 0);
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
	unk_0x334F1DD67B2EC86A(sLocal_44);
	unk_0x000ED7BEBF44F5EA(7, 0);
	unk_0x810C5D6462DD69E6();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x0FAE113CE72ED842(*uParam0))
		{
			unk_0x503DF1366BC3493D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x1436BC29BF45FBAE(*uParam0);
			}
			unk_0x10F31830C95ED2E5(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x40E2910BAF39B1C7(*uParam0, 0);
			}
		}
		unk_0xDBE64C5761554FBF(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(*uParam0, 0))
		{
			unk_0x503DF1366BC3493D(*uParam0, 0, 1);
		}
		if (!unk_0x90D1FDC9D31B7BE1(*uParam0))
		{
			unk_0x337F2213526139E0(*uParam0, 1, 0);
		}
		unk_0x63C116C2153FAA3C(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0x31F12808DC47A9E5(uParam0))
	{
		return 0;
	}
	return !unk_0x74C2FE037DFC8B4A(uParam0, 0);
}

