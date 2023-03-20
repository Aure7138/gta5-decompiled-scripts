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
	int* iLocal_25 = NULL;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	float fLocal_33 = 0f;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
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
	int iLocal_77 = 0;
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
	if (unk_0xC968670BFACE42D9(2))
	{
		func_65();
	}
	if (unk_0x7239B21A38F536BA(iScriptParam_0))
	{
		iLocal_36 = iScriptParam_0;
		iLocal_39 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64();
		if (unk_0x7239B21A38F536BA(iScriptParam_0))
		{
			if ((iLocal_42 != -1 && (func_63() && !func_62())) && !func_61(iLocal_42))
			{
				func_65();
			}
			if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() == 3)
			{
				func_65();
			}
			if (func_60(13) || func_60(14))
			{
				func_65();
			}
			if (unk_0x8ABFB70C49CC43E2(iScriptParam_0))
			{
				func_65();
			}
			if (unk_0xCCBA154209823057(iScriptParam_0))
			{
				if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
				{
					func_59();
					if (unk_0xEEF059FAD016D209(iScriptParam_0) < 950)
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
									iLocal_40 = unk_0xB48FCED898292E52(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x52AF537A0C5B8AAD(iLocal_40))
									{
										unk_0x5C29F698D404C5E1(iLocal_40, 9);
									}
									unk_0x1090044AD1DA76FA();
								}
							}
							if (iLocal_42 == -1)
							{
								func_65();
							}
							else
							{
								func_54();
								unk_0x8F8C0E370AE62F5C("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								unk_0xC6ED9D5092438D91(0);
								Global_24504[iLocal_42 /*11*/].f_2 = 0;
								Global_24504[iLocal_42 /*11*/].f_6 = 1;
								Global_24504[iLocal_42 /*11*/] = unk_0xD53343AA4FB7DD28(0, 2);
								Global_24504[iLocal_42 /*11*/].f_1 = 0;
								Global_24504[iLocal_42 /*11*/].f_4 = 0;
								Global_24504[iLocal_42 /*11*/].f_7 = 0;
								Global_24504[iLocal_42 /*11*/].f_8 = 0;
								Global_24504[iLocal_42 /*11*/].f_10 = 0;
								fLocal_29 = -4f;
								func_52(&iLocal_25);
								func_50();
								func_49();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_28 = 1;
							}
							break;
						
						case 1:
							if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x1218E6886D3D8327(iLocal_36) && unk_0x5333F526F6AB19AA(iLocal_36, 90f))
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
									unk_0x8DFCED7A656F8802(true);
								}
							}
							if (unk_0x7239B21A38F536BA(iLocal_36))
							{
								if (!unk_0x47D6F43D77935C75(iLocal_36))
								{
									unk_0xEA1C610A04DB6BBB(iLocal_36, 1);
								}
							}
							if (unk_0x7239B21A38F536BA(iLocal_38))
							{
								if (!unk_0x47D6F43D77935C75(iLocal_38))
								{
									unk_0xEA1C610A04DB6BBB(iLocal_38, 1);
								}
							}
							if (unk_0x7239B21A38F536BA(iLocal_37))
							{
								if (unk_0x47D6F43D77935C75(iLocal_37))
								{
									unk_0xEA1C610A04DB6BBB(iLocal_37, 0);
								}
							}
							if (!unk_0x0C515FAB3FF9EA92(&cLocal_45, "NULL"))
							{
								unk_0x399D2D3B33F1B8EB(&cLocal_45, false);
							}
							unk_0x113D2C5DC57E1774(false);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x7239B21A38F536BA(iLocal_39))
							{
								unk_0x845BAD77CC770633(iLocal_39);
							}
							if (!func_61(iLocal_42))
							{
								if ((Global_24504[iLocal_42 /*11*/] == 3 || Global_24504[iLocal_42 /*11*/] == 2) || Global_24504[iLocal_42 /*11*/] == -1)
								{
									Global_24504[iLocal_42 /*11*/] = unk_0xD53343AA4FB7DD28(0, 2);
								}
								unk_0xBAABBB23EB6E484E(Global_24504[iLocal_42 /*11*/]);
								unk_0x2982BF73F66E9DDC(fLocal_29);
							}
							else
							{
								iLocal_43 = Global_24504[iLocal_42 /*11*/];
								iLocal_44 = Global_24504[iLocal_42 /*11*/].f_1;
								unk_0xF7B38B8305F1FE8B(iLocal_43, func_38(iLocal_44), Global_24504[iLocal_42 /*11*/].f_9);
								unk_0xBAABBB23EB6E484E(iLocal_43);
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
								if (unk_0xFC1E275A90D39995() == -1)
								{
									unk_0xBAABBB23EB6E484E(Global_24504[iLocal_42 /*11*/]);
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
			unk_0x1090044AD1DA76FA();
		}
	}
	func_65();
	unk_0x1090044AD1DA76FA();
}

