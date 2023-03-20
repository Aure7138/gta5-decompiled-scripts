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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	struct<27> Local_98 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_125 = 0;
	struct<3> Local_126[32];
	var uLocal_223 = 0;
	int iLocal_224 = 0;
	var uLocal_225 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_89 = ((0.05f + 0.275f) - 0.01f);
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	if (unk_0xBBAE3E0C60A8AD4B() && func_192(unk_0xA34E7C2A5118D638(), 0, 1))
	{
		func_179(ScriptParam_0);
	}
	else
	{
		func_175();
	}
	while (true)
	{
		func_174();
		if (func_164() || func_160(15))
		{
			func_175();
		}
		if (unk_0xE21B8C41C187AA64())
		{
			func_175();
		}
		switch (func_159(unk_0x935FA14EDA695A82()))
		{
			case 0:
				if (func_158() == 1)
				{
					if (func_157(60000))
					{
						if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_2))
						{
							if (unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(Local_98.f_2), 0))
							{
								if (!func_155())
								{
									if (!unk_0xDCC86F723E82125E(Local_98.f_1, 0))
									{
										func_154("PTD_HELP1", -1);
									}
									else
									{
										func_154("PTD_HELP1H", -1);
									}
								}
							}
						}
					}
					Local_126[unk_0x935FA14EDA695A82() /*3*/] = 1;
				}
				else if (func_158() == 4)
				{
					Local_126[unk_0x935FA14EDA695A82() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_158() == 1)
				{
					func_20();
				}
				else if (func_158() == 4)
				{
					Local_126[unk_0x935FA14EDA695A82() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_19(&(Local_98.f_24));
				if (func_18(&(Local_98.f_24)))
				{
					Local_126[unk_0x935FA14EDA695A82() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_126[unk_0x935FA14EDA695A82() /*3*/] = 4;
			
			case 4:
				func_175();
				break;
		}
		if (unk_0x736DBE187CFCC863())
		{
			switch (func_158())
			{
				case 0:
					if (func_11())
					{
						Local_98.f_0 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_98.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	struct<14> Var0;
	struct<14> Var14;
	
	if (func_7(Local_98.f_2))
	{
		if (Local_98.f_22 > 0)
		{
			if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_2))
			{
				if (!unk_0x8DF850DA069BF37C(unk_0xF8A3C382964380BC(Local_98.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, 1, 0))
				{
					if (!unk_0xDCC86F723E82125E(Local_98.f_1, 0))
					{
						Var0.f_2 = 111;
					}
					else
					{
						Var0.f_2 = 114;
					}
					func_5(Var0, func_6(1));
					unk_0x59A0729D503ED758(&(Local_98.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_98.f_23 == 0)
	{
		if (Local_98.f_0 != 4)
		{
			if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_2))
			{
				if (unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_2)))
				{
					if (func_3(&(Local_98.f_26), 3000, 0))
					{
						if (!unk_0xDCC86F723E82125E(Local_98.f_1, 0))
						{
							Var14.f_2 = 110;
						}
						else
						{
							Var14.f_2 = 113;
						}
						func_5(Var14, func_6(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
		}
		uParam0->f_1 = 1;
	}
}

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xA34E7C2A5118D638();
	if (!iParam14 == 0)
	{
		unk_0x74A5559828D3116B(1, &Param0, 14, iParam14);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x55191629F1199760())
	{
		if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iVar1)))
		{
			iVar2 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iVar1));
			if (func_192(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xA34E7C2A5118D638() || iParam0)
				{
					unk_0x59A0729D503ED758(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_7(var uParam0)
{
	if (unk_0x1BDB4A81F7EE9BE6(uParam0))
	{
		return !func_8(unk_0xF8A3C382964380BC(uParam0));
	}
	return 0;
}

int func_8(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			return 1;
		}
		else if (!unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	switch (Local_98.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()
{
	struct<14> Var0;
	var uVar14;
	
	if (unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_2)))
	{
		if (Local_98.f_0 != 4)
		{
			iLocal_224 = 0;
			while (iLocal_224 < unk_0x55191629F1199760())
			{
				if (unk_0x784B3253F40F728C(unk_0xD9BFAEBB04416B09(iLocal_224)))
				{
					uVar14 = unk_0x8F765930684A893F(unk_0xD9BFAEBB04416B09(iLocal_224));
					if (unk_0xDCC86F723E82125E(Local_126[iLocal_224 /*3*/].f_1, 0))
					{
						if (!unk_0xDCC86F723E82125E(Local_98.f_1, 0))
						{
							Var0.f_2 = 109;
						}
						else
						{
							Var0.f_2 = 112;
						}
						Var0.f_10 = uVar14;
						func_5(Var0, func_6(1));
						Local_98.f_0 = 4;
						return;
					}
					if (unk_0xDCC86F723E82125E(Local_126[iLocal_224 /*3*/].f_1, 1))
					{
						if (!unk_0xDCC86F723E82125E(Local_98.f_1, 2))
						{
							unk_0x59A0729D503ED758(&(Local_98.f_1), 2);
						}
					}
				}
				iLocal_224++;
			}
		}
	}
}

int func_11()
{
	if (func_17(Local_98.f_4) && func_17(Local_98.f_5))
	{
		if (func_14() && func_12())
		{
			unk_0x4BBD72565A0AF033(Local_98.f_4);
			unk_0x4BBD72565A0AF033(Local_98.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if ((!unk_0x1BDB4A81F7EE9BE6(Local_98.f_3) && func_17(Local_98.f_5)) && unk_0x1BDB4A81F7EE9BE6(Local_98.f_2))
	{
		if (func_7(Local_98.f_2))
		{
			if (func_13(&(Local_98.f_3), Local_98.f_2, 22, Local_98.f_5, -1, 1, 1, 1))
			{
				unk_0xAAD662D7E0D59F4C(unk_0xA84D2F2B8688949A(Local_98.f_3), 1);
				unk_0xCBD60E398042F554(unk_0xA84D2F2B8688949A(Local_98.f_3), Global_1574228);
				unk_0x13D89E14CAD4E586(unk_0xA84D2F2B8688949A(Local_98.f_3), 0);
				unk_0xF1A02DDEC7E15D6E(unk_0xA84D2F2B8688949A(Local_98.f_3), 1);
			}
		}
	}
	if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x30D45E180EF7AEE1(1))
	{
		return 0;
	}
	if (!unk_0x1BDB4A81F7EE9BE6(uParam1))
	{
		return 0;
	}
	if (!unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFD3315C91C68296D(unk_0xDEFAEEE1A4058454(unk_0xF8A3C382964380BC(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(unk_0xA84D2F2B8688949A(*uParam0), iParam7);
		if (unk_0x6061DFC4D87F4B3E(unk_0xA84D2F2B8688949A(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_14()
{
	var uVar0;
	
	if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_2))
	{
		if (func_17(Local_98.f_4))
		{
			if (func_15(&(Local_98.f_2), Local_98.f_4, Local_98.f_6, func_16(Local_98.f_6, Local_98.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1))
			{
				unk_0x0782F0CAEA719452(unk_0xF8A3C382964380BC(Local_98.f_2), 2);
				unk_0xB7A2078CD1C9A82F(unk_0xF8A3C382964380BC(Local_98.f_2), 0);
				unk_0xFE4533E741E5E8FC(unk_0xF8A3C382964380BC(Local_98.f_2), 1);
				unk_0xE457AC24AF211ECC(unk_0xF8A3C382964380BC(Local_98.f_2));
				unk_0x1034B9E3CD286ADE(unk_0xF8A3C382964380BC(Local_98.f_2), 30f);
				unk_0x0C7C7F68B472963C(unk_0xF8A3C382964380BC(Local_98.f_2));
				unk_0x57892FEA93664769(unk_0xF8A3C382964380BC(Local_98.f_2), 1, 1, 0);
				unk_0xB263252AC1E6B6A8(unk_0xF8A3C382964380BC(Local_98.f_2), 0);
				unk_0x3907D4738A2C8ABD(unk_0xF8A3C382964380BC(Local_98.f_2), 0);
				if (Local_98.f_4 == joaat("cuban800"))
				{
					unk_0xAD20BE8460150C41(unk_0xF8A3C382964380BC(Local_98.f_2), 3);
				}
				if (unk_0x9F7DDFEF511FDBD8("MPBitset", 3))
				{
					if (unk_0x3D32B80EFC48A92D(unk_0xF8A3C382964380BC(Local_98.f_2), "MPBitset"))
					{
						uVar0 = unk_0xFE76479AD91F5A0A(unk_0xF8A3C382964380BC(Local_98.f_2), "MPBitset");
					}
					unk_0x59A0729D503ED758(&uVar0, 10);
					unk_0x99230E3785E2C923(unk_0xF8A3C382964380BC(Local_98.f_2), "MPBitset", uVar0);
				}
			}
		}
	}
	if (!unk_0x1BDB4A81F7EE9BE6(Local_98.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x0B3DCCE96DC81466(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x3FC9316FEF4E4720(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xD53B4DCC7B2C8551(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xBE16446E4B20EFE2(uVar0);
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(uVar0, iParam10);
		if (unk_0x6061DFC4D87F4B3E(iVar0))
		{
			if (bParam8)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
			else
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 0);
			}
		}
		unk_0x59CE4F88873CD573(iVar0, iParam9);
		return 1;
	}
	return 0;
}

var func_16(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x949D03817D2A6977((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_17(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x7567CEA8E6B5340B(iParam0);
	return unk_0x0845149A26DABBA5(iParam0);
}

int func_18(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x736DBE187CFCC863())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	switch (Local_126[unk_0x935FA14EDA695A82() /*3*/].f_2)
	{
		case 0:
			func_153();
			func_21();
			if (Local_98.f_23 > 0)
			{
				Local_126[unk_0x935FA14EDA695A82() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_175();
			break;
	}
}

void func_21()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar9;
	
	if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_2))
	{
		if (!unk_0xDCC86F723E82125E(Local_126[unk_0x935FA14EDA695A82() /*3*/].f_1, 0))
		{
			if (!unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(Local_98.f_2), 0))
			{
			}
			if (unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_2)))
			{
			}
			if (unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_2)))
			{
				if (unk_0xA34E7C2A5118D638() == unk_0x52C127C296E627AF(Local_98.f_2, &uVar0))
				{
					func_152(2050, -1);
					iVar1 = func_151(2050, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_6462)
					{
						iVar2 = Global_262145.f_6462;
					}
					iVar3 = (Global_262145.f_6460 * iVar2);
					func_103(0, unk_0xC8B93D94F8954288(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0);
					if (iVar1 > Global_262145.f_6461)
					{
						iVar1 = Global_262145.f_6461;
					}
					iVar4 = (Global_262145.f_6459 * iVar1);
					func_99(iVar4, 1, 1, 1092616192);
					Global_2443261 = iVar4;
					func_56(&iVar4, 1);
					if (iVar4 > 0)
					{
						if (func_55())
						{
							func_46(1780666425, iVar4, &uVar9, 0, 0, 0);
						}
						else
						{
							unk_0x7AF7488EF897601F(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					func_41(65, 1, -1);
					if (func_40())
					{
						func_27(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_27(2, "PTD_PASS1", 0, 0, -99);
					}
					unk_0x59A0729D503ED758(&(Local_126[unk_0x935FA14EDA695A82() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (unk_0x736DBE187CFCC863())
				{
					if (Local_98.f_22 < 4)
					{
						if (unk_0xA0C23498D8E0BB93(unk_0xF8A3C382964380BC(Local_98.f_2), Local_98.f_9[Local_98.f_22 /*3*/], 50f, 50f, 500f, 0, 1, 0))
						{
							Local_98.f_22++;
						}
					}
				}
				if (unk_0xFEA25F5BCFDBD741(Local_98.f_2))
				{
					func_25();
					if (func_24())
					{
						if (func_23(Local_98.f_2) && func_23(Local_98.f_3))
						{
							unk_0xE0FE625F16A0E489(unk_0xF8A3C382964380BC(Local_98.f_2), 1, 1, -1);
							if (unk_0x691BFDC1728FD714(Local_98.f_2))
							{
								func_22(&(Local_98.f_2));
							}
							if (unk_0x691BFDC1728FD714(Local_98.f_3))
							{
								unk_0xF1A02DDEC7E15D6E(unk_0xA84D2F2B8688949A(Local_98.f_3), 1);
								func_22(&(Local_98.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_22(var uParam0)
{
	var uVar0;
	
	if (unk_0x691BFDC1728FD714(*uParam0))
	{
		uVar0 = unk_0x6622BC2FDC6DBB0E(*uParam0);
		unk_0xBDC2957CCB5DFDC3(&uVar0);
	}
}

int func_23(var uParam0)
{
	if (unk_0x1BDB4A81F7EE9BE6(uParam0))
	{
		unk_0x835FF05091869303(uParam0);
		return unk_0xFEA25F5BCFDBD741(uParam0);
	}
	return 0;
}

int func_24()
{
	if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_2))
	{
		if (unk_0x442EE710FCFD5D0D(unk_0xF8A3C382964380BC(Local_98.f_2), 0, 7000))
		{
			return 1;
		}
		if (unk_0x442EE710FCFD5D0D(unk_0xF8A3C382964380BC(Local_98.f_2), 1, 40000))
		{
			return 1;
		}
		if (unk_0x442EE710FCFD5D0D(unk_0xF8A3C382964380BC(Local_98.f_2), 3, 30000))
		{
			return 1;
		}
		if (unk_0x442EE710FCFD5D0D(unk_0xF8A3C382964380BC(Local_98.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	struct<3> Var0;
	
	if (func_7(Local_98.f_2) && !func_26(Local_98.f_3))
	{
		if (unk_0x0C7EC810080F0459(unk_0xA84D2F2B8688949A(Local_98.f_3), unk_0xF8A3C382964380BC(Local_98.f_2), 0))
		{
			if (Local_98.f_22 < 4)
			{
				if (!unk_0xDCC86F723E82125E(Local_98.f_1, 0))
				{
					unk_0x0A066ABD54AB94B7(unk_0xA84D2F2B8688949A(Local_98.f_3), unk_0xF8A3C382964380BC(Local_98.f_2), 0, 0, Local_98.f_9[Local_98.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60);
				}
				else
				{
					unk_0x53ADC9115BDB0CDD(unk_0xA84D2F2B8688949A(Local_98.f_3), unk_0xF8A3C382964380BC(Local_98.f_2), 0, 0, Local_98.f_9[Local_98.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1082130432, 0);
				}
			}
			else if (!unk_0xDCC86F723E82125E(Local_98.f_1, 2) && !unk_0xDCC86F723E82125E(Local_126[unk_0x935FA14EDA695A82() /*3*/].f_1, 1))
			{
				Var0 = { unk_0xCC31DB73C65552D8(unk_0xF8A3C382964380BC(Local_98.f_2), 0f, 12000f, 0f) };
				if (Var0.f_0 < -3700f)
				{
					Var0.f_0 = -3700f;
				}
				else if (Var0.f_0 > 4500f)
				{
					Var0.f_0 = 4500f;
				}
				if (Var0.f_1 < -3900f)
				{
					Var0.f_1 = -3900f;
				}
				else if (Var0.f_1 > 8000f)
				{
					Var0.f_1 = 8000f;
				}
				Var0.f_2 = 100f;
				if (!unk_0xDCC86F723E82125E(Local_98.f_1, 0))
				{
					unk_0x0A066ABD54AB94B7(unk_0xA84D2F2B8688949A(Local_98.f_3), unk_0xF8A3C382964380BC(Local_98.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100);
				}
				else
				{
					unk_0x53ADC9115BDB0CDD(unk_0xA84D2F2B8688949A(Local_98.f_3), unk_0xF8A3C382964380BC(Local_98.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1082130432, 0);
				}
				unk_0x59A0729D503ED758(&(Local_126[unk_0x935FA14EDA695A82() /*3*/].f_1), 1);
			}
		}
	}
}

int func_26(var uParam0)
{
	if (unk_0x1BDB4A81F7EE9BE6(uParam0))
	{
		return unk_0x2DC9BA2299B45EA6(unk_0xA84D2F2B8688949A(uParam0));
	}
	return 1;
}

void func_27(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_28(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_28(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_29(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_29(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xB8A06E7E729EED0A(sParam4))
	{
		if (unk_0x7FB2AC00554ED7D4(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_38();
	if (iVar0 == -1)
	{
		return;
	}
	func_37(iVar0);
	func_36(iVar0, uParam0);
	func_35(iVar0, uParam2, bParam3);
	func_34(iVar0, sParam1);
	if (unk_0xB8A06E7E729EED0A(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_33(iVar0);
	if (!unk_0xB8A06E7E729EED0A(sParam4))
	{
		func_31(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_30(iVar0, iParam6);
	}
}

void func_30(int iParam0, int iParam1)
{
	Global_1332274.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_31(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1332274.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_32(iParam0);
}

void func_32(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_1332274.f_59[iParam0 /*16*/]), 5);
}

void func_33(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_1332274.f_59[iParam0 /*16*/]), 4);
}

void func_34(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1332274.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_35(int iParam0, var uParam1, bool bParam2)
{
	Global_1332274.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_1332274.f_59[iParam0 /*16*/]), 2);
		unk_0x77621132305B133B(&(Global_1332274.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0x59A0729D503ED758(&(Global_1332274.f_59[iParam0 /*16*/]), 3);
		unk_0x77621132305B133B(&(Global_1332274.f_59[iParam0 /*16*/]), 2);
	}
}

void func_36(int iParam0, var uParam1)
{
	Global_1332274.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_37(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_1332274.f_59[iParam0 /*16*/]), 0);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_39(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_39(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1332274.f_59[iParam0 /*16*/], 0);
}

int func_40()
{
	if (unk_0xDCC86F723E82125E(unk_0x531444754C426278(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_43(iParam0, func_44(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_42(iParam0, iVar0, iParam2);
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2488810[iParam0 /*5*/][func_44(iParam2)];
	unk_0x071958EFED9481F5(iVar0, iParam1, 1);
}

int func_43(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2488810[iParam0 /*5*/][func_44(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_45();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_45()
{
	return Global_1312746;
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_55())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
			if (iParam1 > 0)
			{
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_47(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_55())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x9A07DDC8D6013A35(func_45()) || unk_0x2661EFA58162BE03())
		{
			Global_2555082 = 1;
			return 0;
		}
		if (Global_2442114)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2555083 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2554598[iVar1 /*72*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xA697855E051773F2(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB2F39A45C7C097F8(iVar3))
		{
			*uParam0 = func_54(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2554598[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2555074 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2555081 = 1;
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_53(1, iParam4);
			Global_2555081 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_48(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_55())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_52(iParam0))
		{
			if (!bVar0)
			{
				unk_0x57AF313235EC1176();
			}
		}
		else if (!bVar0)
		{
			unk_0xCE4D85A04F5B2192(Global_2554598[iParam0 /*72*/]);
		}
		func_50(&(Global_2554598[iParam0 /*72*/]));
	}
}

void func_50(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_51(&(uParam0->f_8.f_3));
	func_51(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
}

void func_51(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_52(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2554598[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_53(int iParam0, var uParam1)
{
	Global_2443392 = uParam1;
	Global_2443391 = iParam0;
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2554598[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_55())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2554598[iVar0 /*72*/].f_2 = 1;
			Global_2554598[iVar0 /*72*/].f_1 = uParam5;
			Global_2554598[iVar0 /*72*/].f_3 = uParam1;
			Global_2554598[iVar0 /*72*/].f_4 = uParam2;
			Global_2554598[iVar0 /*72*/].f_7 = uParam3;
			Global_2554598[iVar0 /*72*/].f_5 = 0;
			Global_2554598[iVar0 /*72*/] = iParam0;
			Global_2554598[iVar0 /*72*/].f_6 = iParam4;
			Global_2554598[iVar0 /*72*/].f_68 = uParam8;
			Global_2554598[iVar0 /*72*/].f_67 = uParam7;
			Global_2554598[iVar0 /*72*/].f_71 = 0;
			Global_2555074 = 0;
			if (bParam6)
			{
				Global_2554598[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_55()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		return 1;
	}
	return 0;
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_98())
		{
			if (func_97(0))
			{
				if (unk_0xDF73DA5E2287C499(func_96()))
				{
					if (func_95() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_95());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_93(&iVar0);
					if (iParam1 == 1)
					{
						func_60("GB_BCUT_TICK1", func_96(), iVar0, 0, 0, 1, 1);
					}
					func_59(20);
					func_57(func_96(), iVar0, 1);
				}
			}
		}
	}
}

void func_57(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_192(iParam0, 0, 1))
	{
		Var0.f_0 = 433;
		Var0.f_1 = unk_0xA34E7C2A5118D638();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x74A5559828D3116B(1, &Var0, 5, func_58(iParam0));
	}
}

var func_58(int iParam0)
{
	var uVar0;
	
	unk_0x59A0729D503ED758(&uVar0, iParam0);
	return uVar0;
}

void func_59(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4648.f_7), iParam0);
}

int func_60(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		unk_0x12F4A48D84A3989D(sParam0);
		unk_0x1AE578B67805BFB7(func_69(iParam1, -2, 1, 0));
		unk_0x2DED6C1306496257(func_67(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x1AE578B67805BFB7(iParam3);
		}
		unk_0x6DC80A902A91958F(iParam2);
		iVar0 = unk_0xC754466C15BD85AC(0, 1);
		func_61(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_61(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_66() || !unk_0xDC9A5ADFE0C41DD2()) || !func_64(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	iVar0 = func_62(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1718883.f_5[iVar0 /*53*/] = iParam0;
		Global_1718883.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1718883.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1718883.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1718883.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1718883.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1718883.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1718883 - 1))
	{
		if (iParam0 > Global_1718883.f_5[iVar0 /*53*/].f_1)
		{
			func_63(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1718883++;
	if (Global_1718883 > 5)
	{
		Global_1718883 = 5;
		return Global_1718883;
	}
	return (Global_1718883 - 1);
}

void func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1718883.f_5[iVar0 /*53*/] = { Global_1718883.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_64(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_65(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_45();
	}
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_66()
{
	return unk_0x9F37711843A20114(-1762644250);
}

var func_67(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_68(&cVar0);
}

var func_68(char[4] cParam0)
{
	return cParam0;
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_91(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_91(unk_0xA34E7C2A5118D638()) || (func_90() && func_89()))
	{
		uVar0 = func_88();
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (unk_0xA815CBE767EFA3CB(iVar0))
			{
				if (unk_0x8ACC9D9AC6076DCB(iVar0) != -1)
				{
					if (func_192(unk_0x8ACC9D9AC6076DCB(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
						{
							if (Global_1613622.f_65200[iParam1] != -1)
							{
								return func_87(iParam1, iParam0, 0);
							}
							else
							{
								return func_77(iParam0, unk_0x8ACC9D9AC6076DCB(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_77(iParam0, unk_0x8ACC9D9AC6076DCB(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
			{
				if (Global_1613622.f_65200[iParam1] != -1)
				{
					return func_87(iParam1, iParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
	{
		if (Global_1613622.f_65200[iParam1] != -1)
		{
			return func_87(iParam1, iParam0, 0);
		}
		else
		{
			return func_77(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
		}
	}
	return func_77(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	return func_71(unk_0xA34E7C2A5118D638(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1);
			}
			else
			{
				return func_72(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1);
	if (func_73(Global_1613622.f_68788))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_73(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7331[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 0);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 1);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 2);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 4);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 5);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 6);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 8);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 9);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 10);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 12);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 13);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 14);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587175[iVar2 /*410*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_86(iParam1, iParam0, iVar0, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)) || ((func_76(unk_0x07CBE0ED3114C7D8(iParam1), unk_0x07CBE0ED3114C7D8(iParam0), 0) && unk_0xDCC86F723E82125E(Global_1613622.f_15, 23)) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)))
			{
				return func_75(1);
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 26))
			{
				return func_85(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573833 || Global_1573824) || Global_1587175[iParam0 /*410*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573833 == 1 && Global_1573843 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573828 && Global_1573408.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_80(iParam0);
	if (!iVar3 == -1)
	{
		return func_78(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = func_79(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 12;
}

var func_79(int iParam0)
{
	return Global_2412494.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_80(int iParam0)
{
	if (!iParam0 == func_84())
	{
		if (func_82(iParam0, 1))
		{
			return Global_2412494.f_1946.f_11[func_81(iParam0)];
		}
	}
	return -1;
}

int func_81(int iParam0)
{
	if (iParam0 != func_84())
	{
		return Global_1608811[iParam0 /*109*/].f_9;
	}
	return func_84();
}

bool func_82(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_83(iParam0))
		{
			return 0;
		}
	}
	return Global_1608811[iParam0 /*109*/].f_9 != func_84();
}

int func_83(int iParam0)
{
	if (iParam0 != func_84())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_84())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
		}
	}
	return 0;
}

int func_84()
{
	return -1;
}

int func_85(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && unk_0x07CBE0ED3114C7D8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
	}
	return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
}

int func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1613622.f_65200[iParam0] != -1 && Global_1613622.f_65200[iParam0] <= 4)
	{
		if (Global_1613622.f_65200[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1613622.f_65200[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1613622.f_65200[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1613622.f_65200[iParam0] == 4)
		{
			if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1613622.f_65200[iParam0];
		}
	}
	else
	{
		iVar0 = func_71(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_88()
{
	return Global_2359301.f_2;
}

bool func_89()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 4);
}

bool func_90()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 14);
}

int func_91(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return 1;
	}
	if (func_92())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

void func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_94();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_94()
{
	return Global_262145.f_10288;
}

int func_95()
{
	return Global_262145.f_10287;
}

int func_96()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9;
}

bool func_97(bool bParam0)
{
	return func_82(unk_0xA34E7C2A5118D638(), bParam0);
}

bool func_98()
{
	return func_83(unk_0xA34E7C2A5118D638());
}

void func_99(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_100(iParam0, iParam1, iParam2, fParam3);
}

void func_100(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_101(iParam0, iParam1, iParam2, fParam3);
}

void func_101(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_4 = iVar1;
	Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_3 = (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_102(iVar1, 0);
	}
}

void func_102(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_103(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_104(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_104(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_114(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x95CCECA3948CFE7B(iParam1))
		{
			if (unk_0x96209AADF56E8FE8(iParam1))
			{
				uVar1 = unk_0x4D3C2AC8339BFB4F(iParam1);
				func_110(unk_0xB867FC7DBA46C0F1(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_105(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_105(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_108(iParam0, 1) };
	if (iParam0 == func_107(unk_0xC8B93D94F8954288()))
	{
		func_106(1);
	}
	func_110(Var0, iParam1, 0, sParam2);
}

void func_106(int iParam0)
{
	Global_2426867.f_1322 = iParam0;
}

int func_107(var uParam0)
{
	return uParam0;
}

Vector3 func_108(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_109(unk_0xC8B93D94F8954288()) && unk_0xA9B6C2A8F9FE269A(unk_0xBFFCA1BD025B90B2()) == 4)
	{
		Var0 = { unk_0xCC31DB73C65552D8(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		fVar3 = unk_0x59DD203239FBDCAD(iParam0);
	}
	unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xE79F1883B253E5B8(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_109(var uParam0)
{
	return uParam0;
}

void func_110(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426867.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426867.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426867.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426867.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426867.f_741[iVar1 /*29*/].f_4 = func_113(Global_2426867.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426867.f_741[iVar1 /*29*/].f_7 = unk_0x2AA13A84EE2D3B24();
			Global_2426867.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426867.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426867.f_741[iVar1 /*29*/].f_9 = func_112();
			Global_2426867.f_741[iVar1 /*29*/].f_10 = func_111();
			StringCopy(&(Global_2426867.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_111()
{
	if (Global_2426867.f_1322)
	{
		Global_2426867.f_1322 = 0;
		return 1;
	}
	Global_2426867.f_1322 = 0;
	return 0;
}

var func_112()
{
	var uVar0;
	
	uVar0 = Global_2426867.f_1324;
	Global_2426867.f_1324 = 1;
	return uVar0;
}

float func_113(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4F982ED5336EA899(unk_0xE81835FB046A7978(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_114(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_115(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_115(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_150(unk_0xA34E7C2A5118D638()) || func_149(unk_0xA34E7C2A5118D638()))
	{
		if (Global_262145.f_7555 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7555;
		}
	}
	else if (Global_262145.f_5033 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5033;
	}
	if (func_148(uParam2))
	{
	}
	if (func_147())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_145(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_144(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_141(0, &iVar1);
					break;
				
				case 3:
					func_141(1, &iVar1);
					break;
				
				case 1:
					func_138(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_136(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_126((func_135(unk_0xA34E7C2A5118D638()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xEF84C5FA6302A771(iVar1, iParam8, iParam9);
				if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_2 != -1)
				{
					func_136(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_120(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_116((func_118(unk_0xA34E7C2A5118D638()) + iVar1));
			}
			else
			{
				func_116((func_118(unk_0xA34E7C2A5118D638()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_116(int iParam0)
{
	if (func_147())
	{
		Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_5 = iParam0;
		func_117(joaat("mpply_globalxp"), iParam0);
	}
}

void func_117(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, 1);
	}
}

int func_118(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_192(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return func_119(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_5;
			}
		}
		else
		{
			return func_119(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_120(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_125(unk_0xA34E7C2A5118D638()) };
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(&Var0))
		{
			iVar13 = func_123(func_124(&Var0));
			if (iVar13 == 0)
			{
				func_122(&Global_1347498, iParam0);
				func_121(joaat("mpply_crew_local_xp_0"), Global_1347498);
			}
			else if (iVar13 == 1)
			{
				func_122(&Global_1347499, iParam0);
				func_121(joaat("mpply_crew_local_xp_1"), Global_1347499);
			}
			else if (iVar13 == 2)
			{
				func_122(&Global_1347500, iParam0);
				func_121(joaat("mpply_crew_local_xp_2"), Global_1347500);
			}
			else if (iVar13 == 3)
			{
				func_122(&Global_1347501, iParam0);
				func_121(joaat("mpply_crew_local_xp_3"), Global_1347501);
			}
			else if (iVar13 == 4)
			{
				func_122(&Global_1347502, iParam0);
				func_121(joaat("mpply_crew_local_xp_4"), Global_1347502);
			}
		}
	}
}

void func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347493 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347495 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347495 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347496 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347497 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347498 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347499 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347500 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347501 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347502 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347503 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347504 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347505 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347506 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347507 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347508 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347509 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_123(int iParam0)
{
	if (iParam0 == Global_1347493)
	{
		return 0;
	}
	else if (iParam0 == Global_1347494)
	{
		return 1;
	}
	else if (iParam0 == Global_1347495)
	{
		return 2;
	}
	else if (iParam0 == Global_1347496)
	{
		return 3;
	}
	else if (iParam0 == Global_1347497)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_124(var uParam0)
{
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return Global_2441309;
		}
	}
	return Global_2441309;
}

struct<13> func_125(int iParam0)
{
	struct<13> Var0;
	
	unk_0xC7B591FDF5AB5356(iParam0, &Var0, 13);
	return Var0;
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	if (func_147())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7530 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347613[func_44(-1)])
				{
					unk_0xEF84C5FA6302A771(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347613[func_44(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_134(unk_0xA34E7C2A5118D638()))
		{
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_1 = iParam0;
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_6 = func_132(iParam0, 1);
		}
		func_131(629, iParam0, -1, 1);
		func_130(630, func_132(iParam0, 1), -1, 1);
		Global_1347613[func_44(-1)] = iParam0;
		func_127(7, 0);
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_129(iParam0, iParam1))
	{
		iVar0 = func_128();
		Global_2441286[iVar0] = iParam0;
	}
}

int func_128()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2441286[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_129(int iParam0, var uParam1)
{
	if (Global_1315899)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315911) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347559[func_44(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347565[func_44(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347571[func_44(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347577[func_44(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347535[func_44(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347541[func_44(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347547[func_44(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347553[func_44(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347511[func_44(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347517[func_44(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347523[func_44(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347529[func_44(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347583[func_44(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347589[func_44(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347595[func_44(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347601[func_44(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347607[func_44(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347613[func_44(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347619[func_44(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2489474[0 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2489474[1 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2489474[2 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2489474[3 /*6*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3732:
			Global_2489525[func_44(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347625[func_44(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347631[func_44(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347637[func_44(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347643[func_44(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2489499[0 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2489499[1 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2489499[2 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2489499[3 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2489499[4 /*5*/][func_44(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_132(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_133(iParam0, 0);
}

int func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_273943[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_273943[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_134(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_2426867.f_1, iParam0);
	}
	return 1;
}

int func_135(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return Global_1347613[func_44(-1)];
			}
			else if (func_134(iParam0))
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347613[func_44(-1)];
	}
	return 0;
}

void func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_151(iParam0, func_44(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_137(iParam0))
	{
		func_130(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_131(iParam0, iVar0, iParam2, 1);
	}
}

int func_137(int iParam0)
{
	if (Global_1347492)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2902:
			case 3030:
			case 3732:
			case 3025:
			case 3026:
			case 3027:
			case 3028:
			case 3029:
				return 1;
				break;
			}
	}
	return 0;
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638());
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		iVar4 = unk_0xD9BFAEBB04416B09(iVar0);
		if (unk_0x784B3253F40F728C(iVar4))
		{
			iVar5 = unk_0x8F765930684A893F(iVar4);
			if (unk_0x07CBE0ED3114C7D8(iVar5) != -1)
			{
				if (unk_0x07CBE0ED3114C7D8(iVar5) == iVar1 || func_76(unk_0x07CBE0ED3114C7D8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xA34E7C2A5118D638())
					{
						if (func_140(unk_0xA34E7C2A5118D638(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_139(*iParam0, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_139(*iParam0, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_139(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_140(int iParam0, int iParam1)
{
	if (unk_0x14F2268F2CD21E48())
	{
		Global_2457104 = { func_125(iParam0) };
		Global_2457117 = { func_125(iParam1) };
		if (unk_0x0BB7D2D2CAAFD70C(&Global_2457104))
		{
			if (unk_0x0BB7D2D2CAAFD70C(&Global_2457117))
			{
				unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104);
				unk_0x59E0C66A4FA07806(&Global_2457069, 35, &Global_2457117);
				if (Global_2457034 == Global_2457069)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_141(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x55191629F1199760())
		{
			iVar3 = iVar0;
			if (unk_0x784B3253F40F728C(iVar3))
			{
				iVar4 = unk_0x8F765930684A893F(iVar3);
				if (func_192(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xA34E7C2A5118D638())
					{
						iVar1++;
						if (func_140(unk_0xA34E7C2A5118D638(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_192(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xA34E7C2A5118D638())
				{
					if (func_142(unk_0xA34E7C2A5118D638(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_140(unk_0xA34E7C2A5118D638(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_139(*iParam1, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_139(*iParam1, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_142(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_143(iParam0), func_143(iParam1));
	return 0f;
}

Vector3 func_143(var uParam0)
{
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(uParam0), 0);
}

int func_144(int iParam0)
{
	int iVar0;
	
	if (unk_0xBAEDEB596C4FA2C5() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_139(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_145(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xA1836B70A59643DD(iParam0) > func_135(unk_0xA34E7C2A5118D638()))
		{
			iParam0 = -func_135(unk_0xA34E7C2A5118D638());
		}
	}
	if (func_146(8000, 0, 0) > 0)
	{
		if (func_146(8000, 0, 0) < (iParam0 + func_135(unk_0xA34E7C2A5118D638())))
		{
			iParam0 = (func_146(8000, 0, 0) - func_135(unk_0xA34E7C2A5118D638()));
		}
	}
	return iParam0;
}

int func_146(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_273943[iParam0];
}

int func_147()
{
	return 1;
}

int func_148(var uParam0)
{
	if (unk_0x544AEDB4A15228FF(uParam0))
	{
		return 1;
	}
	else if (unk_0xF8D041B05C3D1FD4(uParam0, "") || unk_0xF8D041B05C3D1FD4(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_149(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_150(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

int func_151(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_44(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_151(iParam0, func_44(iParam1), 0);
	iVar0++;
	if (!func_137(iParam0))
	{
		func_130(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_131(iParam0, iVar0, iParam1, 1);
	}
}

void func_153()
{
	if (unk_0x1BDB4A81F7EE9BE6(Local_98.f_2) && !unk_0xB6900B8CB0ABBD2B(unk_0xF8A3C382964380BC(Local_98.f_2)))
	{
		if (!unk_0x6B4865E08E90ACC5(uLocal_225))
		{
			uLocal_225 = unk_0x361E437CE4AD5532(unk_0xF8A3C382964380BC(Local_98.f_2));
			if (!unk_0xDCC86F723E82125E(Local_98.f_1, 0))
			{
				unk_0x31FDDAFCCFEFA478(uLocal_225, 307);
				unk_0x8755DAC584918BF9(uLocal_225, "PTD_BLIPN");
			}
			else
			{
				unk_0x31FDDAFCCFEFA478(uLocal_225, 64);
				unk_0x8755DAC584918BF9(uLocal_225, "PTD_BLIPH");
			}
			unk_0x32546F91F646B246(uLocal_225, 1);
			unk_0xD66C551FC33EDE83(uLocal_225, 7000);
			unk_0xEB19FBC5156AAE3A(uLocal_225, 6);
			if (func_155())
			{
				unk_0xB8D190382B0188FE(uLocal_225, 0);
			}
		}
		else
		{
			if (!unk_0xDCC86F723E82125E(Local_98.f_1, 0))
			{
				unk_0xB83D60555E92E313(uLocal_225, unk_0xF2DB717A73826179(unk_0x59DD203239FBDCAD(unk_0xF8A3C382964380BC(Local_98.f_2))));
			}
			if (func_155())
			{
				unk_0xB8D190382B0188FE(uLocal_225, 0);
			}
			else
			{
				unk_0xB8D190382B0188FE(uLocal_225, 4);
			}
		}
	}
}

void func_154(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

int func_155()
{
	if (func_156(16))
	{
		return 1;
	}
	if (func_156(0))
	{
		return 1;
	}
	return 0;
}

bool func_156(int iParam0)
{
	var uVar0;
	
	uVar0 = func_151(2453, -1, 0);
	return unk_0xDCC86F723E82125E(uVar0, iParam0);
}

bool func_157(int iParam0)
{
	return unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(Global_2409442, unk_0x2AA13A84EE2D3B24())) > iParam0;
}

int func_158()
{
	return Local_98.f_0;
}

int func_159(int iParam0)
{
	return Local_126[iParam0 /*3*/];
}

bool func_160(int iParam0)
{
	return !func_161(iParam0);
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5057)
			{
				return 0;
			}
			if (func_163(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5058)
			{
				return 0;
			}
			if (func_163(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5059)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5060)
			{
				return 0;
			}
			if (func_163(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_162(4))
			{
				return 0;
			}
			if (func_163(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_162(4))
			{
				return 0;
			}
			if (func_163(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_162(4))
			{
				return 0;
			}
			if (func_163(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_162(4))
			{
				return 0;
			}
			if (func_163(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			if (unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 0) || unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_247.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_162(4))
			{
				return 0;
			}
			if (func_163(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_162(4))
			{
				return 0;
			}
			if (func_163(unk_0xA34E7C2A5118D638(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_192(unk_0x20A20BF765914E37(iVar0), 0, 1))
		{
			if (unk_0xDCC86F723E82125E(Global_2417071[iVar0 /*306*/].f_206, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_163(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_206, iParam1);
}

int func_164()
{
	bool bVar0;
	
	func_171(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315886 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 1;
		}
	}
	if (func_170())
	{
		return 1;
	}
	if (Global_2443300)
	{
		return 1;
	}
	if (func_169())
	{
		return 1;
	}
	if (func_168(157))
	{
		if (!func_167())
		{
			return 1;
		}
	}
	if (func_168(155))
	{
		return 1;
	}
	if (!unk_0xDC6347A8EBB9281E())
	{
		return 1;
	}
	if (func_165() != 0)
	{
		if (unk_0xCBC8FFE55DC722B5(func_165()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	switch (func_166())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_166()
{
	return Global_25115;
}

bool func_167()
{
	return Global_2433098.f_574;
}

int func_168(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_169()
{
	return Global_2441381;
}

bool func_170()
{
	return Global_2433098.f_569;
}

void func_171(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x74238B7708290D43(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 325:
					func_172(iVar0);
					break;
				
				case 2:
					unk_0x74238B7708290D43(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_172(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (func_192(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xCF4C00513A86E840(Var0.f_1);
			if (unk_0x95CCECA3948CFE7B(uVar3))
			{
				if (unk_0x277ECDA23D8CCEB4(iVar3, 0))
				{
					uVar4 = unk_0x275BEBE583A163B5(iVar3, 0);
					if (unk_0x8AA327BE085BA8B4(uVar4, Var0.f_2) && unk_0xEE66E067C1F8D1F4())
					{
						if (func_173(uVar4, &bVar5))
						{
							unk_0x3440777B8DAAC4C1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xEF84021B2AB5E334(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_173(int iParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(iParam0))
		{
			if (unk_0x75932C6E41A19C54(iParam0))
			{
				unk_0xFD816D0E738EB817(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x1F59F772AA90087D(iParam0, 0))
		{
			if (unk_0xFE7BCFB02217DCDF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_174()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_175()
{
	if (unk_0x6B4865E08E90ACC5(uLocal_225))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_225);
	}
	if (unk_0xDCC86F723E82125E(Local_98.f_1, 1))
	{
		func_27(2, "PTD_FAIL", 0, 0, -99);
	}
	func_178();
	if (func_158() == 4 && Local_98.f_4 != 0)
	{
		unk_0xB7FAA1C591A4664F(Local_98.f_4, 0);
	}
	func_177(15, 0);
	func_176();
}

void func_176()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_177(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
		{
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
		}
	}
	else if (unk_0xDCC86F723E82125E(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206, iParam0))
	{
		unk_0x77621132305B133B(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_206), iParam0);
	}
}

void func_178()
{
	unk_0xA9351C9309E03069(&uLocal_223);
}

void func_179(struct<20> Param0)
{
	int iVar0;
	
	func_190(func_191(Param0.f_0), Param0);
	unk_0xB575A770677DC316(1);
	unk_0xC908ABD9A1B6E6E6(1);
	func_188(0, -1, 0);
	unk_0xFE7B095449D5F053(&Local_98, 28);
	unk_0x99592530153DB318(&Local_126, 97);
	if (!func_187())
	{
		func_175();
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		unk_0x6ECAEE4901F465A1(0);
		if (unk_0x736DBE187CFCC863())
		{
			iVar0 = unk_0x531444754C426278(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_98.f_4 = joaat("cuban800");
					Local_98.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_98.f_4 = joaat("stunt");
					Local_98.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_98.f_4 = joaat("duster");
					Local_98.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_98.f_4 = joaat("mammatus");
					Local_98.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_98.f_4 = joaat("maverick");
					Local_98.f_5 = joaat("a_m_m_eastsa_02");
					unk_0x59A0729D503ED758(&(Local_98.f_1), 0);
					break;
				
				case 5:
					Local_98.f_4 = joaat("swift");
					Local_98.f_5 = joaat("a_m_y_busicas_01");
					unk_0x59A0729D503ED758(&(Local_98.f_1), 0);
					break;
			}
			if (Local_98.f_4 != 0)
			{
				unk_0xB7FAA1C591A4664F(Local_98.f_4, 1);
			}
			func_186();
			func_180();
		}
		func_177(15, 1);
		Local_126[unk_0x935FA14EDA695A82() /*3*/] = 0;
	}
	else
	{
		func_175();
	}
}

void func_180()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = unk_0x531444754C426278(0, 3);
		Local_98.f_9[iVar0 /*3*/] = { func_182(iVar1) };
		if (iVar0 > 0)
		{
			if (func_181(Local_98.f_9[iVar0 /*3*/], Local_98.f_9[(iVar0 - 1) /*3*/], 250f, 0))
			{
				Local_98.f_9[iVar0 /*3*/] = { func_182(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_181(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xA3C5926D6E5619AE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_182(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_185();
		
		case 1:
			return func_184();
		
		case 2:
			return func_183();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_183()
{
	switch (unk_0x531444754C426278(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_184()
{
	switch (unk_0x531444754C426278(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_185()
{
	switch (unk_0x531444754C426278(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_186()
{
	Local_98.f_6 = { func_182(unk_0x531444754C426278(0, 3)) };
	Local_98.f_6 = { Local_98.f_6 + Vector(120f, 0f, 0f) };
}

int func_187()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 0;
		}
		if (unk_0x1228FD88C2BCDCE2())
		{
			return 1;
		}
		if (func_170())
		{
			return 0;
		}
		if (func_168(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_188(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_176();
			}
			else
			{
				return 0;
			}
		}
		if (!func_189())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_176();
					}
					else
					{
						return 0;
					}
				}
				if (func_170())
				{
					if (!bParam2)
					{
						func_176();
					}
					else
					{
						return 0;
					}
				}
				if (func_168(155))
				{
					if (!bParam2)
					{
						func_176();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_176();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_176();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_176();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_189()
{
	return Global_1315886;
}

void func_190(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		func_176();
	}
	unk_0x170190A515596E3F(uParam0, 0, Param1.f_16);
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 65:
			return 32;
		
		case 66:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

int func_192(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

