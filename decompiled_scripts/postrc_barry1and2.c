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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	char* sLocal_43 = NULL;
	char* sLocal_44 = NULL;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	sLocal_43 = "RCMBarryLeadInOut";
	sLocal_44 = "idle";
	Local_48 = { 189.5964f, -956.0344f, 29.5771f };
	Local_51 = { 190.2424f, -956.379f, 28.63f };
	unk_0x6A6A41C66448AD09(0, 26, 1);
	if (func_24(unk_0x9F92518438215DD0()))
	{
		if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) != 0)
		{
			unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 0, 0);
		}
	}
	if (unk_0xD63E63DFACCEB80E(83))
	{
		func_21(0);
	}
	unk_0xDA293E5084610B09(sLocal_43);
	unk_0x9C53AD1E8A38ADEE("BARY1", 7);
	while (!unk_0x3DA2EED4204CE591(sLocal_43) || !unk_0x7DE7B5897062BC2C(7))
	{
		unk_0x6A6A41C66448AD09(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x6A6A41C66448AD09(0, 26, 1);
	func_24(unk_0x9F92518438215DD0());
	iLocal_45 = unk_0x17103F66FBB44C3C() + 13000;
	iLocal_46 = unk_0x073B65E051D2F03E(0, 5);
	func_18();
	while (!func_13(&uLocal_42, 49, Local_51, func_17(1.12f), 0))
	{
		unk_0x6A6A41C66448AD09(0, 26, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x6A6A41C66448AD09(0, 26, 1);
	func_12();
	iLocal_47 = unk_0x17103F66FBB44C3C() + 1000;
	unk_0x6A6A41C66448AD09(0, 26, 1);
	while (true)
	{
		func_24(unk_0x9F92518438215DD0());
		if (unk_0x17103F66FBB44C3C() < iLocal_47)
		{
			unk_0x6A6A41C66448AD09(0, 26, 1);
		}
		func_11();
		if (!func_24(uLocal_42))
		{
			func_21(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x9F92518438215DD0(), Local_51, 1) > 70f)
		{
			func_1(&uLocal_39, 0);
			func_1(&uLocal_40, 0);
			func_1(&uLocal_41, 0);
			func_21(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (unk_0xDAF5609B36EC10E7(*uParam0))
		{
			unk_0x8ED1C81168F4A10C(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x8FCF30FFEAA1C4D4(uParam0);
		}
		else
		{
			unk_0xB6EA72847B4B89BA(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(uParam0, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Param1, iParam4);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x9F92518438215DD0()) && func_10(uLocal_42)) && !func_9()) && unk_0x17103F66FBB44C3C() > iLocal_45) && func_8(unk_0x9F92518438215DD0(), uLocal_42, 1) < 20f) && !unk_0xDC8D2FA0A650F78B())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_42, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_45 = (unk_0x17103F66FBB44C3C() + unk_0x073B65E051D2F03E(12000, 18000));
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
	unk_0xEDB9A377CD8B7F03(&Global_14558, 0);
	Global_15695 = iParam3;
	StringCopy(&Global_15682, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_46)
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
	iLocal_46++;
	if (iLocal_46 > 4)
	{
		iLocal_46 = 0;
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
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(uParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(uParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(uParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(uParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(uParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(uParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
}

int func_9()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x24E7720869956FA9(-1, Local_51, 5f))
	{
		if (func_10(uLocal_42))
		{
			unk_0xD9B13F0A69759C12(uLocal_42, 0);
			unk_0x6E4672971932854F(uLocal_42, 1000, 1);
		}
		if (func_10(uLocal_40))
		{
			unk_0xD9B13F0A69759C12(uLocal_40, 0);
		}
		if (func_10(uLocal_39))
		{
			unk_0xD9B13F0A69759C12(uLocal_39, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_42))
	{
		if (!unk_0x34E74FF8690AA4B1(uLocal_42))
		{
			unk_0x336AE92FD68DEF98(uLocal_42, 1, 0);
		}
		unk_0x07FE9C31EC9DE225(uLocal_42, 1, 0, 0, 0);
		unk_0x4A1AC49BA4A747F7(uLocal_42, 1);
		unk_0x2CFB119825A2B9F1(uLocal_42, 0);
		unk_0x0CFE85F88BE373C8(uLocal_42, 0);
		unk_0x44759218C5C621A3(uLocal_42, "POSTBARRY");
		unk_0xA50AD6983D49A772(uLocal_42, joaat("player"));
		unk_0x4220BD8C5CDBF540(uLocal_42, 0, 0);
		unk_0xD9B13F0A69759C12(uLocal_42, 1);
		unk_0xFA51DC22F6E34F6E(uLocal_42, Local_51, 1, 0, 0, 1);
		unk_0x03D97EDECF2E1859(uLocal_42, func_17(1.12f));
		unk_0xD9B13F0A69759C12(uLocal_42, 1);
		unk_0x7CF15DD8B3815A0D(uLocal_42, sLocal_43, sLocal_44, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x402A96371F34E6D8(uLocal_42, unk_0x9F92518438215DD0(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_16(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0x3BC6D217451D6BB7(iVar0);
		if (unk_0x149162179DBAEDB0(iVar0))
		{
			if (unk_0x746960881FB19A89(*uParam0))
			{
				unk_0x7763EDCBED8A5840(uParam0);
			}
			*uParam0 = unk_0xA00B5D954AD320BF(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x3E2A91442BB9855D(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x27F7C2FB848CD525(*uParam0, 3) == 0)
				{
					unk_0xB27BF64B02C0107E(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x0880E86251A44B7F(iVar0);
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
	Global_86201[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		return Global_97358.f_29774[iParam0 /*29*/];
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
	if (unk_0x6E4DE584BEE4823B(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_40 = unk_0x73A3AED255AF2667(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(uLocal_40))
		{
			if (!unk_0x34E74FF8690AA4B1(uLocal_40))
			{
				unk_0x336AE92FD68DEF98(uLocal_40, 1, 0);
			}
			Local_48 = { 189.5964f, -956.0344f, 29.54f };
			unk_0xFA51DC22F6E34F6E(uLocal_40, Local_48, 1, 0, 0, 1);
			unk_0x03D97EDECF2E1859(uLocal_40, func_17(-2.01f));
			unk_0xD9B13F0A69759C12(uLocal_40, 1);
		}
	}
	if (unk_0x6E4DE584BEE4823B(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_39 = unk_0x73A3AED255AF2667(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(uLocal_39))
		{
			if (!unk_0x34E74FF8690AA4B1(uLocal_39))
			{
				unk_0x336AE92FD68DEF98(uLocal_39, 1, 0);
			}
			Local_48 = { 190.2574f, -956.3513f, 29.621f };
			unk_0xFA51DC22F6E34F6E(uLocal_39, Local_48, 1, 0, 0, 1);
			unk_0x03D97EDECF2E1859(uLocal_39, func_17(-1.68f));
			unk_0xD9B13F0A69759C12(uLocal_39, 1);
		}
	}
	else
	{
		Local_48 = { 190.2574f, -956.3513f, 29.621f };
		func_19(&uLocal_39, joaat("prop_chair_08"), Local_48, func_17(-1.68f));
		unk_0xFA51DC22F6E34F6E(uLocal_39, Local_48, 1, 0, 0, 1);
		unk_0x03D97EDECF2E1859(uLocal_39, func_17(-1.68f));
		unk_0xD9B13F0A69759C12(uLocal_39, 1);
	}
	Local_48 = { 192.4462f, -953.5946f, 29.0919f };
	if (unk_0x6E4DE584BEE4823B(Local_48, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_41 = unk_0x73A3AED255AF2667(Local_48, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(uLocal_41))
		{
			if (!unk_0x34E74FF8690AA4B1(uLocal_41))
			{
				unk_0x336AE92FD68DEF98(uLocal_41, 1, 0);
			}
			Local_48.f_2 = 29.603f;
			unk_0xFA51DC22F6E34F6E(uLocal_41, Local_48, 1, 0, 0, 1);
			unk_0x03D97EDECF2E1859(uLocal_41, 23.45f);
		}
	}
	else
	{
		func_19(&uLocal_41, joaat("prop_protest_sign_01"), Local_48, 23.45f);
		unk_0xFA51DC22F6E34F6E(uLocal_41, Local_48, 1, 0, 0, 1);
		unk_0x03D97EDECF2E1859(uLocal_41, 23.45f);
	}
}

void func_19(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_20(uParam0);
	*uParam0 = unk_0xA7DA1E6D4C99864B(iParam1, Param2, 1, 1, 0);
	unk_0x03D97EDECF2E1859(*uParam0, fParam5);
}

void func_20(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (unk_0xDAF5609B36EC10E7(*uParam0))
		{
			unk_0x8ED1C81168F4A10C(*uParam0, 1, 1);
		}
		unk_0x83A49C880CB75451(uParam0);
	}
}

void func_21(bool bParam0)
{
	if (bParam0)
	{
		func_23(&uLocal_42);
	}
	else
	{
		func_22(&uLocal_42, 1, 0, 1);
	}
	if (func_10(uLocal_40))
	{
		unk_0xD9B13F0A69759C12(uLocal_40, 0);
	}
	if (func_10(uLocal_39))
	{
		unk_0xD9B13F0A69759C12(uLocal_39, 0);
	}
	if (bParam0)
	{
		func_20(&uLocal_39);
		func_20(&uLocal_40);
		func_20(&uLocal_41);
	}
	else
	{
		func_1(&uLocal_39, 0);
		func_1(&uLocal_40, 0);
		func_1(&uLocal_41, 0);
	}
	unk_0xE29F0AC6C728DD9C(sLocal_43);
	unk_0x84FBD0BE7CDBEEA2(7, 0);
	unk_0xE60DEFFB2A853900();
}

void func_22(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (!unk_0x3E0478C40AB5B38D(*uParam0))
		{
			unk_0x512E0C109ACECCA1(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x5B1A1DA8A0D20935(*uParam0);
			}
			unk_0xE8105B7E3908547D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4A1AC49BA4A747F7(*uParam0, 0);
			}
		}
		unk_0x995B3705D02B0401(uParam0);
	}
}

void func_23(var uParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(*uParam0))
		{
			unk_0x512E0C109ACECCA1(*uParam0, 0);
		}
		if (!unk_0x34E74FF8690AA4B1(*uParam0))
		{
			unk_0x336AE92FD68DEF98(*uParam0, 1, 0);
		}
		unk_0x7763EDCBED8A5840(uParam0);
	}
}

bool func_24(var uParam0)
{
	if (!unk_0x746960881FB19A89(uParam0))
	{
		return 0;
	}
	return !unk_0x0BA451447C3B1A8D(uParam0);
}

