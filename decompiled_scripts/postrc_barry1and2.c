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
	unk_0x572062A62138FBA2(0, 26, 1);
	if (func_25(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) != 0)
		{
			unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
		}
	}
	if (unk_0xD4BE58A7E3E102AC(83))
	{
		func_22(0);
	}
	unk_0x36B659209EBDD366(sLocal_44);
	unk_0x9F815D4FA0C47F97("BARY1", 7);
	while (!unk_0xB25A0D192C6A0A5B(sLocal_44) || !unk_0xA3D567B14856EDE1(7))
	{
		unk_0x572062A62138FBA2(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x572062A62138FBA2(0, 26, 1);
	func_25(unk_0x0FA8183DAD2B3203());
	iLocal_46 = unk_0x9B35D07DCD0F0B43() + 13000;
	iLocal_47 = unk_0xBAC643F143880136(0, 5);
	func_19();
	while (!func_13(&uLocal_43, 49, Local_52, func_18(1.12f), 0))
	{
		unk_0x572062A62138FBA2(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x572062A62138FBA2(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x9B35D07DCD0F0B43() + 1000;
	unk_0x572062A62138FBA2(0, 26, 1);
	while (true)
	{
		func_25(unk_0x0FA8183DAD2B3203());
		if (unk_0x9B35D07DCD0F0B43() < iLocal_48)
		{
			unk_0x572062A62138FBA2(0, 26, 1);
		}
		func_11();
		if (!func_25(uLocal_43))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x0FA8183DAD2B3203(), Local_52, 1) > 70f)
		{
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_1(&uLocal_42, 0);
			func_22(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (unk_0x0671DB6A34EE14AA(*uParam0))
		{
			unk_0x363E2170E626A00A(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x86A9549BD3D71664(uParam0);
		}
		else
		{
			unk_0x7F871504FE14865C(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xF4B969E0807E76C7(uParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(uParam0, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x0FA8183DAD2B3203()) && func_10(uLocal_43)) && !func_9()) && unk_0x9B35D07DCD0F0B43() > iLocal_46) && func_8(unk_0x0FA8183DAD2B3203(), uLocal_43, 1) < 20f) && !unk_0xFF392459DD4CD797())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x9B35D07DCD0F0B43() + unk_0xBAC643F143880136(12000, 18000));
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
	unk_0xA1E7A40E1F56E511(&Global_19671, 0);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
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
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(uParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(uParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(uParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xF4B969E0807E76C7(uParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(uParam0, 0) };
	}
	if (!unk_0xF4B969E0807E76C7(uParam1, 0))
	{
		Var3 = { unk_0xACE5E491FC1B0D37(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xACE5E491FC1B0D37(uParam1, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (!unk_0xF4B969E0807E76C7(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x54D242CA888C9BF1(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0x860A5CC30A0EF207(uLocal_43, 0);
			unk_0x9F5633F9BEC832B0(uLocal_43, 1000, 1, 0);
		}
		if (func_10(uLocal_41))
		{
			unk_0x860A5CC30A0EF207(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0x860A5CC30A0EF207(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0x00123AB82C5FAC28(uLocal_43))
		{
			unk_0xE5C667CF3B4642D2(uLocal_43, 1, 0);
		}
		unk_0x3B004D77F93A4D58(uLocal_43, 1, 0, 0, 0);
		unk_0xCC94EE23853F38E4(uLocal_43, 1);
		unk_0x6E84F47D0D3E5BC9(uLocal_43, 0);
		unk_0x6E712A176E3EEFA8(uLocal_43, 0);
		unk_0x6705087D187F1047(uLocal_43, "POSTBARRY");
		unk_0xDB889DCC8B0139E6(uLocal_43, joaat("player"));
		unk_0x8C85E8C71AD74415(uLocal_43, 0, 0);
		unk_0x860A5CC30A0EF207(uLocal_43, 1);
		unk_0xCB3446C6A91D1A78(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0x5A2B7C446C0CF087(uLocal_43, func_18(1.12f));
		unk_0x860A5CC30A0EF207(uLocal_43, 1);
		unk_0x5D672CB011E20B28(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x6E2920E14F5F962C(uLocal_43, unk_0x0FA8183DAD2B3203(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x6BB2B1818CAE531E(iVar0);
		if (unk_0x6DF9C43E3CC645BC(iVar0))
		{
			if (unk_0xD4B321D9096B01FC(*uParam0))
			{
				unk_0x4F058F27442031CC(uParam0);
			}
			*uParam0 = unk_0xB983F26E7AFB47BF(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x987CAFE10CF766ED(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xF7BAF104A598DD7E(*uParam0, 3) == 0)
				{
					unk_0x0453EBC0FB8D8A80(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xE0AC40EF164A2569(iVar0);
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
	Global_94533[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

float func_18(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_19()
{
	if (unk_0x6DBAE8253C1BC686(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0x91D67DB02D1040F1(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_25(uLocal_41))
		{
			if (!unk_0x00123AB82C5FAC28(uLocal_41))
			{
				unk_0xE5C667CF3B4642D2(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xCB3446C6A91D1A78(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0x5A2B7C446C0CF087(uLocal_41, func_18(-2.01f));
			unk_0x860A5CC30A0EF207(uLocal_41, 1);
		}
	}
	if (unk_0x6DBAE8253C1BC686(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0x91D67DB02D1040F1(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_25(uLocal_40))
		{
			if (!unk_0x00123AB82C5FAC28(uLocal_40))
			{
				unk_0xE5C667CF3B4642D2(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xCB3446C6A91D1A78(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0x5A2B7C446C0CF087(uLocal_40, func_18(-1.68f));
			unk_0x860A5CC30A0EF207(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_20(&uLocal_40, joaat("prop_chair_08"), Local_49, func_18(-1.68f));
		unk_0xCB3446C6A91D1A78(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0x5A2B7C446C0CF087(uLocal_40, func_18(-1.68f));
		unk_0x860A5CC30A0EF207(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x6DBAE8253C1BC686(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0x91D67DB02D1040F1(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_25(uLocal_42))
		{
			if (!unk_0x00123AB82C5FAC28(uLocal_42))
			{
				unk_0xE5C667CF3B4642D2(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0xCB3446C6A91D1A78(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0x5A2B7C446C0CF087(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_20(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0xCB3446C6A91D1A78(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0x5A2B7C446C0CF087(uLocal_42, 23.45f);
	}
}

void func_20(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_21(uParam0);
	*uParam0 = unk_0x7187764DB5121FC9(iParam1, Param2, 1, 1, 0);
	unk_0x5A2B7C446C0CF087(*uParam0, fParam5);
}

void func_21(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (unk_0x0671DB6A34EE14AA(*uParam0))
		{
			unk_0x363E2170E626A00A(*uParam0, 1, 1);
		}
		unk_0x377C9F2989832369(uParam0);
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		func_24(&uLocal_43);
	}
	else
	{
		func_23(&uLocal_43, 1, 0, 1);
	}
	if (func_10(uLocal_41))
	{
		unk_0x860A5CC30A0EF207(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0x860A5CC30A0EF207(uLocal_40, 0);
	}
	if (bParam0)
	{
		func_21(&uLocal_40);
		func_21(&uLocal_41);
		func_21(&uLocal_42);
	}
	else
	{
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
		func_1(&uLocal_42, 0);
	}
	unk_0x7D74D6A091150B86(sLocal_44);
	unk_0xA95AA80044081B2A(7, 0);
	unk_0x9C9E32388A7886A2();
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0x2BF5E63466422C38(*uParam0))
		{
			unk_0xDA778D908FD69EEE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xB46600A5F9F79CE8(*uParam0);
			}
			unk_0x7D81B41B134BD6F2(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xCC94EE23853F38E4(*uParam0, 0);
			}
		}
		unk_0x0FFB05DA97E810B5(uParam0);
	}
}

void func_24(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0xF4B969E0807E76C7(*uParam0, 0))
		{
			unk_0xDA778D908FD69EEE(*uParam0, 0, 1);
		}
		if (!unk_0x00123AB82C5FAC28(*uParam0))
		{
			unk_0xE5C667CF3B4642D2(*uParam0, 1, 0);
		}
		unk_0x4F058F27442031CC(uParam0);
	}
}

bool func_25(var uParam0)
{
	if (!unk_0xD4B321D9096B01FC(uParam0))
	{
		return 0;
	}
	return !unk_0xF4B969E0807E76C7(uParam0, 0);
}

