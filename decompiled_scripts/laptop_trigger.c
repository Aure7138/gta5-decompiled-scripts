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
	if (!unk_0xC1EDB61CE0A4B94E(iLocal_108))
	{
		unk_0xF5DF8F3392CDD07B();
	}
	if (unk_0x9CEB376419A71A96(3))
	{
		func_173();
		unk_0xF5DF8F3392CDD07B();
	}
	if (func_172(13) || func_172(14))
	{
		func_173();
		unk_0xF5DF8F3392CDD07B();
	}
	if (Global_31515)
	{
		func_173();
		unk_0xF5DF8F3392CDD07B();
	}
	if (Global_68097)
	{
		unk_0xF5DF8F3392CDD07B();
	}
	bVar0 = false;
	sVar1 = "tvscreen";
	bVar28 = true;
	Var29 = { unk_0xF4745590D18D14B8(iScriptParam_0, 1) - unk_0x1210C9F87A32AFD5(iScriptParam_0) * Vector(0.6f, 0.6f, 0.6f) };
	Var29.f_2 = (Var29.f_2 + 0.5f);
	Local_114 = { unk_0xF42E2289B33D5C38(iScriptParam_0, Local_111) };
	Global_1736243 = 0;
	while (bVar28)
	{
		if (unk_0xC1EDB61CE0A4B94E(iLocal_108))
		{
			if (bLocal_99)
			{
				if (!func_168(unk_0xE0BDAFA1A39552D6()))
				{
					if (!func_167(&uLocal_102))
					{
						func_166(&uLocal_102, 1, 0);
					}
				}
			}
			if (Global_1736243 && func_164(unk_0xE0BDAFA1A39552D6()))
			{
				if (!func_167(&uLocal_106))
				{
					func_166(&uLocal_106, 0, 0);
				}
				else if (func_163(&uLocal_106, 10000, 0))
				{
					func_162(&uLocal_106);
					Global_1736243 = 0;
				}
				func_161();
			}
			if (Global_1587800)
			{
				if (!bVar0)
				{
					iVar32 = unk_0x79469DA5833EACA8(iLocal_108);
					if (iVar32 == joaat("prop_laptop_01a"))
					{
						unk_0x33DD8C1E6F81EAFC(unk_0xF4745590D18D14B8(iScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var33 = { unk_0xB3EAD8911713F6A6(iLocal_108, 2) };
						iLocal_108 = unk_0xE6B4261E1DAB4EE0(joaat("prop_laptop_lester2"), unk_0xF4745590D18D14B8(iLocal_108, 1), 0, 1, 0);
						unk_0x5C5B23A2682A1514(iLocal_108, Var33, 2, 1);
						bVar0 = true;
					}
				}
			}
			if (unk_0x9715A04134E581D6(iLocal_108))
			{
				func_173();
				unk_0xF5DF8F3392CDD07B();
			}
		}
		if (((!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0) && unk_0xC1EDB61CE0A4B94E(iLocal_108)) && !unk_0xEE448F70B7098781()) && unk_0x7868479D9B6694C0(unk_0xBC628C78D8ECD5F1()))
		{
			if (unk_0x9F99187B9EC3128C(unk_0x06736567F820A39E()) == unk_0x9F99187B9EC3128C(iLocal_108))
			{
				bVar36 = false;
				iVar37 = unk_0x8DB7EA2D75DA4B59(unk_0x06736567F820A39E(), &uVar2, -1);
				iVar38 = 0;
				iVar38 = 0;
				while (iVar38 < iVar37)
				{
					if (!unk_0xBDA1F5E8A36BFA07(uVar2[iVar38], 0))
					{
						if (unk_0x46E9388908C80483(uVar2[iVar38], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar36 = true;
						}
						else if (unk_0x46E9388908C80483(uVar2[iVar38], "MP_COMMON_MISS", "HACK_LOOP", 3))
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
				bVar42 = func_159(unk_0xE0BDAFA1A39552D6());
				if (((((((((((((!bVar36 && !Global_25418) && !func_158(0)) && !unk_0x55C761BDF0A5BB06(unk_0x06736567F820A39E(), 0)) && !func_157()) && unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), Var29, Var39, 0, 1, 1)) && unk_0x0A91C32B05E9D7D4(unk_0x06736567F820A39E()) == unk_0x0A91C32B05E9D7D4(iLocal_108)) && !unk_0x7DA173D4FD42F36B(Global_2359301, 15)) && !func_156()) && !(Global_69521 && func_155())) && !(!Global_69521 && func_154())) && !((Global_69521 && unk_0x7DA173D4FD42F36B(Global_1617902.f_14, 24)) && unk_0x21A36E2323FEA4B1())) && !((Global_69521 && func_153()) && func_152())) && !unk_0x8122B656FB23F1C7())
				{
					if (!func_151(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_9))
					{
						if (func_164(unk_0xE0BDAFA1A39552D6()) && iLocal_100 != bVar42)
						{
							if (iLocal_97 != -1)
							{
								func_150(&iLocal_97);
							}
							if (func_148())
							{
								unk_0x310F6B4E168A8F5D(1);
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
								if (((func_146() && !unk_0x62B40DCE3407C5E4(unk_0xE0BDAFA1A39552D6())) && !func_145()) && !Global_1736243)
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
										else if (func_136(unk_0xE0BDAFA1A39552D6()))
										{
											func_147(&iLocal_97, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
										}
										else if (unk_0x21A36E2323FEA4B1())
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
										if (func_168(unk_0xE0BDAFA1A39552D6()) || Global_1736243 == 1)
										{
											bLocal_99 = true;
											if (!Global_1736243)
											{
												func_142("WHSECUROBLCK");
											}
										}
										else
										{
											if (func_148())
											{
												unk_0x310F6B4E168A8F5D(1);
											}
											bLocal_99 = false;
											func_162(&uLocal_102);
											func_147(&iLocal_97, 1, "WHSECUROINPUT", 0, 0, 0, 0);
										}
									}
									else if (bLocal_99)
									{
										if (!unk_0x6146EFE5BC2DD8DC())
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
					if (((func_134(iLocal_97, 1) && !unk_0x48078199BD648B77(unk_0x06736567F820A39E())) && func_133()) || Global_25423)
					{
						Global_25423 = 0;
						if (iLocal_97 != -1)
						{
							func_150(&iLocal_97);
						}
						if (!bVar0)
						{
							StringCopy(&Var43, "", 64);
							if (func_146())
							{
								Global_1736242 = 1;
								if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
								{
									unk_0xDC8345A5D9F4B348(unk_0x06736567F820A39E(), joaat("weapon_unarmed"), 1);
									Var59 = { unk_0xF42E2289B33D5C38(iScriptParam_0, 0.0328f, -0.8f, 0.3f) };
									bVar62 = false;
									func_162(&uLocal_104);
									if (func_122(0, &Var43))
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
											if (!func_121(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Var59, 0.05f, 0) && !func_120(unk_0x3CAD22C2D36A7F14(unk_0x06736567F820A39E()), unk_0x3CAD22C2D36A7F14(iScriptParam_0), 5f))
											{
												if (!func_117(unk_0x06736567F820A39E(), 2106541073))
												{
													unk_0x45B6AF61833199EC(unk_0x06736567F820A39E(), Var59, 1f, 5000, unk_0x3CAD22C2D36A7F14(iScriptParam_0), 0.25f);
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
									func_116(iScriptParam_0);
									func_161();
									unk_0x4EDE34FBADD967A6(0);
								}
							}
							if (func_160())
							{
								func_115(0, 1);
								if ((((!bVar42 && !func_114(unk_0xE0BDAFA1A39552D6(), 1)) && func_141() < func_140()) && !unk_0x21A36E2323FEA4B1()) && !func_136(unk_0xE0BDAFA1A39552D6()))
								{
									func_10(1, 0);
								}
							}
							else
							{
								func_115(0, 0);
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
								if (!unk_0xC1EDB61CE0A4B94E(iLocal_108) || !unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), unk_0xF4745590D18D14B8(iLocal_108, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_68092 = 1;
								}
								if (func_146())
								{
									if (!Global_68089)
									{
										bVar63 = false;
									}
								}
								else if (Global_68089 || Global_68092)
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
								if (!unk_0xC9E4F5D17ACABA9A(unk_0x06736567F820A39E(), 1))
								{
									if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
									{
										if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
										{
											if (unk_0xEDAD470832946405(unk_0x06736567F820A39E()))
											{
												unk_0x1C06AE946D877DF1(unk_0x06736567F820A39E());
												if (!unk_0xC9E4F5D17ACABA9A(unk_0x06736567F820A39E(), 1))
												{
													unk_0x1F6717C33A02B7AC(unk_0x06736567F820A39E());
												}
											}
											if (func_122(1, &Var43))
											{
												unk_0x6B09668CBB188BED(&Var43);
											}
											if (func_122(2, &Var43))
											{
												if (iLocal_109 != 0)
												{
													if (unk_0x4958900440DDE4E4(iLocal_110))
													{
														unk_0x1ACFD66996D85C8F(iLocal_110);
														iLocal_110 = -1;
													}
													iLocal_110 = unk_0xC2F899BFC87B57E7(Local_114, unk_0xB3EAD8911713F6A6(iScriptParam_0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
													unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), iLocal_110, &Var43, "exit", 8f, -4f, 5, 0, 1148846080, 0);
													unk_0x2D818F2925754469(iLocal_110);
													unk_0x6B09668CBB188BED(&Var43);
												}
											}
										}
									}
								}
								Global_1736242 = 0;
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
					if (func_164(unk_0xE0BDAFA1A39552D6()))
					{
						if (func_148())
						{
							unk_0x310F6B4E168A8F5D(1);
						}
					}
					if (unk_0xC1EDB61CE0A4B94E(iScriptParam_0))
					{
						if (!unk_0xF956B5861E255755(iScriptParam_0))
						{
							bVar28 = false;
						}
					}
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
	if (bVar0)
	{
		if (unk_0x360C2516A7B2502A(sVar1))
		{
			unk_0x778FD0D5919ECA26(sVar1);
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
			unk_0xE27C8E42A97895CF(&Global_2284, 16);
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
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
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
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
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
	Global_2434839.f_632 = 1;
}

var func_8()
{
	return Global_2434839.f_611;
}

bool func_9()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839.f_2, 11);
}

void func_10(bool bParam0, int iParam1)
{
	struct<14> Var0;
	
	func_62(1, 1, iParam1);
	if (bParam0)
	{
		if (func_61(89) || func_61(96))
		{
			func_60();
		}
		func_59(17);
		Var0.f_2 = 183;
		Var0.f_3 = iParam1;
		if (func_58(unk_0xE0BDAFA1A39552D6()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		func_56(Var0, func_57(0, 1));
		func_29();
		if (!func_58(unk_0xE0BDAFA1A39552D6()))
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
	
	unk_0x99BCB15F954AF579(&Global_2283, 10);
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
			Global_2893[3 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0xE27C8E42A97895CF(&Global_2283, 1);
			unk_0xE27C8E42A97895CF(&Global_2283, 7);
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
	if (unk_0x2F6869889D97DFED(sParam14, sParam15))
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
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if (unk_0x0B755A8FB5904621(unk_0x06736567F820A39E()))
			{
				return 0;
			}
		}
		if (Global_101186.f_12817[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
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
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/]), sParam1, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_25 = iParam7;
	Global_101186.f_12907[Global_16779 /*104*/].f_26 = uParam8;
	Global_101186.f_12907[Global_16779 /*104*/].f_29 = uParam9;
	Global_101186.f_12907[Global_16779 /*104*/].f_30 = uParam12;
	Global_101186.f_12907[Global_16779 /*104*/].f_31 = uParam11;
	Global_101186.f_12907[Global_16779 /*104*/].f_28 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
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
				Global_101186.f_12907[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
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
		if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
		{
			Global_101186.f_12817[0 /*20*/].f_17 = 1;
			Global_101186.f_12817[1 /*20*/].f_17 = 1;
			Global_101186.f_12817[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101186.f_12817[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101186.f_12817[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101186.f_12817[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101186.f_12817[1 /*20*/].f_17 = 1;
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
				unk_0x962E604CCA53388F(-1, "Text_Arrive_Tone", &Global_14402, 1);
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
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar2);
								unk_0xE97F1B22C5E8989F();
							}
							if (Global_2444091)
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
									if (Global_101186.f_12907[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101186.f_12907[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101186.f_12907[iVar3 /*104*/].f_99[Global_14413] == 1)
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
								if (Global_69521)
								{
									iVar4 = 0;
									iVar4 = Global_2566789;
									func_14(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36875;
											break;
										
										case 1:
											iVar5 = Global_36876;
											break;
										
										case 2:
											iVar5 = Global_36877;
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
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(Global_2289);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar6);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar7);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 8)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if ((iVar1 == 23 && unk_0x2F6869889D97DFED(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x7DA173D4FD42F36B(Global_2284, 6))
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_15(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609456.f_1;
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
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x226FA58470A21AEF(uParam7))
	{
		func_15(uParam7);
	}
	if (!unk_0x226FA58470A21AEF(iParam8))
	{
		func_15(iParam8);
	}
	if (!unk_0x226FA58470A21AEF(iParam9))
	{
		func_15(iParam9);
	}
	if (!unk_0x226FA58470A21AEF(iParam10))
	{
		func_15(iParam10);
	}
	if (!unk_0x226FA58470A21AEF(iParam11))
	{
		func_15(iParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

void func_15(var uParam0)
{
	unk_0x7291E2F821FCFC04(uParam0);
	unk_0xD6360E18957BCDD3();
}

void func_16(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE97F1B22C5E8989F();
}

bool func_17()
{
	return Global_1315913;
}

void func_18(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101186.f_12817[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0xF14A94DD5AC25E5A();
	uVar1 = unk_0x4DD90C24B73F9042();
	uVar2 = unk_0xEC5C0F25A9A364A0();
	uVar3 = unk_0xED13857F967C0912();
	uVar4 = unk_0x39BDC971C31BA81C() + 1;
	uVar5 = unk_0x6EBF2ECA5972D1E7();
	Global_101186.f_12907[iParam0 /*104*/].f_18 = uVar0;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
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
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_21(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_24 = 1;
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
	
	if (Global_69521)
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
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0 || Global_101186.f_12907[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_21(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
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
	Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

void func_23()
{
	if (func_172(14))
	{
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[2 /*29*/])
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
		if (Global_69521)
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
	return Global_101186.f_1902.f_539.f_3549;
}

void func_25()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_28(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_27(unk_0x06736567F820A39E());
			if (func_26(iVar0) && (!func_172(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_26(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
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
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_29()
{
	if ((!func_52() && func_43()) && func_38(unk_0xE0BDAFA1A39552D6()))
	{
		func_30("GB_INFO_LFG", 1);
	}
}

int func_30(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x999E5F6D1B49D87B(sParam0);
	iVar0 = unk_0xB452F88B6A7B058D(0, 1);
	func_31(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_31(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_37() || !unk_0x21A36E2323FEA4B1()) || !func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	iVar0 = func_32(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1731647.f_5[iVar0 /*53*/] = iParam0;
		Global_1731647.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1731647.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1731647.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1731647.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1731647.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1731647.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1731647 - 1))
	{
		if (iParam0 > Global_1731647.f_5[iVar0 /*53*/].f_1)
		{
			func_33(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1731647++;
	if (Global_1731647 > 5)
	{
		Global_1731647 = 5;
		return Global_1731647;
	}
	return (Global_1731647 - 1);
}

void func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1731647.f_5[iVar0 /*53*/] = { Global_1731647.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
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

int func_36()
{
	return Global_1312747;
}

bool func_37()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
}

int func_38(int iParam0)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	if (!func_41(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_34(iParam0, 0))
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 2) || unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 5))
	{
		return 0;
	}
	if (func_39(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_40(iParam0, 9);
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_10.f_4, iParam1);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_42()
{
	return -1;
}

int func_43()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x801C03D92F1C6755(iVar0);
		if (func_41(iVar1, 0, 1))
		{
			if (iVar1 != unk_0xE0BDAFA1A39552D6())
			{
				if (func_40(iVar1, 15) && func_44(iVar1, 0, 0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == func_42())
	{
		return 0;
	}
	if (!func_41(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_34(iParam0, 0))
	{
		return 0;
	}
	if (func_50(iParam0))
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 2) || unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 5))
	{
		return 0;
	}
	if (func_49(iParam0))
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_47(iParam0, iParam1, 1))
		{
			return 0;
		}
		if (func_46(iParam0))
		{
			return 0;
		}
	}
	else if (func_114(iParam0, 1))
	{
		return 0;
	}
	if (func_45(iParam0))
	{
		return 0;
	}
	if (func_39(iParam0))
	{
		return 0;
	}
	if (func_136(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 0);
	}
	return 0;
}

bool func_46(int iParam0)
{
	return func_40(iParam0, 20);
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_42())
	{
		if (!bParam2)
		{
			if (func_48(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1610705[iParam0 /*178*/].f_10 != func_42())
		{
			return iParam1 == Global_1610705[iParam0 /*178*/].f_10;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	if (iParam1 != func_42())
	{
		if (iParam0 != func_42())
		{
			if (Global_1610705[iParam0 /*178*/].f_10 != func_42())
			{
				if (Global_1610705[iParam0 /*178*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_49(int iParam0)
{
	return func_40(iParam0, 30);
}

int func_50(int iParam0)
{
	if (!func_40(iParam0, 2))
	{
		return 1;
	}
	if (func_40(iParam0, 1))
	{
		return 1;
	}
	if (func_51(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_18;
}

int func_52()
{
	int iVar0;
	var uVar1;
	struct<16> Var17;
	
	iVar0 = 0;
	while (iVar0 < func_55())
	{
		if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_10[iVar0] == func_42())
		{
			StringCopy(&Var17, "", 64);
			Var17 = { func_53(func_54(iVar0)) };
			if (unk_0x2F6869889D97DFED(&Var17, &uVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<16> func_53(int iParam0)
{
	return Global_2435608.f_3065.f_18[iParam0 /*16*/];
}

int func_54(int iParam0)
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

int func_55()
{
	return Global_262145.f_10551;
}

void func_56(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xE0BDAFA1A39552D6();
	if (!iParam14 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Param0, 14, iParam14);
	}
}

int func_57(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar1);
		if (func_41(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
				else if (!func_34(iVar2, 0))
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_58(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 26);
}

void func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_61(int iParam0)
{
	return Global_2428549.f_2191[0 /*72*/].f_1 == iParam0;
}

void func_62(bool bParam0, bool bParam1, var uParam2)
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
	
	if (!func_111())
	{
		return;
	}
	iVar7 = 1;
	if (func_58(unk_0xE0BDAFA1A39552D6()))
	{
		iVar7 = 2;
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10 != unk_0xE0BDAFA1A39552D6())
	{
		if (bParam1)
		{
			unk_0x8E63ED02DFB7BE03(iVar7);
			func_108(0);
			func_106(0);
			func_105(21);
			func_105(22);
		}
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10 = unk_0xE0BDAFA1A39552D6();
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_156 = uParam2;
		unk_0xE69070D459066BB5(func_36(), &uVar8, &uVar9);
		func_104(uVar8, uVar9);
		sVar10 = unk_0xCA1F4BD097C9E783(unk_0xE0BDAFA1A39552D6(), &uVar0);
		StringCopy(&Var11, sVar10, 64);
		func_103(Var11);
		func_102();
		if (func_101(3919, -1, 0) <= 0)
		{
			iVar6 = unk_0x40077EDF3FF70C39();
		}
		else
		{
			iVar6 = (func_101(3919, -1, 0) - 43200);
		}
		func_98(iVar6);
		if (unk_0xAC584872D0639309("Player_Boss", 3))
		{
			unk_0xF5A99D0F2DE51D19(unk_0x06736567F820A39E(), "Player_Boss", unk_0xE0BDAFA1A39552D6());
		}
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_19 = -1;
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_20 = -1;
		Global_2464975.f_4685.f_25 = -1;
		func_91();
		func_82(0);
		if (bParam0)
		{
			func_59(0);
		}
		if (Global_2464975.f_4685.f_61 != func_42())
		{
			Global_2464975.f_4685.f_61 = func_42();
		}
		if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1643, 15))
		{
			unk_0x99BCB15F954AF579(&(Global_2464975.f_1643), 15);
		}
		if (func_81(15))
		{
			func_80(15);
		}
		if (!func_79() && !unk_0x21A36E2323FEA4B1())
		{
			func_78();
			func_77(2);
		}
		func_76(3959, 2, -1, 1);
		func_105(31);
		func_74();
		func_66();
		if (!func_65(82, 3))
		{
			bVar27 = false;
			iVar28 = func_101(3916, -1, 0);
			if (!unk_0x7DA173D4FD42F36B(iVar28, 11))
			{
				unk_0xE27C8E42A97895CF(&iVar28, 11);
				func_76(3916, iVar28, -1, 1);
				bVar27 = true;
			}
			func_63(82, 3, bVar27);
		}
	}
}

void func_63(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_23();
		if (iParam1 == 4)
		{
			Global_101186.f_32651[iParam0 /*29*/].f_12[0] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_12[1] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_12[2] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[0] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[1] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101186.f_32651[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101186.f_32651[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101186.f_32651[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101186.f_32651[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69521)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_64();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_64();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_64();
			}
		}
	}
}

void func_64()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x71DD68B05C4C8FA5(&(Global_101186.f_32651[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x999E5F6D1B49D87B("");
		StringCopy(&cVar16, unk_0x71DD68B05C4C8FA5(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0x71DD68B05C4C8FA5("CELL_253");
		unk_0x850E49B6757F562E(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x999E5F6D1B49D87B("CELL_255");
		unk_0x4C5D86B5B659C953(&(Global_2893[1 /*6*/]));
		unk_0x850E49B6757F562E(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x99BCB15F954AF579(&Global_2283, 0);
}

int func_65(int iParam0, int iParam1)
{
	if (Global_101186.f_32651[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	struct<16> Var0;
	
	Var0 = { func_73(45, 46, -1) };
	func_69(&Var0, 0);
	if ((!unk_0xB6FEE919E18FF45B() && unk_0xC9B6CD4E82C594D0(0, -1, 1)) || func_68())
	{
		func_105(28);
	}
	else
	{
		func_67(28);
	}
}

void func_67(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

int func_68()
{
	if (unk_0xE414AE803DFDBF93() == 0)
	{
		return 0;
	}
	if (unk_0x7E8E236FA7C5423B())
	{
		if (unk_0x787B6F3FDDC94F00(1, -1))
		{
			if (unk_0xE454B9C63FEF41D4())
			{
				return 1;
			}
		}
	}
	if (unk_0x8B003E1580113906())
	{
		if (unk_0x4F07450559D0D1D1(1))
		{
			if (unk_0xE454B9C63FEF41D4())
			{
				return 1;
			}
		}
	}
	if (unk_0x438D260E2A787A5B() || unk_0xB6FEE919E18FF45B())
	{
		if (unk_0xC9B6CD4E82C594D0(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x55812CD5A331E1F8())
	{
		if (unk_0x787B6F3FDDC94F00(0, -1))
		{
			if (unk_0xE454B9C63FEF41D4())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_69(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x226FA58470A21AEF(sParam0))
		{
			func_70(45, 46, sParam0, -1, 1);
		}
	}
	if (!unk_0x226FA58470A21AEF(sParam0))
	{
		StringCopy(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_135), sParam0, 64);
	}
	if ((!unk_0xB6FEE919E18FF45B() && unk_0xC9B6CD4E82C594D0(0, -1, 1)) || func_68())
	{
		func_105(28);
	}
	else
	{
		func_67(28);
	}
}

void func_70(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	if (func_72())
	{
		iVar0 = Global_2496312[iParam0 /*5*/][func_71(iParam3)];
		iVar1 = Global_2496312[iParam1 /*5*/][func_71(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar10, "", 32);
			iVar18 = unk_0x1AF431622CC415A8(uParam2);
			if (iVar18 > 0)
			{
				iVar19 = 10;
				if (iVar18 < 10)
				{
					iVar19 = iVar18;
				}
				StringCopy(&cVar2, unk_0xB1BA47C301D0BD15(uParam2, 0, iVar19, 31), 32);
				if (iVar18 > 10)
				{
					StringCopy(&cVar10, unk_0xB1BA47C301D0BD15(uParam2, 10, iVar18, 31), 32);
				}
			}
			unk_0x0E6BF0496755890C(iVar0, &cVar2, iParam4);
			unk_0x0E6BF0496755890C(iVar1, &cVar10, iParam4);
		}
	}
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

int func_72()
{
	return 1;
	return 0;
}

struct<16> func_73(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar18[32];
	
	uVar0 = Global_2496312[iParam0 /*5*/][func_71(iParam2)];
	uVar1 = Global_2496312[iParam1 /*5*/][func_71(iParam2)];
	StringCopy(&Var2, unk_0x7C1B2EE3696F6433(uVar0, -1), 64);
	StringCopy(&cVar18, unk_0x7C1B2EE3696F6433(uVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

void func_74()
{
	struct<16> Var0;
	
	Var0 = { func_73(55, 57, -1) };
	func_75(&Var0, 0);
	if ((!unk_0xB6FEE919E18FF45B() && unk_0xC9B6CD4E82C594D0(0, -1, 1)) || func_68())
	{
		func_105(28);
	}
	else
	{
		func_67(28);
	}
}

void func_75(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		func_70(55, 57, sParam0, -1, 1);
	}
	StringCopy(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_77), sParam0, 64);
	if ((!unk_0xB6FEE919E18FF45B() && unk_0xC9B6CD4E82C594D0(0, -1, 1)) || func_68())
	{
		func_105(28);
	}
	else
	{
		func_67(28);
	}
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

void func_77(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_2391018.f_2), iParam0);
	if (Global_2391018)
	{
		return;
	}
	Global_2391018 = 1;
	Global_2391018.f_1 = 0;
}

void func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2390944.f_28[iVar0 /*2*/] != -1 && Global_2390944.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (unk_0xCDB4C4200A9B478A(Global_2390944.f_28[iVar0 /*2*/].f_1))
			{
				unk_0xF1C629E826767C2C(Global_2390944.f_28[iVar0 /*2*/].f_1, 1);
			}
		}
		iVar0++;
	}
}

bool func_79()
{
	return Global_2434839.f_616;
}

void func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

bool func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_4685.f_7[iVar0], iVar1);
}

void func_82(int iParam0)
{
	if (func_90())
	{
		if (iParam0 == 1)
		{
			if (Global_2464975.f_4254 == -1)
			{
				Global_2464975.f_4254 = 60000;
			}
			func_89(&(Global_2464975.f_4252), 0, 0);
			if (Global_2464975.f_4257 == -1)
			{
				Global_2464975.f_4257 = 10000;
			}
			func_89(&(Global_2464975.f_4255), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_88();
		}
		if ((!unk_0x21A36E2323FEA4B1() && !func_87()) && !func_83(unk_0xE0BDAFA1A39552D6()))
		{
			Global_978174 = 0;
		}
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_8 = 0;
	}
}

int func_83(int iParam0)
{
	if (func_84(iParam0, 1))
	{
		if (Global_1587816[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_84(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_85(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587816[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_85(int iParam0)
{
	return func_86(iParam0);
}

bool func_86(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

bool func_87()
{
	return Global_2434839.f_716;
}

void func_88()
{
	if (unk_0x17CC0D5008835470())
	{
		if (!func_90())
		{
			if (func_41(unk_0xE0BDAFA1A39552D6(), 1, 0))
			{
				unk_0xB4BF8D10E8B22242(unk_0x06736567F820A39E(), 1);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 342, 0);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 122, 0);
			}
			unk_0xAC5CD08D2C6F2E74(unk_0xE0BDAFA1A39552D6(), 1f);
			unk_0x2339DE868E879B53(0);
			unk_0x4C48684974B45ED5(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0x8EE5B578170FE8FC(0, 0);
			}
		}
		else
		{
			if (func_41(unk_0xE0BDAFA1A39552D6(), 1, 1))
			{
				unk_0xB4BF8D10E8B22242(unk_0x06736567F820A39E(), 0);
				unk_0xDC8345A5D9F4B348(unk_0x06736567F820A39E(), joaat("weapon_unarmed"), 1);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 342, 1);
				unk_0x6553935614875699(unk_0x06736567F820A39E(), 122, 1);
				unk_0xAC5CD08D2C6F2E74(unk_0xE0BDAFA1A39552D6(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0x8EE5B578170FE8FC(1, 0);
				}
			}
			unk_0x2339DE868E879B53(1);
			unk_0x4C48684974B45ED5(0);
		}
	}
}

void func_89(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x201D90648B2AE3CE();
		}
		else
		{
			*uParam0 = unk_0xED6DF4F701311AF8();
		}
	}
	else
	{
		*uParam0 = unk_0x1ADBAAC322D61F73();
	}
	uParam0->f_1 = 1;
}

bool func_90()
{
	return Global_1312416;
}

void func_91()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x801C03D92F1C6755(iVar0);
		if (unk_0xA27C9E8196C79D22(iVar1))
		{
			func_93(1, iVar1);
			if (iVar1 != unk_0xE0BDAFA1A39552D6())
			{
				func_92(iVar1);
			}
		}
		iVar0++;
	}
}

void func_92(int iParam0)
{
	var uVar0;
	
	if (unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_73, iParam0))
	{
		uVar0 = unk_0x44A9253132E1DDE0(iParam0);
		unk_0x657CAD7CE358D665(uVar0, unk_0xE0BDAFA1A39552D6(), 1);
		unk_0xFDB2AD78EE5E2EE4(unk_0xE0BDAFA1A39552D6(), iParam0, 1);
		unk_0xFDB2AD78EE5E2EE4(iParam0, unk_0xE0BDAFA1A39552D6(), 1);
		func_93(1, iParam0);
		unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_73), iParam0);
	}
}

void func_93(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (func_41(iParam1, 0, 1))
	{
		uVar1 = unk_0x44A9253132E1DDE0(iParam1);
		if (unk_0xC1EDB61CE0A4B94E(uVar1) && !unk_0xBDA1F5E8A36BFA07(iVar1, 0))
		{
			if (unk_0x0FDFEC0DD29106EE(iVar1, 0))
			{
				iVar0 = unk_0x34E1EF1E8BCD1BFC(iVar1, 0);
				if (unk_0xC1EDB61CE0A4B94E(iVar0) && !unk_0xBDA1F5E8A36BFA07(iVar0, 0))
				{
					unk_0xA32B7A439DBBC873(iVar0, bParam0, 1);
					if (func_47(iParam1, func_97(), 1))
					{
						if (func_97() == iParam1)
						{
							if (Global_2464975.f_4685.f_62[3] != iVar0)
							{
								Global_2464975.f_4685.f_62[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_94(func_97(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2464975.f_4685.f_62[iVar2] != iVar0)
								{
									Global_2464975.f_4685.f_62[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_47(iParam1, func_97(), 1))
				{
					if (func_97() == iParam1)
					{
						if (unk_0xC1EDB61CE0A4B94E(Global_2464975.f_4685.f_62[3]) && !unk_0xBDA1F5E8A36BFA07(Global_2464975.f_4685.f_62[3], 0))
						{
							unk_0xA32B7A439DBBC873(Global_2464975.f_4685.f_62[3], true, 1);
							Global_2464975.f_4685.f_62[3] = 0;
						}
					}
					else
					{
						iVar3 = func_94(func_97(), iParam1);
						if (iVar3 != -1)
						{
							if (unk_0xC1EDB61CE0A4B94E(Global_2464975.f_4685.f_62[iVar3]) && !unk_0xBDA1F5E8A36BFA07(Global_2464975.f_4685.f_62[iVar3], 0))
							{
								unk_0xA32B7A439DBBC873(Global_2464975.f_4685.f_62[iVar3], true, 1);
								Global_2464975.f_4685.f_62[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_159(iParam0))
	{
		if (func_47(iParam1, iParam0, 0) || func_96(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < func_55())
			{
				if (func_95(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_95(int iParam0, int iParam1)
{
	if (func_159(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 3)
		{
			return Global_1610705[iParam0 /*178*/].f_10.f_10[iParam1];
		}
	}
	return func_42();
}

int func_96(int iParam0, int iParam1)
{
	if (iParam1 != func_42())
	{
		if (Global_1610705[iParam0 /*178*/].f_10.f_21 != func_42())
		{
			return iParam1 == Global_1610705[iParam0 /*178*/].f_10.f_21;
		}
	}
	return 0;
}

int func_97()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10;
}

void func_98(int iParam0)
{
	if (!func_111())
	{
		return;
	}
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_1 = iParam0;
	if (func_101(3919, -1, 0) != func_99(unk_0xE0BDAFA1A39552D6()))
	{
		func_76(3919, func_99(unk_0xE0BDAFA1A39552D6()), -1, 1);
	}
}

int func_99(int iParam0)
{
	if (func_100(iParam0) == -1)
	{
		return -1;
	}
	return (func_100(iParam0) + 43200);
}

int func_100(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_1;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_71(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_102()
{
	if (unk_0x55812CD5A331E1F8())
	{
		unk_0x060503CB26C289BA(1);
		unk_0x05CB72CFE90E01EE(-1755491431);
	}
}

void func_103(char[64] cParam0)
{
	Global_2435608.f_3065.f_2 = { cParam0 };
}

void func_104(var uParam0, var uParam1)
{
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_7[0] = uParam0;
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_7[1] = uParam1;
}

void func_105(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

void func_106(int iParam0)
{
	func_107(204, iParam0, -1, 1);
}

void func_107(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_72())
	{
		iVar0 = Global_2494881[iParam0 /*5*/][func_71(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7E42158771F6AC55(iVar0, uParam1, iParam3);
		}
	}
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		if (func_110(4))
		{
			func_67(21);
			func_67(22);
		}
		func_67(31);
		func_109(bParam0);
	}
	else
	{
		if (func_40(unk_0xE0BDAFA1A39552D6(), 21))
		{
			func_105(21);
			if (!func_110(3) && func_110(4))
			{
				func_67(22);
			}
		}
		func_105(31);
		func_109(bParam0);
	}
}

void func_109(bool bParam0)
{
	func_107(284, bParam0, -1, 1);
}

bool func_110(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_4685.f_18, iParam0);
}

int func_111()
{
	if (func_113() && func_112(0))
	{
		return 1;
	}
	return 0;
}

var func_112(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_113()
{
	return func_112(func_36() + 1);
}

bool func_114(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_159(iParam0))
		{
			return 0;
		}
	}
	return Global_1610705[iParam0 /*178*/].f_10 != func_42();
}

void func_115(int iParam0, bool bParam1)
{
	Global_68100 = iParam0;
	switch (Global_68100)
	{
		case 3:
			Global_68098 = 0;
			break;
		
		case 4:
			Global_68098 = 3;
			break;
	}
	if (!bParam1)
	{
		if (unk_0x98934607F8D0FB03(joaat("appinternet")) > 0)
		{
			return;
		}
	}
	else if (unk_0x98934607F8D0FB03(joaat("appsecuroserv")) > 0)
	{
		return;
	}
	if (Global_69521 && func_155())
	{
		return;
	}
	if (!Global_69521 && func_154())
	{
		return;
	}
	if (!bParam1)
	{
		if (!unk_0x04D070195A8178CD("appInternet"))
		{
			unk_0x47CCE1B84DDCD2A7("appInternet");
		}
		while (!unk_0x04D070195A8178CD("appInternet"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appInternet", 4092);
		unk_0x3F380364F30A5C6B("appInternet");
	}
	else
	{
		if (!unk_0x04D070195A8178CD("appSecuroServ"))
		{
			unk_0x47CCE1B84DDCD2A7("appSecuroServ");
		}
		while (!unk_0x04D070195A8178CD("appSecuroServ"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appSecuroServ", 4092);
		unk_0x3F380364F30A5C6B("appSecuroServ");
	}
}

void func_116(int iParam0)
{
	char* sVar0;
	char* sVar16;
	char* sVar32;
	char* sVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	
	if (!unk_0x17CC0D5008835470())
	{
		return;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return;
	}
	if (!func_164(unk_0xE0BDAFA1A39552D6()))
	{
		return;
	}
	func_122(0, &sVar0);
	func_122(1, &sVar16);
	func_122(2, &sVar32);
	unk_0x198E497B820DA913(&sVar32);
	unk_0x198E497B820DA913(&sVar0);
	sVar48 = "idle_a";
	iVar49 = 1;
	if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == joaat("mp_f_freemode_01"))
	{
		iVar49 = 1;
	}
	switch (iLocal_109)
	{
		case 0:
			iLocal_101 = 0;
			unk_0x8363221761514698("walk", unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 64, 256, 64, 64);
			if (unk_0x7B43775D6E0D7325(&sVar0))
			{
				if (unk_0xFB900D9EE2ACC400(unk_0x06736567F820A39E(), 2106541073) == 7 && unk_0x7B43775D6E0D7325(&sVar0))
				{
					if (unk_0x4958900440DDE4E4(iLocal_110))
					{
						unk_0x1ACFD66996D85C8F(iLocal_110);
						iLocal_110 = -1;
					}
					iLocal_110 = unk_0xC2F899BFC87B57E7(Local_114, unk_0xB3EAD8911713F6A6(iParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
					unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), iLocal_110, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					unk_0x2D818F2925754469(iLocal_110);
					unk_0x6B09668CBB188BED(&sVar0);
					iLocal_109 = 1;
				}
			}
			break;
		
		case 1:
			unk_0x8363221761514698("enter", unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 64, 256, 64, 64);
			unk_0x198E497B820DA913(&sVar16);
			iVar50 = unk_0x111736C2C9FCA3D0(iLocal_110);
			if (!iLocal_101)
			{
				if (unk_0x3B5FD456D45F2AAE(iVar50) >= 0.93f)
				{
					unk_0x962E604CCA53388F(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
					iLocal_101 = 1;
				}
			}
			if (unk_0x7B43775D6E0D7325(&sVar16) && (!unk_0x4958900440DDE4E4(iVar50) || unk_0x3B5FD456D45F2AAE(iVar50) >= 0.96f))
			{
				iVar51 = unk_0xA6055C735E3DD877(0, iVar49);
				if ((((unk_0x2F6869889D97DFED(&cLocal_117, "idle_a") && iVar51 == 0) || (unk_0x2F6869889D97DFED(&cLocal_117, "idle_b") && iVar51 == 1)) || (unk_0x2F6869889D97DFED(&cLocal_117, "idle_c") && iVar51 == 2)) || (unk_0x2F6869889D97DFED(&cLocal_117, "idle_d") && iVar51 == 3))
				{
					iVar51++;
					if (iVar51 >= iVar49)
					{
						iVar51 = 0;
					}
				}
				if (unk_0x4958900440DDE4E4(iLocal_110))
				{
					unk_0x1ACFD66996D85C8F(iLocal_110);
					iLocal_110 = -1;
				}
				iLocal_110 = unk_0xC2F899BFC87B57E7(Local_114, unk_0xB3EAD8911713F6A6(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				switch (iVar51)
				{
					case 0:
						unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), iLocal_110, &sVar16, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x2D818F2925754469(iLocal_110);
						StringCopy(&cLocal_117, "idle_a", 16);
						iLocal_109 = 3;
						break;
					
					case 1:
						unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), iLocal_110, &sVar16, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x2D818F2925754469(iLocal_110);
						StringCopy(&cLocal_117, "idle_b", 16);
						iLocal_109 = 3;
						break;
					
					case 2:
						unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), iLocal_110, &sVar16, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x2D818F2925754469(iLocal_110);
						StringCopy(&cLocal_117, "idle_c", 16);
						iLocal_109 = 3;
						break;
					
					case 3:
						unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), iLocal_110, &sVar16, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0x2D818F2925754469(iLocal_110);
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
			if (unk_0x46E9388908C80483(unk_0x06736567F820A39E(), &sVar16, "idle_a", 2))
			{
				unk_0x8363221761514698("idle_a", unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 256, 64, 64, 64);
			}
			else if (unk_0x46E9388908C80483(unk_0x06736567F820A39E(), &sVar16, "idle_b", 2))
			{
				unk_0x8363221761514698("idle_b", unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 256, 64, 64, 64);
			}
			else if (unk_0x46E9388908C80483(unk_0x06736567F820A39E(), &sVar16, "idle_c", 2))
			{
				unk_0x8363221761514698("idle_c", unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 256, 64, 64, 64);
			}
			else if (unk_0x46E9388908C80483(unk_0x06736567F820A39E(), &sVar16, "idle_d", 2))
			{
				unk_0x8363221761514698("idle_d", unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 256, 64, 64, 64);
			}
			else
			{
				unk_0x8363221761514698("idle_XXX", unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), 256, 64, 64, 64);
			}
			iVar50 = unk_0x111736C2C9FCA3D0(iLocal_110);
			if (!unk_0x4958900440DDE4E4(iLocal_110) && !unk_0x4958900440DDE4E4(iVar50))
			{
				if (unk_0x4958900440DDE4E4(iLocal_110))
				{
					unk_0x1ACFD66996D85C8F(iLocal_110);
					iLocal_110 = -1;
				}
				iLocal_110 = unk_0xC2F899BFC87B57E7(Local_114, unk_0xB3EAD8911713F6A6(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				iVar50 = unk_0x111736C2C9FCA3D0(iLocal_110);
				if (unk_0x4958900440DDE4E4(iVar50))
				{
					unk_0x963D11E545E699A3(iVar50, 0f);
				}
				unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), iLocal_110, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0x2D818F2925754469(iLocal_110);
				iLocal_109 = 3;
				return;
			}
			if (unk_0x7B43775D6E0D7325(&sVar16) && (!unk_0x4958900440DDE4E4(iVar50) || unk_0x3B5FD456D45F2AAE(iVar50) >= 0.99f))
			{
				if (unk_0x4958900440DDE4E4(iLocal_110))
				{
					unk_0x1ACFD66996D85C8F(iLocal_110);
					iLocal_110 = -1;
				}
				iLocal_110 = unk_0xC2F899BFC87B57E7(Local_114, unk_0xB3EAD8911713F6A6(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0x53AA1AD7D12E68F4(unk_0x06736567F820A39E(), iLocal_110, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0x2D818F2925754469(iLocal_110);
				iLocal_109 = 3;
				return;
			}
			break;
	}
}

int func_117(int iParam0, int iParam1)
{
	if (func_118(iParam0))
	{
		if (unk_0xFB900D9EE2ACC400(iParam0, iParam1) == 1 || unk_0xFB900D9EE2ACC400(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	if (func_119(iParam0))
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_120(float fParam0, float fParam1, float fParam2)
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

int func_121(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xF87C669B882D93C0((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0, char* sParam1)
{
	if (!unk_0x17CC0D5008835470())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_123())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (!func_164(unk_0xE0BDAFA1A39552D6()))
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
	return 1;
}

int func_123()
{
	bool bVar0;
	
	func_130(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_129())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_128())
	{
		return 1;
	}
	if (func_127(157))
	{
		if (!func_126())
		{
			return 1;
		}
	}
	if (func_127(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_124() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_124()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()
{
	switch (func_125())
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

int func_125()
{
	return Global_25152;
}

bool func_126()
{
	return Global_2434839.f_575;
}

int func_127(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_128()
{
	return Global_2444095;
}

bool func_129()
{
	return Global_2434839.f_570;
}

void func_130(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_131(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
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

void func_131(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_41(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(iVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(iVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_132(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_132(int iParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(iParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(iParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(iParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_133()
{
	if (func_136(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_159(unk_0xE0BDAFA1A39552D6()))
	{
		return 1;
	}
	else if (func_141() < func_140())
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_135(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x7868479D9B6694C0(unk_0xBC628C78D8ECD5F1()))
	{
		return 0;
	}
	if (func_158(0))
	{
		return 0;
	}
	if (unk_0xEE448F70B7098781())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36442[iVar0 /*32*/] == 1 && Global_36442[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36442[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36442[iVar0 /*32*/].f_5 = 1;
			Global_36442[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36442[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36442[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_135(int iParam0)
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
		if (Global_36442[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_136(int iParam0)
{
	return func_137(iParam0) > 0;
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_41(iParam0, 0, 1))
	{
		if (Global_1610705[iParam0 /*178*/].f_10.f_120 != -1)
		{
			iVar0 = Global_1610705[iParam0 /*178*/].f_10.f_120;
		}
		else
		{
			iVar0 = func_139(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_138()) - unk_0x40077EDF3FF70C39());
		return iVar1;
	}
	return -1;
}

int func_138()
{
	return Global_262145.f_12581;
}

int func_139(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_140()
{
	return Global_262145.f_10553;
}

int func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar0);
		if (unk_0xA27C9E8196C79D22(iVar2))
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
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 1, 1, -1);
}

int func_143()
{
	if (func_144())
	{
		return 1;
	}
	return Global_2434839.f_620;
}

bool func_144()
{
	return Global_1315871 == 10;
}

bool func_145()
{
	return Global_1735933.f_7;
}

int func_146()
{
	if (func_164(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x7DA173D4FD42F36B(Global_1735933.f_2, 0) || unk_0x7DA173D4FD42F36B(Global_1735933.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

void func_147(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x98934607F8D0FB03(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xAD79840A082ADD7F())
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
		if (!Global_36442[iVar0 /*32*/])
		{
			Global_36442[iVar0 /*32*/] = 1;
			Global_36442[iVar0 /*32*/].f_1 = Global_36643;
			Global_36643++;
			Global_36442[iVar0 /*32*/].f_4 = 0;
			Global_36442[iVar0 /*32*/].f_29 = 0;
			Global_36442[iVar0 /*32*/].f_5 = 0;
			Global_36442[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36442[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36442[iVar0 /*32*/].f_6 = iParam3;
			Global_36442[iVar0 /*32*/].f_31 = unk_0xAE832DCCE9CD3242();
			Global_36442[iVar0 /*32*/].f_7 = 0;
			Global_36442[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x226FA58470A21AEF(sParam4))
			{
				Global_36442[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36442[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36442[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36442[iVar0 /*32*/].f_12 = 0;
				Global_36442[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36442[iVar0 /*32*/].f_1;
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
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

void func_150(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_135(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36442[iVar0 /*32*/])
		{
			Global_36442[iVar0 /*32*/].f_7 = 1;
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
	return func_159(unk_0xE0BDAFA1A39552D6());
}

bool func_153()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 148;
}

var func_154()
{
	return Global_68090;
}

var func_155()
{
	return Global_1723278;
}

int func_156()
{
	if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
	{
		if (unk_0x4321FC7479614822(unk_0xEB18AC70F95C0F8C(unk_0x06736567F820A39E()), -1) == unk_0x06736567F820A39E())
		{
			return 1;
		}
	}
	return 0;
}

int func_157()
{
	if (unk_0x98934607F8D0FB03(joaat("player_timetable_scene")) > 0)
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
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
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
	if (iParam0 != func_42())
	{
		if (Global_1610705[iParam0 /*178*/].f_10 != func_42())
		{
			return Global_1610705[iParam0 /*178*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_160()
{
	if (unk_0xC1EDB61CE0A4B94E(iLocal_108))
	{
		if (unk_0x79469DA5833EACA8(iLocal_108) == joaat("ex_prop_monitor_01_ex") || func_164(unk_0xE0BDAFA1A39552D6()))
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
		unk_0xE27C8E42A97895CF(&Global_2284, 2);
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
	if (unk_0x17CC0D5008835470() && !bParam2)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 != func_42())
	{
		if (func_41(iParam0, 1, 1))
		{
			if (Global_2418529[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_165(Global_2418529[iParam0 /*313*/].f_305.f_1) == 0;
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
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
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
		return Global_1610705[iParam0 /*178*/].f_10.f_28;
	}
	return -1;
}

int func_171(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_172(int iParam0)
{
	return Global_35742 == iParam0;
}

void func_173()
{
	if (iLocal_97 != -1)
	{
		func_150(&iLocal_97);
	}
	if (((func_149("MP_OFF_LAP_1") || func_149("WHPRIVSESLAP")) || func_149("WHSECUROBLCK")) || func_149("SECINPUTTREGLAP"))
	{
		unk_0x310F6B4E168A8F5D(1);
	}
	Global_1736243 = 0;
	Global_1736242 = 0;
}

