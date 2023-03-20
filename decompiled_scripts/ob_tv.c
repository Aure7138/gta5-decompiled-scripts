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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	char cLocal_45[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	char cLocal_61[64] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	sLocal_17 = "NULL";
	iLocal_20 = 3;
	iLocal_24 = 1;
	iLocal_34 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	StringCopy(&cLocal_45, "NULL", 64);
	StringCopy(&cLocal_61, "NULL", 64);
	if (unk_0xD63E63DFACCEB80E(2))
	{
		func_65();
	}
	if (unk_0x746960881FB19A89(uScriptParam_0))
	{
		iLocal_36 = iScriptParam_0;
		iLocal_39 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64();
		if (unk_0x746960881FB19A89(iScriptParam_0))
		{
			if ((iLocal_42 != -1 && (func_63() && !func_62())) && !func_61(iLocal_42))
			{
				func_65();
			}
			if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() == 3)
			{
				func_65();
			}
			if (func_60(13) || func_60(14))
			{
				func_65();
			}
			if (unk_0x4D66F29B0136D0A8(iScriptParam_0))
			{
				func_65();
			}
			if (unk_0x65E80118D23AFB04(iScriptParam_0))
			{
				if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
				{
					func_59();
					if (unk_0xFD181DDA4D8D6786(iScriptParam_0) < 950)
					{
						func_65();
					}
					switch (iLocal_28)
					{
						case 0:
							func_56();
							if (iLocal_42 == 5)
							{
								if (func_55(18) == 1 && func_55(20) == 0)
								{
									uLocal_40 = unk_0x3FD2411A99A730CB(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x7843C24006B3F945(uLocal_40))
									{
										unk_0xBE6A03B57869FB71(uLocal_40, 9);
									}
									unk_0xE60DEFFB2A853900();
								}
							}
							if (iLocal_42 == -1)
							{
								func_65();
							}
							else
							{
								func_54();
								unk_0xB62592192D8B6239("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								unk_0x12988F278DF9017C(0);
								Global_24504[iLocal_42 /*11*/].f_2 = 0;
								Global_24504[iLocal_42 /*11*/].f_6 = 1;
								Global_24504[iLocal_42 /*11*/] = unk_0x073B65E051D2F03E(0, 2);
								Global_24504[iLocal_42 /*11*/].f_1 = 0;
								Global_24504[iLocal_42 /*11*/].f_4 = 0;
								Global_24504[iLocal_42 /*11*/].f_7 = 0;
								Global_24504[iLocal_42 /*11*/].f_8 = 0;
								Global_24504[iLocal_42 /*11*/].f_10 = 0;
								fLocal_29 = -4f;
								func_52(&uLocal_25);
								func_50();
								func_49();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_28 = 1;
							}
							break;
						
						case 1:
							if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x4A2A09CC36F559D1(iLocal_36) && unk_0xA21A67D28893E707(iLocal_36, 1119092736))
							{
								if (func_41() || Global_24504[iLocal_42 /*11*/].f_5)
								{
									iLocal_28 = 2;
								}
							}
							else
							{
								func_40(&iLocal_41);
							}
							break;
						
						case 2:
							func_50();
							if (!func_61(iLocal_42))
							{
								func_40(&iLocal_41);
								if (func_39("TV_HLP1"))
								{
									unk_0x35611EEE7A1FFEDB(1);
								}
							}
							if (unk_0x746960881FB19A89(iLocal_36))
							{
								if (!unk_0xB3CC729BBAA21637(iLocal_36))
								{
									unk_0x407020DF5CAB33D3(iLocal_36, 1);
								}
							}
							if (unk_0x746960881FB19A89(iLocal_38))
							{
								if (!unk_0xB3CC729BBAA21637(iLocal_38))
								{
									unk_0x407020DF5CAB33D3(iLocal_38, 1);
								}
							}
							if (unk_0x746960881FB19A89(iLocal_37))
							{
								if (unk_0xB3CC729BBAA21637(iLocal_37))
								{
									unk_0x407020DF5CAB33D3(iLocal_37, 0);
								}
							}
							if (!unk_0x6B08EC9A88700FBB(&cLocal_45, "NULL"))
							{
								unk_0x0CFDF5C48961D6EC(&cLocal_45, 0);
							}
							unk_0xED84650A83D5FB01(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x746960881FB19A89(iLocal_39))
							{
								unk_0xE735164E4DC73664(iLocal_39);
							}
							if (!func_61(iLocal_42))
							{
								if ((Global_24504[iLocal_42 /*11*/] == 3 || Global_24504[iLocal_42 /*11*/] == 2) || Global_24504[iLocal_42 /*11*/] == -1)
								{
									Global_24504[iLocal_42 /*11*/] = unk_0x073B65E051D2F03E(0, 2);
								}
								unk_0x046328FE0F8AD206(Global_24504[iLocal_42 /*11*/]);
								unk_0x79FFEE99669480AB(fLocal_29);
							}
							else
							{
								iLocal_43 = Global_24504[iLocal_42 /*11*/];
								iLocal_44 = Global_24504[iLocal_42 /*11*/].f_1;
								unk_0x7D299219E3D0C91D(iLocal_43, func_38(iLocal_44), Global_24504[iLocal_42 /*11*/].f_9);
								unk_0x046328FE0F8AD206(iLocal_43);
								if (Global_24504[iLocal_42 /*11*/].f_7)
								{
									Global_24504[iLocal_42 /*11*/].f_5 = 0;
									Global_24504[iLocal_42 /*11*/].f_7 = 0;
								}
							}
							Global_24504[iLocal_42 /*11*/].f_2 = 1;
							func_37(133, 1);
							func_37(131, 1);
							func_37(132, 1);
							iLocal_28 = 3;
							break;
						
						case 3:
							if (Global_24504[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							if (Global_24504[iLocal_42 /*11*/].f_7 && func_61(iLocal_42))
							{
								Global_24504[iLocal_42 /*11*/].f_7 = 0;
								iLocal_28 = 6;
							}
							if (!func_35(iLocal_42))
							{
								func_34();
								iLocal_28 = 5;
							}
							else
							{
								func_32();
								if (unk_0x446BAD143D271282() == -1)
								{
									unk_0x046328FE0F8AD206(Global_24504[iLocal_42 /*11*/]);
								}
								if (func_14())
								{
									iLocal_28 = 6;
								}
							}
							break;
						
						case 5:
							if (func_35(iLocal_42))
							{
								iLocal_28 = 2;
							}
							if (Global_24504[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_41 != -1)
							{
								func_40(&iLocal_41);
							}
							Global_24504[iLocal_42 /*11*/].f_5 = 0;
							Global_24504[iLocal_42 /*11*/].f_4 = 0;
							Global_24504[iLocal_42 /*11*/].f_1 = 0;
							Global_24504[iLocal_42 /*11*/].f_2 = 0;
							Global_24504[iLocal_42 /*11*/].f_7 = 0;
							Global_24504[iLocal_42 /*11*/].f_8 = 0;
							Global_24504[iLocal_42 /*11*/].f_10 = 0;
							iLocal_28 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_65();
			unk_0xE60DEFFB2A853900();
		}
	}
	func_65();
	unk_0xE60DEFFB2A853900();
}

void func_1()
{
	if (iLocal_42 != -1)
	{
		Global_24504[iLocal_42 /*11*/] = unk_0x446BAD143D271282();
	}
	fLocal_29 = unk_0x2B2C515E21463B29();
	unk_0x046328FE0F8AD206(-1);
	func_4();
	if (unk_0x7B47A371E2D93C2C(joaat("family5")) == 0)
	{
		if (!unk_0x6B08EC9A88700FBB(&cLocal_45, "NULL"))
		{
			unk_0x0CFDF5C48961D6EC(&cLocal_45, 1);
		}
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x35611EEE7A1FFEDB(1);
	}
	func_3();
	func_49();
	if (unk_0x746960881FB19A89(iLocal_37))
	{
		if (!unk_0xB3CC729BBAA21637(iLocal_37))
		{
			unk_0x407020DF5CAB33D3(iLocal_37, 1);
		}
	}
	unk_0xEA8A73C2DA1D3E29(0);
	func_2();
}

void func_2()
{
	if (unk_0x708CE249B4F97BF8())
	{
		if (iLocal_86 == 1)
		{
			unk_0x8BC38BE8985C11D5();
			iLocal_86 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_34 == -1)
	{
		unk_0xCC9F831B0FB88625(iLocal_34);
		if (unk_0x746960881FB19A89(iLocal_36))
		{
			if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x407020DF5CAB33D3(iLocal_36, 0);
				if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x2C21286870CDCF47(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x2C21286870CDCF47(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x746960881FB19A89(iLocal_38))
	{
		unk_0x407020DF5CAB33D3(iLocal_38, 0);
	}
}

void func_4()
{
	if (iLocal_84)
	{
		unk_0x42DDE752BB6A4CBA(0, 0, 3000, 1, 0, 0);
		if (unk_0x8E3093821480140B(uLocal_77))
		{
			unk_0x45826D2663F7FD9C(uLocal_77, 0);
		}
		unk_0x0CF4B2266E47C15F(uLocal_77, 0);
		unk_0x5EF916489F3787FC(0);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 0);
			unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
			unk_0x284B09A617F0967C(unk_0x9F92518438215DD0(), Local_30, 1, 0, 2);
			if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
			{
				if (bLocal_35 == 1)
				{
					bLocal_35 = false;
					unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
				}
			}
			unk_0x407020DF5CAB33D3(unk_0x9F92518438215DD0(), 1);
		}
		if (!unk_0x6B08EC9A88700FBB(&cLocal_61, "NULL"))
		{
			if (unk_0x370603716EC2D420(&cLocal_61))
			{
				unk_0x6041FBFC1EE8196A(&cLocal_61);
			}
		}
		if (unk_0x746960881FB19A89(iLocal_38))
		{
			unk_0x407020DF5CAB33D3(iLocal_38, 1);
		}
		func_5(0, 1, 0, 0);
		unk_0xEA8A73C2DA1D3E29(0);
		iLocal_84 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_13(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
			}
			if (!func_12())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_11(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_13(0);
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_11(0, iParam3, iParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_6(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_6(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return 1;
	}
	if (func_7())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_9(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_10()
{
	return Global_1312737;
}

int func_11(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
	}
}

int func_14()
{
	if (!func_61(iLocal_42))
	{
		if (((((((func_28(&uLocal_25) >= 1f && unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_87, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x835E5CA41A401AEB(iLocal_36) == unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0())) && !func_27(8, -1)) && !unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0)) && unk_0x89A834E1FA8C7AB6(unk_0x9F92518438215DD0(), Local_30, 90f)) && !unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) && !unk_0x2D8FCFBC4E01FF7C())
		{
			if (iLocal_41 == -1)
			{
				func_26();
				func_25(&iLocal_41, 3, "TV_HLP5", 0, 0);
			}
			else if (func_23(iLocal_41, 1))
			{
				func_40(&iLocal_41);
				func_52(&uLocal_25);
				Global_24504[iLocal_42 /*11*/].f_7 = 0;
				if (unk_0x25D9498E75D50851("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x86F4B3D6FF8F65DE(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (func_39("TV_HLP5"))
			{
				unk_0x35611EEE7A1FFEDB(1);
			}
			func_2();
			func_40(&iLocal_41);
		}
	}
	return 0;
}

void func_15()
{
	if (iLocal_84 == 0)
	{
		unk_0x303F3ACCD1D0223D(2, 222);
		if (unk_0x205C5BF7277043DF(2, 222))
		{
			func_40(&iLocal_41);
			func_25(&iLocal_41, 3, "TV_HLP6", 0, 0);
			func_22();
		}
	}
	else
	{
		unk_0x6A6A41C66448AD09(2, 200, 1);
		if (unk_0xB3CC729BBAA21637(unk_0x9F92518438215DD0()))
		{
			unk_0x407020DF5CAB33D3(unk_0x9F92518438215DD0(), 0);
		}
		if (bLocal_35)
		{
			if (unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
			{
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 0);
			}
		}
		unk_0x10663E41E1571A19();
		unk_0x2CFACA98D26AB980(unk_0x9F92518438215DD0());
		func_20(1, 1);
		unk_0x303F3ACCD1D0223D(2, 222);
		func_16();
		if (unk_0x205C5BF7277043DF(2, 222) || (unk_0x286FD331C17C5174(2) && unk_0x52F1618353272A82(2, 200)))
		{
			func_40(&iLocal_41);
			func_4();
		}
	}
}

void func_16()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_19(0))
		{
			func_17(0);
		}
		unk_0xEDB9A377CD8B7F03(&Global_2264, 2);
	}
}

void func_17(int iParam0)
{
	if (Global_14551)
	{
		func_18(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_12())
	{
		Global_14393.f_1 = 3;
	}
}

void func_18(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_20(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_21(0))
		{
			if (!iLocal_21)
			{
				if (unk_0x25D9498E75D50851("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x86F4B3D6FF8F65DE(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x446BAD143D271282() == 0)
				{
					unk_0x046328FE0F8AD206(1);
				}
				else
				{
					unk_0x046328FE0F8AD206(0);
				}
				iLocal_21 = 1;
			}
		}
		else if (iLocal_21)
		{
			iLocal_21 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x83660128143A483C(2, 219) - 127);
		if (!iLocal_22)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x2B2C515E21463B29();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x79FFEE99669480AB(fVar2);
				iLocal_23 = unk_0x17103F66FBB44C3C();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x2B2C515E21463B29();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x79FFEE99669480AB(fVar2);
				iLocal_23 = unk_0x17103F66FBB44C3C();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_24 = 1;
			}
			else if (iLocal_24)
			{
				if (unk_0x25D9498E75D50851("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x86F4B3D6FF8F65DE(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_24 = 0;
				}
			}
		}
		if (iLocal_22)
		{
			if (iVar1 == 0 || unk_0x17103F66FBB44C3C() > iLocal_23 + 24)
			{
				iLocal_22 = 0;
			}
		}
	}
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x83660128143A483C(2, 218) - 127);
	if (iParam0 || unk_0x83666F9FB8FEBD4B() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			unk_0xC1B1E9A034A63A62(0);
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_84 == 0)
	{
		uLocal_77 = unk_0x7B03062EABD76E3E("DEFAULT_SCRIPTED_CAMERA", Local_78, Local_81, fVar0, 0, 2);
		unk_0x894CB06DA29A7D57(uLocal_77, 100f);
		unk_0x45826D2663F7FD9C(uLocal_77, 1);
		unk_0x42DDE752BB6A4CBA(1, 0, 3000, 1, 0, 0);
		if (unk_0x746960881FB19A89(iLocal_38))
		{
			unk_0x407020DF5CAB33D3(iLocal_38, 0);
		}
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			unk_0xD9B13F0A69759C12(unk_0x9F92518438215DD0(), 1);
			unk_0x32D18ECD9E6F9BE2(unk_0x9F92518438215DD0());
			if (unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
			{
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 0);
				bLocal_35 = true;
			}
			unk_0x284B09A617F0967C(unk_0x9F92518438215DD0(), Local_30, -1, 0, 2);
			unk_0x407020DF5CAB33D3(unk_0x9F92518438215DD0(), 0);
		}
		if (!unk_0x6B08EC9A88700FBB(&cLocal_61, "NULL"))
		{
			if (!unk_0x370603716EC2D420(&cLocal_61))
			{
				unk_0x9B517A4FE28A719F(&cLocal_61);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0xEA8A73C2DA1D3E29(1);
		iLocal_84 = 1;
	}
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x378E80A2B7D7C8DF(unk_0x2563F6EECD8726D3()))
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (unk_0xC42238EA2EBA3C42())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x7B47A371E2D93C2C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x2D8FCFBC4E01FF7C())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = unk_0x81ACA1EEF1E4410D();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!unk_0x9E9AFDBF482248F6(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_26()
{
	if (unk_0x708CE249B4F97BF8())
	{
		if (iLocal_86 == 0)
		{
			unk_0x032EB1E21223D9F0("TV_Controls");
			iLocal_86 = 1;
		}
	}
}

bool func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

float func_28(var uParam0)
{
	if (func_31(uParam0))
	{
		if (func_30(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_29(unk_0x94E72F17611BCD3C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_29(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
}

bool func_30(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 2);
}

bool func_31(var uParam0)
{
	return unk_0x94E72F17611BCD3C(*uParam0, 1);
}

void func_32()
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	unk_0xCC9F831B0FB88625(iLocal_34);
	unk_0xF36D3CA21410B7D5(4);
	unk_0x0ABDE626ED91F161(1);
	unk_0xBE92CBA39C1D2EC8(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0xCC9F831B0FB88625(unk_0x94C7C4D27117B303());
}

void func_33(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x578421E3467DA481(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_34()
{
	Global_24504[iLocal_42 /*11*/].f_7 = 0;
	Global_24504[iLocal_42 /*11*/] = unk_0x446BAD143D271282();
	fLocal_29 = unk_0x2B2C515E21463B29();
	if (unk_0x370603716EC2D420(&cLocal_61))
	{
		unk_0x6041FBFC1EE8196A(&cLocal_61);
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x35611EEE7A1FFEDB(1);
	}
	func_40(&iLocal_41);
	unk_0x046328FE0F8AD206(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_49();
}

int func_35(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_36(unk_0xCFC72E446B0B3AD7()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_36(int iParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(iParam0), 0);
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x39496A55977AA312(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC46BDC34976E9532(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_38(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_39(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_40(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_24(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_41()
{
	if (func_28(&uLocal_25) < 1f)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if ((!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_87, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x89A834E1FA8C7AB6(unk_0x9F92518438215DD0(), Local_30, 90f)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0x835E5CA41A401AEB(iLocal_36) != unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (func_27(8, -1))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (Global_87295)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (Global_24504[iLocal_42 /*11*/].f_8)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (iLocal_41 == -1)
	{
		func_25(&iLocal_41, 3, "TV_HLP1", 0, 0);
		return 0;
	}
	if (func_23(iLocal_41, 1))
	{
		func_40(&iLocal_41);
		func_52(&uLocal_25);
		Global_24504[iLocal_42 /*11*/].f_7 = 1;
		if (unk_0x25D9498E75D50851("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			unk_0x86F4B3D6FF8F65DE(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_42(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_48((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_43();
	}
}

void func_43()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_46() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_44();
				}
			}
		}
	}
}

int func_44()
{
	if (func_45(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

int func_46()
{
	return Global_24444;
}

int func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
	}
	return 0;
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_10();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0xF105313ACEF0ED40("tvscreen"))
	{
		unk_0xCAA77F4562BA6521("tvscreen");
		iLocal_34 = -1;
		unk_0xCC9F831B0FB88625(unk_0x94C7C4D27117B303());
	}
}

void func_50()
{
	int iVar0;
	
	if (iLocal_42 == 4)
	{
		func_51();
	}
	if (unk_0xF105313ACEF0ED40("tvscreen"))
	{
		unk_0xCAA77F4562BA6521("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x746960881FB19A89(iLocal_36))
	{
		func_65();
	}
	iVar0 = unk_0xB6A50C909A8FABC3(iLocal_36);
	unk_0x6BA97884B189F6EC("tvscreen", 0);
	unk_0x6987F18E73B9F99A(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_42 != 4)
	{
		while (!unk_0x02B260881764C41E(iVar0))
		{
			if (!unk_0x746960881FB19A89(iLocal_36))
			{
				func_65();
			}
			if (!unk_0x65E80118D23AFB04(iLocal_36))
			{
				func_65();
			}
			if (!unk_0xF105313ACEF0ED40("tvscreen"))
			{
				unk_0x6BA97884B189F6EC("tvscreen", 0);
			}
			if (!unk_0x02B260881764C41E(iVar0))
			{
				unk_0x6987F18E73B9F99A(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_34 = unk_0x5AC5E5B1593F4965("tvscreen");
	func_3();
}

void func_51()
{
	if (unk_0x746960881FB19A89(iLocal_36))
	{
		if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_36 = 0;
	iLocal_36 = unk_0xA668F769BFDCA0AD(joaat("v_ilev_mm_screen2"), Local_30, 1, 1, 0);
	unk_0x03D97EDECF2E1859(iLocal_36, uLocal_33);
	unk_0xD9B13F0A69759C12(iLocal_36, 1);
	unk_0x407020DF5CAB33D3(iLocal_36, 0);
	iLocal_38 = 0;
	iLocal_38 = unk_0xA668F769BFDCA0AD(joaat("v_ilev_mm_screen2_vl"), Local_30, 1, 1, 0);
	unk_0x03D97EDECF2E1859(iLocal_38, uLocal_33);
	unk_0xD9B13F0A69759C12(iLocal_38, 1);
	unk_0x407020DF5CAB33D3(iLocal_38, 0);
}

void func_52(var uParam0)
{
	func_53(uParam0, 0f);
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_29(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_54()
{
}

int func_55(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97358.f_7341.f_328[iParam0 /*6*/];
}

void func_56()
{
	Local_30 = { unk_0x77009B1C011405A9(iLocal_36, 1) };
	uLocal_33 = unk_0xE691E4EA6B4440C6(iLocal_36);
	func_58();
	if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_42 = 0;
			Local_78 = { -9.8135f, -1440.913f, 31.3654f };
			Local_81 = { 0f, 0f, -134.3211f };
			Local_87 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_42 = 2;
			Local_78 = { 1978.23f, 3819.65f, 34.2724f };
			Local_81 = { 0f, 0f, -105.15f };
			Local_87 = { 1978.33f, 3819.717f, 32.4501f };
			func_57();
			StringCopy(&cLocal_45, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_42 = 1;
			Local_78 = { 2.5724f, 527.9989f, 176.1619f };
			Local_81 = { 0f, 0f, -29.9488f };
			Local_87 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_42 = 3;
			Local_78 = { -1160.502f, -1520.76f, 10.7393f };
			Local_81 = { 0f, 0f, 60.061f };
			Local_87 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_45, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_61, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_42 = 4;
			Local_78 = { -802.8972f, 172.537f, 74.5801f };
			Local_81 = { 0f, 0f, -69.0273f };
			Local_87 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_42 = 5;
			Local_78 = { -808.3051f, 171.2623f, 77.2822f };
			Local_81 = { 1.8886f, 0f, 110.9232f };
			Local_87 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_57()
{
	iLocal_37 = unk_0xA668F769BFDCA0AD(joaat("prop_tt_screenstatic"), Local_30, 1, 1, 0);
	unk_0x03D97EDECF2E1859(iLocal_37, uLocal_33);
	unk_0x407020DF5CAB33D3(iLocal_37, 1);
	unk_0xD9B13F0A69759C12(iLocal_37, 1);
}

void func_58()
{
	unk_0x7D299219E3D0C91D(0, func_38(1), 0);
	if (func_55(22))
	{
		unk_0x7D299219E3D0C91D(1, func_38(12), 0);
	}
	else
	{
		unk_0x7D299219E3D0C91D(1, func_38(2), 0);
	}
}

void func_59()
{
	if (iLocal_42 == -1)
	{
		return;
	}
	if (Global_24504[iLocal_42 /*11*/].f_10 == 0)
	{
		if (iLocal_85 == 1)
		{
			if (unk_0x746960881FB19A89(iLocal_39))
			{
				unk_0xC204B4E5503A54EA(iLocal_39, 0);
			}
			if (unk_0x746960881FB19A89(iLocal_36))
			{
				unk_0xC204B4E5503A54EA(iLocal_36, 0);
			}
			if (unk_0x746960881FB19A89(iLocal_38))
			{
				unk_0xC204B4E5503A54EA(iLocal_38, 0);
			}
			if (unk_0x746960881FB19A89(iLocal_37))
			{
				unk_0xC204B4E5503A54EA(iLocal_37, 0);
			}
			iLocal_85 = 0;
		}
	}
	else if (iLocal_85 == 0)
	{
		if (unk_0x746960881FB19A89(iLocal_39))
		{
			unk_0xC204B4E5503A54EA(iLocal_39, 1);
		}
		if (unk_0x746960881FB19A89(iLocal_36))
		{
			unk_0xC204B4E5503A54EA(iLocal_36, 1);
		}
		if (unk_0x746960881FB19A89(iLocal_38))
		{
			unk_0xC204B4E5503A54EA(iLocal_38, 1);
		}
		if (unk_0x746960881FB19A89(iLocal_37))
		{
			unk_0xC204B4E5503A54EA(iLocal_37, 1);
		}
		iLocal_85 = 1;
	}
}

bool func_60(int iParam0)
{
	return Global_34913 == iParam0;
}

int func_61(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_24504[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xC981EEB259E36845() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

void func_64()
{
}

void func_65()
{
	if (iLocal_42 == -1)
	{
		unk_0xE60DEFFB2A853900();
	}
	func_40(&iLocal_41);
	if (iLocal_42 != -1)
	{
		func_1();
		Global_24504[iLocal_42 /*11*/].f_6 = 0;
		Global_24504[iLocal_42 /*11*/].f_7 = 0;
		Global_24504[iLocal_42 /*11*/].f_8 = 0;
		Global_24504[iLocal_42 /*11*/].f_4 = 0;
		Global_24504[iLocal_42 /*11*/].f_5 = 0;
		Global_24504[iLocal_42 /*11*/].f_2 = 0;
		Global_24504[iLocal_42 /*11*/] = -1;
		Global_24504[iLocal_42 /*11*/].f_1 = 0;
		Global_24504[iLocal_42 /*11*/].f_10 = 0;
	}
	if ((func_39("TV_HLP1") || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x35611EEE7A1FFEDB(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_66();
	if (unk_0x370603716EC2D420(&cLocal_61))
	{
		unk_0x6041FBFC1EE8196A(&cLocal_61);
	}
	unk_0x012DF19A54A5CA97();
	func_2();
	unk_0xE60DEFFB2A853900();
}

void func_66()
{
	func_49();
	if (unk_0x746960881FB19A89(iLocal_36))
	{
		if (unk_0xB6A50C909A8FABC3(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x83A49C880CB75451(&iLocal_36);
			unk_0x0880E86251A44B7F(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x746960881FB19A89(iLocal_38))
	{
		unk_0x83A49C880CB75451(&iLocal_38);
		unk_0x0880E86251A44B7F(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x746960881FB19A89(iLocal_37))
	{
		unk_0x83A49C880CB75451(&iLocal_37);
		unk_0x0880E86251A44B7F(joaat("prop_tt_screenstatic"));
	}
}

