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
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	char cLocal_119[16] = "";
	var uLocal_121 = 0;
	var uLocal_122 = 0;
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
	bool bVar43;
	
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	iLocal_99 = -1;
	Local_113 = { 0f, 0f, 0f };
	iLocal_110 = iScriptParam_0;
	if (!unk_0x7887B64A08364778(iLocal_110))
	{
		unk_0x01DFCA3621B68C4A();
	}
	if (unk_0x2170E7BC25114A22(3))
	{
		func_217();
		unk_0x01DFCA3621B68C4A();
	}
	if (func_216(13) || func_216(14))
	{
		func_217();
		unk_0x01DFCA3621B68C4A();
	}
	if (Global_31548)
	{
		func_217();
		unk_0x01DFCA3621B68C4A();
	}
	if (Global_68185)
	{
		unk_0x01DFCA3621B68C4A();
	}
	bVar0 = false;
	sVar1 = "tvscreen";
	bVar28 = true;
	Var29 = { unk_0xC086F8D75730FA3A(iScriptParam_0, 1) - unk_0xF42BD66111346ACC(iScriptParam_0) * Vector(0.6f, 0.6f, 0.6f) };
	Var29.f_2 = (Var29.f_2 + 0.5f);
	Local_116 = { unk_0x7E140C583F91AE2B(iScriptParam_0, Local_113) };
	Global_1760630 = 0;
	Global_1760725 = 0;
	while (bVar28)
	{
		if (unk_0x7887B64A08364778(iLocal_110))
		{
			if (iLocal_101)
			{
				if (!func_214(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (!func_213(&uLocal_104))
					{
						func_212(&uLocal_104, 1, 0);
					}
				}
			}
			if (Global_1760630 && (func_211(unk_0xFB6B3EEFAB2DD12C()) || func_210(unk_0xFB6B3EEFAB2DD12C())))
			{
				if (!func_213(&uLocal_108))
				{
					func_212(&uLocal_108, 0, 0);
				}
				else if (func_209(&uLocal_108, 10000, 0))
				{
					func_208(&uLocal_108);
					Global_1760630 = 0;
				}
				func_204();
			}
			if (Global_1589805)
			{
				if (!bVar0)
				{
					iVar32 = unk_0xA0A4DA31DEDFAC4F(iLocal_110);
					if (iVar32 == joaat("prop_laptop_01a"))
					{
						unk_0x46D5FE0EBF067343(unk_0xC086F8D75730FA3A(iScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var33 = { unk_0xB73B9913DD4EE2AA(iLocal_110, 2) };
						iLocal_110 = unk_0xF21B698F4FCCA3D3(joaat("prop_laptop_lester2"), unk_0xC086F8D75730FA3A(iLocal_110, 1), 0, 1, 0);
						unk_0x0033076C5BC6D1E9(iLocal_110, Var33, 2, 1);
						bVar0 = true;
					}
				}
			}
			if (unk_0x40EF1667AF107C1B(iLocal_110))
			{
				func_217();
				unk_0x01DFCA3621B68C4A();
			}
		}
		if (((!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0) && unk_0x7887B64A08364778(iLocal_110)) && !unk_0x30A37E559346657F()) && unk_0x9BA2465846EC8271(unk_0xF3F8195C98263BF5()))
		{
			if (unk_0xDC9C34EF6C270425(unk_0xD5A676B97920D126()) == unk_0xDC9C34EF6C270425(iLocal_110))
			{
				bVar36 = false;
				iVar37 = unk_0x2B7034B7B7F5EA19(unk_0xD5A676B97920D126(), &uVar2, -1);
				iVar38 = 0;
				iVar38 = 0;
				while (iVar38 < iVar37)
				{
					if (!unk_0xB529B2A4B7C64D6D(uVar2[iVar38], 0))
					{
						if (unk_0xEBA40DFF7CCE3511(uVar2[iVar38], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar36 = true;
						}
						else if (unk_0xEBA40DFF7CCE3511(uVar2[iVar38], "MP_COMMON_MISS", "HACK_LOOP", 3))
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
				if (((func_203() || func_202(unk_0xFB6B3EEFAB2DD12C())) || func_210(unk_0xFB6B3EEFAB2DD12C())) || func_201())
				{
					Var39 = { 1f, 1f, 0.9f };
				}
				bVar42 = func_200(unk_0xFB6B3EEFAB2DD12C());
				if ((((((((((((((!bVar36 && !Global_25451) && !func_199(0)) && !unk_0xD147F8B99C847EFB(unk_0xD5A676B97920D126(), 0)) && !func_198()) && unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Var29, Var39, 0, 1, 1)) && unk_0x917884BE83EE1312(unk_0xD5A676B97920D126()) == unk_0x917884BE83EE1312(iLocal_110)) && !unk_0xF44A5E894FE76438(Global_2359301, 15)) && !func_197()) && !(Global_69697 && func_196())) && !(!Global_69697 && func_195())) && !((Global_69697 && unk_0xF44A5E894FE76438(Global_1632166.f_14, 24)) && unk_0x8676DE83D4396C39())) && !((Global_69697 && func_194()) && func_193())) && !unk_0xA488C8C46BFD5A39()) && !Global_68524)
				{
					if (func_191(unk_0xFB6B3EEFAB2DD12C()))
					{
					}
					if ((!func_190(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15) && !func_189(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_15, -1)) && !func_191(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (iLocal_102 != bVar42)
						{
							if ((func_211(unk_0xFB6B3EEFAB2DD12C()) || func_188(unk_0xFB6B3EEFAB2DD12C())) || func_210(unk_0xFB6B3EEFAB2DD12C()))
							{
								if (iLocal_99 != -1)
								{
									func_187(&iLocal_99);
								}
								if (func_185())
								{
									unk_0x04890EB0282525A5(1);
								}
							}
						}
						iLocal_102 = bVar42;
						if (iLocal_99 == -1)
						{
							if (bVar0)
							{
								func_184(&iLocal_99, 1, "MPLA_BILL", 0, 0, 0, 0);
							}
							else if (func_203())
							{
								func_183(bVar42);
							}
							else if (func_181())
							{
								func_178(bVar42);
							}
							else if (func_201())
							{
								func_166(bVar42);
							}
							else
							{
								func_184(&iLocal_99, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
							}
						}
					}
					if ((((iLocal_99 != -1 && func_164(iLocal_99, 1)) && !unk_0xC7ED07DE252EF27C(unk_0xD5A676B97920D126())) && func_163()) || func_161())
					{
						Global_25456 = 0;
						if (iLocal_99 != -1)
						{
							func_187(&iLocal_99);
						}
						if (!bVar0)
						{
							if (func_160() || func_159())
							{
								func_152();
							}
							if (func_203())
							{
								func_20(0, bVar42);
								func_19(0, 1, 0, 0);
							}
							else if (func_201())
							{
								func_20(0, bVar42);
								func_19(0, 0, 0, 1);
							}
							else if (func_181())
							{
								func_20(1, bVar42);
								func_19(0, 0, 1, 0);
							}
							else
							{
								func_19(0, 0, 0, 0);
							}
							if (!iLocal_100)
							{
								func_15();
								iLocal_100 = 1;
							}
							bVar43 = true;
							if (func_160() || func_159())
							{
								func_14(&uLocal_106, 0, 0);
								while (!func_209(&uLocal_106, 500, 0))
								{
									func_204();
									unk_0x4EDE34FBADD967A6(0);
								}
								func_208(&uLocal_106);
							}
							while (bVar43)
							{
								if (!unk_0x7887B64A08364778(iLocal_110) || !unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), unk_0xC086F8D75730FA3A(iLocal_110, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_68130 = 1;
								}
								if ((func_160() || func_159()) || func_191(unk_0xFB6B3EEFAB2DD12C()))
								{
									if (!Global_68127 && !Global_68524)
									{
										bVar43 = false;
									}
								}
								else if (Global_68127 || Global_68130)
								{
									bVar43 = false;
								}
								if (func_160())
								{
									func_204();
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							if (func_160() || func_159())
							{
								func_1();
							}
							func_204();
							func_208(&uLocal_108);
							iLocal_100 = 0;
						}
					}
				}
				else
				{
					if (iLocal_99 != -1)
					{
						func_187(&iLocal_99);
					}
					if (func_211(unk_0xFB6B3EEFAB2DD12C()) || func_188(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (func_185())
						{
							unk_0x04890EB0282525A5(1);
						}
					}
					if (unk_0x7887B64A08364778(iScriptParam_0))
					{
						if (!unk_0x097C50E86C2C5672(iScriptParam_0))
						{
							bVar28 = false;
						}
					}
				}
			}
			else if (iLocal_99 != -1)
			{
				func_187(&iLocal_99);
			}
		}
		else
		{
			if (iLocal_99 != -1)
			{
				func_187(&iLocal_99);
			}
			bVar28 = false;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (bVar0)
	{
		if (unk_0xF1D6D0D1F3A18A37(sVar1))
		{
			unk_0x01BDD6D7073ED2B9(sVar1);
		}
	}
}

void func_1()
{
	char* sVar0;
	
	if (!unk_0x1250D50E38843DBF(unk_0xD5A676B97920D126(), 1) && unk_0x7887B64A08364778(iLocal_110))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
			{
				if (unk_0xA715394B56A2E75D(unk_0xD5A676B97920D126()))
				{
					unk_0xD8365019DB3141BF(unk_0xD5A676B97920D126());
					if (!unk_0x1250D50E38843DBF(unk_0xD5A676B97920D126(), 1))
					{
						unk_0x37338B7B7C4982DC(unk_0xD5A676B97920D126());
					}
				}
				if (func_2(1, &sVar0))
				{
					unk_0x6989DACCC7A558AE(&sVar0);
				}
				if (func_2(2, &sVar0))
				{
					if (iLocal_111 != 0)
					{
						if (unk_0xC8FC1161FDD0E597(iLocal_112))
						{
							unk_0x73F6030600EE7F1D(iLocal_112);
							iLocal_112 = -1;
						}
						iLocal_112 = unk_0xFDA7DDD9F7283E10(Local_116, unk_0xB73B9913DD4EE2AA(iLocal_110, 2), 2, 0, 0, 1065353216, 0, 1065353216);
						unk_0x6CBC72508997AE0B(unk_0xD5A676B97920D126(), iLocal_112, &sVar0, "exit", 8f, -4f, 5, 0, 1148846080, 0);
						unk_0xC3A3E242F2704675(iLocal_112);
						unk_0x6989DACCC7A558AE(&sVar0);
					}
				}
			}
		}
	}
	Global_1760629 = 0;
}

int func_2(int iParam0, char* sParam1)
{
	if (!unk_0x1995B52453EF6537())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_3())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (!func_211(unk_0xFB6B3EEFAB2DD12C()) && !func_210(unk_0xFB6B3EEFAB2DD12C()))
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	StringCopy(sParam1, "anim@amb@warehouse@laptop@", 64);
	return 1;
}

int func_3()
{
	bool bVar0;
	var uVar1;
	
	func_10(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_8())
	{
		return 1;
	}
	if (func_7(157))
	{
		if (!func_6())
		{
			return 1;
		}
	}
	if (func_7(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_4()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	switch (func_5())
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

int func_5()
{
	return Global_25185;
}

bool func_6()
{
	return Global_2443089.f_577;
}

int func_7(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2452479;
}

bool func_9()
{
	return Global_2443089.f_572;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_11(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_11(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(int iParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(iParam0))
		{
			if (unk_0x94482DCC4926EF60(iParam0))
			{
				unk_0xC53606C390BE2727(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(iParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1995B52453EF6537() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7414B386C0020BEC();
		}
		else
		{
			*uParam0 = unk_0x8D8F7D01F0EB4218();
		}
	}
	else
	{
		*uParam0 = unk_0x84A97C70FFDEC0C8();
	}
	uParam0->f_1 = 1;
}

void func_15()
{
	if (func_18() || func_17())
	{
		func_16();
	}
}

void func_16()
{
	Global_2443089.f_634 = 1;
}

var func_17()
{
	return Global_2443089.f_613;
}

bool func_18()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 11);
}

void func_19(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Global_68188 = iParam0;
	switch (Global_68188)
	{
		case 3:
			Global_68186 = 0;
			break;
		
		case 4:
			Global_68186 = 3;
			break;
	}
	if (bParam1)
	{
		if (unk_0xAB964FCFAC3C767A(joaat("appsecuroserv")) > 0)
		{
			return;
		}
	}
	else if (bParam2)
	{
		if (unk_0xAB964FCFAC3C767A(joaat("appbikerbusiness")) > 0)
		{
			return;
		}
	}
	else if (bParam3)
	{
		if (unk_0xAB964FCFAC3C767A(joaat("appimportexport")) > 0)
		{
			return;
		}
	}
	else if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_69697 && func_196())
	{
		return;
	}
	if (!Global_69697 && func_195())
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x4AAFD43C0AFB7A1A("appSecuroServ"))
		{
			unk_0x7FC35FCC666F974E("appSecuroServ");
		}
		while (!unk_0x4AAFD43C0AFB7A1A("appSecuroServ"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appSecuroServ", 4592);
		unk_0x0446A34B5E23D747("appSecuroServ");
	}
	else if (bParam2)
	{
		if (!unk_0x4AAFD43C0AFB7A1A("appBikerBusiness"))
		{
			unk_0x7FC35FCC666F974E("appBikerBusiness");
		}
		while (!unk_0x4AAFD43C0AFB7A1A("appBikerBusiness"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appBikerBusiness", 4592);
		unk_0x0446A34B5E23D747("appBikerBusiness");
	}
	else if (bParam3)
	{
		if (!unk_0x4AAFD43C0AFB7A1A("appImportExport"))
		{
			unk_0x7FC35FCC666F974E("appImportExport");
		}
		while (!unk_0x4AAFD43C0AFB7A1A("appImportExport"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appImportExport", 4592);
		unk_0x0446A34B5E23D747("appImportExport");
	}
	else
	{
		if (!unk_0x4AAFD43C0AFB7A1A("appInternet"))
		{
			unk_0x7FC35FCC666F974E("appInternet");
		}
		while (!unk_0x4AAFD43C0AFB7A1A("appInternet"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appInternet", 4592);
		unk_0x0446A34B5E23D747("appInternet");
	}
}

void func_20(int iParam0, bool bParam1)
{
	if ((((!bParam1 && !func_151(unk_0xFB6B3EEFAB2DD12C(), 1)) && func_150() < func_149()) && !unk_0x8676DE83D4396C39()) && !func_145(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_21(1, iParam0);
	}
}

void func_21(bool bParam0, int iParam1)
{
	struct<14> Var0;
	
	func_98(1, 1, iParam1);
	if (bParam0)
	{
		if (func_97(90) || func_97(97))
		{
			func_96();
		}
		func_80();
		func_79(17);
		Var0.f_2 = 183;
		Var0.f_3 = iParam1;
		if (func_78(unk_0xFB6B3EEFAB2DD12C()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		func_76(Var0, func_77(0, 1));
		func_40();
		if (!func_78(unk_0xFB6B3EEFAB2DD12C()) && iParam1 != 1)
		{
			func_22(82, "GB_TXTMSG_INIT", 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

int func_22(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x4EA098C870B73AB7(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_23(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xB8A73E7DA87B2968(&Global_2313, 1);
			unk_0xB8A73E7DA87B2968(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_23(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xCC257DA11A122B5F(sParam14, sParam15))
	{
	}
	func_34();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
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
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (unk_0x2C278D8A0121A8DE(unk_0xD5A676B97920D126()))
			{
				return 0;
			}
		}
		if (Global_101652.f_12994[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xAB964FCFAC3C767A(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_33() == 0)
	{
		func_31();
		return 0;
	}
	func_30(Global_16812);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/]), sParam1, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_25 = iParam7;
	Global_101652.f_13084[Global_16812 /*104*/].f_26 = uParam8;
	Global_101652.f_13084[Global_16812 /*104*/].f_29 = uParam9;
	Global_101652.f_13084[Global_16812 /*104*/].f_30 = uParam12;
	Global_101652.f_13084[Global_16812 /*104*/].f_31 = uParam11;
	Global_101652.f_13084[Global_16812 /*104*/].f_28 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101652.f_13084[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101652.f_13084[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xF44A5E894FE76438(Global_2313, 10))
	{
		Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
		Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_29(0);
		func_29(2);
		func_29(1);
	}
	else
	{
		func_34();
		switch (iParam16)
		{
			case 3:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_29(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_29(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_29(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_29(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xF44A5E894FE76438(Global_2313, 10))
		{
			Global_101652.f_12994[0 /*20*/].f_17 = 1;
			Global_101652.f_12994[1 /*20*/].f_17 = 1;
			Global_101652.f_12994[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101652.f_12994[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101652.f_12994[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101652.f_12994[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101652.f_12994[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_34();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_28())
			{
				unk_0xA93E75A5493862BD(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_27(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_24(1);
			func_27(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_24(int iParam0)
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
	int iVar9;
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_216(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar2);
								unk_0xBBAAC5B2437ACF2A();
							}
							if (Global_2452475)
							{
								if (iVar1 == 14)
								{
									func_25(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
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
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101652.f_13084[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101652.f_13084[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101652.f_13084[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_25(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69697)
								{
									iVar4 = 0;
									iVar4 = Global_2593992;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2593993[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2593993[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2593993[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_25(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36913;
											break;
										
										case 1:
											iVar6 = Global_36914;
											break;
										
										case 2:
											iVar6 = Global_36915;
											break;
										
										default:
											break;
									}
									func_25(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_25(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(Global_2319);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar7);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xF44A5E894FE76438(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(iVar8);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (iVar1 == 8)
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if ((iVar1 == 23 && unk_0xCC257DA11A122B5F(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xF44A5E894FE76438(Global_2314, 6))
							{
								unk_0x3B6EF6403E3F1CAC(Global_14424, "SET_DATA_SLOT");
								unk_0x1B215CC37BF52E79(1);
								unk_0x1B215CC37BF52E79(iVar0);
								unk_0x1B215CC37BF52E79(Global_2320[iVar1 /*15*/].f_10);
								unk_0x1B215CC37BF52E79(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x1B215CC37BF52E79(42);
								unk_0xBBAAC5B2437ACF2A();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1616829.f_1;
								func_25(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_25(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_25(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xC55B9553B3EDADE9(sParam7))
	{
		func_26(sParam7);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam8))
	{
		func_26(sParam8);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam9))
	{
		func_26(sParam9);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam10))
	{
		func_26(sParam10);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam11))
	{
		func_26(sParam11);
	}
	unk_0xBBAAC5B2437ACF2A();
}

void func_26(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

void func_27(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x3B6EF6403E3F1CAC(uParam0, sParam1);
	unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1B215CC37BF52E79(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBBAAC5B2437ACF2A();
}

bool func_28()
{
	return Global_1315229;
}

void func_29(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101652.f_12994[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_30(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xABA05E2C283C3D5F();
	uVar1 = unk_0xF72CA3D5BA977203();
	uVar2 = unk_0x83D6515EE2CBF18C();
	uVar3 = unk_0x3D13C79BF80EB767();
	uVar4 = unk_0xA93FEF8677A8AF58() + 1;
	uVar5 = unk_0xAC9128C6933DA69B();
	Global_101652.f_13084[iParam0 /*104*/].f_18 = uVar0;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101652.f_13084[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
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
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_32(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_24 = 1;
}

int func_32(struct<6> Param0, struct<6> Param6)
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

int func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69697)
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
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101652.f_13084[Global_16812 /*104*/].f_18 = -1;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101652.f_13084[iVar2 /*104*/].f_24 == 0 || Global_101652.f_13084[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_32(Global_101652.f_13084[iVar2 /*104*/].f_18, Global_101652.f_13084[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_101652.f_13084[Global_16812 /*104*/].f_99[0] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[1] = 0;
	Global_101652.f_13084[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_34()
{
	if (func_216(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_35();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_35()
{
	func_36();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_39(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_38(unk_0xD5A676B97920D126());
			if (func_37(iVar0) && (!func_216(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_37(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	if ((!func_70() && func_56()) && func_53(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (func_49())
		{
			func_41("GB_INFO_MC_L", 1);
		}
		else
		{
			func_41("GB_INFO_LFG", 1);
		}
	}
}

int func_41(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x053CD3063CA9436C(sParam0);
	iVar0 = unk_0x84EF96E928190AB1(0, 1);
	func_42(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_48() || !unk_0x8676DE83D4396C39()) || !func_45(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	iVar0 = func_43(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1755985.f_5[iVar0 /*53*/] = iParam0;
		Global_1755985.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1755985.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1755985.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1755985.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1755985.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1755985.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1755985 - 1))
	{
		if (iParam0 > Global_1755985.f_5[iVar0 /*53*/].f_1)
		{
			func_44(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1755985++;
	if (Global_1755985 > 5)
	{
		Global_1755985 = 5;
		return Global_1755985;
	}
	return (Global_1755985 - 1);
}

void func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1755985.f_5[iVar0 /*53*/] = { Global_1755985.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
	}
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_47()
{
	return Global_1312731;
}

bool func_48()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}

bool func_49()
{
	return func_50(unk_0xFB6B3EEFAB2DD12C());
}

bool func_50(int iParam0)
{
	return func_51(iParam0, 1);
}

int func_51(int iParam0, int iParam1)
{
	if (iParam0 != func_52())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_52())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 == iParam0 && Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_52()
{
	return -1;
}

int func_53(int iParam0)
{
	if (iParam0 == func_52())
	{
		return 0;
	}
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_45(iParam0, 0))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_138, 2) || unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_138, 5))
	{
		return 0;
	}
	if (func_54(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_55(iParam0, 9);
	}
	return 0;
}

bool func_55(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_4, iParam1);
}

int func_56()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
		if (func_57(iVar1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (func_13(iParam0, 0, 1))
	{
		if (iParam0 != unk_0xFB6B3EEFAB2DD12C())
		{
			iVar0 = 0;
			if (func_69(1))
			{
				if (func_68(iParam0, 18))
				{
					iVar0 = 1;
				}
			}
			else if (func_55(iParam0, 15))
			{
				iVar0 = 1;
			}
			if (iVar0 && func_58(iParam0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == func_52())
	{
		return 0;
	}
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_45(iParam0, 0))
	{
		return 0;
	}
	if (func_66(iParam0))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_138, 2) || unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_138, 5))
	{
		return 0;
	}
	if (func_65(iParam0))
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_63(iParam0, iParam1, 1))
		{
			return 0;
		}
		if (func_62(iParam0))
		{
			return 0;
		}
		if (func_60(iParam0, 1))
		{
			return 0;
		}
	}
	else if (func_151(iParam0, 1))
	{
		return 0;
	}
	if (func_59(iParam0))
	{
		return 0;
	}
	if (func_54(iParam0))
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF44A5E894FE76438(Global_1618089[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

bool func_60(int iParam0, bool bParam1)
{
	return func_61(iParam0, bParam1, 1);
}

int func_61(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_52())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_51(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_52() && Global_1618089[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_62(int iParam0)
{
	return func_55(iParam0, 20);
}

int func_63(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_52())
	{
		if (!bParam2)
		{
			if (func_64(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1618089[iParam0 /*390*/].f_11 != func_52())
		{
			return iParam1 == Global_1618089[iParam0 /*390*/].f_11;
		}
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	if (iParam1 != func_52())
	{
		if (iParam0 != func_52())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 != func_52())
			{
				if (Global_1618089[iParam0 /*390*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_65(int iParam0)
{
	return func_55(iParam0, 30);
}

int func_66(int iParam0)
{
	if (!func_55(iParam0, 2))
	{
		return 1;
	}
	if (func_55(iParam0, 1))
	{
		return 1;
	}
	if (func_67(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)
{
	return Global_1618089[iParam0 /*390*/].f_11.f_22;
}

bool func_68(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1618089[iParam0 /*390*/].f_11.f_5, iParam1);
}

bool func_69(bool bParam0)
{
	return func_60(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

int func_70()
{
	int iVar0;
	var uVar1;
	struct<16> Var17;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_10[iVar0] == func_52())
		{
			StringCopy(&Var17, "", 64);
			Var17 = { func_71(func_72(iVar0)) };
			if (unk_0xCC257DA11A122B5F(&Var17, &uVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<16> func_71(int iParam0)
{
	return Global_2443860.f_3065.f_18[iParam0 /*16*/];
}

int func_72(int iParam0)
{
	if (iParam0 >= func_73())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		default:
	}
	return 0;
}

int func_73()
{
	return (func_74() - 1);
}

int func_74()
{
	return func_75(unk_0xFB6B3EEFAB2DD12C());
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_52() && Global_1618089[iVar0 /*390*/].f_11.f_289 == 1)
	{
		return 8;
	}
	return 4;
}

void func_76(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	if (!iParam14 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Param0, 14, iParam14);
	}
}

int func_77(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
			{
				if (bParam1)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
				else if (!func_45(iVar2, 0))
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_78(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 26);
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

void func_80()
{
	struct<8> Var0;
	int iVar16;
	
	Var0 = { func_95(59, 61, -1) };
	iVar16 = 0;
	if (func_69(1))
	{
		Var0 = { func_95(47, 48, -1) };
		iVar16 = 1;
	}
	if (unk_0xC55B9553B3EDADE9(&Var0))
	{
		StringCopy(&Var0, func_93(unk_0xFB6B3EEFAB2DD12C(), 0), 64);
	}
	func_84(&Var0, iVar16, 0);
	if ((!unk_0xF1A016B51831B87B() && unk_0x9F33BB03A41E0DCC(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_81(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

void func_82(int iParam0)
{
	unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_4), iParam0);
}

int func_83()
{
	if (unk_0x7BBA9D0B1C092BA6() == 0)
	{
		return 0;
	}
	if (unk_0xC0915CC8FE05A943())
	{
		if (unk_0x430A2E9C5209BC91(1, -1))
		{
			if (unk_0x45ACD48FE706DF5A())
			{
				return 1;
			}
		}
	}
	if (unk_0x603D621ED5E06CB0())
	{
		if (unk_0xDE49089F060E6818(1))
		{
			if (unk_0x45ACD48FE706DF5A())
			{
				return 1;
			}
		}
	}
	if (unk_0x59D60465DE87FE2F() || unk_0xF1A016B51831B87B())
	{
		if (unk_0x9F33BB03A41E0DCC(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0x430A2E9C5209BC91(0, -1))
		{
			if (unk_0x45ACD48FE706DF5A())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(char* sParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_69(1) || iParam1 == 1)
		{
			func_90(47, 48, sParam0, -1, 1);
			if (func_49() && iParam1 == 1)
			{
				func_89(sParam0, bParam2);
			}
		}
		else
		{
			func_90(59, 61, sParam0, -1, 1);
			if (func_193() && iParam1 == 0)
			{
				func_85(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_97), sParam0, 64);
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_113 = unk_0x76A61EB180143E3B();
	if ((!unk_0xF1A016B51831B87B() && unk_0x9F33BB03A41E0DCC(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_85(char* sParam0, bool bParam1)
{
	struct<16> Var0;
	bool bVar16;
	
	if (bParam1)
	{
		if (!unk_0xC55B9553B3EDADE9(sParam0))
		{
			func_90(45, 46, sParam0, -1, 1);
			Var0 = { func_95(59, 61, -1) };
			if (unk_0xC55B9553B3EDADE9(&Var0))
			{
				func_90(59, 61, sParam0, -1, 1);
			}
		}
	}
	if ((!unk_0xF1A016B51831B87B() && unk_0x9F33BB03A41E0DCC(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
	if (!unk_0xC55B9553B3EDADE9(sParam0))
	{
		bVar16 = true;
		if ((func_55(unk_0xFB6B3EEFAB2DD12C(), 28) || func_88(unk_0xFB6B3EEFAB2DD12C())) && !func_86(unk_0xFB6B3EEFAB2DD12C()))
		{
			bVar16 = false;
		}
		if (bVar16)
		{
			StringCopy(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_251), sParam0, 64);
		}
	}
}

int func_86(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_87(iParam0) };
	if (unk_0xF1A016B51831B87B() && unk_0xD59699C2E1196EDA(&Var0))
	{
		return 1;
	}
	return 0;
}

struct<13> func_87(var uParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(uParam0, &Var0, 13);
	return Var0;
}

int func_88(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_87(iParam0) };
	if (unk_0x603D621ED5E06CB0() || unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xDE49089F060E6818(0))
		{
			return 0;
		}
	}
	else if (unk_0xF1A016B51831B87B())
	{
		if (unk_0xD59699C2E1196EDA(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

void func_89(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xC55B9553B3EDADE9(sParam0))
		{
			func_90(49, 50, sParam0, -1, 1);
		}
	}
	if (!unk_0xC55B9553B3EDADE9(sParam0))
	{
		StringCopy(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_267), sParam0, 64);
	}
	if ((!unk_0xF1A016B51831B87B() && unk_0x9F33BB03A41E0DCC(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_90(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	if (func_92())
	{
		iVar0 = Global_2523435[iParam0 /*3*/][func_91(iParam3)];
		iVar1 = Global_2523435[iParam1 /*3*/][func_91(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar10, "", 32);
			iVar18 = unk_0xA65764871521D4D8(sParam2);
			if (iVar18 > 0)
			{
				iVar19 = 10;
				if (iVar18 < 10)
				{
					iVar19 = iVar18;
				}
				StringCopy(&cVar2, unk_0xBD0A809C5034F27A(sParam2, 0, iVar19, 31), 32);
				if (iVar18 > 10)
				{
					StringCopy(&cVar10, unk_0xBD0A809C5034F27A(sParam2, 10, iVar18, 31), 32);
				}
			}
			unk_0x2E41F4F2CABCAE89(iVar0, &cVar2, iParam4);
			unk_0x2E41F4F2CABCAE89(iVar1, &cVar10, iParam4);
		}
	}
}

int func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

int func_92()
{
	return 1;
	return 0;
}

char* func_93(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0, 1))
		{
			return func_94();
		}
	}
	return unk_0xBC2999B1C8F62EDD("GB_REST_ACC");
}

char* func_94()
{
	return unk_0xBC2999B1C8F62EDD("GB_REST_ACCM");
}

struct<16> func_95(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar18[32];
	
	uVar0 = Global_2523435[iParam0 /*3*/][func_91(iParam2)];
	uVar1 = Global_2523435[iParam1 /*3*/][func_91(iParam2)];
	StringCopy(&Var2, unk_0xF1D9DDFE9A9CF52F(uVar0, -1), 64);
	StringCopy(&cVar18, unk_0xF1D9DDFE9A9CF52F(uVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

void func_96()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2433082.f_2199[iVar0 /*76*/].f_2 != 0)
		{
			Global_2433082.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xB8A73E7DA87B2968(&(Global_2433082.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_97(int iParam0)
{
	return Global_2433082.f_2199[0 /*76*/].f_1 == iParam0;
}

void func_98(bool bParam0, bool bParam1, int iParam2)
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
	
	if (!func_142())
	{
		return;
	}
	iVar7 = 1;
	if (func_78(unk_0xFB6B3EEFAB2DD12C()))
	{
		iVar7 = 2;
	}
	if (iParam2 == 1)
	{
		iVar7 = 3;
	}
	if (Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11 != unk_0xFB6B3EEFAB2DD12C())
	{
		if (bParam1)
		{
			unk_0xA0E617716671204A(iVar7);
			func_139(0);
			func_137(0);
			func_82(21);
			func_82(22);
			Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_327 = iVar7;
		}
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11 = unk_0xFB6B3EEFAB2DD12C();
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_289 = iParam2;
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_326 = iParam2;
		unk_0xECD1BB3533379F73(func_47(), &uVar8, &uVar9);
		func_136(uVar8, uVar9);
		sVar10 = unk_0x5579BB3F053323FB(unk_0xFB6B3EEFAB2DD12C(), &uVar0);
		StringCopy(&Var11, sVar10, 64);
		func_135(Var11);
		func_134();
		if (func_133(5887, -1, 0) <= 0)
		{
			iVar6 = unk_0x632066A9E8CB2C4D();
		}
		else
		{
			iVar6 = (func_133(5887, -1, 0) - 43200);
		}
		func_130(iVar6);
		if (unk_0xFACD5AD331C52454("Player_Boss", 3))
		{
			unk_0x570F410C5E24C75B(unk_0xD5A676B97920D126(), "Player_Boss", unk_0xFB6B3EEFAB2DD12C());
		}
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_23 = -1;
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_24 = -1;
		Global_2494149.f_4710.f_32 = -1;
		func_124();
		func_116(0);
		if (bParam0)
		{
			func_79(0);
		}
		if (Global_2494149.f_4710.f_68 != func_52())
		{
			Global_2494149.f_4710.f_68 = func_52();
		}
		if (unk_0xF44A5E894FE76438(Global_2494149.f_1644, 15))
		{
			unk_0x4EA098C870B73AB7(&(Global_2494149.f_1644), 15);
		}
		if (func_115(15))
		{
			func_114(15);
		}
		if (!func_113() && !unk_0x8676DE83D4396C39())
		{
			func_112();
			func_111(2);
		}
		func_110(5927, 2, -1, 1, 0);
		func_82(31);
		func_80();
		func_109();
		func_108();
		func_107();
		if (iParam2 != 1)
		{
			if (!func_106(82, 3))
			{
				bVar27 = false;
				iVar28 = func_133(5884, -1, 0);
				if (!unk_0xF44A5E894FE76438(iVar28, 11))
				{
					unk_0xB8A73E7DA87B2968(&iVar28, 11);
					func_110(5884, iVar28, -1, 1, 0);
					bVar27 = true;
				}
				func_104(82, 3, bVar27);
			}
		}
		if (iParam2 == 1)
		{
			unk_0xCB4915EBDCA113F2(func_102(func_103()), func_101(func_103()), func_100(), func_99(), Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_290, 4, Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_328);
		}
	}
}

int func_99()
{
	if (Global_1759248.f_3 != 0)
	{
		return Global_1759248.f_3;
	}
	return -1;
}

int func_100()
{
	if (Global_1759248.f_2 != 0)
	{
		return Global_1759248.f_2;
	}
	return -1;
}

int func_101(int iParam0)
{
	if (iParam0 == func_52())
	{
		return -1;
	}
	return Global_1618089[iParam0 /*390*/].f_11.f_7[1];
}

int func_102(int iParam0)
{
	if (iParam0 == func_52())
	{
		return -1;
	}
	return Global_1618089[iParam0 /*390*/].f_11.f_7[0];
}

int func_103()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11;
}

void func_104(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_34();
		if (iParam1 == 4)
		{
			Global_101652.f_26993[iParam0 /*29*/].f_12[0] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_12[1] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_12[2] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_24[0] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_24[1] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101652.f_26993[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101652.f_26993[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101652.f_26993[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101652.f_26993[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69697)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_105();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_105();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101652.f_26993[iParam0 /*29*/].f_3 };
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_105();
			}
		}
	}
}

void func_105()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0x053CD3063CA9436C("");
		StringCopy(&cVar16, unk_0xBC2999B1C8F62EDD(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xBC2999B1C8F62EDD("CELL_253");
		unk_0xF60216C118DDDFE5(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x053CD3063CA9436C("CELL_255");
		unk_0xB1953EBEF4D6BD85(&(Global_2923[1 /*6*/]));
		unk_0xF60216C118DDDFE5(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x4EA098C870B73AB7(&Global_2313, 0);
}

int func_106(int iParam0, int iParam1)
{
	if (Global_101652.f_26993[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (!Global_2494149.f_4710.f_147)
	{
		Global_2494149.f_4710.f_147 = 1;
	}
}

void func_108()
{
	struct<16> Var0;
	
	Var0 = { func_95(49, 50, -1) };
	func_89(&Var0, 0);
	if ((!unk_0xF1A016B51831B87B() && unk_0x9F33BB03A41E0DCC(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_109()
{
	struct<16> Var0;
	
	Var0 = { func_95(45, 46, -1) };
	func_85(&Var0, 0);
	if ((!unk_0xF1A016B51831B87B() && unk_0x9F33BB03A41E0DCC(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

void func_111(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_2391018.f_2), iParam0);
	if (Global_2391018)
	{
		return;
	}
	Global_2391018 = 1;
	Global_2391018.f_1 = 0;
}

void func_112()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2390944.f_28[iVar0 /*2*/] != -1 && Global_2390944.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (unk_0x6901135DDCC4904D(Global_2390944.f_28[iVar0 /*2*/].f_1))
			{
				unk_0x1F68B881D24C6117(Global_2390944.f_28[iVar0 /*2*/].f_1, 1);
			}
		}
		iVar0++;
	}
}

bool func_113()
{
	return Global_2443089.f_618;
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

bool func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xF44A5E894FE76438(Global_2494149.f_4710.f_7[iVar0], iVar1);
}

void func_116(int iParam0)
{
	if (func_123())
	{
		if (iParam0 == 1)
		{
			if (Global_2494149.f_4257 == -1)
			{
				Global_2494149.f_4257 = 60000;
			}
			func_14(&(Global_2494149.f_4255), 0, 0);
			if (Global_2494149.f_4260 == -1)
			{
				Global_2494149.f_4260 = 10000;
			}
			func_14(&(Global_2494149.f_4258), 0, 0);
		}
		else
		{
			Global_1312412 = 0;
			func_122(1);
		}
		if ((!unk_0x8676DE83D4396C39() && !func_121()) && !func_117(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_979731 = 0;
		}
		Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_8 = 0;
	}
}

int func_117(int iParam0)
{
	if (func_118(iParam0, 1))
	{
		if (Global_1589933[iParam0 /*601*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_118(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_119(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589933[iParam0 /*601*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_119(int iParam0)
{
	return func_120(iParam0);
}

bool func_120(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

bool func_121()
{
	return Global_2443089.f_718;
}

void func_122(bool bParam0)
{
	if (unk_0x1995B52453EF6537())
	{
		if (!func_123())
		{
			if (func_13(unk_0xFB6B3EEFAB2DD12C(), 1, 0))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 0);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 0);
			}
			unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 1f);
			unk_0x78474BABFD9E36D2(0);
			unk_0x8F5ECEB25B6D76B3(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0xD06F9BE40EFDA8FC(0, 0);
				}
			}
		}
		else
		{
			if (func_13(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
			{
				unk_0x91AAF5BB8226AB32(unk_0xD5A676B97920D126(), 0);
				unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 342, 1);
				unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 122, 1);
				unk_0x66D34BF9890C91B9(unk_0xFB6B3EEFAB2DD12C(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0xD06F9BE40EFDA8FC(1, 0);
				}
			}
			unk_0x78474BABFD9E36D2(1);
			unk_0x8F5ECEB25B6D76B3(0);
		}
	}
}

bool func_123()
{
	return Global_1312412;
}

void func_124()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7A4693BB354F3CD3(iVar0);
		if (unk_0x1E0256D6F1052B31(iVar1))
		{
			func_126(1, iVar1);
			if (iVar1 != unk_0xFB6B3EEFAB2DD12C())
			{
				func_125(iVar1);
			}
		}
		iVar0++;
	}
}

void func_125(int iParam0)
{
	var uVar0;
	
	if (unk_0xF44A5E894FE76438(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_93, iParam0))
	{
		uVar0 = unk_0x4572B13EE70C8F52(iParam0);
		unk_0x1CE77FB04D5BBA36(uVar0, unk_0xFB6B3EEFAB2DD12C(), 1);
		unk_0xE243F669198CD35E(unk_0xFB6B3EEFAB2DD12C(), iParam0, 1);
		unk_0xE243F669198CD35E(iParam0, unk_0xFB6B3EEFAB2DD12C(), 1);
		func_126(1, iParam0);
		unk_0x4EA098C870B73AB7(&(Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_93), iParam0);
	}
}

void func_126(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (func_13(iParam1, 0, 1))
	{
		uVar1 = unk_0x4572B13EE70C8F52(iParam1);
		if (unk_0x7887B64A08364778(uVar1) && !unk_0xB529B2A4B7C64D6D(iVar1, 0))
		{
			if (unk_0x6A0583ECFCCECC9B(iVar1, 0))
			{
				iVar0 = unk_0x0DBD8FE531FD620D(iVar1, 0);
				if (unk_0x7887B64A08364778(iVar0) && !unk_0xB529B2A4B7C64D6D(iVar0, 0))
				{
					unk_0x81D6DECC039AF114(iVar0, bParam0, 1);
					if (func_63(iParam1, func_103(), 1))
					{
						if (func_103() == iParam1)
						{
							if (Global_2494149.f_4710.f_69[3] != iVar0)
							{
								Global_2494149.f_4710.f_69[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_127(func_103(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2494149.f_4710.f_69[iVar2] != iVar0)
								{
									Global_2494149.f_4710.f_69[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_63(iParam1, func_103(), 1))
				{
					if (func_103() == iParam1)
					{
						if (unk_0x7887B64A08364778(Global_2494149.f_4710.f_69[3]) && !unk_0xB529B2A4B7C64D6D(Global_2494149.f_4710.f_69[3], 0))
						{
							unk_0x81D6DECC039AF114(Global_2494149.f_4710.f_69[3], true, 1);
							Global_2494149.f_4710.f_69[3] = 0;
						}
					}
					else
					{
						iVar3 = func_127(func_103(), iParam1);
						if (iVar3 != -1)
						{
							if (unk_0x7887B64A08364778(Global_2494149.f_4710.f_69[iVar3]) && !unk_0xB529B2A4B7C64D6D(Global_2494149.f_4710.f_69[iVar3], 0))
							{
								unk_0x81D6DECC039AF114(Global_2494149.f_4710.f_69[iVar3], true, 1);
								Global_2494149.f_4710.f_69[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_200(iParam0))
	{
		if (func_63(iParam1, iParam0, 0) || func_129(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_128(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_128(int iParam0, int iParam1)
{
	if (func_200(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1618089[iParam0 /*390*/].f_11.f_10[iParam1];
		}
	}
	return func_52();
}

int func_129(int iParam0, int iParam1)
{
	if (iParam1 != func_52())
	{
		if (Global_1618089[iParam0 /*390*/].f_11.f_25 != func_52())
		{
			return iParam1 == Global_1618089[iParam0 /*390*/].f_11.f_25;
		}
	}
	return 0;
}

void func_130(int iParam0)
{
	if (!func_142())
	{
		return;
	}
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_1 = iParam0;
	if (func_133(5887, -1, 0) != func_131(unk_0xFB6B3EEFAB2DD12C()))
	{
		func_110(5887, func_131(unk_0xFB6B3EEFAB2DD12C()), -1, 1, 0);
	}
}

int func_131(int iParam0)
{
	if (func_132(iParam0) == -1)
	{
		return -1;
	}
	return (func_132(iParam0) + 43200);
}

int func_132(int iParam0)
{
	return Global_1618089[iParam0 /*390*/].f_11.f_1;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_91(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		unk_0xF1FD1161746C469C(1);
		if (func_69(1))
		{
			unk_0x086386D4904AE9E6(joaat("PI_BIK_0_T"));
		}
		else
		{
			unk_0x086386D4904AE9E6(-1755491431);
		}
	}
}

void func_135(char[64] cParam0)
{
	Global_2443860.f_3065.f_2 = { cParam0 };
}

void func_136(var uParam0, var uParam1)
{
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_7[0] = uParam0;
	Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11.f_7[1] = uParam1;
}

void func_137(int iParam0)
{
	func_138(204, iParam0, -1, 1);
}

void func_138(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_92())
	{
		iVar0 = Global_2522528[iParam0 /*3*/][func_91(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x193460E7BE4AC7F3(iVar0, uParam1, iParam3);
		}
	}
}

void func_139(bool bParam0)
{
	if (bParam0)
	{
		if (func_141(4))
		{
			func_81(21);
			func_81(22);
		}
		func_81(31);
		func_140(bParam0);
	}
	else
	{
		if (func_55(unk_0xFB6B3EEFAB2DD12C(), 21))
		{
			func_82(21);
			if (!func_141(3) && func_141(4))
			{
				func_81(22);
			}
		}
		func_82(31);
		func_140(bParam0);
	}
}

void func_140(bool bParam0)
{
	func_138(286, bParam0, -1, 1);
}

bool func_141(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_2494149.f_4710.f_25, iParam0);
}

int func_142()
{
	if (func_144() && func_143(0))
	{
		return 1;
	}
	return 0;
}

var func_143(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_144()
{
	return func_143(func_47() + 1);
}

bool func_145(int iParam0)
{
	return func_146(iParam0) > 0;
}

int func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_13(iParam0, 0, 1))
	{
		if (Global_1618089[iParam0 /*390*/].f_11.f_171 != -1)
		{
			iVar0 = Global_1618089[iParam0 /*390*/].f_11.f_171;
		}
		else
		{
			iVar0 = func_148(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_147()) - unk_0x632066A9E8CB2C4D());
		return iVar1;
	}
	return -1;
}

int func_147()
{
	return Global_262145.f_12950;
}

int func_148(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_149()
{
	return Global_262145.f_10865;
}

int func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
		if (unk_0x1E0256D6F1052B31(iVar2))
		{
			if (func_200(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_151(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_200(iParam0))
		{
			return 0;
		}
	}
	return Global_1618089[iParam0 /*390*/].f_11 != func_52();
}

void func_152()
{
	char* sVar0;
	struct<3> Var16;
	bool bVar19;
	
	Global_1760629 = 1;
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), joaat("weapon_unarmed"), 1);
		Var16 = { unk_0x7E140C583F91AE2B(iLocal_110, 0.0328f, -0.8f, 0.3f) };
		bVar19 = false;
		func_208(&uLocal_106);
		if (func_2(0, &sVar0))
		{
			while (!bVar19)
			{
				func_204();
				if (!func_213(&uLocal_106))
				{
					func_212(&uLocal_106, 0, 0);
				}
				else if (func_209(&uLocal_106, 4000, 0))
				{
					bVar19 = true;
				}
				if (!func_158(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), Var16, 0.05f, 0) && !func_157(unk_0x714F015B4D2DE1DC(unk_0xD5A676B97920D126()), unk_0x714F015B4D2DE1DC(iLocal_110), 5f))
				{
					if (!func_154(unk_0xD5A676B97920D126(), 2106541073))
					{
						unk_0xBB64ADC3483D3A47(unk_0xD5A676B97920D126(), Var16, 1f, 5000, unk_0x714F015B4D2DE1DC(iLocal_110), 0.25f);
					}
				}
				else
				{
					bVar19 = true;
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			func_208(&uLocal_106);
			iLocal_111 = 0;
		}
	}
	while (iLocal_111 != 3)
	{
		func_153(iLocal_110);
		func_204();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_153(int iParam0)
{
	char* sVar0;
	char* sVar16;
	char* sVar32;
	char* sVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	
	if (!unk_0x1995B52453EF6537())
	{
		return;
	}
	if (unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		return;
	}
	if (!func_211(unk_0xFB6B3EEFAB2DD12C()) && !func_210(unk_0xFB6B3EEFAB2DD12C()))
	{
		return;
	}
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return;
	}
	func_2(0, &sVar0);
	func_2(1, &sVar16);
	func_2(2, &sVar32);
	unk_0x49E996A1E39EAAD7(&sVar32);
	unk_0x49E996A1E39EAAD7(&sVar0);
	sVar48 = "idle_a";
	iVar49 = 1;
	if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == joaat("mp_f_freemode_01"))
	{
		iVar49 = 1;
	}
	switch (iLocal_111)
	{
		case 0:
			iLocal_103 = 0;
			unk_0x67205DF1F8F9C7F9("walk", unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 64, 256, 64, 64);
			if (unk_0xD7669BF035CDA5F6(&sVar0))
			{
				if (unk_0x1774A68441553185(unk_0xD5A676B97920D126(), 2106541073) == 7 && unk_0xD7669BF035CDA5F6(&sVar0))
				{
					if (unk_0xC8FC1161FDD0E597(iLocal_112))
					{
						unk_0x73F6030600EE7F1D(iLocal_112);
						iLocal_112 = -1;
					}
					iLocal_112 = unk_0xFDA7DDD9F7283E10(Local_116, unk_0xB73B9913DD4EE2AA(iParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
					unk_0x6CBC72508997AE0B(unk_0xD5A676B97920D126(), iLocal_112, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					unk_0xC3A3E242F2704675(iLocal_112);
					unk_0x6989DACCC7A558AE(&sVar0);
					iLocal_111 = 1;
				}
			}
			break;
		
		case 1:
			unk_0x67205DF1F8F9C7F9("enter", unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 64, 256, 64, 64);
			unk_0x49E996A1E39EAAD7(&sVar16);
			iVar50 = unk_0x9EFC5720970A31BB(iLocal_112);
			if (!iLocal_103)
			{
				if (unk_0x2C3B61BDCED77B45(iVar50) >= 0.93f)
				{
					unk_0xA93E75A5493862BD(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
					iLocal_103 = 1;
				}
			}
			if (unk_0xD7669BF035CDA5F6(&sVar16) && (!unk_0xC8FC1161FDD0E597(iVar50) || unk_0x2C3B61BDCED77B45(iVar50) >= 0.96f))
			{
				iVar51 = unk_0x7BC26452241AC7C9(0, iVar49);
				if ((((unk_0xCC257DA11A122B5F(&cLocal_119, "idle_a") && iVar51 == 0) || (unk_0xCC257DA11A122B5F(&cLocal_119, "idle_b") && iVar51 == 1)) || (unk_0xCC257DA11A122B5F(&cLocal_119, "idle_c") && iVar51 == 2)) || (unk_0xCC257DA11A122B5F(&cLocal_119, "idle_d") && iVar51 == 3))
				{
					iVar51++;
					if (iVar51 >= iVar49)
					{
						iVar51 = 0;
					}
				}
				if (unk_0xC8FC1161FDD0E597(iLocal_112))
				{
					unk_0x73F6030600EE7F1D(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = unk_0xFDA7DDD9F7283E10(Local_116, unk_0xB73B9913DD4EE2AA(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				switch (iVar51)
				{
					case 0:
						unk_0x6CBC72508997AE0B(unk_0xD5A676B97920D126(), iLocal_112, &sVar16, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xC3A3E242F2704675(iLocal_112);
						StringCopy(&cLocal_119, "idle_a", 16);
						iLocal_111 = 3;
						break;
					
					case 1:
						unk_0x6CBC72508997AE0B(unk_0xD5A676B97920D126(), iLocal_112, &sVar16, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xC3A3E242F2704675(iLocal_112);
						StringCopy(&cLocal_119, "idle_b", 16);
						iLocal_111 = 3;
						break;
					
					case 2:
						unk_0x6CBC72508997AE0B(unk_0xD5A676B97920D126(), iLocal_112, &sVar16, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xC3A3E242F2704675(iLocal_112);
						StringCopy(&cLocal_119, "idle_c", 16);
						iLocal_111 = 3;
						break;
					
					case 3:
						unk_0x6CBC72508997AE0B(unk_0xD5A676B97920D126(), iLocal_112, &sVar16, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xC3A3E242F2704675(iLocal_112);
						StringCopy(&cLocal_119, "idle_d", 16);
						iLocal_111 = 3;
						break;
					
					default:
						StringCopy(&cLocal_119, "idle_XXX", 16);
						break;
					}
			}
			break;
		
		case 3:
			iLocal_103 = 0;
			if (unk_0xEBA40DFF7CCE3511(unk_0xD5A676B97920D126(), &sVar16, "idle_a", 2))
			{
				unk_0x67205DF1F8F9C7F9("idle_a", unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 256, 64, 64, 64);
			}
			else if (unk_0xEBA40DFF7CCE3511(unk_0xD5A676B97920D126(), &sVar16, "idle_b", 2))
			{
				unk_0x67205DF1F8F9C7F9("idle_b", unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 256, 64, 64, 64);
			}
			else if (unk_0xEBA40DFF7CCE3511(unk_0xD5A676B97920D126(), &sVar16, "idle_c", 2))
			{
				unk_0x67205DF1F8F9C7F9("idle_c", unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 256, 64, 64, 64);
			}
			else if (unk_0xEBA40DFF7CCE3511(unk_0xD5A676B97920D126(), &sVar16, "idle_d", 2))
			{
				unk_0x67205DF1F8F9C7F9("idle_d", unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 256, 64, 64, 64);
			}
			else
			{
				unk_0x67205DF1F8F9C7F9("idle_XXX", unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 256, 64, 64, 64);
			}
			iVar50 = unk_0x9EFC5720970A31BB(iLocal_112);
			if (!unk_0xC8FC1161FDD0E597(iLocal_112) && !unk_0xC8FC1161FDD0E597(iVar50))
			{
				if (unk_0xC8FC1161FDD0E597(iLocal_112))
				{
					unk_0x73F6030600EE7F1D(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = unk_0xFDA7DDD9F7283E10(Local_116, unk_0xB73B9913DD4EE2AA(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				iVar50 = unk_0x9EFC5720970A31BB(iLocal_112);
				if (unk_0xC8FC1161FDD0E597(iVar50))
				{
					unk_0x858A25577AF15EA9(iVar50, 0f);
				}
				unk_0x6CBC72508997AE0B(unk_0xD5A676B97920D126(), iLocal_112, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0xC3A3E242F2704675(iLocal_112);
				iLocal_111 = 3;
				return;
			}
			if (unk_0xD7669BF035CDA5F6(&sVar16) && (!unk_0xC8FC1161FDD0E597(iVar50) || unk_0x2C3B61BDCED77B45(iVar50) >= 0.99f))
			{
				if (unk_0xC8FC1161FDD0E597(iLocal_112))
				{
					unk_0x73F6030600EE7F1D(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = unk_0xFDA7DDD9F7283E10(Local_116, unk_0xB73B9913DD4EE2AA(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0x6CBC72508997AE0B(unk_0xD5A676B97920D126(), iLocal_112, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0xC3A3E242F2704675(iLocal_112);
				iLocal_111 = 3;
				return;
			}
			break;
	}
}

int func_154(int iParam0, int iParam1)
{
	if (func_155(iParam0))
	{
		if (unk_0x1774A68441553185(iParam0, iParam1) == 1 || unk_0x1774A68441553185(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	if (func_156(iParam0))
	{
		if (!unk_0x00B5B0B68211D89B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_157(float fParam0, float fParam1, float fParam2)
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

int func_158(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_159()
{
	if (func_210(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0xF44A5E894FE76438(Global_1760739.f_2, 0) || unk_0xF44A5E894FE76438(Global_1760739.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_160()
{
	if (func_211(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0xF44A5E894FE76438(Global_1760739.f_2, 0) || unk_0xF44A5E894FE76438(Global_1760739.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_161()
{
	if (Global_25456)
	{
		if (func_162())
		{
			Global_25456 = 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_162()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_3, 4);
}

int func_163()
{
	if (func_145(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (func_200(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	else if (func_150() < func_149())
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_165(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x9BA2465846EC8271(unk_0xF3F8195C98263BF5()))
	{
		return 0;
	}
	if (func_199(0))
	{
		return 0;
	}
	if (unk_0x30A37E559346657F())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36480[iVar0 /*32*/] == 1 && Global_36480[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36480[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36480[iVar0 /*32*/].f_5 = 1;
			Global_36480[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36480[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36480[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_165(int iParam0)
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
		if (Global_36480[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_166(bool bParam0)
{
	if ((((func_191(unk_0xFB6B3EEFAB2DD12C()) && func_176(unk_0xFB6B3EEFAB2DD12C()) == func_175(unk_0xFB6B3EEFAB2DD12C())) && !unk_0xC04A3751C1866322(unk_0xFB6B3EEFAB2DD12C())) && !func_174()) && !Global_1760630)
	{
		if (func_172())
		{
			func_171("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_150() >= func_149())
			{
				func_184(&iLocal_99, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(unk_0xFB6B3EEFAB2DD12C()))
			{
				func_184(&iLocal_99, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (unk_0x8676DE83D4396C39())
			{
				func_171("WHSECUROBLCK");
			}
			else
			{
				func_184(&iLocal_99, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_50(unk_0xFB6B3EEFAB2DD12C()))
		{
			func_171("WHBIKERBLCK");
		}
		else if ((func_213(&uLocal_104) && func_209(&uLocal_104, 10000, 1)) || !iLocal_101)
		{
			if (func_167(unk_0xFB6B3EEFAB2DD12C()) || Global_1760630 == 1)
			{
				iLocal_101 = 1;
				if (!Global_1760630)
				{
					func_171("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_185())
				{
					unk_0x04890EB0282525A5(1);
				}
				iLocal_101 = 0;
				func_208(&uLocal_104);
				func_184(&iLocal_99, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_101)
		{
			if (!unk_0xA14FC57CB26C2B67())
			{
				func_171("WHSECUROBLCK");
			}
			if (!func_167(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x04890EB0282525A5(1);
				iLocal_101 = 0;
			}
		}
	}
}

bool func_167(int iParam0)
{
	return func_168(func_169(iParam0));
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_169(int iParam0)
{
	if (func_170(iParam0, 0))
	{
		return Global_1618089[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_170(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_171(char* sParam0)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 1, 1, -1);
}

int func_172()
{
	if (func_173())
	{
		return 1;
	}
	return Global_2443089.f_622;
}

bool func_173()
{
	return Global_1315189 == 10;
}

bool func_174()
{
	return Global_1760739.f_12;
}

int func_175(int iParam0)
{
	if (iParam0 == func_52())
	{
		return 0;
	}
	return Global_1589933[iParam0 /*601*/].f_257.f_103;
}

int func_176(int iParam0)
{
	if (func_191(iParam0))
	{
		return func_177(Global_2421621[iParam0 /*358*/].f_312.f_1);
	}
	return 0;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 57:
			return 1;
		
		case 58:
			return 2;
		
		case 59:
			return 3;
		
		case 60:
			return 4;
		
		case 61:
			return 5;
		
		case 62:
			return 6;
		
		case 63:
			return 7;
		
		case 64:
			return 8;
		
		case 65:
			return 9;
		
		case 66:
			return 10;
		
		default:
	}
	return 0;
}

void func_178(bool bParam0)
{
	if (((((func_188(unk_0xFB6B3EEFAB2DD12C()) || func_159()) && !unk_0xC04A3751C1866322(unk_0xFB6B3EEFAB2DD12C())) && !func_174()) && !Global_1760630) && func_157(unk_0x714F015B4D2DE1DC(unk_0xD5A676B97920D126()), unk_0x714F015B4D2DE1DC(iLocal_110), 90f))
	{
		if (unk_0x8676DE83D4396C39())
		{
			func_171("WHSECUROBLCK");
		}
		else if (func_172())
		{
			if (func_188(unk_0xFB6B3EEFAB2DD12C()))
			{
				func_171("BIKERWHBLCKC");
			}
			else
			{
				func_171("BIKERWHBLCKD");
			}
		}
		else if (func_50(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((func_213(&uLocal_104) && func_209(&uLocal_104, 10000, 1)) || !iLocal_101)
			{
				if (func_179(unk_0xFB6B3EEFAB2DD12C()) || Global_1760630 == 1)
				{
					iLocal_101 = 1;
					if (!Global_1760630)
					{
						func_171("WHSECUROBLCK");
					}
				}
				else
				{
					if (func_185())
					{
						unk_0x04890EB0282525A5(1);
					}
					iLocal_101 = 0;
					func_208(&uLocal_104);
					func_184(&iLocal_99, 1, "BIKERWHINPUT", 0, 0, 0, 0);
				}
			}
			else if (iLocal_101)
			{
				if (!unk_0xA14FC57CB26C2B67())
				{
					func_171("WHSECUROBLCK");
				}
				if (!func_179(unk_0xFB6B3EEFAB2DD12C()))
				{
					iLocal_101 = 0;
					unk_0x04890EB0282525A5(1);
				}
			}
		}
		else if (!bParam0 && func_150() < func_149())
		{
			func_184(&iLocal_99, 1, "BIKERWHBLCKA", 0, 0, 0, 0);
		}
		else
		{
			func_171("BIKERWHBLCKB");
		}
	}
}

bool func_179(int iParam0)
{
	return func_180(func_169(iParam0));
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_181()
{
	if (unk_0x7887B64A08364778(iLocal_110))
	{
		if (func_210(unk_0xFB6B3EEFAB2DD12C()) || func_182(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (func_189(Global_1589933[iParam0 /*601*/].f_257.f_15, -1))
	{
		return 1;
	}
	return 0;
}

void func_183(bool bParam0)
{
	if (((func_160() && !unk_0xC04A3751C1866322(unk_0xFB6B3EEFAB2DD12C())) && !func_174()) && !Global_1760630)
	{
		if (func_172())
		{
			func_171("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_150() >= func_149())
			{
				func_184(&iLocal_99, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(unk_0xFB6B3EEFAB2DD12C()))
			{
				func_184(&iLocal_99, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (unk_0x8676DE83D4396C39())
			{
				func_171("WHSECUROBLCK");
			}
			else
			{
				func_184(&iLocal_99, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_50(unk_0xFB6B3EEFAB2DD12C()))
		{
			func_171("WHBIKERBLCK");
		}
		else if ((func_213(&uLocal_104) && func_209(&uLocal_104, 10000, 1)) || !iLocal_101)
		{
			if (func_214(unk_0xFB6B3EEFAB2DD12C()) || Global_1760630 == 1)
			{
				iLocal_101 = 1;
				if (!Global_1760630)
				{
					func_171("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_185())
				{
					unk_0x04890EB0282525A5(1);
				}
				iLocal_101 = 0;
				func_208(&uLocal_104);
				func_184(&iLocal_99, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_101)
		{
			if (!unk_0xA14FC57CB26C2B67())
			{
				func_171("WHSECUROBLCK");
			}
			if (!func_214(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x04890EB0282525A5(1);
				iLocal_101 = 0;
			}
		}
	}
}

void func_184(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xAB964FCFAC3C767A(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB0D174BA6F10DF7B())
	{
		if (!*iParam0 == -1)
		{
			func_187(iParam0);
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
		if (!Global_36480[iVar0 /*32*/])
		{
			Global_36480[iVar0 /*32*/] = 1;
			Global_36480[iVar0 /*32*/].f_1 = Global_36681;
			Global_36681++;
			Global_36480[iVar0 /*32*/].f_4 = 0;
			Global_36480[iVar0 /*32*/].f_29 = 0;
			Global_36480[iVar0 /*32*/].f_5 = 0;
			Global_36480[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36480[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36480[iVar0 /*32*/].f_6 = iParam3;
			Global_36480[iVar0 /*32*/].f_31 = unk_0x3ED6DDB11A7AD67F();
			Global_36480[iVar0 /*32*/].f_7 = 0;
			Global_36480[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xC55B9553B3EDADE9(sParam4))
			{
				Global_36480[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36480[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36480[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36480[iVar0 /*32*/].f_12 = 0;
				Global_36480[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36480[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_185()
{
	if (((((((((func_186("MP_OFF_LAP_1") || func_186("WHPRIVSESLAP")) || func_186("WHSECUROBLCK")) || func_186("SECINPUTTREGLAP")) || func_186("BIKERWHINPUT")) || func_186("BIKERWHBLCKA")) || func_186("BIKERWHBLCKB")) || func_186("WHBIKERBLCK")) || func_186("BIKERWHBLCKC")) || func_186("BIKERWHBLCKD"))
	{
		return 1;
	}
	return 0;
}

var func_186(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_187(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_165(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36480[iVar0 /*32*/])
		{
			Global_36480[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_188(int iParam0)
{
	if (func_189(Global_1589933[iParam0 /*601*/].f_257.f_15, -1) && !unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 1))
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_190(int iParam0)
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

int func_191(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_192(Global_2421621[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_192(int iParam0)
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
		
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 3;
			break;
	}
	return -1;
}

int func_193()
{
	return func_200(unk_0xFB6B3EEFAB2DD12C());
}

bool func_194()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148;
}

var func_195()
{
	return Global_68128;
}

var func_196()
{
	return Global_1747616;
}

int func_197()
{
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (unk_0x98BE504E8B389665(unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126()), -1, 0) == unk_0xD5A676B97920D126())
		{
			return 1;
		}
	}
	return 0;
}

int func_198()
{
	if (unk_0xAB964FCFAC3C767A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_52())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_201()
{
	if (unk_0x7887B64A08364778(iLocal_110) && func_191(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	if (func_189(Global_1589933[iParam0 /*601*/].f_257.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	if (unk_0x7887B64A08364778(iLocal_110))
	{
		if (unk_0xA0A4DA31DEDFAC4F(iLocal_110) == joaat("ex_prop_monitor_01_ex") || func_211(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
	}
	return 0;
}

void func_204()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_199(0))
		{
			func_205(0);
		}
		unk_0xB8A73E7DA87B2968(&Global_2314, 2);
	}
}

void func_205(int iParam0)
{
	if (Global_14604)
	{
		func_207(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_206())
	{
		Global_14443.f_1 = 3;
	}
}

int func_206()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_207(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_199(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

void func_208(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_209(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_212(uParam0, bParam2, 0);
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_192(Global_2421621[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_192(Global_2421621[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_212(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
		}
		uParam0->f_1 = 1;
	}
}

bool func_213(var uParam0)
{
	return uParam0->f_1;
}

bool func_214(int iParam0)
{
	return func_215(func_169(iParam0));
}

int func_215(int iParam0)
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

bool func_216(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_217()
{
	if (iLocal_99 != -1)
	{
		func_187(&iLocal_99);
	}
	if (((((((((func_186("MP_OFF_LAP_1") || func_186("WHPRIVSESLAP")) || func_186("WHSECUROBLCK")) || func_186("SECINPUTTREGLAP")) || func_186("BIKERWHINPUT")) || func_186("BIKERWHBLCKA")) || func_186("BIKERWHBLCKB")) || func_186("WHBIKERBLCK")) || func_186("BIKERWHBLCKC")) || func_186("BIKERWHBLCKD"))
	{
		unk_0x04890EB0282525A5(1);
	}
	Global_1760630 = 0;
	Global_1760629 = 0;
}

