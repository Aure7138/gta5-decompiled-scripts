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
	if (!unk_0x23E9113C762466ED(iLocal_110))
	{
		unk_0x921053BAF754303D();
	}
	if (unk_0xBCA819F9975BEDFA(3))
	{
		func_215();
		unk_0x921053BAF754303D();
	}
	if (func_214(13) || func_214(14))
	{
		func_215();
		unk_0x921053BAF754303D();
	}
	if (Global_31552)
	{
		func_215();
		unk_0x921053BAF754303D();
	}
	if (Global_68189)
	{
		unk_0x921053BAF754303D();
	}
	bVar0 = false;
	sVar1 = "tvscreen";
	bVar28 = true;
	Var29 = { unk_0x57240623C1BC6E88(iScriptParam_0, 1) - unk_0x8C79B6FF2A91C93F(iScriptParam_0) * Vector(0.6f, 0.6f, 0.6f) };
	Var29.f_2 = (Var29.f_2 + 0.5f);
	Local_116 = { unk_0x854ED33E6D715648(iScriptParam_0, Local_113) };
	Global_1764566 = 0;
	Global_1764661 = 0;
	while (bVar28)
	{
		if (unk_0x23E9113C762466ED(iLocal_110))
		{
			if (iLocal_101)
			{
				if (!func_212(unk_0xBE369BE1BC57A796()))
				{
					if (!func_211(&uLocal_104))
					{
						func_210(&uLocal_104, 1, 0);
					}
				}
			}
			if (Global_1764566 && (func_209(unk_0xBE369BE1BC57A796()) || func_208(unk_0xBE369BE1BC57A796())))
			{
				if (!func_211(&uLocal_108))
				{
					func_210(&uLocal_108, 0, 0);
				}
				else if (func_207(&uLocal_108, 10000, 0))
				{
					func_206(&uLocal_108);
					Global_1764566 = 0;
				}
				func_202();
			}
			if (Global_1591073)
			{
				if (!bVar0)
				{
					iVar32 = unk_0x0324EEB10F81965F(iLocal_110);
					if (iVar32 == joaat("prop_laptop_01a"))
					{
						unk_0xB30185B1BE926A58(unk_0x57240623C1BC6E88(iScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var33 = { unk_0xED13B51A133E020F(iLocal_110, 2) };
						iLocal_110 = unk_0x521A82CF998EDB21(joaat("prop_laptop_lester2"), unk_0x57240623C1BC6E88(iLocal_110, 1), 0, 1, 0);
						unk_0x04A5FAE5B1EB8E28(iLocal_110, Var33, 2, 1);
						bVar0 = true;
					}
				}
			}
			if (unk_0xD53A3C5CA3FC9721(iLocal_110))
			{
				func_215();
				unk_0x921053BAF754303D();
			}
		}
		if (((!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0) && unk_0x23E9113C762466ED(iLocal_110)) && !unk_0x1B76B77EDF24A933()) && unk_0xCF7855B965948E97(unk_0x592069F95C314814()))
		{
			if (unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0xF34287B610CF02CA(iLocal_110))
			{
				bVar36 = false;
				iVar37 = unk_0x537143BA63A7EEFE(unk_0x17B5CC8A8615737D(), &uVar2, -1);
				iVar38 = 0;
				iVar38 = 0;
				while (iVar38 < iVar37)
				{
					if (!unk_0xA929B2923D14E2F8(uVar2[iVar38], 0))
					{
						if (unk_0x5132972D2BBC5A62(uVar2[iVar38], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar36 = true;
						}
						else if (unk_0x5132972D2BBC5A62(uVar2[iVar38], "MP_COMMON_MISS", "HACK_LOOP", 3))
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
				if (((func_201() || func_200(unk_0xBE369BE1BC57A796())) || func_208(unk_0xBE369BE1BC57A796())) || func_199())
				{
					Var39 = { 1f, 1f, 0.9f };
				}
				bVar42 = func_198(unk_0xBE369BE1BC57A796());
				if ((((((((((((((!bVar36 && !Global_25456) && !func_197(0)) && !unk_0x6A67A9A75CEBC97E(unk_0x17B5CC8A8615737D(), 0)) && !func_196()) && unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Var29, Var39, 0, 1, 1)) && unk_0x59499E9FE45DE5D5(unk_0x17B5CC8A8615737D()) == unk_0x59499E9FE45DE5D5(iLocal_110)) && !unk_0x48B8265059381CD0(Global_2359301, 15)) && !func_195()) && !(Global_69702 && func_194())) && !(!Global_69702 && func_193())) && !((Global_69702 && unk_0x48B8265059381CD0(Global_1633501.f_14, 24)) && unk_0xF7271A9481CAC8E3())) && !((Global_69702 && func_192()) && func_191())) && !unk_0xEE1438344034E8AA()) && !Global_68529)
				{
					if (func_189(unk_0xBE369BE1BC57A796()))
					{
					}
					if ((!func_188(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15) && !func_187(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_15, -1)) && !func_189(unk_0xBE369BE1BC57A796()))
					{
						if (iLocal_102 != bVar42)
						{
							if ((func_209(unk_0xBE369BE1BC57A796()) || func_186(unk_0xBE369BE1BC57A796())) || func_208(unk_0xBE369BE1BC57A796()))
							{
								if (iLocal_99 != -1)
								{
									func_185(&iLocal_99);
								}
								if (func_183())
								{
									unk_0x2E2945F5602A744F(1);
								}
							}
						}
						iLocal_102 = bVar42;
						if (iLocal_99 == -1)
						{
							if (bVar0)
							{
								func_182(&iLocal_99, 1, "MPLA_BILL", 0, 0, 0, 0);
							}
							else if (func_201())
							{
								func_181(bVar42);
							}
							else if (func_179())
							{
								func_176(bVar42);
							}
							else if (func_199())
							{
								func_164(bVar42);
							}
							else
							{
								func_182(&iLocal_99, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
							}
						}
					}
					if (((iLocal_99 != -1 && func_162(iLocal_99, 1)) && !unk_0x2E2AFA316F567F4B(unk_0x17B5CC8A8615737D())) && func_161())
					{
						if (iLocal_99 != -1)
						{
							func_185(&iLocal_99);
						}
						if (!bVar0)
						{
							if (func_160() || func_159())
							{
								func_152();
							}
							if (func_201())
							{
								func_20(0, bVar42);
								func_19(0, 1, 0, 0);
							}
							else if (func_199())
							{
								func_20(0, bVar42);
								func_19(0, 0, 0, 1);
							}
							else if (func_179())
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
								while (!func_207(&uLocal_106, 500, 0))
								{
									func_202();
									unk_0x4EDE34FBADD967A6(0);
								}
								func_206(&uLocal_106);
							}
							while (bVar43)
							{
								if (!unk_0x23E9113C762466ED(iLocal_110) || !unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(iLocal_110, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_68134 = 1;
								}
								if ((func_160() || func_159()) || func_189(unk_0xBE369BE1BC57A796()))
								{
									if (!Global_68131 && !Global_68529)
									{
										bVar43 = false;
									}
								}
								else if (Global_68131 || Global_68134)
								{
									bVar43 = false;
								}
								if (func_160())
								{
									func_202();
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							if (func_160() || func_159())
							{
								func_1();
							}
							func_202();
							func_206(&uLocal_108);
							iLocal_100 = 0;
						}
					}
				}
				else
				{
					if (iLocal_99 != -1)
					{
						func_185(&iLocal_99);
					}
					if (func_209(unk_0xBE369BE1BC57A796()) || func_186(unk_0xBE369BE1BC57A796()))
					{
						if (func_183())
						{
							unk_0x2E2945F5602A744F(1);
						}
					}
					if (unk_0x23E9113C762466ED(iScriptParam_0))
					{
						if (!unk_0x16281BACBF5409B8(iScriptParam_0))
						{
							bVar28 = false;
						}
					}
				}
			}
			else if (iLocal_99 != -1)
			{
				func_185(&iLocal_99);
			}
		}
		else
		{
			if (iLocal_99 != -1)
			{
				func_185(&iLocal_99);
			}
			bVar28 = false;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (bVar0)
	{
		if (unk_0x2BB2E4C757637EC2(sVar1))
		{
			unk_0xE4FE3F56A96CDA73(sVar1);
		}
	}
}

void func_1()
{
	char* sVar0;
	
	if (!unk_0xE34CF180A5429DEA(unk_0x17B5CC8A8615737D(), 1) && unk_0x23E9113C762466ED(iLocal_110))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0x0B1B005A46EF4C32(unk_0x17B5CC8A8615737D()))
				{
					unk_0xD4D420EA885FC154(unk_0x17B5CC8A8615737D());
					if (!unk_0xE34CF180A5429DEA(unk_0x17B5CC8A8615737D(), 1))
					{
						unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
					}
				}
				if (func_2(1, &sVar0))
				{
					unk_0xF9FFB9857F3120F8(&sVar0);
				}
				if (func_2(2, &sVar0))
				{
					if (iLocal_111 != 0)
					{
						if (unk_0x00743AFDA92F3B04(iLocal_112))
						{
							unk_0xEABBFB622128F3E7(iLocal_112);
							iLocal_112 = -1;
						}
						iLocal_112 = unk_0xEFC1A93F65285B77(Local_116, unk_0xED13B51A133E020F(iLocal_110, 2), 2, 0, 0, 1065353216, 0, 1065353216);
						unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), iLocal_112, &sVar0, "exit", 8f, -4f, 5, 0, 1148846080, 0);
						unk_0xD299F9D47AAE6209(iLocal_112);
						unk_0xF9FFB9857F3120F8(&sVar0);
					}
				}
			}
		}
	}
	Global_1764565 = 0;
}

int func_2(int iParam0, char* sParam1)
{
	if (!unk_0x63C468D583002D23())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_3())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (!func_209(unk_0xBE369BE1BC57A796()) && !func_208(unk_0xBE369BE1BC57A796()))
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
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2454747)
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
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_4()) == 0)
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
	return Global_25190;
}