void func_1()
{
	if (iLocal_42 != -1)
	{
		Global_24504[iLocal_42 /*11*/] = unk_0xFC1E275A90D39995();
	}
	fLocal_29 = unk_0x2170813D3DD8661B();
	unk_0xBAABBB23EB6E484E(-1);
	func_4();
	if (unk_0x2C83A9DA6BFFC4F9(joaat("family5")) == 0)
	{
		if (!unk_0x0C515FAB3FF9EA92(&cLocal_45, "NULL"))
		{
			unk_0x399D2D3B33F1B8EB(&cLocal_45, true);
		}
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x8DFCED7A656F8802(true);
	}
	func_3();
	func_49();
	if (unk_0x7239B21A38F536BA(iLocal_37))
	{
		if (!unk_0x47D6F43D77935C75(iLocal_37))
		{
			unk_0xEA1C610A04DB6BBB(iLocal_37, 1);
		}
	}
	unk_0x873FA65C778AD970(false);
	func_2();
}

void func_2()
{
	if (unk_0x48AF36444B965238())
	{
		if (iLocal_86 == 1)
		{
			unk_0x643ED62D5EA3BEBD();
			iLocal_86 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_34 == -1)
	{
		unk_0x5F15302936E07111(iLocal_34);
		if (unk_0x7239B21A38F536BA(iLocal_36))
		{
			if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0x9F47B058362C84B5(iLocal_36) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xEA1C610A04DB6BBB(iLocal_36, 0);
				if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x3A618A217E5154F0(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
				}
			}
			else
			{
				unk_0x3A618A217E5154F0(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_38))
	{
		unk_0xEA1C610A04DB6BBB(iLocal_38, 0);
	}
}

void func_4()
{
	if (iLocal_84)
	{
		unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
		if (unk_0xDFB2B516207D3534(iLocal_77))
		{
			unk_0x026FB97D0A425F84(iLocal_77, false);
		}
		unk_0x865908C81A2C22E9(iLocal_77, false);
		unk_0xB4EC2312F4E5B1F1(0f);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
			unk_0x6FA46612594F7973(unk_0xD80958FC74E988A6(), Local_30, 1, 0, 2);
			if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				if (bLocal_35 == 1)
				{
					bLocal_35 = false;
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				}
			}
			unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), 1);
		}
		if (!unk_0x0C515FAB3FF9EA92(&cLocal_61, "NULL"))
		{
			if (unk_0xB65B60556E2A9225(&cLocal_61))
			{
				unk_0xDFE8422B3B94E688(&cLocal_61);
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_38))
		{
			unk_0xEA1C610A04DB6BBB(iLocal_38, 1);
		}
		func_5(0, 1, 0, 0);
		unk_0x873FA65C778AD970(false);
		iLocal_84 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_13(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_12())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_11(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_13(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_11(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_6(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
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
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
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
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_10()
{
	return Global_1312736;
}

int func_11(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
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
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

int func_14()
{
	if (!func_61(iLocal_42))
	{
		if (((((((func_28(&iLocal_25) >= 1f && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_87, 1f, 1f, 1.5f, false, true, 0)) && unk_0x2107BA504071A6BB(iLocal_36) == unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())) && !func_27(8, -1)) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)) && unk_0xFCF37A457CB96DC0(unk_0xD80958FC74E988A6(), Local_30, 90f)) && !unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) && !unk_0xD9D2CFFF49FAB35F())
		{
			if (iLocal_41 == -1)
			{
				func_26();
				func_25(&iLocal_41, 3, "TV_HLP5", 0, 0);
			}
			else if (func_23(iLocal_41, 1))
			{
				func_40(&iLocal_41);
				func_52(&iLocal_25);
				Global_24504[iLocal_42 /*11*/].f_7 = 0;
				if (unk_0xFE02FFBED8CA9D99("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x67C540AA08E4A6F5(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (func_39("TV_HLP5"))
			{
				unk_0x8DFCED7A656F8802(true);
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
		unk_0xEDE476E5EE29EDB1(2, 222);
		if (unk_0x580417101DDB492F(2, 222))
		{
			func_40(&iLocal_41);
			func_25(&iLocal_41, 3, "TV_HLP6", 0, 0);
			func_22();
		}
	}
	else
	{
		unk_0xFE99B66D079CF6BC(2, 200, true);
		if (unk_0x47D6F43D77935C75(unk_0xD80958FC74E988A6()))
		{
			unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), 0);
		}
		if (bLocal_35)
		{
			if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
			}
		}
		unk_0x719FF505F097FD20();
		unk_0xD1C55B110E4DF534(unk_0xD80958FC74E988A6());
		func_20(1, 1);
		unk_0xEDE476E5EE29EDB1(2, 222);
		func_16();
		if (unk_0x580417101DDB492F(2, 222) || (unk_0xA571D46727E2B718(2) && unk_0x305C8DCD79DA8B0F(2, 200)))
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
		unk_0x933D6A9EEC1BACD0(&Global_2264, 2);
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
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
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
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
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
				if (unk_0xFE02FFBED8CA9D99("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x67C540AA08E4A6F5(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (unk_0xFC1E275A90D39995() == 0)
				{
					unk_0xBAABBB23EB6E484E(1);
				}
				else
				{
					unk_0xBAABBB23EB6E484E(0);
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
		iVar1 = (unk_0xD95E79E8686D2C27(2, 219) - 127);
		if (!iLocal_22)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x2170813D3DD8661B();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x2982BF73F66E9DDC(fVar2);
				iLocal_23 = unk_0x9CD27B0045628463();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x2170813D3DD8661B();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x2982BF73F66E9DDC(fVar2);
				iLocal_23 = unk_0x9CD27B0045628463();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_24 = 1;
			}
			else if (iLocal_24)
			{
				if (unk_0xFE02FFBED8CA9D99("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x67C540AA08E4A6F5(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_24 = 0;
				}
			}
		}
		if (iLocal_22)
		{
			if (iVar1 == 0 || unk_0x9CD27B0045628463() > iLocal_23 + 24)
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
	iVar1 = (unk_0xD95E79E8686D2C27(2, 218) - 127);
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
		iLocal_77 = unk_0xB51194800B257161("DEFAULT_SCRIPTED_CAMERA", Local_78, Local_81, fVar0, false, 2);
		unk_0xAE306F2A904BF86E(iLocal_77, 100f);
		unk_0x026FB97D0A425F84(iLocal_77, true);
		unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
		if (unk_0x7239B21A38F536BA(iLocal_38))
		{
			unk_0xEA1C610A04DB6BBB(iLocal_38, 0);
		}
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
			if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
				bLocal_35 = true;
			}
			unk_0x6FA46612594F7973(unk_0xD80958FC74E988A6(), Local_30, -1, 0, 2);
			unk_0xEA1C610A04DB6BBB(unk_0xD80958FC74E988A6(), 0);
		}
		if (!unk_0x0C515FAB3FF9EA92(&cLocal_61, "NULL"))
		{
			if (!unk_0xB65B60556E2A9225(&cLocal_61))
			{
				unk_0x013A80FC08F6E4F2(&cLocal_61);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x873FA65C778AD970(true);
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
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/] == 1 && Global_35609[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35609[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35609[iVar0 /*18*/].f_4 = 1;
			Global_35609[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35609[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35609[iVar0 /*18*/].f_6)
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
		if (Global_35609[iVar0 /*18*/].f_1 == iParam0)
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
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
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
		if (!Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/] = 1;
			Global_35609[iVar0 /*18*/].f_1 = Global_35726;
			Global_35726++;
			Global_35609[iVar0 /*18*/].f_3 = 0;
			Global_35609[iVar0 /*18*/].f_16 = 0;
			Global_35609[iVar0 /*18*/].f_4 = 0;
			Global_35609[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35609[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35609[iVar0 /*18*/].f_5 = iParam3;
			Global_35609[iVar0 /*18*/].f_17 = unk_0xC30338E8088E2E21();
			Global_35609[iVar0 /*18*/].f_6 = 0;
			if (!unk_0xCA042B6957743895(sParam4))
			{
				Global_35609[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35609[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35609[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35609[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_26()
{
	if (unk_0x48AF36444B965238())
	{
		if (iLocal_86 == 0)
		{
			unk_0x3D42B92563939375("TV_Controls");
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
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

float func_28(int* iParam0)
{
	if (func_31(iParam0))
	{
		if (func_30(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_29() - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_29()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_30(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 2);
}

bool func_31(var uParam0)
{
	return unk_0xA921AA820C25702F(*uParam0, 1);
}

void func_32()
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	unk_0x5F15302936E07111(iLocal_34);
	unk_0x61BB1D9B3A95D802(4);
	unk_0xC6372ECD45D73BCD(true);
	unk_0xFDDC2B4ED3C69DF0(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x5F15302936E07111(unk_0x52F0982D7FD156B6());
}

void func_33(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xF1307EF624A80D87(false);
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
	Global_24504[iLocal_42 /*11*/] = unk_0xFC1E275A90D39995();
	fLocal_29 = unk_0x2170813D3DD8661B();
	if (unk_0xB65B60556E2A9225(&cLocal_61))
	{
		unk_0xDFE8422B3B94E688(&cLocal_61);
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x8DFCED7A656F8802(true);
	}
	func_40(&iLocal_41);
	unk_0xBAABBB23EB6E484E(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_49();
}

int func_35(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_36(unk_0x4F8644AF03D0E0D6()) };
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
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_50315[iParam0 /*7*/].f_1, iVar0, true);
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
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
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
		if (Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/].f_6 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_41()
{
	if (func_28(&iLocal_25) < 1f)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if ((!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_87, 1f, 1f, 1.5f, false, true, 0) || !unk_0xFCF37A457CB96DC0(unk_0xD80958FC74E988A6(), Local_30, 90f)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0x2107BA504071A6BB(iLocal_36) != unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (func_27(8, -1))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (Global_87117)
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
		func_52(&iLocal_25);
		Global_24504[iLocal_42 /*11*/].f_7 = 1;
		if (unk_0xFE02FFBED8CA9D99("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			unk_0x67C540AA08E4A6F5(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
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
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = iParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_46() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
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
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
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
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
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
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x78DCDC15C9F116B4("tvscreen"))
	{
		unk_0xE9F6FFE837354DD4("tvscreen");
		iLocal_34 = -1;
		unk_0x5F15302936E07111(unk_0x52F0982D7FD156B6());
	}
}

void func_50()
{
	int iVar0;
	
	if (iLocal_42 == 4)
	{
		func_51();
	}
	if (unk_0x78DCDC15C9F116B4("tvscreen"))
	{
		unk_0xE9F6FFE837354DD4("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x7239B21A38F536BA(iLocal_36))
	{
		func_65();
	}
	iVar0 = unk_0x9F47B058362C84B5(iLocal_36);
	unk_0x57D9C12635E25CE3("tvscreen", false);
	unk_0xF6C09E276AEB3F2D(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_42 != 4)
	{
		while (!unk_0x113750538FA31298(iVar0))
		{
			if (!unk_0x7239B21A38F536BA(iLocal_36))
			{
				func_65();
			}
			if (!unk_0xCCBA154209823057(iLocal_36))
			{
				func_65();
			}
			if (!unk_0x78DCDC15C9F116B4("tvscreen"))
			{
				unk_0x57D9C12635E25CE3("tvscreen", false);
			}
			if (!unk_0x113750538FA31298(iVar0))
			{
				unk_0xF6C09E276AEB3F2D(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_34 = unk_0x1A6478B61C6BDC3B("tvscreen");
	func_3();
}

void func_51()
{
	if (unk_0x7239B21A38F536BA(iLocal_36))
	{
		if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_36 = 0;
	iLocal_36 = unk_0x9A294B2138ABB884(joaat("v_ilev_mm_screen2"), Local_30, true, true, false);
	unk_0x8E2530AA8ADA980E(iLocal_36, fLocal_33);
	unk_0x428CA6DBD1094446(iLocal_36, true);
	unk_0xEA1C610A04DB6BBB(iLocal_36, 0);
	iLocal_38 = 0;
	iLocal_38 = unk_0x9A294B2138ABB884(joaat("v_ilev_mm_screen2_vl"), Local_30, true, true, false);
	unk_0x8E2530AA8ADA980E(iLocal_38, fLocal_33);
	unk_0x428CA6DBD1094446(iLocal_38, true);
	unk_0xEA1C610A04DB6BBB(iLocal_38, 0);
}

void func_52(int* iParam0)
{
	func_53(iParam0, 0f);
}

void func_53(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_29() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
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
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

void func_56()
{
	Local_30 = { unk_0x3FEF770D40960D5A(iLocal_36, true) };
	fLocal_33 = unk_0xE83D4F9BA2A38914(iLocal_36);
	func_58();
	if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("prop_tv_03"))
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
	else if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("prop_trev_tv_01"))
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
	else if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("prop_tv_flat_01"))
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
	else if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("prop_tv_flat_02"))
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
	else if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0x9F47B058362C84B5(iLocal_36) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("des_tvsmash_start"))
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
	iLocal_37 = unk_0x9A294B2138ABB884(joaat("prop_tt_screenstatic"), Local_30, true, true, false);
	unk_0x8E2530AA8ADA980E(iLocal_37, fLocal_33);
	unk_0xEA1C610A04DB6BBB(iLocal_37, 1);
	unk_0x428CA6DBD1094446(iLocal_37, true);
}

void func_58()
{
	unk_0xF7B38B8305F1FE8B(0, func_38(1), false);
	if (func_55(22))
	{
		unk_0xF7B38B8305F1FE8B(1, func_38(12), false);
	}
	else
	{
		unk_0xF7B38B8305F1FE8B(1, func_38(2), false);
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
			if (unk_0x7239B21A38F536BA(iLocal_39))
			{
				unk_0x3882114BDE571AD4(iLocal_39, false);
			}
			if (unk_0x7239B21A38F536BA(iLocal_36))
			{
				unk_0x3882114BDE571AD4(iLocal_36, false);
			}
			if (unk_0x7239B21A38F536BA(iLocal_38))
			{
				unk_0x3882114BDE571AD4(iLocal_38, false);
			}
			if (unk_0x7239B21A38F536BA(iLocal_37))
			{
				unk_0x3882114BDE571AD4(iLocal_37, false);
			}
			iLocal_85 = 0;
		}
	}
	else if (iLocal_85 == 0)
	{
		if (unk_0x7239B21A38F536BA(iLocal_39))
		{
			unk_0x3882114BDE571AD4(iLocal_39, true);
		}
		if (unk_0x7239B21A38F536BA(iLocal_36))
		{
			unk_0x3882114BDE571AD4(iLocal_36, true);
		}
		if (unk_0x7239B21A38F536BA(iLocal_38))
		{
			unk_0x3882114BDE571AD4(iLocal_38, true);
		}
		if (unk_0x7239B21A38F536BA(iLocal_37))
		{
			unk_0x3882114BDE571AD4(iLocal_37, true);
		}
		iLocal_85 = 1;
	}
}

bool func_60(int iParam0)
{
	return Global_34909 == iParam0;
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
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
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
		unk_0x1090044AD1DA76FA();
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
		unk_0x8DFCED7A656F8802(true);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_66();
	if (unk_0xB65B60556E2A9225(&cLocal_61))
	{
		unk_0xDFE8422B3B94E688(&cLocal_61);
	}
	unk_0x19AF7ED9B9D23058();
	func_2();
	unk_0x1090044AD1DA76FA();
}

void func_66()
{
	func_49();
	if (unk_0x7239B21A38F536BA(iLocal_36))
	{
		if (unk_0x9F47B058362C84B5(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x539E0AE3E6634B9F(&iLocal_36);
			unk_0xE532F5D78798DAAB(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_38))
	{
		unk_0x539E0AE3E6634B9F(&iLocal_38);
		unk_0xE532F5D78798DAAB(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x7239B21A38F536BA(iLocal_37))
	{
		unk_0x539E0AE3E6634B9F(&iLocal_37);
		unk_0xE532F5D78798DAAB(joaat("prop_tt_screenstatic"));
	}
}

