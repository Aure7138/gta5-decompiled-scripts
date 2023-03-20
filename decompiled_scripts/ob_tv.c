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
	if (unk_0xC11469DCA6FC3BB5(2))
	{
		func_65();
	}
	if (unk_0xD42BD6EB2E0F1677(uScriptParam_0))
	{
		iLocal_36 = iScriptParam_0;
		iLocal_39 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64();
		if (unk_0xD42BD6EB2E0F1677(iScriptParam_0))
		{
			if ((iLocal_42 != -1 && (func_63() && !func_62())) && !func_61(iLocal_42))
			{
				func_65();
			}
			if ((unk_0xED20CB1F5297791D() && unk_0x79065FCE8B636F38() != 3) && unk_0xEC4E85B30EC75438() == 3)
			{
				func_65();
			}
			if (func_60(13) || func_60(14))
			{
				func_65();
			}
			if (unk_0xDBE203DE10B1DA34(iScriptParam_0))
			{
				func_65();
			}
			if (unk_0xF15D7EC08DFE28DB(iScriptParam_0))
			{
				if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
				{
					func_59();
					if (unk_0x82368787EA73C0F7(iScriptParam_0) < 950)
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
									uLocal_40 = unk_0x54CD25E2C34FD195(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x6ECF2FC60369DE64(uLocal_40))
									{
										unk_0x65E02DDD80B1D07F(uLocal_40, 9);
									}
									unk_0x5E8B6D17FF91CD59();
								}
							}
							if (iLocal_42 == -1)
							{
								func_65();
							}
							else
							{
								func_54();
								unk_0x8FEADC4D13E35133("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								unk_0xCEA4E87102552C46(0);
								Global_24504[iLocal_42 /*11*/].f_2 = 0;
								Global_24504[iLocal_42 /*11*/].f_6 = 1;
								Global_24504[iLocal_42 /*11*/] = unk_0x9C1C462D7B1DD1F9(0, 2);
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
							if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x86468ADFA0F6B861(iLocal_36) && unk_0xF6F6AFD8D4FB2658(iLocal_36, 1119092736))
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
									unk_0x0BFC2C61FB5B6CA1(1);
								}
							}
							if (unk_0xD42BD6EB2E0F1677(iLocal_36))
							{
								if (!unk_0xFFC96ECB7FA404CA(iLocal_36))
								{
									unk_0x1794B4FCC84D812F(iLocal_36, 1);
								}
							}
							if (unk_0xD42BD6EB2E0F1677(iLocal_38))
							{
								if (!unk_0xFFC96ECB7FA404CA(iLocal_38))
								{
									unk_0x1794B4FCC84D812F(iLocal_38, 1);
								}
							}
							if (unk_0xD42BD6EB2E0F1677(iLocal_37))
							{
								if (unk_0xFFC96ECB7FA404CA(iLocal_37))
								{
									unk_0x1794B4FCC84D812F(iLocal_37, 0);
								}
							}
							if (!unk_0xD3852F22AB713A1F(&cLocal_45, "NULL"))
							{
								unk_0x4298FEFC65883759(&cLocal_45, 0);
							}
							unk_0x64437C98FCC5F291(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0xD42BD6EB2E0F1677(iLocal_39))
							{
								unk_0x40866A418EB8EFDE(iLocal_39);
							}
							if (!func_61(iLocal_42))
							{
								if ((Global_24504[iLocal_42 /*11*/] == 3 || Global_24504[iLocal_42 /*11*/] == 2) || Global_24504[iLocal_42 /*11*/] == -1)
								{
									Global_24504[iLocal_42 /*11*/] = unk_0x9C1C462D7B1DD1F9(0, 2);
								}
								unk_0x593FAF7FC9401A56(Global_24504[iLocal_42 /*11*/]);
								unk_0x73A97068787D7231(fLocal_29);
							}
							else
							{
								iLocal_43 = Global_24504[iLocal_42 /*11*/];
								iLocal_44 = Global_24504[iLocal_42 /*11*/].f_1;
								unk_0xDEC6B25F5DC8925B(iLocal_43, func_38(iLocal_44), Global_24504[iLocal_42 /*11*/].f_9);
								unk_0x593FAF7FC9401A56(iLocal_43);
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
								if (unk_0xF90FBFD68F3C59AE() == -1)
								{
									unk_0x593FAF7FC9401A56(Global_24504[iLocal_42 /*11*/]);
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
			unk_0x5E8B6D17FF91CD59();
		}
	}
	func_65();
	unk_0x5E8B6D17FF91CD59();
}

