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
	unk_0x4FB260623DD93924(0, 26, 1);
	if (func_24(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) != 0)
		{
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
		}
	}
	if (unk_0x7D9C4B359376D38A(83))
	{
		func_21(0);
	}
	unk_0x6450931B826B49D9(sLocal_44);
	unk_0xBCBC53983EC3B1BA("BARY1", 7);
	while (!unk_0x3A801AA34DD821BE(sLocal_44) || !unk_0x9F0887BCBFCF3C2F(7))
	{
		unk_0x4FB260623DD93924(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4FB260623DD93924(0, 26, 1);
	func_24(unk_0xFC1458A37D98B502());
	iLocal_46 = unk_0x53C562FD2B9E3AB0() + 13000;
	iLocal_47 = unk_0x63A6486593EC7EC3(0, 5);
	func_18();
	while (!func_13(&uLocal_43, 49, Local_52, func_17(1.12f), 0))
	{
		unk_0x4FB260623DD93924(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4FB260623DD93924(0, 26, 1);
	func_12();
	iLocal_48 = unk_0x53C562FD2B9E3AB0() + 1000;
	unk_0x4FB260623DD93924(0, 26, 1);
	while (true)
	{
		func_24(unk_0xFC1458A37D98B502());
		if (unk_0x53C562FD2B9E3AB0() < iLocal_48)
		{
			unk_0x4FB260623DD93924(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_43))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0xFC1458A37D98B502(), Local_52, 1) > 70f)
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
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (unk_0x6049C20F5D5C185B(*uParam0))
		{
			unk_0x6B7C10B19928914F(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x3A703774620FDB42(uParam0);
		}
		else
		{
			unk_0x3B426B73C7C1DBB0(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x191BE1BC8F26F3C1(uParam0, 0))
	{
		Var0 = { unk_0xB3328BA8976B416C(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB3328BA8976B416C(uParam0, 0) };
	}
	return unk_0xBE3C4023003180FC(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0xFC1458A37D98B502()) && func_10(uLocal_43)) && !func_9()) && unk_0x53C562FD2B9E3AB0() > iLocal_46) && func_8(unk_0xFC1458A37D98B502(), uLocal_43, 1) < 20f) && !unk_0x5A0744D504CC705F())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = (unk_0x53C562FD2B9E3AB0() + unk_0x63A6486593EC7EC3(12000, 18000));
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
	unk_0x872F1C1F8587CCC7(&Global_14622, 0);
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
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(uParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(uParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(uParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x191BE1BC8F26F3C1(uParam0, 0))
	{
		Var0 = { unk_0xB3328BA8976B416C(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB3328BA8976B416C(uParam0, 0) };
	}
	if (!unk_0x191BE1BC8F26F3C1(uParam1, 0))
	{
		Var3 = { unk_0xB3328BA8976B416C(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB3328BA8976B416C(uParam1, 0) };
	}
	return unk_0xBE3C4023003180FC(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x4E69510C44147A5C(-1, Local_52, 5f))
	{
		if (func_10(uLocal_43))
		{
			unk_0xEDC33A771FAEB393(uLocal_43, 0);
			unk_0xA08608F006880850(uLocal_43, 1000, 1, 0);
		}
		if (func_10(uLocal_41))
		{
			unk_0xEDC33A771FAEB393(uLocal_41, 0);
		}
		if (func_10(uLocal_40))
		{
			unk_0xEDC33A771FAEB393(uLocal_40, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_43))
	{
		if (!unk_0x9761C10D57B68069(uLocal_43))
		{
			unk_0xDD29FF4BAB8AFF9C(uLocal_43, 1, 0);
		}
		unk_0x0B652E456D6A7E32(uLocal_43, 1, 0, 0, 0);
		unk_0x771A86309E0CA47B(uLocal_43, 1);
		unk_0x6D624C6A284D7D07(uLocal_43, 0);
		unk_0x5C5D33A1B2711D21(uLocal_43, 0);
		unk_0x296D39391436DC64(uLocal_43, "POSTBARRY");
		unk_0xCE93FCB8A8D8DF0B(uLocal_43, joaat("player"));
		unk_0xB18E1DBC397238E1(uLocal_43, 0, 0);
		unk_0xEDC33A771FAEB393(uLocal_43, 1);
		unk_0xBD8D47FDC6902B2D(uLocal_43, Local_52, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(uLocal_43, func_17(1.12f));
		unk_0xEDC33A771FAEB393(uLocal_43, 1);
		unk_0x12C9D41D52A560D6(uLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x60C06BFD037BB7CF(uLocal_43, unk_0xFC1458A37D98B502(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x6FF834D85E2DD4C6(iVar0);
		if (unk_0x9A0B2ED5055D3F0B(iVar0))
		{
			if (unk_0x6ADD12BF4D6D2587(*uParam0))
			{
				unk_0x68433819717660CF(uParam0);
			}
			*uParam0 = unk_0xAC992EFAD62C33BF(26, iVar0, Param2, uParam5, 0, 0);
			unk_0xE537629E02E8DA21(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x4CDD2D1D66ED1DE4(*uParam0, 3) == 0)
				{
					unk_0x03924C68EFCBC511(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x14776E43F90DD454(iVar0);
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
	Global_88812[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
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
	if (unk_0x50126692B8A3590A(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_41 = unk_0xCBD07018689DF383(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0x9761C10D57B68069(uLocal_41))
			{
				unk_0xDD29FF4BAB8AFF9C(uLocal_41, 1, 0);
			}
			Local_49 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xBD8D47FDC6902B2D(uLocal_41, Local_49, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(uLocal_41, func_17(-2.01f));
			unk_0xEDC33A771FAEB393(uLocal_41, 1);
		}
	}
	if (unk_0x50126692B8A3590A(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_40 = unk_0xCBD07018689DF383(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0x9761C10D57B68069(uLocal_40))
			{
				unk_0xDD29FF4BAB8AFF9C(uLocal_40, 1, 0);
			}
			Local_49 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xBD8D47FDC6902B2D(uLocal_40, Local_49, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(uLocal_40, func_17(-1.68f));
			unk_0xEDC33A771FAEB393(uLocal_40, 1);
		}
	}
	else
	{
		Local_49 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_40, joaat("prop_chair_08"), Local_49, func_17(-1.68f));
		unk_0xBD8D47FDC6902B2D(uLocal_40, Local_49, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(uLocal_40, func_17(-1.68f));
		unk_0xEDC33A771FAEB393(uLocal_40, 1);
	}
	Local_49 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x50126692B8A3590A(Local_49, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_42 = unk_0xCBD07018689DF383(Local_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_42))
		{
			if (!unk_0x9761C10D57B68069(uLocal_42))
			{
				unk_0xDD29FF4BAB8AFF9C(uLocal_42, 1, 0);
			}
			Local_49.f_2 = 29.603f;
			unk_0xBD8D47FDC6902B2D(uLocal_42, Local_49, 1, 0, 0, 1);
			unk_0x48ED7B2293A96722(uLocal_42, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_42, joaat("prop_protest_sign_01"), Local_49, 23.45f);
		unk_0xBD8D47FDC6902B2D(uLocal_42, Local_49, 1, 0, 0, 1);
		unk_0x48ED7B2293A96722(uLocal_42, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0x5E35CF35E65D69B9(iParam1, Param2, 1, 1, 0);
	unk_0x48ED7B2293A96722(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (unk_0x6049C20F5D5C185B(*uParam0))
		{
			unk_0x6B7C10B19928914F(*uParam0, 1, 1);
		}
		unk_0x452336926718D62A(uParam0);
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
		unk_0xEDC33A771FAEB393(uLocal_41, 0);
	}
	if (func_10(uLocal_40))
	{
		unk_0xEDC33A771FAEB393(uLocal_40, 0);
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
	unk_0xFCCDDE0E48CF9588(sLocal_44);
	unk_0xF40900F61CC88931(7, 0);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (!unk_0x3AB6A1A9084FB0A4(*uParam0))
		{
			unk_0xCFF0CD14B439821D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x2CEA76A7F93740C6(*uParam0);
			}
			unk_0xE9B3D12A64CC7C1A(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x771A86309E0CA47B(*uParam0, 0);
			}
		}
		unk_0x486F346ADFE56674(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0x6ADD12BF4D6D2587(*uParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(*uParam0, 0))
		{
			unk_0xCFF0CD14B439821D(*uParam0, 0, 1);
		}
		if (!unk_0x9761C10D57B68069(*uParam0))
		{
			unk_0xDD29FF4BAB8AFF9C(*uParam0, 1, 0);
		}
		unk_0x68433819717660CF(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0x6ADD12BF4D6D2587(uParam0))
	{
		return 0;
	}
	return !unk_0x191BE1BC8F26F3C1(uParam0, 0);
}

