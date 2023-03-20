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
	unk_0xABC36CFE4F3421A0(0, 26, 1);
	if (func_24(unk_0xA0081090911D13E5()))
	{
		if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) != 0)
		{
			unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
		}
	}
	if (unk_0x2EC83C7ACA23E8A4(83))
	{
		func_21(0);
	}
	unk_0xA9DC3948106CC3E4(sLocal_44);
	unk_0x7BCE93123FE81E45("BARY1", 7);
	while (!unk_0xAD21C77209FD2024(sLocal_44) || !unk_0x985A6C5313B2276C(7))
	{
		unk_0xABC36CFE4F3421A0(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xABC36CFE4F3421A0(0, 26, 1);
	func_24(unk_0xA0081090911D13E5());
	iLocal_46 = unk_0xDF658EB6CA91DFBC() + 13000;
	iLocal_47 = unk_0xB5BF1B58C833F7A9(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, Local_52, func_17(1.12f), 0))
	{
		unk_0xABC36CFE4F3421A0(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xABC36CFE4F3421A0(0, 26, 1);
	func_12();
	iLocal_48 = unk_0xDF658EB6CA91DFBC() + 1000;
	unk_0xABC36CFE4F3421A0(0, 26, 1);
	while (true)
	{
		func_24(unk_0xA0081090911D13E5());
		if (unk_0xDF658EB6CA91DFBC() < iLocal_48)
		{
			unk_0xABC36CFE4F3421A0(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xA0081090911D13E5(), Local_52, 1) > 70f)
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
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (unk_0xA3FB2BC2E4EB48E2(*uParam0))
		{
			unk_0xFE84F1ABBFFC8840(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xDABCA6C17F8B4208(uParam0);
		}
		else
		{
			unk_0xCF806DD681E98C75(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x912AD5A10E7633F0(uParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(uParam0, 0) };
	}
	return unk_0x999A157665D69393(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0xA0081090911D13E5()) && func_10(uLocal_43)) && !func_9()) && unk_0xDF658EB6CA91DFBC() > iLocal_46) && func_8(unk_0xA0081090911D13E5(), uLocal_43, 1) < 20f) && !unk_0x914490E7407A12A1())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0xDF658EB6CA91DFBC() + unk_0xB5BF1B58C833F7A9(12000, 18000));
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
	unk_0x88B0F0DC270164B7(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
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
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(uParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(uParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(uParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x912AD5A10E7633F0(uParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(uParam0, 0) };
	}
	if (!unk_0x912AD5A10E7633F0(uParam1, 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(uParam1, 0) };
	}
	return unk_0x999A157665D69393(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0xA0BE515094F295FB(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0xBB21B5C3111E5F85(uLocal_43, 0);
			unk_0x455B583787D591F7(uLocal_43, 1000, 1);
		}
		if (func_10(uLocal_41))
		{
			unk_0xBB21B5C3111E5F85(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0xBB21B5C3111E5F85(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0x18C670321BC98FDA(uLocal_43))
		{
			unk_0x7B17650F15A8876D(uLocal_43, 1, 0);
		}
		unk_0xA4C961D96B05ABB2(uLocal_43, 1, 0, 0, 0);
		unk_0xFF5CE2ECB4FBD4A8(uLocal_43, 1);
		unk_0xFB4B028F94A31239(uLocal_43, 0);
		unk_0xB43604F27F1EAE5F(uLocal_43, 0);
		unk_0xDB721F9F36A8FE26(uLocal_43, "POSTBARRY");
		unk_0x65889F26F311FC55(uLocal_43, joaat("player"));
		unk_0x591413670A1EF437(uLocal_43, 0, 0);
		unk_0xBB21B5C3111E5F85(uLocal_43, 1);
		unk_0x27327EB62D93CDBA(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0x10BB9EA2ADBCF0F3(uLocal_43, func_17(1.12f));
		unk_0xBB21B5C3111E5F85(uLocal_43, 1);
		unk_0xC9567EA69F3CC4C2(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xD5DC2873808A9CB5(uLocal_43, unk_0xA0081090911D13E5(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x491067A8E906F22D(iVar0);
		if (unk_0x2C1B5A0D3E233FC3(iVar0))
		{
			if (unk_0xD3FACCDA4D66AEAD(*uParam0))
			{
				unk_0x4E82D83B086B5C93(uParam0);
			}
			*uParam0 = unk_0xF8418B3B87CFCCBF(26, iVar0, Param2, uParam5, 0, 0);
			unk_0xF3BDAFB717C7FBD5(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x0604A0F4F09283DF(*uParam0, 3) == 0)
				{
					unk_0xA27FDFE5C0EBB875(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x2C07692AA3545079(iVar0);
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
	Global_87573[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
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
	if (unk_0xE99F157D6ECE25DA(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0xD016B4FD90D52ED7(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0x18C670321BC98FDA(uLocal_41))
			{
				unk_0x7B17650F15A8876D(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0x27327EB62D93CDBA(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0x10BB9EA2ADBCF0F3(uLocal_41, func_17(-2.01f));
			unk_0xBB21B5C3111E5F85(uLocal_41, 1);
		}
	}
	if (unk_0xE99F157D6ECE25DA(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0xD016B4FD90D52ED7(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0x18C670321BC98FDA(uLocal_40))
			{
				unk_0x7B17650F15A8876D(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0x27327EB62D93CDBA(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0x10BB9EA2ADBCF0F3(uLocal_40, func_17(-1.68f));
			unk_0xBB21B5C3111E5F85(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), Local_49, func_17(-1.68f));
		unk_0x27327EB62D93CDBA(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0x10BB9EA2ADBCF0F3(uLocal_40, func_17(-1.68f));
		unk_0xBB21B5C3111E5F85(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0xE99F157D6ECE25DA(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0xD016B4FD90D52ED7(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!unk_0x18C670321BC98FDA(uLocal_42))
			{
				unk_0x7B17650F15A8876D(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0x27327EB62D93CDBA(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0x10BB9EA2ADBCF0F3(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0x27327EB62D93CDBA(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0x10BB9EA2ADBCF0F3(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0xE1C25770C2FB7AE3(iParam1, Param2, 1, 1, 0);
	unk_0x10BB9EA2ADBCF0F3(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (unk_0xA3FB2BC2E4EB48E2(*uParam0))
		{
			unk_0xFE84F1ABBFFC8840(*uParam0, 1, 1);
		}
		unk_0xE9755D24C3BFFBED(uParam0);
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
		unk_0xBB21B5C3111E5F85(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0xBB21B5C3111E5F85(uLocal_40, 0);
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
	unk_0x04269E768DDAF940(sLocal_44);
	unk_0x89B76C6241C0104D(7, 0);
	unk_0x78C587487CD40B92();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (!unk_0xEB361B4BD195A4D3(*uParam0))
		{
			unk_0xEDA527A4943E849D(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEB6B0D85F7D79F78(*uParam0);
			}
			unk_0x77637031DE326F70(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xFF5CE2ECB4FBD4A8(*uParam0, 0);
			}
		}
		unk_0x0689C659BF2D3BF7(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(*uParam0, 0))
		{
			unk_0xEDA527A4943E849D(*uParam0, 0);
		}
		if (!unk_0x18C670321BC98FDA(*uParam0))
		{
			unk_0x7B17650F15A8876D(*uParam0, 1, 0);
		}
		unk_0x4E82D83B086B5C93(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		return 0;
	}
	return !unk_0x912AD5A10E7633F0(uParam0, 0);
}