void func_1()
{
	if (iLocal_42 != -1)
	{
		Global_24504[iLocal_42 /*11*/] = unk_0xF90FBFD68F3C59AE();
	}
	fLocal_29 = unk_0x11AFD9E67773D846();
	unk_0x593FAF7FC9401A56(-1);
	func_4();
	if (unk_0x8E34C953364A76DD(joaat("family5")) == 0)
	{
		if (!unk_0xD3852F22AB713A1F(&cLocal_45, "NULL"))
		{
			unk_0x4298FEFC65883759(&cLocal_45, 1);
		}
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x0BFC2C61FB5B6CA1(1);
	}
	func_3();
	func_49();
	if (unk_0xD42BD6EB2E0F1677(iLocal_37))
	{
		if (!unk_0xFFC96ECB7FA404CA(iLocal_37))
		{
			unk_0x1794B4FCC84D812F(iLocal_37, 1);
		}
	}
	unk_0x6FC9B065229C0787(0);
	func_2();
}

void func_2()
{
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (iLocal_86 == 1)
		{
			unk_0x46F5C6FCEA473F73();
			iLocal_86 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_34 == -1)
	{
		unk_0xE550CDE128D56757(iLocal_34);
		if (unk_0xD42BD6EB2E0F1677(iLocal_36))
		{
			if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0xDA76A9F39210D365(iLocal_36) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x1794B4FCC84D812F(iLocal_36, 0);
				if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x405224591DF02025(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x405224591DF02025(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_38))
	{
		unk_0x1794B4FCC84D812F(iLocal_38, 0);
	}
}

void func_4()
{
	if (iLocal_84)
	{
		unk_0x33281167E4942E4F(0, 0, 3000, 1, 0, 0);
		if (unk_0x63EFCC7E1810B8E6(uLocal_77))
		{
			unk_0x87295BCA613800C8(uLocal_77, 0);
		}
		unk_0x4E67E0B6D7FD5145(uLocal_77, 0);
		unk_0x5D1EB123EAC5D071(0);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			unk_0x7D9EFB7AD6B19754(unk_0x096275889B8E0EE0(), 0);
			unk_0x0F1ABE64C3C18E5A(unk_0x096275889B8E0EE0());
			unk_0x67BFB35F43BF984D(unk_0x096275889B8E0EE0(), Local_30, 1, 0, 2);
			if (!unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()))
			{
				if (bLocal_35 == 1)
				{
					bLocal_35 = false;
					unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 1, 0);
				}
			}
			unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 1);
		}
		if (!unk_0xD3852F22AB713A1F(&cLocal_61, "NULL"))
		{
			if (unk_0x2E882EA08284F674(&cLocal_61))
			{
				unk_0xC27FB879C2B9A2EB(&cLocal_61);
			}
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_38))
		{
			unk_0x1794B4FCC84D812F(iLocal_38, 1);
		}
		func_5(0, 1, 0, 0);
		unk_0x6FC9B065229C0787(0);
		iLocal_84 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x85E52FA5012D2428(unk_0x217E9DC48139933D());
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 1);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 1);
		func_13(1);
		unk_0x2C0D0B8454E927E2();
		unk_0x373F8B723BB81146();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x3AB7C52414B223F6())
			{
				unk_0x89EEEEF0CEB4D045(0);
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
		unk_0xF260DC644CD0CDE5();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x3062409186A3CED7();
		}
		unk_0xE705309B8C6445A4(unk_0x217E9DC48139933D(), 0);
		unk_0xDAD08AFBC323ABAE(unk_0x217E9DC48139933D(), 0);
		func_11(0, iParam3, iParam2);
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()) && !func_6(unk_0x217E9DC48139933D()))
		{
			unk_0xA5C38736C426FCB8(unk_0x096275889B8E0EE0(), 0);
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
		if (iParam0 == unk_0x217E9DC48139933D())
		{
			return 1;
		}
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return unk_0x4ED6CFDFE8D4131A(Global_2359301, 3);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
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
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x63DCACC2E4B5C081() != iParam0 && uParam2)
		{
			unk_0x8572368C3F0D7221(iParam0, uParam1, 1);
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
		unk_0xF73FBE4845C43B5B(&Global_2263, 13);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 13);
	}
}

