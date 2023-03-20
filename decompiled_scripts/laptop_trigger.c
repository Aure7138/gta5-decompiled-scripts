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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	char cLocal_117[16] = "";
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	char* sVar1;
	var uVar2[25];
	bool bVar28;
	struct<3> Var29;
	int iVar32;
	struct<3> Var33;
	bool bVar36;
	int iVar37;
	int iVar38;
	struct<3> Var39;
	bool bVar42;
	struct<8> Var43;
	struct<3> Var59;
	bool bVar62;
	bool bVar63;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	iLocal_97 = -1;
	Local_111 = { 0f, 0f, 0f };
	iLocal_108 = iScriptParam_0;
	if (!unk_0xD2CFFE76B625AE55(iLocal_108))
	{
		unk_0x7C3AA2D27E16E2AD();
	}
	if (unk_0x524AF15206846700(3))
	{
		func_173();
		unk_0x7C3AA2D27E16E2AD();
	}
	if (func_172(13) || func_172(14))
	{
		func_173();
		unk_0x7C3AA2D27E16E2AD();
	}
	if (Global_31484)
	{
		func_173();
		unk_0x7C3AA2D27E16E2AD();
	}
	if (Global_68066)
	{
		unk_0x7C3AA2D27E16E2AD();
	}
	bVar0 = false;
	sVar1 = "tvscreen";
	bVar28 = true;
	Var29 = { unk_0xA8CFDE65C45F813B(iScriptParam_0, 1) - unk_0xE7669FB0FEEAD3DD(iScriptParam_0) * Vector(0.6f, 0.6f, 0.6f) };
	Var29.f_2 = (Var29.f_2 + 0.5f);
	Local_114 = { unk_0xD7C4E2CB0B216852(iScriptParam_0, Local_111) };
	Global_1728814 = 0;
	while (bVar28)
	{
		if (unk_0xD2CFFE76B625AE55(iLocal_108))
		{
			if (bLocal_99)
			{
				if (!func_168(unk_0x4D29100D094E5511()))
				{
					if (!func_167(&uLocal_102))
					{
						func_166(&uLocal_102, 1, 0);
					}
				}
			}
			if (Global_1728814 && func_164(unk_0x4D29100D094E5511()))
			{
				if (!func_167(&uLocal_106))
				{
					func_166(&uLocal_106, 0, 0);
				}
				else if (func_163(&uLocal_106, 10000, 0))
				{
					func_162(&uLocal_106);
					Global_1728814 = 0;
				}
				func_161();
			}
			if (Global_1587507)
			{
				if (!bVar0)
				{
					iVar32 = unk_0x946C63BD9EF05437(iLocal_108);
					if (iVar32 == joaat("prop_laptop_01a"))
					{
						unk_0x6EF6FEAF532E4684(unk_0xA8CFDE65C45F813B(iScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var33 = { unk_0x9A98AE1D9D8DEF06(iLocal_108, 2) };
						iLocal_108 = unk_0xA8C993B9F5CB4D92(joaat("prop_laptop_lester2"), unk_0xA8CFDE65C45F813B(iLocal_108, 1), 0, 1, 0);
						unk_0x0359A241E2DD22AC(iLocal_108, Var33, 2, 1);
						bVar0 = true;
					}
				}
			}
			if (unk_0x6299D442E6E3AE5F(iLocal_108))
			{
				func_173();
				unk_0x7C3AA2D27E16E2AD();
			}
		}
		if (((!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0) && unk_0xD2CFFE76B625AE55(iLocal_108)) && !unk_0x67FB99B1361E144E()) && unk_0x2DB75A8F096AB1F1(unk_0xB927AFB90873B8C1()))
		{
			if (unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030()) == unk_0x94F32809C13F5225(iLocal_108))
			{
				bVar36 = false;
				iVar37 = unk_0xFCB979DB36343941(unk_0x27D769C59BC9D030(), &uVar2, -1);
				iVar38 = 0;
				iVar38 = 0;
				while (iVar38 < iVar37)
				{
					if (!unk_0x2006A8C1BA2AFE80(uVar2[iVar38], 0))
					{
						if (unk_0xF4954568C87BA772(uVar2[iVar38], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar36 = true;
						}
						else if (unk_0xF4954568C87BA772(uVar2[iVar38], "MP_COMMON_MISS", "HACK_LOOP", 3))
						{
							bVar36 = true;
						}
					}
					iVar38++;
				}
				if (Global_16)
				{
					bVar36 = true;
				}
				Var39 = { 0.6f, 0.6f, 0.8f };
				if (func_160())
				{
					Var39 = { 1f, 1f, 0.9f };
				}
				bVar42 = func_159(unk_0x4D29100D094E5511());
				if ((((((((((((!bVar36 && !func_158(0)) && !unk_0x23221A3A5AF3BD3E(unk_0x27D769C59BC9D030(), 0)) && !func_157()) && unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Var29, Var39, 0, 1, 1)) && unk_0xD1C02130DDA2950A(unk_0x27D769C59BC9D030()) == unk_0xD1C02130DDA2950A(iLocal_108)) && !unk_0xF426A5DE932B3BEE(Global_2359301, 15)) && !func_156()) && !(Global_69489 && func_155())) && !(!Global_69489 && func_154())) && !((Global_69489 && unk_0xF426A5DE932B3BEE(Global_1617379.f_14, 24)) && unk_0x9404B1BCD022816B())) && !((Global_69489 && func_153()) && func_152())) && !unk_0x20193FE47924AD7F())
				{
					if (!func_151(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_9))
					{
						if (func_164(unk_0x4D29100D094E5511()) && iLocal_100 != bVar42)
						{
							if (iLocal_97 != -1)
							{
								func_150(&iLocal_97);
							}
							if (func_148())
							{
								unk_0x5BD150B52CE8D356(1);
							}
						}
						iLocal_100 = bVar42;
						if (iLocal_97 == -1)
						{
							if (bVar0)
							{
								func_147(&iLocal_97, 1, "MPLA_BILL", 0, 0, 0, 0);
							}
							else if (func_160())
							{
								if (((func_146() && !unk_0x7909D930A3A1BBCE(unk_0x4D29100D094E5511())) && !func_145()) && !Global_1728814)
								{
									if (func_143())
									{
										func_142("WHPRIVSESLAP");
									}
									else if (!bVar42)
									{
										if (func_141() >= func_140())
										{
											func_147(&iLocal_97, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
										}
										else if (unk_0x9404B1BCD022816B())
										{
											func_142("WHSECUROBLCK");
										}
										else
										{
											func_147(&iLocal_97, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
										}
									}
									else if ((func_167(&uLocal_102) && func_163(&uLocal_102, 10000, 1)) || !bLocal_99)
									{
										if (func_168(unk_0x4D29100D094E5511()) || Global_1728814 == 1)
										{
											bLocal_99 = true;
											if (!Global_1728814)
											{
												func_142("WHSECUROBLCK");
											}
										}
										else
										{
											if (func_148())
											{
												unk_0x5BD150B52CE8D356(1);
											}
											bLocal_99 = false;
											func_162(&uLocal_102);
											func_147(&iLocal_97, 1, "WHSECUROINPUT", 0, 0, 0, 0);
										}
									}
									else if (bLocal_99)
									{
										if (!unk_0x46768B1495288824())
										{
											func_142("WHSECUROBLCK");
										}
									}
								}
							}
							else
							{
								func_147(&iLocal_97, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
							}
						}
					}
					if (((func_138(iLocal_97, 1) && !unk_0x22653396A8BEABE7(unk_0x27D769C59BC9D030())) && func_137()) || Global_25392)
					{
						Global_25387 = 1;
						Global_25392 = 0;
						if (iLocal_97 != -1)
						{
							func_150(&iLocal_97);
						}
						if (!bVar0)
						{
							StringCopy(&Var43, "", 64);
							if (func_146())
							{
								if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
								{
									unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_unarmed"), 1);
									Var59 = { unk_0xD7C4E2CB0B216852(iScriptParam_0, 0.0328f, -0.8f, 0.3f) };
									bVar62 = false;
									func_162(&uLocal_104);
									if (func_126(0, &Var43))
									{
										while (!bVar62)
										{
											func_161();
											if (!func_167(&uLocal_104))
											{
												func_166(&uLocal_104, 0, 0);
											}
											else if (func_163(&uLocal_104, 4000, 0))
											{
												bVar62 = true;
											}
											if (!func_125(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), Var59, 0.05f, 0) && !func_124(unk_0x4D6B971C8AEE130C(unk_0x27D769C59BC9D030()), unk_0x4D6B971C8AEE130C(iScriptParam_0), 5f))
											{
												if (!func_121(unk_0x27D769C59BC9D030(), 2106541073))
												{
													unk_0x3D09311EB0F37652(unk_0x27D769C59BC9D030(), Var59, 1f, 5000, unk_0x4D6B971C8AEE130C(iScriptParam_0), 0.25f);
												}
											}
											else
											{
												bVar62 = true;
											}
											unk_0x4EDE34FBADD967A6(0);
										}
										func_162(&uLocal_104);
										iLocal_109 = 0;
									}
								}
								while (iLocal_109 != 3)
								{
									func_120(iScriptParam_0);
									func_161();
									unk_0x4EDE34FBADD967A6(0);
								}
							}
							if (func_160())
							{
								func_119(0, 1);
								if (((!bVar42 && !func_118(unk_0x4D29100D094E5511(), 1)) && func_141() < func_140()) && !unk_0x9404B1BCD022816B())
								{
									func_10(1);
								}
							}
							else
							{
								func_119(0, 0);
							}
							if (!iLocal_98)
							{
								func_6();
								iLocal_98 = 1;
							}
							bVar63 = true;
							if (func_146())
							{
								func_1(0);
								unk_0x4EDE34FBADD967A6(500);
								func_1(1);
							}
							while (bVar63)
							{
								if (!unk_0xD2CFFE76B625AE55(iLocal_108) || !unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), unk_0xA8CFDE65C45F813B(iLocal_108, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_68061 = 1;
								}
								if (func_146())
								{
									if (!Global_68058)
									{
										bVar63 = false;
										Global_25387 = 0;
									}
								}
								else if (Global_68058 || Global_68061)
								{
									bVar63 = false;
								}
								if (func_146())
								{
									func_161();
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							if (func_146())
							{
								if (!unk_0x62076137A700BDA9(unk_0x27D769C59BC9D030(), 1))
								{
									if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
									{
										if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
										{
											if (unk_0xCCA5AB2EE473429A(unk_0x27D769C59BC9D030()))
											{
												unk_0x852341ED4384D624(unk_0x27D769C59BC9D030());
												if (!unk_0x62076137A700BDA9(unk_0x27D769C59BC9D030(), 1))
												{
													unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
												}
											}
											if (func_126(1, &Var43))
											{
												unk_0x651E63BA2F4975EC(&Var43);
											}
											if (func_126(2, &Var43))
											{
												if (iLocal_109 != 0)
												{
													if (unk_0xC2AE0A979757C34A(iLocal_110))
													{
														unk_0x2C463497D9FB00B0(iLocal_110);
														iLocal_110 = -1;
													}
													iLocal_110 = unk_0x2BBEEAF2B7C4E645(Local_114, unk_0x9A98AE1D9D8DEF06(iScriptParam_0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
													unk_0xAB39929B33DB97EF(unk_0x27D769C59BC9D030(), iLocal_110, &Var43, "exit", 8f, -4f, 5, 0, 1148846080, 0);
													unk_0xACE769CD06E32A0F(iLocal_110);
													unk_0x651E63BA2F4975EC(&Var43);
												}
											}
										}
									}
								}
							}
							func_161();
							func_162(&uLocal_106);
							iLocal_98 = 0;
						}
					}
				}
				else
				{
					if (iLocal_97 != -1)
					{
						func_150(&iLocal_97);
					}
					if (func_164(unk_0x4D29100D094E5511()))
					{
						if (func_148())
						{
							unk_0x5BD150B52CE8D356(1);
						}
					}
					if (unk_0xD2CFFE76B625AE55(iScriptParam_0))
					{
						if (!unk_0x179C5C4A19D3D535(iScriptParam_0))
						{
							bVar28 = false;
						}
					}
					Global_25387 = 0;
				}
			}
			else if (iLocal_97 != -1)
			{
				func_150(&iLocal_97);
			}
		}
		else
		{
			if (iLocal_97 != -1)
			{
				func_150(&iLocal_97);
			}
			bVar28 = false;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	Global_25387 = 0;
	if (bVar0)
	{
		if (unk_0x8B2548A86532AA14(sVar1))
		{
			unk_0x508498A0BF4BE26A(sVar1);
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		func_5();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x26545538B51562AD(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_158(0))
		{
			func_2(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_2(int iParam0)
{
	if (Global_14571)
	{
		func_4(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_3())
	{
		Global_14413.f_1 = 3;
	}
}

int func_3()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_4(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_158(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

void func_5()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_6()
{
	if (func_9() || func_8())
	{
		func_7();
	}
}

void func_7()
{
	Global_2434762.f_631 = 1;
}

var func_8()
{
	return Global_2434762.f_610;
}

bool func_9()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762.f_2, 11);
}

void func_10(bool bParam0)
{
	struct<14> Var0;
	
	func_66(1, 1);
	if (bParam0)
	{
		if (func_65(88) || func_65(95))
		{
			func_64();
		}
		func_63(17);
		Var0.f_2 = 183;
		func_61(Var0, func_62(0, 1));
		func_30();
		if (!func_29(unk_0x4D29100D094E5511()))
		{
			func_11(82, "GB_TXTMSG_INIT", 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

int func_11(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xF17F4B0641AB2DE1(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_12(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0x26545538B51562AD(&Global_2283, 1);
			unk_0x26545538B51562AD(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xC1C5B83BB6719C6C(sParam14, sParam15))
	{
	}
	func_23();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if (unk_0xABE2848258482F49(unk_0x27D769C59BC9D030()))
			{
				return 0;
			}
		}
		if (Global_101154.f_12741[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xD32535FA4397160F(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xD32535FA4397160F(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_22() == 0)
	{
		func_20();
		return 0;
	}
	func_19(Global_16779);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/]), sParam1, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_25 = iParam7;
	Global_101154.f_12831[Global_16779 /*104*/].f_26 = uParam8;
	Global_101154.f_12831[Global_16779 /*104*/].f_29 = uParam9;
	Global_101154.f_12831[Global_16779 /*104*/].f_30 = uParam12;
	Global_101154.f_12831[Global_16779 /*104*/].f_31 = uParam11;
	Global_101154.f_12831[Global_16779 /*104*/].f_28 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101154.f_12831[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101154.f_12831[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0xF426A5DE932B3BEE(Global_2283, 10))
	{
		Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
		Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_18(0);
		func_18(2);
		func_18(1);
	}
	else
	{
		func_23();
		switch (iParam16)
		{
			case 3:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_18(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_18(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_18(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_18(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xF426A5DE932B3BEE(Global_2283, 10))
		{
			Global_101154.f_12741[0 /*20*/].f_17 = 1;
			Global_101154.f_12741[1 /*20*/].f_17 = 1;
			Global_101154.f_12741[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101154.f_12741[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101154.f_12741[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101154.f_12741[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101154.f_12741[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (bParam10)
	{
		func_23();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_17())
			{
				unk_0x954BCDB8FDB0AC0F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_16(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(1);
			func_16(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_172(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar2);
								unk_0x7E5FA681CB7A2EF7();
							}
							if (Global_2443081)
							{
								if (iVar1 == 14)
								{
									func_14(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101154.f_12831[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101154.f_12831[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101154.f_12831[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_14(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69489)
								{
									iVar4 = 0;
									iVar4 = Global_2562131;
									func_14(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36844;
											break;
										
										case 1:
											iVar5 = Global_36845;
											break;
										
										case 2:
											iVar5 = Global_36846;
											break;
										
										default:
											break;
									}
									func_14(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_14(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(Global_2289);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar6);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF426A5DE932B3BEE(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(iVar7);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (iVar1 == 8)
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(42);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if ((iVar1 == 23 && unk_0xC1C5B83BB6719C6C(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF426A5DE932B3BEE(Global_2284, 6))
							{
								unk_0x8CED8F78CC31BEF2(Global_14394, "SET_DATA_SLOT");
								unk_0xD2DC8221939F80F7(1);
								unk_0xD2DC8221939F80F7(iVar0);
								unk_0xD2DC8221939F80F7(Global_2290[iVar1 /*15*/].f_10);
								unk_0xD2DC8221939F80F7(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0xD2DC8221939F80F7(42);
								unk_0x7E5FA681CB7A2EF7();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609099.f_1;
								func_14(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_14(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_14(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x8CED8F78CC31BEF2(uParam0, sParam1);
	unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x75CB9E30BA492FF0(uParam7))
	{
		func_15(uParam7);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam8))
	{
		func_15(iParam8);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam9))
	{
		func_15(iParam9);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam10))
	{
		func_15(iParam10);
	}
	if (!unk_0x75CB9E30BA492FF0(iParam11))
	{
		func_15(iParam11);
	}
	unk_0x7E5FA681CB7A2EF7();
}

void func_15(var uParam0)
{
	unk_0x37B602106C6E0E91(uParam0);
	unk_0xD3076D52458B36EF();
}

void func_16(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x8CED8F78CC31BEF2(uParam0, sParam1);
	unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD2DC8221939F80F7(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x7E5FA681CB7A2EF7();
}

bool func_17()
{
	return Global_1315913;
}

void func_18(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101154.f_12741[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_19(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x2FADF5E93AB8D64B();
	uVar1 = unk_0x51C7DC141C5D0E6B();
	uVar2 = unk_0xEFEADD7EBD01C0A6();
	uVar3 = unk_0x388418AD39C0F4DE();
	uVar4 = unk_0xE3911478C9FE04B2() + 1;
	uVar5 = unk_0x8FB5B60BC869990E();
	Global_101154.f_12831[iParam0 /*104*/].f_18 = uVar0;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101154.f_12831[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_21(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_24 = 1;
}

int func_21(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_22()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69489)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101154.f_12831[Global_16779 /*104*/].f_18 = -1;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101154.f_12831[iVar2 /*104*/].f_24 == 0 || Global_101154.f_12831[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_21(Global_101154.f_12831[iVar2 /*104*/].f_18, Global_101154.f_12831[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return 0;
	}
	Global_101154.f_12831[Global_16779 /*104*/].f_99[0] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[1] = 0;
	Global_101154.f_12831[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

void func_23()
{
	if (func_172(14))
	{
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_24();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_24()
{
	func_25();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_25()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_28(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_27(unk_0x27D769C59BC9D030());
			if (func_26(iVar0) && (!func_172(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_26(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_29(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_250.f_7, 26);
}

void func_30()
{
	if ((!func_57() && func_44()) && func_39(unk_0x4D29100D094E5511()))
	{
		func_31("GB_INFO_LFG", 1);
	}
}

int func_31(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x5411F6B456B04A6B(sParam0);
	iVar0 = unk_0xF51DE8AFFD9CC3C9(0, 1);
	func_32(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_32(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_38() || !unk_0x9404B1BCD022816B()) || !func_35(unk_0x4D29100D094E5511(), 0))
	{
		return;
	}
	iVar0 = func_33(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1724230 - 1))
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_34(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return (Global_1724230 - 1);
}

void func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = { Global_1724230.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_35(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_36(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_36(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_37()
{
	return Global_1312747;
}

bool func_38()
{
	return unk_0xA29E536967D6DF2E(-1762644250);
}

int func_39(int iParam0)
{
	if (iParam0 == func_43())
	{
		return 0;
	}
	if (!func_42(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_35(iParam0, 0))
	{
		return 0;
	}
	if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_131, 2) || unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_131, 5))
	{
		return 0;
	}
	if (func_40(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_41(iParam0, 9);
	}
	return 0;
}

bool func_41(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_10.f_4, iParam1);
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2DB75A8F096AB1F1(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428492.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_43()
{
	return -1;
}

int func_44()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x6EED86A16F7EA8F2(iVar0);
		if (func_42(iVar1, 0, 1))
		{
			if (iVar1 != unk_0x4D29100D094E5511())
			{
				if (func_41(iVar1, 15) && func_45(iVar1, 0, 0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == func_43())
	{
		return 0;
	}
	if (!func_42(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_35(iParam0, 0))
	{
		return 0;
	}
	if (func_55(iParam0))
	{
		return 0;
	}
	if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_131, 2) || unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_131, 5))
	{
		return 0;
	}
	if (func_54(iParam0))
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_52(iParam0, iParam1, 1))
		{
			return 0;
		}
		if (func_51(iParam0))
		{
			return 0;
		}
	}
	else if (func_118(iParam0, 1))
	{
		return 0;
	}
	if (func_50(iParam0))
	{
		return 0;
	}
	if (func_40(iParam0))
	{
		return 0;
	}
	if (func_46(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_46(int iParam0)
{
	return func_47(iParam0) > 0;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_42(iParam0, 0, 1))
	{
		if (Global_1610316[iParam0 /*174*/].f_10.f_117 != -1)
		{
			iVar0 = Global_1610316[iParam0 /*174*/].f_10.f_117;
		}
		else
		{
			iVar0 = func_49(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_48()) - unk_0x9CC4C10F8D665832());
		return iVar1;
	}
	return -1;
}

int func_48()
{
	return Global_262145.f_12331;
}

int func_49(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_1610316[iVar0 /*174*/].f_1, 0);
	}
	return 0;
}

bool func_51(int iParam0)
{
	return func_41(iParam0, 20);
}

int func_52(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_43())
	{
		if (!bParam2)
		{
			if (func_53(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1610316[iParam0 /*174*/].f_10 != func_43())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10;
		}
	}
	return 0;
}

int func_53(int iParam0, int iParam1)
{
	if (iParam1 != func_43())
	{
		if (iParam0 != func_43())
		{
			if (Global_1610316[iParam0 /*174*/].f_10 != func_43())
			{
				if (Global_1610316[iParam0 /*174*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_54(int iParam0)
{
	return func_41(iParam0, 30);
}

int func_55(int iParam0)
{
	if (!func_41(iParam0, 2))
	{
		return 1;
	}
	if (func_41(iParam0, 1))
	{
		return 1;
	}
	if (func_56(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_18;
}

int func_57()
{
	int iVar0;
	var uVar1;
	struct<16> Var17;
	
	iVar0 = 0;
	while (iVar0 < func_60())
	{
		if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_10[iVar0] == func_43())
		{
			StringCopy(&Var17, "", 64);
			Var17 = { func_58(func_59(iVar0)) };
			if (unk_0xC1C5B83BB6719C6C(&Var17, &uVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<16> func_58(int iParam0)
{
	return Global_2435528.f_3065.f_18[iParam0 /*16*/];
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_60()
{
	return Global_262145.f_10303;
}

void func_61(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x4D29100D094E5511();
	if (!iParam14 == 0)
	{
		unk_0xCE8ECD07286D394D(1, &Param0, 14, iParam14);
	}
}

int func_62(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6EED86A16F7EA8F2(iVar1);
		if (func_42(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x4D29100D094E5511() || iParam0)
			{
				if (bParam1)
				{
					unk_0x26545538B51562AD(&uVar0, iVar1);
				}
				else if (!func_35(iVar2, 0))
				{
					unk_0x26545538B51562AD(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x26545538B51562AD(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

void func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			unk_0x26545538B51562AD(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_65(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

void func_66(bool bParam0, bool bParam1)
{
	var uVar0;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	char* sVar10;
	struct<16> Var11;
	bool bVar27;
	int iVar28;
	
	if (!func_115())
	{
		return;
	}
	iVar7 = 1;
	if (func_29(unk_0x4D29100D094E5511()))
	{
		iVar7 = 2;
	}
	if (Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10 != unk_0x4D29100D094E5511())
	{
		if (bParam1)
		{
			unk_0x3C90D640667452E8(iVar7);
			func_112(0);
			func_110(0);
			func_109(21);
			func_109(22);
		}
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10 = unk_0x4D29100D094E5511();
		unk_0xDC8344AC86CAF6B7(func_37(), &uVar8, &uVar9);
		func_108(uVar8, uVar9);
		sVar10 = unk_0xF78AD5D7DB9EAB0B(unk_0x4D29100D094E5511(), &uVar0);
		StringCopy(&Var11, sVar10, 64);
		func_107(Var11);
		func_106();
		if (func_105(3892, -1, 0) <= 0)
		{
			iVar6 = unk_0x9CC4C10F8D665832();
		}
		else
		{
			iVar6 = (func_105(3892, -1, 0) - 43200);
		}
		func_102(iVar6);
		if (unk_0x90F7F7FF57758DF4("Player_Boss", 3))
		{
			unk_0xE259158ED7E55524(unk_0x27D769C59BC9D030(), "Player_Boss", unk_0x4D29100D094E5511());
		}
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_19 = -1;
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_20 = -1;
		Global_2460486.f_4660.f_25 = -1;
		func_95();
		func_86(0);
		if (bParam0)
		{
			func_63(0);
		}
		if (Global_2460486.f_4660.f_61 != func_43())
		{
			Global_2460486.f_4660.f_61 = func_43();
		}
		if (unk_0xF426A5DE932B3BEE(Global_2460486.f_1643, 15))
		{
			unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_1643), 15);
		}
		if (func_85(15))
		{
			func_84(15);
		}
		if (!func_83() && !unk_0x9404B1BCD022816B())
		{
			func_82();
			func_81(2);
		}
		func_80(3932, 2, -1, 1);
		func_109(31);
		func_78();
		func_70();
		if (!func_69(82, 3))
		{
			bVar27 = false;
			iVar28 = func_105(3889, -1, 0);
			if (!unk_0xF426A5DE932B3BEE(iVar28, 11))
			{
				unk_0x26545538B51562AD(&iVar28, 11);
				func_80(3889, iVar28, -1, 1);
				bVar27 = true;
			}
			func_67(82, 3, bVar27);
		}
	}
}

void func_67(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_23();
		if (iParam1 == 4)
		{
			Global_101154.f_32575[iParam0 /*29*/].f_12[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[2] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69489)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_68();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_68();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_101154.f_32575[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_68();
			}
		}
	}
}

void func_68()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xC754513C760635E8(&(Global_101154.f_32575[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x5411F6B456B04A6B("");
		StringCopy(&cVar16, unk_0xC754513C760635E8(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0xC754513C760635E8("CELL_253");
		unk_0xE8386CF1E84A5B3D(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x5411F6B456B04A6B("CELL_255");
		unk_0x2B088D6251C2080D(&(Global_2893[1 /*6*/]));
		unk_0xE8386CF1E84A5B3D(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xF17F4B0641AB2DE1(&Global_2283, 0);
}

int func_69(int iParam0, int iParam1)
{
	if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	struct<16> Var0;
	
	Var0 = { func_77(45, 46, -1) };
	func_73(&Var0, 0);
	if ((!unk_0xD0333FE560420AC5() && unk_0xE2CCBFB054B508C9(0, -1, 1)) || func_72())
	{
		func_109(28);
	}
	else
	{
		func_71(28);
	}
}

void func_71(int iParam0)
{
	unk_0x26545538B51562AD(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_4), iParam0);
}

int func_72()
{
	if (unk_0x6AA2781364C20A27() == 0)
	{
		return 0;
	}
	if (unk_0x3E00A1016DB5AFEF())
	{
		if (unk_0x34598392CB66EAED(1, -1))
		{
			if (unk_0x7D343C5B30D80DC6())
			{
				return 1;
			}
		}
	}
	if (unk_0x748A964A12412EBB())
	{
		if (unk_0x01B09CB427A5F1A1(1))
		{
			if (unk_0x7D343C5B30D80DC6())
			{
				return 1;
			}
		}
	}
	if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
	{
		if (unk_0xE2CCBFB054B508C9(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0x34598392CB66EAED(0, -1))
		{
			if (unk_0x7D343C5B30D80DC6())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x75CB9E30BA492FF0(sParam0))
		{
			func_74(45, 46, sParam0, -1, 1);
		}
	}
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
		StringCopy(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_132), sParam0, 64);
	}
	if ((!unk_0xD0333FE560420AC5() && unk_0xE2CCBFB054B508C9(0, -1, 1)) || func_72())
	{
		func_109(28);
	}
	else
	{
		func_71(28);
	}
}

void func_74(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	if (func_76())
	{
		iVar0 = Global_2491657[iParam0 /*5*/][func_75(iParam3)];
		iVar1 = Global_2491657[iParam1 /*5*/][func_75(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar10, "", 32);
			iVar18 = unk_0x1DA63F254F38C8A7(uParam2);
			if (iVar18 > 0)
			{
				iVar19 = 10;
				if (iVar18 < 10)
				{
					iVar19 = iVar18;
				}
				StringCopy(&cVar2, unk_0x4A236FB937A8F71F(uParam2, 0, iVar19, 31), 32);
				if (iVar18 > 10)
				{
					StringCopy(&cVar10, unk_0x4A236FB937A8F71F(uParam2, 10, iVar18, 31), 32);
				}
			}
			unk_0xC04DC1EA797A8A85(iVar0, &cVar2, iParam4);
			unk_0xC04DC1EA797A8A85(iVar1, &cVar10, iParam4);
		}
	}
}

int func_75(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

int func_76()
{
	return 1;
	return 0;
}

struct<16> func_77(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar18[32];
	
	uVar0 = Global_2491657[iParam0 /*5*/][func_75(iParam2)];
	uVar1 = Global_2491657[iParam1 /*5*/][func_75(iParam2)];
	StringCopy(&Var2, unk_0xEA993A0F29125448(uVar0, -1), 64);
	StringCopy(&cVar18, unk_0xEA993A0F29125448(uVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

void func_78()
{
	struct<16> Var0;
	
	Var0 = { func_77(55, 57, -1) };
	func_79(&Var0, 0);
	if ((!unk_0xD0333FE560420AC5() && unk_0xE2CCBFB054B508C9(0, -1, 1)) || func_72())
	{
		func_109(28);
	}
	else
	{
		func_71(28);
	}
}

void func_79(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		func_74(55, 57, sParam0, -1, 1);
	}
	StringCopy(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_74), sParam0, 64);
	if ((!unk_0xD0333FE560420AC5() && unk_0xE2CCBFB054B508C9(0, -1, 1)) || func_72())
	{
		func_109(28);
	}
	else
	{
		func_71(28);
	}
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_75(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
}

void func_81(int iParam0)
{
	unk_0x26545538B51562AD(&(Global_2391017.f_2), iParam0);
	if (Global_2391017)
	{
		return;
	}
	Global_2391017 = 1;
	Global_2391017.f_1 = 0;
}

void func_82()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2390943.f_28[iVar0 /*2*/] != -1 && Global_2390943.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (unk_0x7B4654D62B7E0E9E(Global_2390943.f_28[iVar0 /*2*/].f_1))
			{
				unk_0xBFAFDBA74467F7B4(Global_2390943.f_28[iVar0 /*2*/].f_1, 1);
			}
		}
		iVar0++;
	}
}

bool func_83()
{
	return Global_2434762.f_615;
}

void func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

bool func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xF426A5DE932B3BEE(Global_2460486.f_4660.f_7[iVar0], iVar1);
}

void func_86(int iParam0)
{
	if (func_94())
	{
		if (iParam0 == 1)
		{
			if (Global_2460486.f_4254 == -1)
			{
				Global_2460486.f_4254 = 60000;
			}
			func_93(&(Global_2460486.f_4252), 0, 0);
			if (Global_2460486.f_4257 == -1)
			{
				Global_2460486.f_4257 = 10000;
			}
			func_93(&(Global_2460486.f_4255), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_92();
		}
		if ((!unk_0x9404B1BCD022816B() && !func_91()) && !func_87(unk_0x4D29100D094E5511()))
		{
			Global_978142 = 0;
		}
		Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_8 = 0;
	}
}

int func_87(int iParam0)
{
	if (func_88(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_89(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_89(int iParam0)
{
	return func_90(iParam0);
}

bool func_90(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_13.f_1, 0);
}

bool func_91()
{
	return Global_2434762.f_713;
}

void func_92()
{
	if (unk_0x0E063DDE8855EC52())
	{
		if (!func_94())
		{
			if (func_42(unk_0x4D29100D094E5511(), 1, 0))
			{
				unk_0x7D77C969FB817825(unk_0x27D769C59BC9D030(), 1);
				unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 342, 0);
				unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 122, 0);
			}
			unk_0x7B10715D622AEBA2(unk_0x4D29100D094E5511(), 1f);
			unk_0xB4AB2A263E8B232C(0);
			unk_0x732C4E4B41A155BA(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0x8999EB495E6DBA1B(0);
			}
		}
		else
		{
			if (func_42(unk_0x4D29100D094E5511(), 1, 1))
			{
				unk_0x7D77C969FB817825(unk_0x27D769C59BC9D030(), 0);
				unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_unarmed"), 1);
				unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 342, 1);
				unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 122, 1);
				unk_0x7B10715D622AEBA2(unk_0x4D29100D094E5511(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x8999EB495E6DBA1B(1);
				}
			}
			unk_0xB4AB2A263E8B232C(1);
			unk_0x732C4E4B41A155BA(0);
		}
	}
}

void func_93(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x0E063DDE8855EC52() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x20D394965B47B01A();
		}
		else
		{
			*uParam0 = unk_0xBADD1A643AD56F36();
		}
	}
	else
	{
		*uParam0 = unk_0xA0F74982C6AAA9D4();
	}
	uParam0->f_1 = 1;
}

bool func_94()
{
	return Global_1312416;
}

void func_95()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x6EED86A16F7EA8F2(iVar0);
		if (unk_0x27C9C05A6B4E58D2(iVar1))
		{
			func_97(1, iVar1);
			if (iVar1 != unk_0x4D29100D094E5511())
			{
				func_96(iVar1);
			}
		}
		iVar0++;
	}
}

void func_96(int iParam0)
{
	var uVar0;
	
	if (unk_0xF426A5DE932B3BEE(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_70, iParam0))
	{
		uVar0 = unk_0xC834A7C58DEB59B4(iParam0);
		unk_0xA80E7A66B1A3A429(uVar0, unk_0x4D29100D094E5511(), 1);
		unk_0xA017073E76197359(unk_0x4D29100D094E5511(), iParam0, 1);
		unk_0xA017073E76197359(iParam0, unk_0x4D29100D094E5511(), 1);
		func_97(1, iParam0);
		unk_0xF17F4B0641AB2DE1(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_70), iParam0);
	}
}

void func_97(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (func_42(iParam1, 0, 1))
	{
		uVar1 = unk_0xC834A7C58DEB59B4(iParam1);
		if (unk_0xD2CFFE76B625AE55(uVar1) && !unk_0x2006A8C1BA2AFE80(iVar1, 0))
		{
			if (unk_0x9A4E2270C2271219(iVar1, 0))
			{
				iVar0 = unk_0xD9FFE8E1642C81E2(iVar1, 0);
				if (unk_0xD2CFFE76B625AE55(iVar0) && !unk_0x2006A8C1BA2AFE80(iVar0, 0))
				{
					unk_0xD19C844C2EAA893A(iVar0, bParam0, 1);
					if (func_52(iParam1, func_101(), 1))
					{
						if (func_101() == iParam1)
						{
							if (Global_2460486.f_4660.f_62[3] != iVar0)
							{
								Global_2460486.f_4660.f_62[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_98(func_101(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2460486.f_4660.f_62[iVar2] != iVar0)
								{
									Global_2460486.f_4660.f_62[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_52(iParam1, func_101(), 1))
				{
					if (func_101() == iParam1)
					{
						if (unk_0xD2CFFE76B625AE55(Global_2460486.f_4660.f_62[3]) && !unk_0x2006A8C1BA2AFE80(Global_2460486.f_4660.f_62[3], 0))
						{
							unk_0xD19C844C2EAA893A(Global_2460486.f_4660.f_62[3], true, 1);
							Global_2460486.f_4660.f_62[3] = 0;
						}
					}
					else
					{
						iVar3 = func_98(func_101(), iParam1);
						if (iVar3 != -1)
						{
							if (unk_0xD2CFFE76B625AE55(Global_2460486.f_4660.f_62[iVar3]) && !unk_0x2006A8C1BA2AFE80(Global_2460486.f_4660.f_62[iVar3], 0))
							{
								unk_0xD19C844C2EAA893A(Global_2460486.f_4660.f_62[iVar3], true, 1);
								Global_2460486.f_4660.f_62[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_159(iParam0))
	{
		if (func_52(iParam1, iParam0, 0) || func_100(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < func_60())
			{
				if (func_99(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_99(int iParam0, int iParam1)
{
	if (func_159(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 3)
		{
			return Global_1610316[iParam0 /*174*/].f_10.f_10[iParam1];
		}
	}
	return func_43();
}

int func_100(int iParam0, int iParam1)
{
	if (iParam1 != func_43())
	{
		if (Global_1610316[iParam0 /*174*/].f_10.f_21 != func_43())
		{
			return iParam1 == Global_1610316[iParam0 /*174*/].f_10.f_21;
		}
	}
	return 0;
}

int func_101()
{
	return Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10;
}

void func_102(int iParam0)
{
	if (!func_115())
	{
		return;
	}
	Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_1 = iParam0;
	if (func_105(3892, -1, 0) != func_103(unk_0x4D29100D094E5511()))
	{
		func_80(3892, func_103(unk_0x4D29100D094E5511()), -1, 1);
	}
}

int func_103(int iParam0)
{
	if (func_104(iParam0) == -1)
	{
		return -1;
	}
	return (func_104(iParam0) + 43200);
}

int func_104(int iParam0)
{
	return Global_1610316[iParam0 /*174*/].f_10.f_1;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2469339[iParam0 /*5*/][func_75(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_106()
{
	if (unk_0xDFCB321F1D24137F())
	{
		unk_0x0BB9FEF846F24EF8(1);
		unk_0xE04AF5E1D7A31CC0(-1755491431);
	}
}

void func_107(char[64] cParam0)
{
	Global_2435528.f_3065.f_2 = { cParam0 };
}

void func_108(var uParam0, var uParam1)
{
	Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_7[0] = uParam0;
	Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_7[1] = uParam1;
}

void func_109(int iParam0)
{
	unk_0xF17F4B0641AB2DE1(&(Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_4), iParam0);
}

void func_110(int iParam0)
{
	func_111(204, iParam0, -1, 1);
}

void func_111(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_76())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_75(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7D67977BA351D3A8(iVar0, uParam1, iParam3);
		}
	}
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		if (func_114(4))
		{
			func_71(21);
			func_71(22);
		}
		func_71(31);
		func_113(bParam0);
	}
	else
	{
		if (func_41(unk_0x4D29100D094E5511(), 21))
		{
			func_109(21);
			if (!func_114(3) && func_114(4))
			{
				func_71(22);
			}
		}
		func_109(31);
		func_113(bParam0);
	}
}

void func_113(bool bParam0)
{
	func_111(283, bParam0, -1, 1);
}

bool func_114(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_2460486.f_4660.f_18, iParam0);
}

int func_115()
{
	if (func_117() && func_116(0))
	{
		return 1;
	}
	return 0;
}

var func_116(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_117()
{
	return func_116(func_37() + 1);
}

bool func_118(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_159(iParam0))
		{
			return 0;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_43();
}

void func_119(int iParam0, bool bParam1)
{
	Global_68069 = iParam0;
	switch (Global_68069)
	{
		case 3:
			Global_68067 = 0;
			break;
		
		case 4:
			Global_68067 = 3;
			break;
	}
	if (!bParam1)
	{
		if (unk_0xD32535FA4397160F(joaat("appinternet")) > 0)
		{
			return;
		}
	}
	else if (unk_0xD32535FA4397160F(joaat("appsecuroserv")) > 0)
	{
		return;
	}
	if (Global_69489 && func_155())
	{
		return;
	}
	if (!Global_69489 && func_154())
	{
		return;
	}
	if (!bParam1)
	{
		if (!unk_0x9A8E9A1E029E9A5A("appInternet"))
		{
			unk_0xA51826E3518111A3("appInternet");
		}
		while (!unk_0x9A8E9A1E029E9A5A("appInternet"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appInternet", 4092);
		unk_0xABAEB0389A1F036F("appInternet");
	}
	else
	{
		if (!unk_0x9A8E9A1E029E9A5A("appSecuroServ"))
		{
			unk_0xA51826E3518111A3("appSecuroServ");
		}
		while (!unk_0x9A8E9A1E029E9A5A("appSecuroServ"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appSecuroServ", 4092);
		unk_0xABAEB0389A1F036F("appSecuroServ");
	}
}

void func_120(int iParam0)
{
	char* sVar0;
	char* sVar16;
	char* sVar32;
	char* sVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	
	if (!unk_0x0E063DDE8855EC52())
	{
		return;
	}
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		return;
	}
	if (!func_164(unk_0x4D29100D094E5511()))
	{
		return;
	}
	func_126(0, &sVar0);
	func_126(1, &sVar16);
	func_126(2, &sVar32);
	unk_0x88172B3983EC5071(&sVar32);
	unk_0x88172B3983EC5071(&sVar0);
	sVar48 = "idle_a";
	iVar49 = 1;
	if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == joaat("mp_f_freemode_01"))
	{
		iVar49 = 1;
	}
	switch (iLocal_109)
	{
		case 0:
			iLocal_101 = 0;
			unk_0x03451E410C2C1CD9("walk", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 64, 256, 64, 64);
			if (unk_0x482101C9B3483958(&sVar0))
			{
				if (unk_0x810AFFABCBF31E2D(unk_0x27D769C59BC9D030(), 2106541073) == 7 && unk_0x482101C9B3483958(&sVar0))
				{
					if (unk_0xC2AE0A979757C34A(iLocal_110))
					{
						unk_0x2C463497D9FB00B0(iLocal_110);
						iLocal_110 = -1;
					}
					iLocal_110 = unk_0x2BBEEAF2B7C4E645(Local_114, unk_0x9A98AE1D9D8DEF06(iParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
					unk_0xAB39929B33DB97EF(unk_0x27D769C59BC9D030(), iLocal_110, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					unk_0xACE769CD06E32A0F(iLocal_110);
					unk_0x651E63BA2F4975EC(&sVar0);
					iLocal_109 = 1;
				}
			}
			break;
		
		case 1:
			unk_0x03451E410C2C1CD9("enter", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 64, 256, 64, 64);
			unk_0x88172B3983EC5071(&sVar16);
			iVar50 = unk_0xAF5C7ED62374581C(iLocal_110);
			if (!iLocal_101)
			{
				if (unk_0xB3BBF60126795AAD(iVar50) >= 0.93f)
				{
					unk_0x954BCDB8FDB0AC0F(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
					iLocal_101 = 1;
				}
			}
			if (unk_0x482101C9B3483958(&sVar16) && (!unk_0xC2AE0A979757C34A(iVar50) || unk_0xB3BBF60126795AAD(iVar50) >= 0.96f))
			{
				iVar51 = unk_0x3A5708FEE1B560A9(0, iVar49);
				if ((((unk_0xC1C5B83BB6719C6C(&cLocal_117, "idle_a") && iVar51 == 0) || (unk_0xC1C5B83BB6719C6C(&cLocal_117, "idle_b") && iVar51 == 1)) || (unk_0xC1C5B83BB6719C6C(&cLocal_117, "idle_c") && iVar51 == 2)) || (unk_0xC1C5B83BB6719C6C(&cLocal_117, "idle_d") && iVar51 == 3))
				{
					iVar51++;
					if (iVar51 >= iVar49)
					{
						iVar51 = 0;
					}
				}
				if (unk_0xC2AE0A979757C34A(iLocal_110))
				{
					unk_0x2C463497D9FB00B0(iLocal_110);
					iLocal_110 = -1;
				}
				iLocal_110 = unk_0x2BBEEAF2B7C4E645(Local_114, unk_0x9A98AE1D9D8DEF06(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				switch (iVar51)
				{
					case 0:
						unk_0xAB39929B33DB97EF(unk_0x27D769C59BC9D030(), iLocal_110, &sVar16, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xACE769CD06E32A0F(iLocal_110);
						StringCopy(&cLocal_117, "idle_a", 16);
						iLocal_109 = 3;
						break;
					
					case 1:
						unk_0xAB39929B33DB97EF(unk_0x27D769C59BC9D030(), iLocal_110, &sVar16, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xACE769CD06E32A0F(iLocal_110);
						StringCopy(&cLocal_117, "idle_b", 16);
						iLocal_109 = 3;
						break;
					
					case 2:
						unk_0xAB39929B33DB97EF(unk_0x27D769C59BC9D030(), iLocal_110, &sVar16, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xACE769CD06E32A0F(iLocal_110);
						StringCopy(&cLocal_117, "idle_c", 16);
						iLocal_109 = 3;
						break;
					
					case 3:
						unk_0xAB39929B33DB97EF(unk_0x27D769C59BC9D030(), iLocal_110, &sVar16, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xACE769CD06E32A0F(iLocal_110);
						StringCopy(&cLocal_117, "idle_d", 16);
						iLocal_109 = 3;
						break;
					
					default:
						StringCopy(&cLocal_117, "idle_XXX", 16);
						break;
					}
			}
			break;
		
		case 3:
			iLocal_101 = 0;
			if (unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), &sVar16, "idle_a", 2))
			{
				unk_0x03451E410C2C1CD9("idle_a", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 256, 64, 64, 64);
			}
			else if (unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), &sVar16, "idle_b", 2))
			{
				unk_0x03451E410C2C1CD9("idle_b", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 256, 64, 64, 64);
			}
			else if (unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), &sVar16, "idle_c", 2))
			{
				unk_0x03451E410C2C1CD9("idle_c", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 256, 64, 64, 64);
			}
			else if (unk_0xF4954568C87BA772(unk_0x27D769C59BC9D030(), &sVar16, "idle_d", 2))
			{
				unk_0x03451E410C2C1CD9("idle_d", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 256, 64, 64, 64);
			}
			else
			{
				unk_0x03451E410C2C1CD9("idle_XXX", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 256, 64, 64, 64);
			}
			iVar50 = unk_0xAF5C7ED62374581C(iLocal_110);
			if (!unk_0xC2AE0A979757C34A(iLocal_110) && !unk_0xC2AE0A979757C34A(iVar50))
			{
				if (unk_0xC2AE0A979757C34A(iLocal_110))
				{
					unk_0x2C463497D9FB00B0(iLocal_110);
					iLocal_110 = -1;
				}
				iLocal_110 = unk_0x2BBEEAF2B7C4E645(Local_114, unk_0x9A98AE1D9D8DEF06(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				iVar50 = unk_0xAF5C7ED62374581C(iLocal_110);
				if (unk_0xC2AE0A979757C34A(iVar50))
				{
					unk_0x221689C0DCB71BAA(iVar50, 0f);
				}
				unk_0xAB39929B33DB97EF(unk_0x27D769C59BC9D030(), iLocal_110, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0xACE769CD06E32A0F(iLocal_110);
				iLocal_109 = 3;
				return;
			}
			if (unk_0x482101C9B3483958(&sVar16) && (!unk_0xC2AE0A979757C34A(iVar50) || unk_0xB3BBF60126795AAD(iVar50) >= 0.99f))
			{
				if (unk_0xC2AE0A979757C34A(iLocal_110))
				{
					unk_0x2C463497D9FB00B0(iLocal_110);
					iLocal_110 = -1;
				}
				iLocal_110 = unk_0x2BBEEAF2B7C4E645(Local_114, unk_0x9A98AE1D9D8DEF06(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0xAB39929B33DB97EF(unk_0x27D769C59BC9D030(), iLocal_110, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0xACE769CD06E32A0F(iLocal_110);
				iLocal_109 = 3;
				return;
			}
			break;
	}
}

int func_121(int iParam0, int iParam1)
{
	if (func_122(iParam0))
	{
		if (unk_0x810AFFABCBF31E2D(iParam0, iParam1) == 1 || unk_0x810AFFABCBF31E2D(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (func_123(iParam0))
	{
		if (!unk_0xE4F7206742848BAF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_125(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x43698C98CC255554((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0, char* sParam1)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_127())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (!func_164(unk_0x4D29100D094E5511()))
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
	return 1;
}

int func_127()
{
	bool bVar0;
	
	func_134(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			return 1;
		}
	}
	if (func_133())
	{
		return 1;
	}
	if (Global_2445442)
	{
		return 1;
	}
	if (func_132())
	{
		return 1;
	}
	if (func_131(157))
	{
		if (!func_130())
		{
			return 1;
		}
	}
	if (func_131(155))
	{
		return 1;
	}
	if (!unk_0x88E055AE81551426())
	{
		return 1;
	}
	if (func_128() != 0)
	{
		if (unk_0xD32535FA4397160F(func_128()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_128()
{
	switch (func_129())
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

int func_129()
{
	return Global_25120;
}

bool func_130()
{
	return Global_2434762.f_574;
}

int func_131(int iParam0)
{
	if (unk_0x9CDCE7BB256E1E4B(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_132()
{
	return Global_2443085;
}

bool func_133()
{
	return Global_2434762.f_569;
}

void func_134(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xB03A3CBE4F7737B0(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_135(iVar0);
					break;
				
				case 2:
					unk_0xB03A3CBE4F7737B0(1, iVar0, &Var4, 3);
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

void func_135(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xB03A3CBE4F7737B0(1, iParam0, &Var0, 3))
	{
		if (func_42(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xC834A7C58DEB59B4(Var0.f_1);
			if (unk_0xD2CFFE76B625AE55(uVar3))
			{
				if (unk_0x9A4E2270C2271219(iVar3, 0))
				{
					uVar4 = unk_0xD9FFE8E1642C81E2(iVar3, 0);
					if (unk_0x35DBB18680CBB9BD(uVar4, Var0.f_2) && unk_0xA8EFC723756B7650())
					{
						if (func_136(uVar4, &bVar5))
						{
							unk_0xC72E18180AE0A1F0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9846B4D56971A958(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_136(int iParam0, var uParam1)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0xE24B37600DCB21FC(iParam0))
		{
			if (unk_0x2380875F8B6B9911(iParam0))
			{
				unk_0xAF3355298F537BB0(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xFF65D7BC656BA68E(iParam0, 0))
		{
			if (unk_0xFB1CEF9E7943CFF5(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_137()
{
	if (func_159(unk_0x4D29100D094E5511()))
	{
		return 1;
	}
	else if (func_141() < func_140())
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_139(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2DB75A8F096AB1F1(unk_0xB927AFB90873B8C1()))
	{
		return 0;
	}
	if (func_158(0))
	{
		return 0;
	}
	if (unk_0x67FB99B1361E144E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1 && Global_36411[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36411[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36411[iVar0 /*32*/].f_5 = 1;
			Global_36411[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36411[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36411[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_139(int iParam0)
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
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_140()
{
	return Global_262145.f_10305;
}

int func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x6EED86A16F7EA8F2(iVar0);
		if (unk_0x27C9C05A6B4E58D2(iVar2))
		{
			if (func_159(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_142(char* sParam0)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 1, 1, -1);
}

int func_143()
{
	if (func_144())
	{
		return 1;
	}
	return Global_2434762.f_619;
}

bool func_144()
{
	return Global_1315871 == 10;
}

bool func_145()
{
	return Global_1728515.f_7;
}

int func_146()
{
	if (func_164(unk_0x4D29100D094E5511()))
	{
		if (unk_0xF426A5DE932B3BEE(Global_1728515.f_2, 0) || unk_0xF426A5DE932B3BEE(Global_1728515.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

void func_147(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xD32535FA4397160F(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x5D293E404CA20AA5())
	{
		if (!*iParam0 == -1)
		{
			func_150(iParam0);
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
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = unk_0xF42B3EF31F918DB2();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x75CB9E30BA492FF0(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_148()
{
	if (((func_149("MP_OFF_LAP_1") || func_149("WHPRIVSESLAP")) || func_149("WHSECUROBLCK")) || func_149("SECINPUTTREGLAP"))
	{
		return 1;
	}
	return 0;
}

var func_149(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

void func_150(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_139(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_152()
{
	return func_159(unk_0x4D29100D094E5511());
}

bool func_153()
{
	return Global_1587523[unk_0x4D29100D094E5511() /*444*/] == 148;
}

var func_154()
{
	return Global_68059;
}

var func_155()
{
	return Global_1715861;
}

int func_156()
{
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if (unk_0x9297C590C99228DC(unk_0x841B76F992C06AAC(unk_0x27D769C59BC9D030()), -1) == unk_0x27D769C59BC9D030())
		{
			return 1;
		}
	}
	return 0;
}

int func_157()
{
	if (unk_0xD32535FA4397160F(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_43())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_43())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_160()
{
	if (unk_0xD2CFFE76B625AE55(iLocal_108))
	{
		if (unk_0x946C63BD9EF05437(iLocal_108) == joaat("ex_prop_monitor_01_ex") || func_164(unk_0x4D29100D094E5511()))
		{
			return 1;
		}
	}
	return 0;
}

void func_161()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_158(0))
		{
			func_2(0);
		}
		unk_0x26545538B51562AD(&Global_2284, 2);
	}
}

void func_162(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_163(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_166(uParam0, bParam2, 0);
	if (unk_0x0E063DDE8855EC52() && !bParam2)
	{
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0xA0F74982C6AAA9D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 != func_43())
	{
		if (func_42(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_165(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

void func_166(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x0E063DDE8855EC52() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x20D394965B47B01A();
			}
			else
			{
				*uParam0 = unk_0xBADD1A643AD56F36();
			}
		}
		else
		{
			*uParam0 = unk_0xA0F74982C6AAA9D4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_167(var uParam0)
{
	return uParam0->f_1;
}

bool func_168(int iParam0)
{
	return func_169(func_170(iParam0));
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_170(int iParam0)
{
	if (func_171(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

int func_171(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_172(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_173()
{
	if (iLocal_97 != -1)
	{
		func_150(&iLocal_97);
	}
	if (((func_149("MP_OFF_LAP_1") || func_149("WHPRIVSESLAP")) || func_149("WHSECUROBLCK")) || func_149("SECINPUTTREGLAP"))
	{
		unk_0x5BD150B52CE8D356(1);
	}
	Global_25387 = 0;
	Global_1728814 = 0;
}