bool func_6()
{
	return Global_2443134.f_577;
}

int func_7(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2452525;
}

bool func_9()
{
	return Global_2443134.f_572;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_11(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
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
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(iVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(iVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(iParam0))
		{
			if (unk_0xFB2400809D8DC8C7(iParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(iParam0)))
				{
					unk_0xF0F77C99098F999B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(iParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(iParam0))
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
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
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
	if (unk_0x63C468D583002D23() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xCB150A8B81012128();
		}
		else
		{
			*uParam0 = unk_0x8F8F2E80A7DA4D64();
		}
	}
	else
	{
		*uParam0 = unk_0x94E3E074F38DF86C();
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
	Global_2443134.f_634 = 1;
}

var func_17()
{
	return Global_2443134.f_613;
}

bool func_18()
{
	return unk_0x48B8265059381CD0(Global_2443134.f_2, 11);
}

void func_19(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	Global_68192 = iParam0;
	switch (Global_68192)
	{
		case 3:
			Global_68190 = 0;
			break;
		
		case 4:
			Global_68190 = 3;
			break;
	}
	if (bParam1)
	{
		if (unk_0x82F1A060D8F4583B(joaat("appsecuroserv")) > 0)
		{
			return;
		}
	}
	else if (bParam2)
	{
		if (unk_0x82F1A060D8F4583B(joaat("appbikerbusiness")) > 0)
		{
			return;
		}
	}
	else if (bParam3)
	{
		if (unk_0x82F1A060D8F4583B(joaat("appimportexport")) > 0)
		{
			return;
		}
	}
	else if (unk_0x82F1A060D8F4583B(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_69702 && func_194())
	{
		return;
	}
	if (!Global_69702 && func_193())
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0x32B1F051FF487881("appSecuroServ"))
		{
			unk_0xFCDDC89C28E82BB4("appSecuroServ");
		}
		while (!unk_0x32B1F051FF487881("appSecuroServ"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appSecuroServ", 4592);
		unk_0x07481837BFD9C1CD("appSecuroServ");
	}
	else if (bParam2)
	{
		if (!unk_0x32B1F051FF487881("appBikerBusiness"))
		{
			unk_0xFCDDC89C28E82BB4("appBikerBusiness");
		}
		while (!unk_0x32B1F051FF487881("appBikerBusiness"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appBikerBusiness", 4592);
		unk_0x07481837BFD9C1CD("appBikerBusiness");
	}
	else if (bParam3)
	{
		if (!unk_0x32B1F051FF487881("appImportExport"))
		{
			unk_0xFCDDC89C28E82BB4("appImportExport");
		}
		while (!unk_0x32B1F051FF487881("appImportExport"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appImportExport", 4592);
		unk_0x07481837BFD9C1CD("appImportExport");
	}
	else
	{
		if (!unk_0x32B1F051FF487881("appInternet"))
		{
			unk_0xFCDDC89C28E82BB4("appInternet");
		}
		while (!unk_0x32B1F051FF487881("appInternet"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appInternet", 4592);
		unk_0x07481837BFD9C1CD("appInternet");
	}
}

void func_20(int iParam0, bool bParam1)
{
	if ((((!bParam1 && !func_151(unk_0xBE369BE1BC57A796(), 1)) && func_150() < func_149()) && !unk_0xF7271A9481CAC8E3()) && !func_145(unk_0xBE369BE1BC57A796()))
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
		if (func_97(91) || func_97(98))
		{
			func_96();
		}
		func_80();
		func_79(17);
		Var0.f_2 = 183;
		Var0.f_3 = iParam1;
		if (func_78(unk_0xBE369BE1BC57A796()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		func_76(Var0, func_77(0, 1));
		func_40();
		if (!func_78(unk_0xBE369BE1BC57A796()) && iParam1 != 1)
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
	
	unk_0x21E7933CCC7B3724(&Global_2313, 10);
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
			Global_2923[3 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xEB79FECD9022AAF0(&Global_2313, 1);
			unk_0xEB79FECD9022AAF0(&Global_2313, 7);
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
	if (unk_0x6A7B0D91FD88D9EE(sParam14, sParam15))
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
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if (unk_0x3AD4FC6271B0E925(unk_0x17B5CC8A8615737D()))
			{
				return 0;
			}
		}
		if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x82F1A060D8F4583B(joaat("apptextmessage")) > 0)
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
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/]), sParam1, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101700.f_13100[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_25 = iParam7;
	Global_101700.f_13100[Global_16812 /*104*/].f_26 = uParam8;
	Global_101700.f_13100[Global_16812 /*104*/].f_29 = uParam9;
	Global_101700.f_13100[Global_16812 /*104*/].f_30 = uParam12;
	Global_101700.f_13100[Global_16812 /*104*/].f_31 = uParam11;
	Global_101700.f_13100[Global_16812 /*104*/].f_28 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101700.f_13100[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101700.f_13100[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x48B8265059381CD0(Global_2313, 10))
	{
		Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
		Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
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
				Global_101700.f_13100[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 1;
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
		if (unk_0x48B8265059381CD0(Global_2313, 10))
		{
			Global_101700.f_13010[0 /*20*/].f_17 = 1;
			Global_101700.f_13010[1 /*20*/].f_17 = 1;
			Global_101700.f_13010[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101700.f_13010[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101700.f_13010[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101700.f_13010[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101700.f_13010[1 /*20*/].f_17 = 1;
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
				unk_0x4988C48537D1AE4F(-1, "Text_Arrive_Tone", &Global_14432, 1);
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
		if (func_214(14))
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
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar2);
								unk_0x44983883E630A945();
							}
							if (Global_2452520)
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
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69702)
								{
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2594053[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2594053[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2594053[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36917;
											break;
										
										case 1:
											iVar6 = Global_36918;
											break;
										
										case 2:
											iVar6 = Global_36919;
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
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(Global_2319);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar7);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x48B8265059381CD0(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(iVar8);
								unk_0x44983883E630A945();
							}
							else if (iVar1 == 8)
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if ((iVar1 == 23 && unk_0x6A7B0D91FD88D9EE(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x48B8265059381CD0(Global_2314, 6))
							{
								unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
								unk_0xDF18CF55301CEB8B(1);
								unk_0xDF18CF55301CEB8B(iVar0);
								unk_0xDF18CF55301CEB8B(Global_2320[iVar1 /*15*/].f_10);
								unk_0xDF18CF55301CEB8B(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0xDF18CF55301CEB8B(42);
								unk_0x44983883E630A945();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
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
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9C88EB7B70229335(sParam7))
	{
		func_26(sParam7);
	}
	if (!unk_0x9C88EB7B70229335(sParam8))
	{
		func_26(sParam8);
	}
	if (!unk_0x9C88EB7B70229335(sParam9))
	{
		func_26(sParam9);
	}
	if (!unk_0x9C88EB7B70229335(sParam10))
	{
		func_26(sParam10);
	}
	if (!unk_0x9C88EB7B70229335(sParam11))
	{
		func_26(sParam11);
	}
	unk_0x44983883E630A945();
}

void func_26(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
}

void func_27(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x44983883E630A945();
}

bool func_28()
{
	return Global_1315233;
}

void func_29(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101700.f_13010[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0x0956E4296D9CC40A();
	uVar1 = unk_0x32883EAC7DC86C40();
	uVar2 = unk_0x80BC37C67CB292E5();
	uVar3 = unk_0x202B089E6328ABFA();
	uVar4 = unk_0xCD8338A83E1BCC14() + 1;
	uVar5 = unk_0x1BBFD9409EC2598C();
	Global_101700.f_13100[iParam0 /*104*/].f_18 = uVar0;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101700.f_13100[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69702)
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
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_32(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101700.f_13100[Global_16812 /*104*/].f_24 = 1;
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
	
	if (Global_69702)
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
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101700.f_13100[Global_16812 /*104*/].f_18 = -1;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101700.f_13100[iVar2 /*104*/].f_24 == 0 || Global_101700.f_13100[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_32(Global_101700.f_13100[iVar2 /*104*/].f_18, Global_101700.f_13100[Global_16812 /*104*/].f_18))
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
	Global_101700.f_13100[Global_16812 /*104*/].f_99[0] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[1] = 0;
	Global_101700.f_13100[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_34()
{
	if (func_214(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		if (Global_69702)
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
	return Global_101700.f_2095.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_39(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_38(unk_0x17B5CC8A8615737D());
			if (func_37(iVar0) && (!func_214(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_37(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	if ((!func_70() && func_56()) && func_53(unk_0xBE369BE1BC57A796()))
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
	unk_0xBD18006F0815A298(sParam0);
	iVar0 = unk_0x23048DD0C6E21613(0, 1);
	func_42(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_48() || !unk_0xF7271A9481CAC8E3()) || !func_45(unk_0xBE369BE1BC57A796(), 0))
	{
		return;
	}
	iVar0 = func_43(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1759864.f_5[iVar0 /*53*/] = iParam0;
		Global_1759864.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1759864.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1759864.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1759864.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1759864.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1759864.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1759864 - 1))
	{
		if (iParam0 > Global_1759864.f_5[iVar0 /*53*/].f_1)
		{
			func_44(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1759864++;
	if (Global_1759864 > 5)
	{
		Global_1759864 = 5;
		return Global_1759864;
	}
	return (Global_1759864 - 1);
}

void func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1759864.f_5[iVar0 /*53*/] = { Global_1759864.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
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
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_47()
{
	return Global_1312735;
}

bool func_48()
{
	return unk_0x6948821CC8D52AC2(-1762644250);
}

bool func_49()
{
	return func_50(unk_0xBE369BE1BC57A796());
}

bool func_50(int iParam0)
{
	return func_51(iParam0, 1);
}

int func_51(int iParam0, int iParam1)
{
	if (iParam0 != func_52())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_52())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 && Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1)
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
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_139, 2) || unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_139, 5))
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
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_11.f_4, iParam1);
}

int func_56()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x0C36F33B3F746611(iVar0);
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
		if (iParam0 != unk_0xBE369BE1BC57A796())
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
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_139, 2) || unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_139, 5))
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
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 0);
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
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_52() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2)
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
		if (Global_1619421[iParam0 /*390*/].f_11 != func_52())
		{
			return iParam1 == Global_1619421[iParam0 /*390*/].f_11;
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
			if (Global_1619421[iParam0 /*390*/].f_11 != func_52())
			{
				if (Global_1619421[iParam0 /*390*/].f_11 == iParam0)
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
	return Global_1619421[iParam0 /*390*/].f_11.f_22;
}

bool func_68(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_11.f_5, iParam1);
}

bool func_69(bool bParam0)
{
	return func_60(unk_0xBE369BE1BC57A796(), bParam0);
}

int func_70()
{
	int iVar0;
	var uVar1;
	struct<16> Var17;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_10[iVar0] == func_52())
		{
			StringCopy(&Var17, "", 64);
			Var17 = { func_71(func_72(iVar0)) };
			if (unk_0x6A7B0D91FD88D9EE(&Var17, &uVar1))
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
	return Global_2443905.f_3065.f_18[iParam0 /*16*/];
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
	return func_75(unk_0xBE369BE1BC57A796());
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_52() && Global_1619421[iVar0 /*390*/].f_11.f_289 == 1)
	{
		return 8;
	}
	return 4;
}

void func_76(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xBE369BE1BC57A796();
	if (!iParam14 == 0)
	{
		unk_0x504D0D40319365B7(1, &Param0, 14, iParam14);
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
		iVar2 = unk_0x0C36F33B3F746611(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xBE369BE1BC57A796() || iParam0)
			{
				if (bParam1)
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar1);
				}
				else if (!func_45(iVar2, 0))
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar1);
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
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 26);
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4710.f_7[iVar0]), iVar1);
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
	if (unk_0x9C88EB7B70229335(&Var0))
	{
		StringCopy(&Var0, func_93(unk_0xBE369BE1BC57A796(), 0), 64);
	}
	func_84(&Var0, iVar16, 0);
	if ((!unk_0x8EA3D5407E9F4AF0() && unk_0x65FCCBD8772098C3(0, -1, 1)) || func_83())
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
	unk_0xEB79FECD9022AAF0(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_4), iParam0);
}

void func_82(int iParam0)
{
	unk_0x21E7933CCC7B3724(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_4), iParam0);
}

int func_83()
{
	if (unk_0xBEF1C6430F4D8B14() == 0)
	{
		return 0;
	}
	if (unk_0xF20D8448F6AFC86C())
	{
		if (unk_0xD4AA13DCCEC54C48(1, -1))
		{
			if (unk_0x8AB33CE0431CEDCB())
			{
				return 1;
			}
		}
	}
	if (unk_0x7C2F31E78C33DE0F())
	{
		if (unk_0x5DC8C64FE18EADF7(1))
		{
			if (unk_0x8AB33CE0431CEDCB())
			{
				return 1;
			}
		}
	}
	if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
	{
		if (unk_0x65FCCBD8772098C3(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0xD4AA13DCCEC54C48(0, -1))
		{
			if (unk_0x8AB33CE0431CEDCB())
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
			if (func_191() && iParam1 == 0)
			{
				func_85(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_97), sParam0, 64);
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_113 = unk_0x94AA8202B7976897();
	if ((!unk_0x8EA3D5407E9F4AF0() && unk_0x65FCCBD8772098C3(0, -1, 1)) || func_83())
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
		if (!unk_0x9C88EB7B70229335(sParam0))
		{
			func_90(45, 46, sParam0, -1, 1);
			Var0 = { func_95(59, 61, -1) };
			if (unk_0x9C88EB7B70229335(&Var0))
			{
				func_90(59, 61, sParam0, -1, 1);
			}
		}
	}
	if ((!unk_0x8EA3D5407E9F4AF0() && unk_0x65FCCBD8772098C3(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
	if (!unk_0x9C88EB7B70229335(sParam0))
	{
		bVar16 = true;
		if ((func_55(unk_0xBE369BE1BC57A796(), 28) || func_88(unk_0xBE369BE1BC57A796())) && !func_86(unk_0xBE369BE1BC57A796()))
		{
			bVar16 = false;
		}
		if (bVar16)
		{
			StringCopy(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_251), sParam0, 64);
		}
	}
}

int func_86(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_87(iParam0) };
	if (unk_0x8EA3D5407E9F4AF0() && unk_0x7BB94A563F5F14FD(&Var0))
	{
		return 1;
	}
	return 0;
}

struct<13> func_87(var uParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(uParam0, &Var0, 13);
	return Var0;
}

int func_88(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_87(iParam0) };
	if (unk_0x7C2F31E78C33DE0F() || unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5DC8C64FE18EADF7(0))
		{
			return 0;
		}
	}
	else if (unk_0x8EA3D5407E9F4AF0())
	{
		if (unk_0x7BB94A563F5F14FD(&Var0))
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
		if (!unk_0x9C88EB7B70229335(sParam0))
		{
			func_90(49, 50, sParam0, -1, 1);
		}
	}
	if (!unk_0x9C88EB7B70229335(sParam0))
	{
		StringCopy(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_267), sParam0, 64);
	}
	if ((!unk_0x8EA3D5407E9F4AF0() && unk_0x65FCCBD8772098C3(0, -1, 1)) || func_83())
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
		iVar0 = Global_2523488[iParam0 /*3*/][func_91(iParam3)];
		iVar1 = Global_2523488[iParam1 /*3*/][func_91(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar10, "", 32);
			iVar18 = unk_0xF9108830F4935563(sParam2);
			if (iVar18 > 0)
			{
				iVar19 = 10;
				if (iVar18 < 10)
				{
					iVar19 = iVar18;
				}
				StringCopy(&cVar2, unk_0xA3E25E419FAD44C1(sParam2, 0, iVar19, 31), 32);
				if (iVar18 > 10)
				{
					StringCopy(&cVar10, unk_0xA3E25E419FAD44C1(sParam2, 10, iVar18, 31), 32);
				}
			}
			unk_0xCDCFA600A8ABA84B(iVar0, &cVar2, iParam4);
			unk_0xCDCFA600A8ABA84B(iVar1, &cVar10, iParam4);
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
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
	return unk_0xC7E52B74A3B4973C("GB_REST_ACC");
}

char* func_94()
{
	return unk_0xC7E52B74A3B4973C("GB_REST_ACCM");
}

struct<16> func_95(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar18[32];
	
	uVar0 = Global_2523488[iParam0 /*3*/][func_91(iParam2)];
	uVar1 = Global_2523488[iParam1 /*3*/][func_91(iParam2)];
	StringCopy(&Var2, unk_0x63ACC1C0994F0997(uVar0, -1), 64);
	StringCopy(&cVar18, unk_0x63ACC1C0994F0997(uVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

void func_96()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2433125.f_2199[iVar0 /*76*/].f_2 != 0)
		{
			Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
			unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_97(int iParam0)
{
	return Global_2433125.f_2199[0 /*76*/].f_1 == iParam0;
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
	if (func_78(unk_0xBE369BE1BC57A796()))
	{
		iVar7 = 2;
	}
	if (iParam2 == 1)
	{
		iVar7 = 3;
	}
	if (Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11 != unk_0xBE369BE1BC57A796())
	{
		if (bParam1)
		{
			unk_0x432F6964B6A651B4(iVar7);
			func_139(0);
			func_137(0);
			func_82(21);
			func_82(22);
			Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_327 = iVar7;
		}
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11 = unk_0xBE369BE1BC57A796();
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_289 = iParam2;
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_326 = iParam2;
		unk_0x94B3BF44E1E06819(func_47(), &uVar8, &uVar9);
		func_136(uVar8, uVar9);
		sVar10 = unk_0x600808A0B5559074(unk_0xBE369BE1BC57A796(), &uVar0);
		StringCopy(&Var11, sVar10, 64);
		func_135(Var11);
		func_134();
		if (func_133(5887, -1, 0) <= 0)
		{
			iVar6 = unk_0x57E9911EC23E2C54();
		}
		else
		{
			iVar6 = (func_133(5887, -1, 0) - 43200);
		}
		func_130(iVar6);
		if (unk_0x34D7B5822CF22910("Player_Boss", 3))
		{
			unk_0x25E9B908B35A0675(unk_0x17B5CC8A8615737D(), "Player_Boss", unk_0xBE369BE1BC57A796());
		}
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_23 = -1;
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_24 = -1;
		Global_2494199.f_4710.f_32 = -1;
		func_124();
		func_116(0);
		if (bParam0)
		{
			func_79(0);
		}
		if (Global_2494199.f_4710.f_68 != func_52())
		{
			Global_2494199.f_4710.f_68 = func_52();
		}
		if (unk_0x48B8265059381CD0(Global_2494199.f_1644, 15))
		{
			unk_0x21E7933CCC7B3724(&(Global_2494199.f_1644), 15);
		}
		if (func_115(15))
		{
			func_114(15);
		}
		if (!func_113() && !unk_0xF7271A9481CAC8E3())
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
				if (!unk_0x48B8265059381CD0(iVar28, 11))
				{
					unk_0xEB79FECD9022AAF0(&iVar28, 11);
					func_110(5884, iVar28, -1, 1, 0);
					bVar27 = true;
				}
				func_104(82, 3, bVar27);
			}
		}
		if (iParam2 == 1)
		{
			unk_0x06A4D3B555ADEC73(func_102(func_103()), func_101(func_103()), func_100(), func_99(), Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_290, 4, Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_328);
		}
	}
}

int func_99()
{
	if (Global_1763183.f_3 != 0)
	{
		return Global_1763183.f_3;
	}
	return -1;
}

int func_100()
{
	if (Global_1763183.f_2 != 0)
	{
		return Global_1763183.f_2;
	}
	return -1;
}

int func_101(int iParam0)
{
	if (iParam0 == func_52())
	{
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[1];
}

int func_102(int iParam0)
{
	if (iParam0 == func_52())
	{
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[0];
}

int func_103()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11;
}

void func_104(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_34();
		if (iParam1 == 4)
		{
			Global_101700.f_27009[iParam0 /*29*/].f_12[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[2] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69702)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_105();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_105();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0xC7E52B74A3B4973C(&(Global_101700.f_27009[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0xBD18006F0815A298("");
		StringCopy(&cVar16, unk_0xC7E52B74A3B4973C(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xC7E52B74A3B4973C("CELL_253");
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xBD18006F0815A298("CELL_255");
		unk_0x34D84D73B5DF8E80(&(Global_2923[1 /*6*/]));
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x21E7933CCC7B3724(&Global_2313, 0);
}

int func_106(int iParam0, int iParam1)
{
	if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	if (!Global_2494199.f_4710.f_147)
	{
		Global_2494199.f_4710.f_147 = 1;
	}
}

void func_108()
{
	struct<16> Var0;
	
	Var0 = { func_95(49, 50, -1) };
	func_89(&Var0, 0);
	if ((!unk_0x8EA3D5407E9F4AF0() && unk_0x65FCCBD8772098C3(0, -1, 1)) || func_83())
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
	if ((!unk_0x8EA3D5407E9F4AF0() && unk_0x65FCCBD8772098C3(0, -1, 1)) || func_83())
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
	iVar0 = Global_2503826[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

void func_111(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_2391018.f_2), iParam0);
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
			if (unk_0xA3794949321E107C(Global_2390944.f_28[iVar0 /*2*/].f_1))
			{
				unk_0x7E2A76828C48BFB2(Global_2390944.f_28[iVar0 /*2*/].f_1, 1);
			}
		}
		iVar0++;
	}
}

bool func_113()
{
	return Global_2443134.f_618;
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_4710.f_7[iVar0]), iVar1);
}

bool func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x48B8265059381CD0(Global_2494199.f_4710.f_7[iVar0], iVar1);
}

void func_116(int iParam0)
{
	if (func_123())
	{
		if (iParam0 == 1)
		{
			if (Global_2494199.f_4257 == -1)
			{
				Global_2494199.f_4257 = 60000;
			}
			func_14(&(Global_2494199.f_4255), 0, 0);
			if (Global_2494199.f_4260 == -1)
			{
				Global_2494199.f_4260 = 10000;
			}
			func_14(&(Global_2494199.f_4258), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_122(1);
		}
		if ((!unk_0xF7271A9481CAC8E3() && !func_121()) && !func_117(unk_0xBE369BE1BC57A796()))
		{
			Global_979731 = 0;
		}
		Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_8 = 0;
	}
}

int func_117(int iParam0)
{
	if (func_118(iParam0, 1))
	{
		if (Global_1591201[iParam0 /*602*/] != 6)
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
	if (Global_1591201[iParam0 /*602*/] == -1)
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
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

bool func_121()
{
	return Global_2443134.f_718;
}

void func_122(bool bParam0)
{
	if (unk_0x63C468D583002D23())
	{
		if (!func_123())
		{
			if (func_13(unk_0xBE369BE1BC57A796(), 1, 0))
			{
				unk_0x5A1E5F0E805EF8B8(unk_0x17B5CC8A8615737D(), 1);
				unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 342, 0);
				unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 122, 0);
			}
			unk_0x240454F87F8FCCAE(unk_0xBE369BE1BC57A796(), 1f);
			unk_0xE3275C3071721B6D(0);
			unk_0x02AC9A2B522D447F(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xBF60B15AF9063410(0, 0);
				}
			}
		}
		else
		{
			if (func_13(unk_0xBE369BE1BC57A796(), 1, 1))
			{
				unk_0x5A1E5F0E805EF8B8(unk_0x17B5CC8A8615737D(), 0);
				unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
				unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 342, 1);
				unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 122, 1);
				unk_0x240454F87F8FCCAE(unk_0xBE369BE1BC57A796(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xBF60B15AF9063410(1, 0);
				}
			}
			unk_0xE3275C3071721B6D(1);
			unk_0x02AC9A2B522D447F(0);
		}
	}
}

bool func_123()
{
	return Global_1312416;
}

void func_124()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x0C36F33B3F746611(iVar0);
		if (unk_0x7268A1112372AA44(iVar1))
		{
			func_126(1, iVar1);
			if (iVar1 != unk_0xBE369BE1BC57A796())
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
	
	if (unk_0x48B8265059381CD0(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_93, iParam0))
	{
		uVar0 = unk_0xDF7CE83326F434E9(iParam0);
		unk_0x80011E0B47592D8A(uVar0, unk_0xBE369BE1BC57A796(), 1);
		unk_0x7621385B3CA2BA0B(unk_0xBE369BE1BC57A796(), iParam0, 1);
		unk_0x7621385B3CA2BA0B(iParam0, unk_0xBE369BE1BC57A796(), 1);
		func_126(1, iParam0);
		unk_0x21E7933CCC7B3724(&(Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_93), iParam0);
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
		uVar1 = unk_0xDF7CE83326F434E9(iParam1);
		if (unk_0x23E9113C762466ED(uVar1) && !unk_0xA929B2923D14E2F8(iVar1, 0))
		{
			if (unk_0xFD0FE723227D5AB6(iVar1, 0))
			{
				iVar0 = unk_0x60604E51E30D25B8(iVar1, 0);
				if (unk_0x23E9113C762466ED(iVar0) && !unk_0xA929B2923D14E2F8(iVar0, 0))
				{
					unk_0x96169B40F2E64880(iVar0, bParam0, 1);
					if (func_63(iParam1, func_103(), 1))
					{
						if (func_103() == iParam1)
						{
							if (Global_2494199.f_4710.f_69[3] != iVar0)
							{
								Global_2494199.f_4710.f_69[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_127(func_103(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2494199.f_4710.f_69[iVar2] != iVar0)
								{
									Global_2494199.f_4710.f_69[iVar2] = iVar0;
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
						if (unk_0x23E9113C762466ED(Global_2494199.f_4710.f_69[3]) && !unk_0xA929B2923D14E2F8(Global_2494199.f_4710.f_69[3], 0))
						{
							unk_0x96169B40F2E64880(Global_2494199.f_4710.f_69[3], true, 1);
							Global_2494199.f_4710.f_69[3] = 0;
						}
					}
					else
					{
						iVar3 = func_127(func_103(), iParam1);
						if (iVar3 != -1)
						{
							if (unk_0x23E9113C762466ED(Global_2494199.f_4710.f_69[iVar3]) && !unk_0xA929B2923D14E2F8(Global_2494199.f_4710.f_69[iVar3], 0))
							{
								unk_0x96169B40F2E64880(Global_2494199.f_4710.f_69[iVar3], true, 1);
								Global_2494199.f_4710.f_69[iVar3] = 0;
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
	
	if (func_198(iParam0))
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
	if (func_198(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1619421[iParam0 /*390*/].f_11.f_10[iParam1];
		}
	}
	return func_52();
}

int func_129(int iParam0, int iParam1)
{
	if (iParam1 != func_52())
	{
		if (Global_1619421[iParam0 /*390*/].f_11.f_25 != func_52())
		{
			return iParam1 == Global_1619421[iParam0 /*390*/].f_11.f_25;
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
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_1 = iParam0;
	if (func_133(5887, -1, 0) != func_131(unk_0xBE369BE1BC57A796()))
	{
		func_110(5887, func_131(unk_0xBE369BE1BC57A796()), -1, 1, 0);
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
	return Global_1619421[iParam0 /*390*/].f_11.f_1;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_91(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_134()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		unk_0x35058C8654537B60(1);
		if (func_69(1))
		{
			unk_0xA2B4872DB31105E8(joaat("PI_BIK_0_T"));
		}
		else
		{
			unk_0xA2B4872DB31105E8(-1755491431);
		}
	}
}

void func_135(char[64] cParam0)
{
	Global_2443905.f_3065.f_2 = { cParam0 };
}

void func_136(var uParam0, var uParam1)
{
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_7[0] = uParam0;
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_7[1] = uParam1;
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
		iVar0 = Global_2522581[iParam0 /*3*/][func_91(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xCE46AC18A4A47E2D(iVar0, uParam1, iParam3);
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
		if (func_55(unk_0xBE369BE1BC57A796(), 21))
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
	return unk_0x48B8265059381CD0(Global_2494199.f_4710.f_25, iParam0);
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
	return Global_1312373[iParam0];
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
		if (Global_1619421[iParam0 /*390*/].f_11.f_171 != -1)
		{
			iVar0 = Global_1619421[iParam0 /*390*/].f_11.f_171;
		}
		else
		{
			iVar0 = func_148(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_147()) - unk_0x57E9911EC23E2C54());
		return iVar1;
	}
	return -1;
}

int func_147()
{
	return Global_262145.f_13071;
}

int func_148(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_149()
{
	return Global_262145.f_10986;
}

int func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0C36F33B3F746611(iVar0);
		if (unk_0x7268A1112372AA44(iVar2))
		{
			if (func_198(iVar2))
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
		if (func_198(iParam0))
		{
			return 0;
		}
	}
	return Global_1619421[iParam0 /*390*/].f_11 != func_52();
}

void func_152()
{
	char* sVar0;
	struct<3> Var16;
	bool bVar19;
	
	Global_1764565 = 1;
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
		Var16 = { unk_0x854ED33E6D715648(iLocal_110, 0.0328f, -0.8f, 0.3f) };
		bVar19 = false;
		func_206(&uLocal_106);
		if (func_2(0, &sVar0))
		{
			while (!bVar19)
			{
				func_202();
				if (!func_211(&uLocal_106))
				{
					func_210(&uLocal_106, 0, 0);
				}
				else if (func_207(&uLocal_106, 4000, 0))
				{
					bVar19 = true;
				}
				if (!func_158(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Var16, 0.05f, 0) && !func_157(unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D()), unk_0x638527C9799F2AE4(iLocal_110), 5f))
				{
					if (!func_154(unk_0x17B5CC8A8615737D(), 2106541073))
					{
						unk_0x9C16B2DABAEC929A(unk_0x17B5CC8A8615737D(), Var16, 1f, 5000, unk_0x638527C9799F2AE4(iLocal_110), 0.25f);
					}
				}
				else
				{
					bVar19 = true;
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			func_206(&uLocal_106);
			iLocal_111 = 0;
		}
	}
	while (iLocal_111 != 3)
	{
		func_153(iLocal_110);
		func_202();
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
	
	if (!unk_0x63C468D583002D23())
	{
		return;
	}
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		return;
	}
	if (!func_209(unk_0xBE369BE1BC57A796()) && !func_208(unk_0xBE369BE1BC57A796()))
	{
		return;
	}
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return;
	}
	func_2(0, &sVar0);
	func_2(1, &sVar16);
	func_2(2, &sVar32);
	unk_0xA0E7D0E8FE126EE8(&sVar32);
	unk_0xA0E7D0E8FE126EE8(&sVar0);
	sVar48 = "idle_a";
	iVar49 = 1;
	if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == joaat("mp_f_freemode_01"))
	{
		iVar49 = 1;
	}
	switch (iLocal_111)
	{
		case 0:
			iLocal_103 = 0;
			unk_0x9D69CCD890B628E8("walk", unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 64, 256, 64, 64);
			if (unk_0xF4F8AE8DD0F08C1E(&sVar0))
			{
				if (unk_0x1F8F07D86DA1A701(unk_0x17B5CC8A8615737D(), 2106541073) == 7 && unk_0xF4F8AE8DD0F08C1E(&sVar0))
				{
					if (unk_0x00743AFDA92F3B04(iLocal_112))
					{
						unk_0xEABBFB622128F3E7(iLocal_112);
						iLocal_112 = -1;
					}
					iLocal_112 = unk_0xEFC1A93F65285B77(Local_116, unk_0xED13B51A133E020F(iParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
					unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), iLocal_112, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					unk_0xD299F9D47AAE6209(iLocal_112);
					unk_0xF9FFB9857F3120F8(&sVar0);
					iLocal_111 = 1;
				}
			}
			break;
		
		case 1:
			unk_0x9D69CCD890B628E8("enter", unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 64, 256, 64, 64);
			unk_0xA0E7D0E8FE126EE8(&sVar16);
			iVar50 = unk_0x91FFFB0475D539A1(iLocal_112);
			if (!iLocal_103)
			{
				if (unk_0x96F65998C0685177(iVar50) >= 0.93f)
				{
					unk_0x4988C48537D1AE4F(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
					iLocal_103 = 1;
				}
			}
			if (unk_0xF4F8AE8DD0F08C1E(&sVar16) && (!unk_0x00743AFDA92F3B04(iVar50) || unk_0x96F65998C0685177(iVar50) >= 0.96f))
			{
				iVar51 = unk_0x0E29C61F26D96FDB(0, iVar49);
				if ((((unk_0x6A7B0D91FD88D9EE(&cLocal_119, "idle_a") && iVar51 == 0) || (unk_0x6A7B0D91FD88D9EE(&cLocal_119, "idle_b") && iVar51 == 1)) || (unk_0x6A7B0D91FD88D9EE(&cLocal_119, "idle_c") && iVar51 == 2)) || (unk_0x6A7B0D91FD88D9EE(&cLocal_119, "idle_d") && iVar51 == 3))
				{
					iVar51++;
					if (iVar51 >= iVar49)
					{
						iVar51 = 0;
					}
				}
				if (unk_0x00743AFDA92F3B04(iLocal_112))
				{
					unk_0xEABBFB622128F3E7(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = unk_0xEFC1A93F65285B77(Local_116, unk_0xED13B51A133E020F(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				switch (iVar51)
				{
					case 0:
						unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), iLocal_112, &sVar16, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xD299F9D47AAE6209(iLocal_112);
						StringCopy(&cLocal_119, "idle_a", 16);
						iLocal_111 = 3;
						break;
					
					case 1:
						unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), iLocal_112, &sVar16, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xD299F9D47AAE6209(iLocal_112);
						StringCopy(&cLocal_119, "idle_b", 16);
						iLocal_111 = 3;
						break;
					
					case 2:
						unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), iLocal_112, &sVar16, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xD299F9D47AAE6209(iLocal_112);
						StringCopy(&cLocal_119, "idle_c", 16);
						iLocal_111 = 3;
						break;
					
					case 3:
						unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), iLocal_112, &sVar16, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xD299F9D47AAE6209(iLocal_112);
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
			if (unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), &sVar16, "idle_a", 2))
			{
				unk_0x9D69CCD890B628E8("idle_a", unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 256, 64, 64, 64);
			}
			else if (unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), &sVar16, "idle_b", 2))
			{
				unk_0x9D69CCD890B628E8("idle_b", unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 256, 64, 64, 64);
			}
			else if (unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), &sVar16, "idle_c", 2))
			{
				unk_0x9D69CCD890B628E8("idle_c", unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 256, 64, 64, 64);
			}
			else if (unk_0x5132972D2BBC5A62(unk_0x17B5CC8A8615737D(), &sVar16, "idle_d", 2))
			{
				unk_0x9D69CCD890B628E8("idle_d", unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 256, 64, 64, 64);
			}
			else
			{
				unk_0x9D69CCD890B628E8("idle_XXX", unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 256, 64, 64, 64);
			}
			iVar50 = unk_0x91FFFB0475D539A1(iLocal_112);
			if (!unk_0x00743AFDA92F3B04(iLocal_112) && !unk_0x00743AFDA92F3B04(iVar50))
			{
				if (unk_0x00743AFDA92F3B04(iLocal_112))
				{
					unk_0xEABBFB622128F3E7(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = unk_0xEFC1A93F65285B77(Local_116, unk_0xED13B51A133E020F(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				iVar50 = unk_0x91FFFB0475D539A1(iLocal_112);
				if (unk_0x00743AFDA92F3B04(iVar50))
				{
					unk_0xCE49D4A5BC766F78(iVar50, 0f);
				}
				unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), iLocal_112, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0xD299F9D47AAE6209(iLocal_112);
				iLocal_111 = 3;
				return;
			}
			if (unk_0xF4F8AE8DD0F08C1E(&sVar16) && (!unk_0x00743AFDA92F3B04(iVar50) || unk_0x96F65998C0685177(iVar50) >= 0.99f))
			{
				if (unk_0x00743AFDA92F3B04(iLocal_112))
				{
					unk_0xEABBFB622128F3E7(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = unk_0xEFC1A93F65285B77(Local_116, unk_0xED13B51A133E020F(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0x477EC31C5BA5FAD8(unk_0x17B5CC8A8615737D(), iLocal_112, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0xD299F9D47AAE6209(iLocal_112);
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
		if (unk_0x1F8F07D86DA1A701(iParam0, iParam1) == 1 || unk_0x1F8F07D86DA1A701(iParam0, iParam1) == 0)
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
		if (!unk_0xCA41A00932714525(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
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
		if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE851F22ED3518011((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_159()
{
	if (func_208(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0) || unk_0x48B8265059381CD0(Global_1764677.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_160()
{
	if (func_209(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x48B8265059381CD0(Global_1764677.f_2, 0) || unk_0x48B8265059381CD0(Global_1764677.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_161()
{
	if (func_145(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (func_198(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	else if (func_150() < func_149())
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_163(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xCF7855B965948E97(unk_0x592069F95C314814()))
	{
		return 0;
	}
	if (func_197(0))
	{
		return 0;
	}
	if (unk_0x1B76B77EDF24A933())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/] == 1 && Global_36484[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36484[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36484[iVar0 /*32*/].f_5 = 1;
			Global_36484[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36484[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36484[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_163(int iParam0)
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
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_164(bool bParam0)
{
	if ((((func_189(unk_0xBE369BE1BC57A796()) && func_174(unk_0xBE369BE1BC57A796()) == func_173(unk_0xBE369BE1BC57A796())) && !unk_0xB61C11E08C30F9CB(unk_0xBE369BE1BC57A796())) && !func_172()) && !Global_1764566)
	{
		if (func_170())
		{
			func_169("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_150() >= func_149())
			{
				func_182(&iLocal_99, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(unk_0xBE369BE1BC57A796()))
			{
				func_182(&iLocal_99, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (unk_0xF7271A9481CAC8E3())
			{
				func_169("WHSECUROBLCK");
			}
			else
			{
				func_182(&iLocal_99, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_50(unk_0xBE369BE1BC57A796()))
		{
			func_169("WHBIKERBLCK");
		}
		else if ((func_211(&uLocal_104) && func_207(&uLocal_104, 10000, 1)) || !iLocal_101)
		{
			if (func_165(unk_0xBE369BE1BC57A796()) || Global_1764566 == 1)
			{
				iLocal_101 = 1;
				if (!Global_1764566)
				{
					func_169("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_183())
				{
					unk_0x2E2945F5602A744F(1);
				}
				iLocal_101 = 0;
				func_206(&uLocal_104);
				func_182(&iLocal_99, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_101)
		{
			if (!unk_0x9E123D5FF2973C60())
			{
				func_169("WHSECUROBLCK");
			}
			if (!func_165(unk_0xBE369BE1BC57A796()))
			{
				unk_0x2E2945F5602A744F(1);
				iLocal_101 = 0;
			}
		}
	}
}

bool func_165(int iParam0)
{
	return func_166(func_167(iParam0));
}

int func_166(int iParam0)
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

int func_167(int iParam0)
{
	if (func_168(iParam0, 0))
	{
		return Global_1619421[iParam0 /*390*/].f_11.f_32;
	}
	return -1;
}

int func_168(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_169(char* sParam0)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 1, 1, -1);
}

int func_170()
{
	if (func_171())
	{
		return 1;
	}
	return Global_2443134.f_622;
}

bool func_171()
{
	return Global_1315193 == 10;
}

bool func_172()
{
	return Global_1764677.f_12;
}

int func_173(int iParam0)
{
	if (iParam0 == func_52())
	{
		return 0;
	}
	return Global_1591201[iParam0 /*602*/].f_258.f_103;
}

int func_174(int iParam0)
{
	if (func_189(iParam0))
	{
		return func_175(Global_2421664[iParam0 /*358*/].f_312.f_1);
	}
	return 0;
}

int func_175(int iParam0)
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

void func_176(bool bParam0)
{
	if (((((func_186(unk_0xBE369BE1BC57A796()) || func_159()) && !unk_0xB61C11E08C30F9CB(unk_0xBE369BE1BC57A796())) && !func_172()) && !Global_1764566) && func_157(unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D()), unk_0x638527C9799F2AE4(iLocal_110), 90f))
	{
		if (unk_0xF7271A9481CAC8E3())
		{
			func_169("WHSECUROBLCK");
		}
		else if (func_170())
		{
			if (func_186(unk_0xBE369BE1BC57A796()))
			{
				func_169("BIKERWHBLCKC");
			}
			else
			{
				func_169("BIKERWHBLCKD");
			}
		}
		else if (func_50(unk_0xBE369BE1BC57A796()))
		{
			if ((func_211(&uLocal_104) && func_207(&uLocal_104, 10000, 1)) || !iLocal_101)
			{
				if (func_177(unk_0xBE369BE1BC57A796()) || Global_1764566 == 1)
				{
					iLocal_101 = 1;
					if (!Global_1764566)
					{
						func_169("WHSECUROBLCK");
					}
				}
				else
				{
					if (func_183())
					{
						unk_0x2E2945F5602A744F(1);
					}
					iLocal_101 = 0;
					func_206(&uLocal_104);
					func_182(&iLocal_99, 1, "BIKERWHINPUT", 0, 0, 0, 0);
				}
			}
			else if (iLocal_101)
			{
				if (!unk_0x9E123D5FF2973C60())
				{
					func_169("WHSECUROBLCK");
				}
				if (!func_177(unk_0xBE369BE1BC57A796()))
				{
					iLocal_101 = 0;
					unk_0x2E2945F5602A744F(1);
				}
			}
		}
		else if (!bParam0 && func_150() < func_149())
		{
			func_182(&iLocal_99, 1, "BIKERWHBLCKA", 0, 0, 0, 0);
		}
		else
		{
			func_169("BIKERWHBLCKB");
		}
	}
}

bool func_177(int iParam0)
{
	return func_178(func_167(iParam0));
}

int func_178(int iParam0)
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

int func_179()
{
	if (unk_0x23E9113C762466ED(iLocal_110))
	{
		if (func_208(unk_0xBE369BE1BC57A796()) || func_180(unk_0xBE369BE1BC57A796()))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	if (func_187(Global_1591201[iParam0 /*602*/].f_258.f_15, -1))
	{
		return 1;
	}
	return 0;
}

void func_181(bool bParam0)
{
	if (((func_160() && !unk_0xB61C11E08C30F9CB(unk_0xBE369BE1BC57A796())) && !func_172()) && !Global_1764566)
	{
		if (func_170())
		{
			func_169("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_150() >= func_149())
			{
				func_182(&iLocal_99, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_145(unk_0xBE369BE1BC57A796()))
			{
				func_182(&iLocal_99, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (unk_0xF7271A9481CAC8E3())
			{
				func_169("WHSECUROBLCK");
			}
			else
			{
				func_182(&iLocal_99, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_50(unk_0xBE369BE1BC57A796()))
		{
			func_169("WHBIKERBLCK");
		}
		else if ((func_211(&uLocal_104) && func_207(&uLocal_104, 10000, 1)) || !iLocal_101)
		{
			if (func_212(unk_0xBE369BE1BC57A796()) || Global_1764566 == 1)
			{
				iLocal_101 = 1;
				if (!Global_1764566)
				{
					func_169("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_183())
				{
					unk_0x2E2945F5602A744F(1);
				}
				iLocal_101 = 0;
				func_206(&uLocal_104);
				func_182(&iLocal_99, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_101)
		{
			if (!unk_0x9E123D5FF2973C60())
			{
				func_169("WHSECUROBLCK");
			}
			if (!func_212(unk_0xBE369BE1BC57A796()))
			{
				unk_0x2E2945F5602A744F(1);
				iLocal_101 = 0;
			}
		}
	}
}

void func_182(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x82F1A060D8F4583B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xE9E6B5364105A000())
	{
		if (!*iParam0 == -1)
		{
			func_185(iParam0);
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
		if (!Global_36484[iVar0 /*32*/])
		{
			Global_36484[iVar0 /*32*/] = 1;
			Global_36484[iVar0 /*32*/].f_1 = Global_36685;
			Global_36685++;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_29 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36484[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36484[iVar0 /*32*/].f_6 = iParam3;
			Global_36484[iVar0 /*32*/].f_31 = unk_0xE9A5FDFDC239B2ED();
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x9C88EB7B70229335(sParam4))
			{
				Global_36484[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36484[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36484[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36484[iVar0 /*32*/].f_12 = 0;
				Global_36484[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36484[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_183()
{
	if (((((((((func_184("MP_OFF_LAP_1") || func_184("WHPRIVSESLAP")) || func_184("WHSECUROBLCK")) || func_184("SECINPUTTREGLAP")) || func_184("BIKERWHINPUT")) || func_184("BIKERWHBLCKA")) || func_184("BIKERWHBLCKB")) || func_184("WHBIKERBLCK")) || func_184("BIKERWHBLCKC")) || func_184("BIKERWHBLCKD"))
	{
		return 1;
	}
	return 0;
}

var func_184(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

void func_185(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_163(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36484[iVar0 /*32*/])
		{
			Global_36484[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_186(int iParam0)
{
	if (func_187(Global_1591201[iParam0 /*602*/].f_258.f_15, -1) && !unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 1))
	{
		return 1;
	}
	return 0;
}

int func_187(int iParam0, int iParam1)
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

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_190(Global_2421664[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_190(int iParam0)
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

int func_191()
{
	return func_198(unk_0xBE369BE1BC57A796());
}

bool func_192()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148;
}

var func_193()
{
	return Global_68132;
}

var func_194()
{
	return Global_1751495;
}

int func_195()
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0x17206B315923243C(unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D()), -1, 0) == unk_0x17B5CC8A8615737D())
		{
			return 1;
		}
	}
	return 0;
}

int func_196()
{
	if (unk_0x82F1A060D8F4583B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_52())
		{
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_199()
{
	if (unk_0x23E9113C762466ED(iLocal_110) && func_189(unk_0xBE369BE1BC57A796()))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (func_187(Global_1591201[iParam0 /*602*/].f_258.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_201()
{
	if (unk_0x23E9113C762466ED(iLocal_110))
	{
		if (unk_0x0324EEB10F81965F(iLocal_110) == joaat("ex_prop_monitor_01_ex") || func_209(unk_0xBE369BE1BC57A796()))
		{
			return 1;
		}
	}
	return 0;
}

void func_202()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_197(0))
		{
			func_203(0);
		}
		unk_0xEB79FECD9022AAF0(&Global_2314, 2);
	}
}

void func_203(int iParam0)
{
	if (Global_14604)
	{
		func_205(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_204())
	{
		Global_14443.f_1 = 3;
	}
}

int func_204()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_205(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_197(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

void func_206(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_207(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_210(uParam0, bParam2, 0);
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_190(Global_2421664[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_190(Global_2421664[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_210(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
		}
		uParam0->f_1 = 1;
	}
}

bool func_211(var uParam0)
{
	return uParam0->f_1;
}

bool func_212(int iParam0)
{
	return func_213(func_167(iParam0));
}

int func_213(int iParam0)
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

bool func_214(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_215()
{
	if (iLocal_99 != -1)
	{
		func_185(&iLocal_99);
	}
	if (((((((((func_184("MP_OFF_LAP_1") || func_184("WHPRIVSESLAP")) || func_184("WHSECUROBLCK")) || func_184("SECINPUTTREGLAP")) || func_184("BIKERWHINPUT")) || func_184("BIKERWHBLCKA")) || func_184("BIKERWHBLCKB")) || func_184("WHBIKERBLCK")) || func_184("BIKERWHBLCKC")) || func_184("BIKERWHBLCKD"))
	{
		unk_0x2E2945F5602A744F(1);
	}
	Global_1764566 = 0;
	Global_1764565 = 0;
}