int func_14()
{
	if (!func_61(iLocal_42))
	{
		if (((((((func_28(&uLocal_25) >= 1f && unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_87, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0xB417689857646F61(iLocal_36) == unk_0xB417689857646F61(unk_0x096275889B8E0EE0())) && !func_27(8, -1)) && !unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0)) && unk_0x7AFB9635D1349623(unk_0x096275889B8E0EE0(), Local_30, 90f)) && !unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0())) && !unk_0xED20CB1F5297791D())
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
				if (unk_0xDB43A0A79D39EDB6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0xB906B139171B1845(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (func_39("TV_HLP5"))
			{
				unk_0x0BFC2C61FB5B6CA1(1);
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
		unk_0xDA067FC477B3E571(2, 222);
		if (unk_0xCCBB0BB9790E1F47(2, 222))
		{
			func_40(&iLocal_41);
			func_25(&iLocal_41, 3, "TV_HLP6", 0, 0);
			func_22();
		}
	}
	else
	{
		unk_0x562F5D788AF3FA80(2, 200, 1);
		if (unk_0xFFC96ECB7FA404CA(unk_0x096275889B8E0EE0()))
		{
			unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 0);
		}
		if (bLocal_35)
		{
			if (unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()))
			{
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
			}
		}
		unk_0x36CDD81627A6FCD2();
		unk_0xDDFCBCDD887CDF43(unk_0x096275889B8E0EE0());
		func_20(1, 1);
		unk_0xDA067FC477B3E571(2, 222);
		func_16();
		if (unk_0xCCBB0BB9790E1F47(2, 222) || (unk_0x3653C46DD33107D5(2) && unk_0xDAB4BF48B46C66EA(2, 200)))
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
		unk_0xF73FBE4845C43B5B(&Global_2264, 2);
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
		unk_0xF73FBE4845C43B5B(&Global_2264, 16);
	}
	if (unk_0x3AB7C52414B223F6())
	{
		unk_0x89EEEEF0CEB4D045(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xF73FBE4845C43B5B(&Global_2263, 30);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&Global_2263, 30);
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
				unk_0xA5D9670641C54F6B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0xD191BA2C5A7D3C46(Global_14330);
		}
		else
		{
			unk_0xD191BA2C5A7D3C46(Global_14321);
		}
	}
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2263, 14))
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
	if (unk_0x8E34C953364A76DD(joaat("cellphone_flashhand")) > 0)
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
				if (unk_0xDB43A0A79D39EDB6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0xB906B139171B1845(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xF90FBFD68F3C59AE() == 0)
				{
					unk_0x593FAF7FC9401A56(1);
				}
				else
				{
					unk_0x593FAF7FC9401A56(0);
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
		iVar1 = (unk_0x929BAD36765E37C2(2, 219) - 127);
		if (!iLocal_22)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x11AFD9E67773D846();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x73A97068787D7231(fVar2);
				iLocal_23 = unk_0x4F67E8ECA7D3F667();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x11AFD9E67773D846();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x73A97068787D7231(fVar2);
				iLocal_23 = unk_0x4F67E8ECA7D3F667();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_24 = 1;
			}
			else if (iLocal_24)
			{
				if (unk_0xDB43A0A79D39EDB6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xB906B139171B1845(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_24 = 0;
				}
			}
		}
		if (iLocal_22)
		{
			if (iVar1 == 0 || unk_0x4F67E8ECA7D3F667() > iLocal_23 + 24)
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
	iVar1 = (unk_0x929BAD36765E37C2(2, 218) - 127);
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
		uLocal_77 = unk_0x40C23491CE83708E("DEFAULT_SCRIPTED_CAMERA", Local_78, Local_81, fVar0, 0, 2);
		unk_0x5E32817BF6302111(uLocal_77, 100f);
		unk_0x87295BCA613800C8(uLocal_77, 1);
		unk_0x33281167E4942E4F(1, 0, 3000, 1, 0, 0);
		if (unk_0xD42BD6EB2E0F1677(iLocal_38))
		{
			unk_0x1794B4FCC84D812F(iLocal_38, 0);
		}
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			unk_0x7D9EFB7AD6B19754(unk_0x096275889B8E0EE0(), 1);
			unk_0x0F1ABE64C3C18E5A(unk_0x096275889B8E0EE0());
			if (unk_0x7964097FCE4C244B(unk_0x217E9DC48139933D()))
			{
				unk_0x4D51E59243281D80(unk_0x217E9DC48139933D(), 0, 0);
				bLocal_35 = true;
			}
			unk_0x67BFB35F43BF984D(unk_0x096275889B8E0EE0(), Local_30, -1, 0, 2);
			unk_0x1794B4FCC84D812F(unk_0x096275889B8E0EE0(), 0);
		}
		if (!unk_0xD3852F22AB713A1F(&cLocal_61, "NULL"))
		{
			if (!unk_0x2E882EA08284F674(&cLocal_61))
			{
				unk_0x5F70787AC4BF7928(&cLocal_61);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x6FC9B065229C0787(1);
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
	if (!unk_0xBFFB35986CAAE58C(unk_0x47E385B0D957C8D4()))
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (unk_0x2004A43D1B1A5D9F())
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
	
	if (unk_0x8E34C953364A76DD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xED20CB1F5297791D())
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
			Global_35613[iVar0 /*18*/].f_17 = unk_0x55525C346BEF6960();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!unk_0x2CF12F9ACF18F048(sParam4))
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
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (iLocal_86 == 0)
		{
			unk_0x7F7FCF431E93AE1E("TV_Controls");
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
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
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
			return (func_29(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_29(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
	}
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = unk_0x6AEB0DF30A9DB9F1();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
}

bool func_30(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 2);
}

bool func_31(var uParam0)
{
	return unk_0x4ED6CFDFE8D4131A(*uParam0, 1);
}

void func_32()
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	unk_0xE550CDE128D56757(iLocal_34);
	unk_0xCFCC78391C8B3814(4);
	unk_0x906B86E6D7896B9E(1);
	unk_0xC0A145540254A840(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0xE550CDE128D56757(unk_0x18D358286D36C0BC());
}

void func_33(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x1C672C3C3855417F(0);
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
	Global_24504[iLocal_42 /*11*/] = unk_0xF90FBFD68F3C59AE();
	fLocal_29 = unk_0x11AFD9E67773D846();
	if (unk_0x2E882EA08284F674(&cLocal_61))
	{
		unk_0xC27FB879C2B9A2EB(&cLocal_61);
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x0BFC2C61FB5B6CA1(1);
	}
	func_40(&iLocal_41);
	unk_0x593FAF7FC9401A56(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_49();
}

int func_35(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_36(unk_0x217E9DC48139933D()) };
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
	return unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(iParam0), 0);
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
	if (unk_0x03A753E2C8458335())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x380F22FED8D528A4(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xA4DDF5DF95E65EED(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0x7130CFD8526145CA(sParam0);
	return unk_0x6DF1648C223C3A9D(0);
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
	if ((!unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Local_87, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x7AFB9635D1349623(unk_0x096275889B8E0EE0(), Local_30, 90f)) || unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0xB417689857646F61(iLocal_36) != unk_0xB417689857646F61(unk_0x096275889B8E0EE0()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (func_27(8, -1))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
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
		if (unk_0xDB43A0A79D39EDB6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			unk_0xB906B139171B1845(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
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
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x53BF44E14DB83845(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					unk_0x53BF44E14DB83845(joaat("num_rndevents_completed"), Global_97076, 0);
					unk_0xF73FBE4845C43B5B(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_completed"), Global_97089, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_missions_available"), Global_97072, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_completed"), Global_97090, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_minigames_available"), Global_97073, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_completed"), Global_97091, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_oddjobs_available"), Global_97074, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_completed"), Global_97092, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndpeople_available"), Global_97075, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_rndevents_available"), Global_97079, 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	unk_0xA4DDF5DF95E65EED(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	unk_0x481BDF6A10C5EF67(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_story_missions"), Global_97096, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_ambient_missions"), Global_97097, 1);
	unk_0xA4DDF5DF95E65EED(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_97353.f_8448.f_3853));
	}
	if (!unk_0x0010E412C61393C2())
	{
		if (!Global_68245)
		{
			if (func_46() == 2 == 0 && !unk_0x03A753E2C8458335())
			{
				if (unk_0x61E3D90420572762())
				{
					Global_97087 = 0;
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
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
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
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
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
		uVar2 = unk_0x9DD8670FD28D049C((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x4BECE45A720E7361((iParam0 - 0)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x9DD8670FD28D049C((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x4BECE45A720E7361((iParam0 - 192)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x9DD8670FD28D049C((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x4BECE45A720E7361((iParam0 - 513)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x9DD8670FD28D049C((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x4BECE45A720E7361((iParam0 - 705)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x0177152C7E362CA1((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x4BECE45A720E7361((iParam0 - 3111)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x0177152C7E362CA1((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x4BECE45A720E7361((iParam0 - 2919)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x9DC305C3520822DE((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x4BECE45A720E7361((iParam0 - 4207)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x9DC305C3520822DE((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x4BECE45A720E7361((iParam0 - 4335)) * 64);
		iVar0 = unk_0x655E258E29680BCF(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x3EE32F7964C40FE6("tvscreen"))
	{
		unk_0x0E692EE61761361F("tvscreen");
		iLocal_34 = -1;
		unk_0xE550CDE128D56757(unk_0x18D358286D36C0BC());
	}
}

void func_50()
{
	int iVar0;
	
	if (iLocal_42 == 4)
	{
		func_51();
	}
	if (unk_0x3EE32F7964C40FE6("tvscreen"))
	{
		unk_0x0E692EE61761361F("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0xD42BD6EB2E0F1677(iLocal_36))
	{
		func_65();
	}
	iVar0 = unk_0xDA76A9F39210D365(iLocal_36);
	unk_0x98AF2BB6F62BD588("tvscreen", 0);
	unk_0x2F506B8556242DDB(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_42 != 4)
	{
		while (!unk_0x707032835FF09AE7(iVar0))
		{
			if (!unk_0xD42BD6EB2E0F1677(iLocal_36))
			{
				func_65();
			}
			if (!unk_0xF15D7EC08DFE28DB(iLocal_36))
			{
				func_65();
			}
			if (!unk_0x3EE32F7964C40FE6("tvscreen"))
			{
				unk_0x98AF2BB6F62BD588("tvscreen", 0);
			}
			if (!unk_0x707032835FF09AE7(iVar0))
			{
				unk_0x2F506B8556242DDB(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_34 = unk_0xB6762A85EE29AA60("tvscreen");
	func_3();
}

void func_51()
{
	if (unk_0xD42BD6EB2E0F1677(iLocal_36))
	{
		if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_36 = 0;
	iLocal_36 = unk_0x50F5AA376602B35C(joaat("v_ilev_mm_screen2"), Local_30, 1, 1, 0);
	unk_0xCF2B9C0645C4651B(iLocal_36, uLocal_33);
	unk_0x7D9EFB7AD6B19754(iLocal_36, 1);
	unk_0x1794B4FCC84D812F(iLocal_36, 0);
	iLocal_38 = 0;
	iLocal_38 = unk_0x50F5AA376602B35C(joaat("v_ilev_mm_screen2_vl"), Local_30, 1, 1, 0);
	unk_0xCF2B9C0645C4651B(iLocal_38, uLocal_33);
	unk_0x7D9EFB7AD6B19754(iLocal_38, 1);
	unk_0x1794B4FCC84D812F(iLocal_38, 0);
}

void func_52(var uParam0)
{
	func_53(uParam0, 0f);
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_29(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
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
	return Global_97353.f_7341.f_328[iParam0 /*6*/];
}

void func_56()
{
	Local_30 = { unk_0xA86D5F069399F44D(iLocal_36, 1) };
	uLocal_33 = unk_0xC230DD956E2F5507(iLocal_36);
	func_58();
	if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("prop_tv_03"))
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
	else if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("prop_trev_tv_01"))
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
	else if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("prop_tv_flat_01"))
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
	else if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("prop_tv_flat_02"))
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
	else if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0xDA76A9F39210D365(iLocal_36) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("des_tvsmash_start"))
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
	iLocal_37 = unk_0x50F5AA376602B35C(joaat("prop_tt_screenstatic"), Local_30, 1, 1, 0);
	unk_0xCF2B9C0645C4651B(iLocal_37, uLocal_33);
	unk_0x1794B4FCC84D812F(iLocal_37, 1);
	unk_0x7D9EFB7AD6B19754(iLocal_37, 1);
}

void func_58()
{
	unk_0xDEC6B25F5DC8925B(0, func_38(1), 0);
	if (func_55(22))
	{
		unk_0xDEC6B25F5DC8925B(1, func_38(12), 0);
	}
	else
	{
		unk_0xDEC6B25F5DC8925B(1, func_38(2), 0);
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
			if (unk_0xD42BD6EB2E0F1677(iLocal_39))
			{
				unk_0xA5C38736C426FCB8(iLocal_39, 0);
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_36))
			{
				unk_0xA5C38736C426FCB8(iLocal_36, 0);
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_38))
			{
				unk_0xA5C38736C426FCB8(iLocal_38, 0);
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_37))
			{
				unk_0xA5C38736C426FCB8(iLocal_37, 0);
			}
			iLocal_85 = 0;
		}
	}
	else if (iLocal_85 == 0)
	{
		if (unk_0xD42BD6EB2E0F1677(iLocal_39))
		{
			unk_0xA5C38736C426FCB8(iLocal_39, 1);
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_36))
		{
			unk_0xA5C38736C426FCB8(iLocal_36, 1);
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_38))
		{
			unk_0xA5C38736C426FCB8(iLocal_38, 1);
		}
		if (unk_0xD42BD6EB2E0F1677(iLocal_37))
		{
			unk_0xA5C38736C426FCB8(iLocal_37, 1);
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
	if (unk_0xB0FB6CFAA5A1C833())
	{
		if (unk_0x51E9BBB68A21C058() == 1f)
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
		return unk_0x4ED6CFDFE8D4131A(Global_81155[Global_87289 /*34*/].f_15, 20);
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
		unk_0x5E8B6D17FF91CD59();
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
		unk_0x0BFC2C61FB5B6CA1(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_66();
	if (unk_0x2E882EA08284F674(&cLocal_61))
	{
		unk_0xC27FB879C2B9A2EB(&cLocal_61);
	}
	unk_0x7B88B0F0AA3B47C8();
	func_2();
	unk_0x5E8B6D17FF91CD59();
}

void func_66()
{
	func_49();
	if (unk_0xD42BD6EB2E0F1677(iLocal_36))
	{
		if (unk_0xDA76A9F39210D365(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x931914268722C263(&iLocal_36);
			unk_0x4AD96EF928BD4F9A(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_38))
	{
		unk_0x931914268722C263(&iLocal_38);
		unk_0x4AD96EF928BD4F9A(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xD42BD6EB2E0F1677(iLocal_37))
	{
		unk_0x931914268722C263(&iLocal_37);
		unk_0x4AD96EF928BD4F9A(joaat("prop_tt_screenstatic"));
	}
}

