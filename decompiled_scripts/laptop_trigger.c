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
	if (!unk_0xD3FACCDA4D66AEAD(iLocal_110))
	{
		unk_0x78C587487CD40B92();
	}
	if (unk_0x2EC83C7ACA23E8A4(3))
	{
		func_199();
		unk_0x78C587487CD40B92();
	}
	if (func_198(13) || func_198(14))
	{
		func_199();
		unk_0x78C587487CD40B92();
	}
	if (Global_31548)
	{
		func_199();
		unk_0x78C587487CD40B92();
	}
	if (Global_68133)
	{
		unk_0x78C587487CD40B92();
	}
	bVar0 = false;
	sVar1 = "tvscreen";
	bVar28 = true;
	Var29 = { unk_0xC59DF10B4FC39DF8(iScriptParam_0, 1) - unk_0xB86A69343E7FBB9A(iScriptParam_0) * Vector(0.6f, 0.6f, 0.6f) };
	Var29.f_2 = (Var29.f_2 + 0.5f);
	Local_116 = { unk_0x2E01486DB8218E16(iScriptParam_0, Local_113) };
	Global_1751889 = 0;
	while (bVar28)
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_110))
		{
			if (iLocal_101)
			{
				if (!func_196(unk_0x0C1D3C552325765B()))
				{
					if (!func_195(&uLocal_104))
					{
						func_194(&uLocal_104, 1, 0);
					}
				}
			}
			if (Global_1751889 && (func_193(unk_0x0C1D3C552325765B()) || func_191(unk_0x0C1D3C552325765B())))
			{
				if (!func_195(&uLocal_108))
				{
					func_194(&uLocal_108, 0, 0);
				}
				else if (func_190(&uLocal_108, 10000, 0))
				{
					func_189(&uLocal_108);
					Global_1751889 = 0;
				}
				func_185();
			}
			if (Global_1588644)
			{
				if (!bVar0)
				{
					iVar32 = unk_0x705BC1BB91F530B5(iLocal_110);
					if (iVar32 == joaat("prop_laptop_01a"))
					{
						unk_0x9FFBF9D6DD13FE0B(unk_0xC59DF10B4FC39DF8(iScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var33 = { unk_0x3A02D44277FBA4BE(iLocal_110, 2) };
						iLocal_110 = unk_0xE1C25770C2FB7AE3(joaat("prop_laptop_lester2"), unk_0xC59DF10B4FC39DF8(iLocal_110, 1), 0, 1, 0);
						unk_0x4A1ACDDF793F9777(iLocal_110, Var33, 2, 1);
						bVar0 = true;
					}
				}
			}
			if (unk_0xD9890AC57C9BDC10(iLocal_110))
			{
				func_199();
				unk_0x78C587487CD40B92();
			}
		}
		if (((!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0) && unk_0xD3FACCDA4D66AEAD(iLocal_110)) && !unk_0x7C0379981B7E6E40()) && unk_0xC0691D80D21C989D(unk_0x4A0FB18E33FE5805()))
		{
			if (unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == unk_0x16A396814EC162D8(iLocal_110))
			{
				bVar36 = false;
				iVar37 = unk_0xC204507743BB34BC(unk_0xA0081090911D13E5(), &uVar2, -1);
				iVar38 = 0;
				iVar38 = 0;
				while (iVar38 < iVar37)
				{
					if (!unk_0x912AD5A10E7633F0(uVar2[iVar38], 0))
					{
						if (unk_0x2FB5C9A04733E5EF(uVar2[iVar38], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar36 = true;
						}
						else if (unk_0x2FB5C9A04733E5EF(uVar2[iVar38], "MP_COMMON_MISS", "HACK_LOOP", 3))
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
				if ((func_184() || func_183(unk_0x0C1D3C552325765B())) || func_191(unk_0x0C1D3C552325765B()))
				{
					Var39 = { 1f, 1f, 0.9f };
				}
				bVar42 = func_182(unk_0x0C1D3C552325765B());
				if (((((((((((((!bVar36 && !Global_25451) && !func_181(0)) && !unk_0xFA1068B6E2F3F22A(unk_0xA0081090911D13E5(), 0)) && !func_180()) && unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Var29, Var39, 0, 1, 1)) && unk_0xA1BD23B41765C6D6(unk_0xA0081090911D13E5()) == unk_0xA1BD23B41765C6D6(iLocal_110)) && !unk_0x08BA6DD398CA197C(Global_2359301, 15)) && !func_179()) && !(Global_69617 && func_178())) && !(!Global_69617 && func_177())) && !((Global_69617 && unk_0x08BA6DD398CA197C(Global_1626500.f_14, 24)) && unk_0x1504F110F2576375())) && !((Global_69617 && func_176()) && func_175())) && !unk_0xA012E3A84A2B2F1A())
				{
					if (!func_174(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11) && !func_173(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11, -1))
					{
						if (iLocal_102 != bVar42)
						{
							if ((func_193(unk_0x0C1D3C552325765B()) || func_172(unk_0x0C1D3C552325765B())) || func_191(unk_0x0C1D3C552325765B()))
							{
								if (iLocal_99 != -1)
								{
									func_171(&iLocal_99);
								}
								if (func_169())
								{
									unk_0x94724F7C938EBE34(1);
								}
							}
						}
						iLocal_102 = bVar42;
						if (iLocal_99 == -1)
						{
							if (bVar0)
							{
								func_168(&iLocal_99, 1, "MPLA_BILL", 0, 0, 0, 0);
							}
							else if (func_184())
							{
								func_167(bVar42);
							}
							else if (func_165())
							{
								func_156(bVar42);
							}
							else
							{
								func_168(&iLocal_99, 1, "BROWSEINPUTTRIG", 0, 0, 0, 0);
							}
						}
					}
					if ((((iLocal_99 != -1 && func_154(iLocal_99, 1)) && !unk_0xA5528F7B3922ED70(unk_0xA0081090911D13E5())) && func_153()) || Global_25456)
					{
						Global_25456 = 0;
						if (iLocal_99 != -1)
						{
							func_171(&iLocal_99);
						}
						if (!bVar0)
						{
							if (func_152() || func_151())
							{
								func_144();
							}
							if (func_184())
							{
								func_20(0, bVar42);
								func_19(0, 1, 0);
							}
							else if (func_165())
							{
								func_20(1, bVar42);
								func_19(0, 0, 1);
							}
							else
							{
								func_19(0, 0, 0);
							}
							if (!iLocal_100)
							{
								func_15();
								iLocal_100 = 1;
							}
							bVar43 = true;
							if (func_152() || func_151())
							{
								func_14(&uLocal_106, 0, 0);
								while (!func_190(&uLocal_106, 500, 0))
								{
									func_185();
									unk_0x4EDE34FBADD967A6(0);
								}
								func_189(&uLocal_106);
							}
							while (bVar43)
							{
								if (!unk_0xD3FACCDA4D66AEAD(iLocal_110) || !unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), unk_0xC59DF10B4FC39DF8(iLocal_110, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_68128 = 1;
								}
								if (func_152() || func_151())
								{
									if (!Global_68125)
									{
										bVar43 = false;
									}
								}
								else if (Global_68125 || Global_68128)
								{
									bVar43 = false;
								}
								if (func_152())
								{
									func_185();
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							if (func_152() || func_151())
							{
								func_1();
							}
							func_185();
							func_189(&uLocal_108);
							iLocal_100 = 0;
						}
					}
				}
				else
				{
					if (iLocal_99 != -1)
					{
						func_171(&iLocal_99);
					}
					if (func_193(unk_0x0C1D3C552325765B()) || func_172(unk_0x0C1D3C552325765B()))
					{
						if (func_169())
						{
							unk_0x94724F7C938EBE34(1);
						}
					}
					if (unk_0xD3FACCDA4D66AEAD(iScriptParam_0))
					{
						if (!unk_0x9AB41624168E4453(iScriptParam_0))
						{
							bVar28 = false;
						}
					}
				}
			}
			else if (iLocal_99 != -1)
			{
				func_171(&iLocal_99);
			}
		}
		else
		{
			if (iLocal_99 != -1)
			{
				func_171(&iLocal_99);
			}
			bVar28 = false;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (bVar0)
	{
		if (unk_0x3C3FFB3C5310E07E(sVar1))
		{
			unk_0xC09719D492EA1AB2(sVar1);
		}
	}
}

void func_1()
{
	char* sVar0;
	
	if (!unk_0x6EB24E8C43220A81(unk_0xA0081090911D13E5(), 1) && unk_0xD3FACCDA4D66AEAD(iLocal_110))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
			{
				if (unk_0xB8EA24F91D83ACF5(unk_0xA0081090911D13E5()))
				{
					unk_0x885A0F303DE57082(unk_0xA0081090911D13E5());
					if (!unk_0x6EB24E8C43220A81(unk_0xA0081090911D13E5(), 1))
					{
						unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
					}
				}
				if (func_2(1, &sVar0))
				{
					unk_0x04269E768DDAF940(&sVar0);
				}
				if (func_2(2, &sVar0))
				{
					if (iLocal_111 != 0)
					{
						if (unk_0x74CC94B98FBFE813(iLocal_112))
						{
							unk_0x5FB710E6CD88134B(iLocal_112);
							iLocal_112 = -1;
						}
						iLocal_112 = unk_0xEB30FF1DBE2A8B1E(Local_116, unk_0x3A02D44277FBA4BE(iLocal_110, 2), 2, 0, 0, 1065353216, 0, 1065353216);
						unk_0xBE7F8D6FC34B9646(unk_0xA0081090911D13E5(), iLocal_112, &sVar0, "exit", 8f, -4f, 5, 0, 1148846080, 0);
						unk_0xB83A243EE68452E6(iLocal_112);
						unk_0x04269E768DDAF940(&sVar0);
					}
				}
			}
		}
	}
	Global_1751888 = 0;
}

int func_2(int iParam0, char* sParam1)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_3())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (!func_193(unk_0x0C1D3C552325765B()) && !func_191(unk_0x0C1D3C552325765B()))
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
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_9())
	{
		return 1;
	}
	if (Global_2453962)
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
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_4() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_4()) == 0)
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
	return Global_2442442.f_576;
}

int func_7(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_2451777;
}

bool func_9()
{
	return Global_2442442.f_571;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_11(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
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
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_12(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_12(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
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
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
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
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
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
	Global_2442442.f_633 = 1;
}

var func_17()
{
	return Global_2442442.f_612;
}

bool func_18()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 11);
}

void func_19(int iParam0, bool bParam1, bool bParam2)
{
	Global_68136 = iParam0;
	switch (Global_68136)
	{
		case 3:
			Global_68134 = 0;
			break;
		
		case 4:
			Global_68134 = 3;
			break;
	}
	if (!bParam1 && !bParam2)
	{
		if (unk_0xA96867DD0A63C62C(joaat("appinternet")) > 0)
		{
			return;
		}
	}
	else if (bParam2)
	{
		if (unk_0xA96867DD0A63C62C(joaat("appbikerbusiness")) > 0)
		{
			return;
		}
	}
	else if (unk_0xA96867DD0A63C62C(joaat("appsecuroserv")) > 0)
	{
		return;
	}
	if (Global_69617 && func_178())
	{
		return;
	}
	if (!Global_69617 && func_177())
	{
		return;
	}
	if (!bParam1 && !bParam2)
	{
		if (!unk_0x71DF55A4DE7565D5("appInternet"))
		{
			unk_0xE568CE38FF8C1318("appInternet");
		}
		while (!unk_0x71DF55A4DE7565D5("appInternet"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appInternet", 4092);
		unk_0x3CFCF109465A1DA6("appInternet");
	}
	else if (bParam2)
	{
		if (!unk_0x71DF55A4DE7565D5("appBikerBusiness"))
		{
			unk_0xE568CE38FF8C1318("appBikerBusiness");
		}
		while (!unk_0x71DF55A4DE7565D5("appBikerBusiness"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appBikerBusiness", 4092);
		unk_0x3CFCF109465A1DA6("appBikerBusiness");
	}
	else
	{
		if (!unk_0x71DF55A4DE7565D5("appSecuroServ"))
		{
			unk_0xE568CE38FF8C1318("appSecuroServ");
		}
		while (!unk_0x71DF55A4DE7565D5("appSecuroServ"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("appSecuroServ", 4092);
		unk_0x3CFCF109465A1DA6("appSecuroServ");
	}
}

void func_20(int iParam0, bool bParam1)
{
	if ((((!bParam1 && !func_143(unk_0x0C1D3C552325765B(), 1)) && func_142() < func_141()) && !unk_0x1504F110F2576375()) && !func_137(unk_0x0C1D3C552325765B()))
	{
		func_21(1, iParam0);
	}
}

void func_21(bool bParam0, int iParam1)
{
	struct<14> Var0;
	
	func_95(1, 1, iParam1);
	if (bParam0)
	{
		if (func_94(89) || func_94(96))
		{
			func_93();
		}
		func_80();
		func_79(17);
		Var0.f_2 = 183;
		Var0.f_3 = iParam1;
		if (func_78(unk_0x0C1D3C552325765B()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		func_76(Var0, func_77(0, 1));
		func_40();
		if (!func_78(unk_0x0C1D3C552325765B()) && iParam1 != 1)
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
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
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
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
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
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
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
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
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
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
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
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
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
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
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
		if (func_198(14))
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
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
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
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
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
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
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_26(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
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
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_26(sParam7);
	}
	if (!unk_0x509383441597090D(sParam8))
	{
		func_26(sParam8);
	}
	if (!unk_0x509383441597090D(sParam9))
	{
		func_26(sParam9);
	}
	if (!unk_0x509383441597090D(sParam10))
	{
		func_26(sParam10);
	}
	if (!unk_0x509383441597090D(sParam11))
	{
		func_26(sParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_26(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

void func_27(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

bool func_28()
{
	return Global_1315229;
}

void func_29(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
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
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_32(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
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
	
	if (Global_69617)
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
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_32(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
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
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_34()
{
	if (func_198(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		if (Global_69617)
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
	return Global_101553.f_1991.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_39(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_38(unk_0xA0081090911D13E5());
			if (func_37(iVar0) && (!func_198(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_37(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	if ((!func_70() && func_56()) && func_53(unk_0x0C1D3C552325765B()))
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
	unk_0x754E61FE98961B39(sParam0);
	iVar0 = unk_0xBCD67D962E393B66(0, 1);
	func_42(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_48() || !unk_0x1504F110F2576375()) || !func_45(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_43(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_44(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
	return unk_0x6E373DDF41F95D44(-1762644250);
}

bool func_49()
{
	return func_50(unk_0x0C1D3C552325765B());
}

bool func_50(int iParam0)
{
	return func_51(iParam0, 1);
}

int func_51(int iParam0, int iParam1)
{
	if (iParam0 != func_52())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_52())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
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
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 2) || unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 5))
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
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

int func_56()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
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
		if (iParam0 != unk_0x0C1D3C552325765B())
		{
			iVar0 = 0;
			if (func_69(1))
			{
				if (func_68(iParam0, 14))
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
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 2) || unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 5))
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
	else if (func_143(iParam0, 1))
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
	if (func_137(iParam0))
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
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
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
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_52() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
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
		if (Global_1614576[iParam0 /*324*/].f_10 != func_52())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
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
			if (Global_1614576[iParam0 /*324*/].f_10 != func_52())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
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
	return Global_1614576[iParam0 /*324*/].f_10.f_22;
}

bool func_68(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_5, iParam1);
}

bool func_69(bool bParam0)
{
	return func_60(unk_0x0C1D3C552325765B(), bParam0);
}

int func_70()
{
	int iVar0;
	var uVar1;
	struct<16> Var17;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_10[iVar0] == func_52())
		{
			StringCopy(&Var17, "", 64);
			Var17 = { func_71(func_72(iVar0)) };
			if (unk_0x28C1B9853548BD8E(&Var17, &uVar1))
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
	return Global_2443212.f_3065.f_18[iParam0 /*16*/];
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
	return func_75(unk_0x0C1D3C552325765B());
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_52() && Global_1614576[iVar0 /*324*/].f_10.f_234 == 1)
	{
		return 8;
	}
	return 4;
}

void func_76(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x0C1D3C552325765B();
	if (!iParam14 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Param0, 14, iParam14);
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
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_45(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
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
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 26);
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

void func_80()
{
	struct<8> Var0;
	int iVar16;
	
	Var0 = { func_92(59, 61, -1) };
	iVar16 = 0;
	if (func_69(1))
	{
		Var0 = { func_92(47, 48, -1) };
		iVar16 = 1;
	}
	if (unk_0x509383441597090D(&Var0))
	{
		StringCopy(&Var0, func_90(unk_0x0C1D3C552325765B(), 0), 64);
	}
	func_84(&Var0, iVar16, 0);
	if ((!unk_0x15B0CAB107CFCDE1() && unk_0x9584C2F535471638(0, -1, 1)) || func_83())
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
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

void func_82(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

int func_83()
{
	if (unk_0x577FA1A6B03F7513() == 0)
	{
		return 0;
	}
	if (unk_0xBECAD780226FC009())
	{
		if (unk_0xBDDCB194366C769C(1, -1))
		{
			if (unk_0xF6AED1327F669066())
			{
				return 1;
			}
		}
	}
	if (unk_0xD95D58B9AAC86D55())
	{
		if (unk_0xED4DB0F2EFE02B37(1))
		{
			if (unk_0xF6AED1327F669066())
			{
				return 1;
			}
		}
	}
	if (unk_0x65121BA303717C5B() || unk_0x15B0CAB107CFCDE1())
	{
		if (unk_0x9584C2F535471638(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xBDDCB194366C769C(0, -1))
		{
			if (unk_0xF6AED1327F669066())
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
			func_87(47, 48, sParam0, -1, 1);
			if (func_49() && iParam1 == 1)
			{
				func_86(sParam0, bParam2);
			}
		}
		else
		{
			func_87(59, 61, sParam0, -1, 1);
			if (func_175() && iParam1 == 0)
			{
				func_85(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_97), sParam0, 64);
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113 = unk_0x497420E022796B3F();
	if ((!unk_0x15B0CAB107CFCDE1() && unk_0x9584C2F535471638(0, -1, 1)) || func_83())
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
	
	if (bParam1)
	{
		if (!unk_0x509383441597090D(sParam0))
		{
			func_87(45, 46, sParam0, -1, 1);
			Var0 = { func_92(59, 61, -1) };
			if (unk_0x509383441597090D(&Var0))
			{
				func_87(59, 61, sParam0, -1, 1);
			}
		}
	}
	if (!unk_0x509383441597090D(sParam0))
	{
		StringCopy(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_197), sParam0, 64);
	}
	if ((!unk_0x15B0CAB107CFCDE1() && unk_0x9584C2F535471638(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_86(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x509383441597090D(sParam0))
		{
			func_87(49, 50, sParam0, -1, 1);
		}
	}
	if (!unk_0x509383441597090D(sParam0))
	{
		StringCopy(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_213), sParam0, 64);
	}
	if ((!unk_0x15B0CAB107CFCDE1() && unk_0x9584C2F535471638(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_87(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar10[32];
	int iVar18;
	int iVar19;
	
	if (func_89())
	{
		iVar0 = Global_2506916[iParam0 /*3*/][func_88(iParam3)];
		iVar1 = Global_2506916[iParam1 /*3*/][func_88(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar10, "", 32);
			iVar18 = unk_0x3ACC64D0951B9D26(sParam2);
			if (iVar18 > 0)
			{
				iVar19 = 10;
				if (iVar18 < 10)
				{
					iVar19 = iVar18;
				}
				StringCopy(&cVar2, unk_0x431F53B7A8FAAE33(sParam2, 0, iVar19, 31), 32);
				if (iVar18 > 10)
				{
					StringCopy(&cVar10, unk_0x431F53B7A8FAAE33(sParam2, 10, iVar18, 31), 32);
				}
			}
			unk_0xE3C55E2DC11131A1(iVar0, &cVar2, iParam4);
			unk_0xE3C55E2DC11131A1(iVar1, &cVar10, iParam4);
		}
	}
}

int func_88(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

int func_89()
{
	return 1;
	return 0;
}

char* func_90(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0, 1))
		{
			return func_91();
		}
	}
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACC");
}

char* func_91()
{
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACCM");
}

struct<16> func_92(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar18[32];
	
	uVar0 = Global_2506916[iParam0 /*3*/][func_88(iParam2)];
	uVar1 = Global_2506916[iParam1 /*3*/][func_88(iParam2)];
	StringCopy(&Var2, unk_0x2111EA6661834353(uVar0, -1), 64);
	StringCopy(&cVar18, unk_0x2111EA6661834353(uVar1, -1), 32);
	StringConCat(&Var2, &cVar18, 64);
	return Var2;
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 != 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_94(int iParam0)
{
	return Global_2432628.f_2198[0 /*72*/].f_1 == iParam0;
}

void func_95(bool bParam0, bool bParam1, int iParam2)
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
	
	if (!func_134())
	{
		return;
	}
	iVar7 = 1;
	if (func_78(unk_0x0C1D3C552325765B()))
	{
		iVar7 = 2;
	}
	if (iParam2 == 1)
	{
		iVar7 = 3;
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10 != unk_0x0C1D3C552325765B())
	{
		if (bParam1)
		{
			unk_0xE400D94FF563736C(iVar7);
			func_131(0);
			func_129(0);
			func_82(21);
			func_82(22);
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_272 = iVar7;
		}
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10 = unk_0x0C1D3C552325765B();
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_234 = iParam2;
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_271 = iParam2;
		unk_0xB2564BBE8BAC88EB(func_47(), &uVar8, &uVar9);
		func_128(uVar8, uVar9);
		sVar10 = unk_0xC088F50D658C74FE(unk_0x0C1D3C552325765B(), &uVar0);
		StringCopy(&Var11, sVar10, 64);
		func_127(Var11);
		func_126();
		if (func_125(4482, -1, 0) <= 0)
		{
			iVar6 = unk_0x39E54E7BC7452169();
		}
		else
		{
			iVar6 = (func_125(4482, -1, 0) - 43200);
		}
		func_122(iVar6);
		if (unk_0x71F81D3603710A43("Player_Boss", 3))
		{
			unk_0xB6E7BA5C3025C547(unk_0xA0081090911D13E5(), "Player_Boss", unk_0x0C1D3C552325765B());
		}
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 = -1;
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_24 = -1;
		Global_2482149.f_4698.f_29 = -1;
		func_115();
		func_107(0);
		if (bParam0)
		{
			func_79(0);
		}
		if (Global_2482149.f_4698.f_65 != func_52())
		{
			Global_2482149.f_4698.f_65 = func_52();
		}
		if (unk_0x08BA6DD398CA197C(Global_2482149.f_1643, 15))
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 15);
		}
		if (func_106(15))
		{
			func_105(15);
		}
		if (!func_104() && !unk_0x1504F110F2576375())
		{
			func_103();
			func_102(2);
		}
		func_101(4522, 2, -1, 1, 0);
		func_82(31);
		func_80();
		func_100();
		func_99();
		if (iParam2 != 1)
		{
			if (!func_98(82, 3))
			{
				bVar27 = false;
				iVar28 = func_125(4479, -1, 0);
				if (!unk_0x08BA6DD398CA197C(iVar28, 11))
				{
					unk_0x88B0F0DC270164B7(&iVar28, 11);
					func_101(4479, iVar28, -1, 1, 0);
					bVar27 = true;
				}
				func_96(82, 3, bVar27);
			}
		}
	}
}

void func_96(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_34();
		if (iParam1 == 4)
		{
			Global_101553.f_32740[iParam0 /*29*/].f_12[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_12[2] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[0] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101553.f_32740[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69617)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_97();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_97();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_97();
			}
		}
	}
}

void func_97()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xFFC9DE7E93AEAE21(&(Global_101553.f_32740[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0x754E61FE98961B39("");
		StringCopy(&cVar16, unk_0xFFC9DE7E93AEAE21(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xFFC9DE7E93AEAE21("CELL_253");
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x754E61FE98961B39("CELL_255");
		unk_0xBDE6EEC5F6BDC060(&(Global_2923[1 /*6*/]));
		unk_0xDAB775768F2B11B1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x09C86C0C5CA26B1E(&Global_2313, 0);
}

int func_98(int iParam0, int iParam1)
{
	if (Global_101553.f_32740[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	struct<16> Var0;
	
	Var0 = { func_92(49, 50, -1) };
	func_86(&Var0, 0);
	if ((!unk_0x15B0CAB107CFCDE1() && unk_0x9584C2F535471638(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_100()
{
	struct<16> Var0;
	
	Var0 = { func_92(45, 46, -1) };
	func_85(&Var0, 0);
	if ((!unk_0x15B0CAB107CFCDE1() && unk_0x9584C2F535471638(0, -1, 1)) || func_83())
	{
		func_82(28);
	}
	else
	{
		func_81(28);
	}
}

void func_101(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_88(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

void func_102(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_2391018.f_2), iParam0);
	if (Global_2391018)
	{
		return;
	}
	Global_2391018 = 1;
	Global_2391018.f_1 = 0;
}

void func_103()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2390944.f_28[iVar0 /*2*/] != -1 && Global_2390944.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (unk_0x16833EFAA58E63DB(Global_2390944.f_28[iVar0 /*2*/].f_1))
			{
				unk_0x9ABFD60B4E082992(Global_2390944.f_28[iVar0 /*2*/].f_1, 1);
			}
		}
		iVar0++;
	}
}

bool func_104()
{
	return Global_2442442.f_617;
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

bool func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_7[iVar0], iVar1);
}

void func_107(int iParam0)
{
	if (func_114())
	{
		if (iParam0 == 1)
		{
			if (Global_2482149.f_4255 == -1)
			{
				Global_2482149.f_4255 = 60000;
			}
			func_14(&(Global_2482149.f_4253), 0, 0);
			if (Global_2482149.f_4258 == -1)
			{
				Global_2482149.f_4258 = 10000;
			}
			func_14(&(Global_2482149.f_4256), 0, 0);
		}
		else
		{
			Global_1312412 = 0;
			func_113(1);
		}
		if ((!unk_0x1504F110F2576375() && !func_112()) && !func_108(unk_0x0C1D3C552325765B()))
		{
			Global_978174 = 0;
		}
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_8 = 0;
	}
}

int func_108(int iParam0)
{
	if (func_109(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_109(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_110(iParam0))
		{
			return 1;
		}
	}
	if (Global_1588660[iParam0 /*532*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_110(int iParam0)
{
	return func_111(iParam0);
}

bool func_111(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

bool func_112()
{
	return Global_2442442.f_717;
}

void func_113(bool bParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (!func_114())
		{
			if (func_13(unk_0x0C1D3C552325765B(), 1, 0))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 0);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 0);
			}
			unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 1f);
			unk_0x57FA95501E37763C(0);
			unk_0x83CDA1F1ADCD9582(1);
			if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
			{
				Global_1312412.f_2 = 0;
				if (bParam0)
				{
					unk_0x9066E5B82BC6B02C(0, 0);
				}
			}
		}
		else
		{
			if (func_13(unk_0x0C1D3C552325765B(), 1, 1))
			{
				unk_0xD9AB5877E5CA2FF0(unk_0xA0081090911D13E5(), 0);
				unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 342, 1);
				unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 122, 1);
				unk_0xA7DCADD61C4CB6AD(unk_0x0C1D3C552325765B(), 0.5f);
				if (Global_1312412.f_1 == 0 || Global_1312412.f_2 == 1)
				{
					unk_0x9066E5B82BC6B02C(1, 0);
				}
			}
			unk_0x57FA95501E37763C(1);
			unk_0x83CDA1F1ADCD9582(0);
		}
	}
}

bool func_114()
{
	return Global_1312412;
}

void func_115()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			func_117(1, iVar1);
			if (iVar1 != unk_0x0C1D3C552325765B())
			{
				func_116(iVar1);
			}
		}
		iVar0++;
	}
}

void func_116(int iParam0)
{
	var uVar0;
	
	if (unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_93, iParam0))
	{
		uVar0 = unk_0x21F191D9AFF98B5E(iParam0);
		unk_0x48262A314D66BAF1(uVar0, unk_0x0C1D3C552325765B(), 1);
		unk_0x5EB0EEC362B46453(unk_0x0C1D3C552325765B(), iParam0, 1);
		unk_0x5EB0EEC362B46453(iParam0, unk_0x0C1D3C552325765B(), 1);
		func_117(1, iParam0);
		unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_93), iParam0);
	}
}

void func_117(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (func_13(iParam1, 0, 1))
	{
		uVar1 = unk_0x21F191D9AFF98B5E(iParam1);
		if (unk_0xD3FACCDA4D66AEAD(uVar1) && !unk_0x912AD5A10E7633F0(iVar1, 0))
		{
			if (unk_0x39FEE545B315414E(iVar1, 0))
			{
				iVar0 = unk_0xF8DB47D339B8B953(iVar1, 0);
				if (unk_0xD3FACCDA4D66AEAD(iVar0) && !unk_0x912AD5A10E7633F0(iVar0, 0))
				{
					unk_0x4824CA3A165ECF77(iVar0, bParam0, 1);
					if (func_63(iParam1, func_121(), 1))
					{
						if (func_121() == iParam1)
						{
							if (Global_2482149.f_4698.f_66[3] != iVar0)
							{
								Global_2482149.f_4698.f_66[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_118(func_121(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2482149.f_4698.f_66[iVar2] != iVar0)
								{
									Global_2482149.f_4698.f_66[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_63(iParam1, func_121(), 1))
				{
					if (func_121() == iParam1)
					{
						if (unk_0xD3FACCDA4D66AEAD(Global_2482149.f_4698.f_66[3]) && !unk_0x912AD5A10E7633F0(Global_2482149.f_4698.f_66[3], 0))
						{
							unk_0x4824CA3A165ECF77(Global_2482149.f_4698.f_66[3], true, 1);
							Global_2482149.f_4698.f_66[3] = 0;
						}
					}
					else
					{
						iVar3 = func_118(func_121(), iParam1);
						if (iVar3 != -1)
						{
							if (unk_0xD3FACCDA4D66AEAD(Global_2482149.f_4698.f_66[iVar3]) && !unk_0x912AD5A10E7633F0(Global_2482149.f_4698.f_66[iVar3], 0))
							{
								unk_0x4824CA3A165ECF77(Global_2482149.f_4698.f_66[iVar3], true, 1);
								Global_2482149.f_4698.f_66[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_182(iParam0))
	{
		if (func_63(iParam1, iParam0, 0) || func_120(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_119(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_119(int iParam0, int iParam1)
{
	if (func_182(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1614576[iParam0 /*324*/].f_10.f_10[iParam1];
		}
	}
	return func_52();
}

int func_120(int iParam0, int iParam1)
{
	if (iParam1 != func_52())
	{
		if (Global_1614576[iParam0 /*324*/].f_10.f_25 != func_52())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10.f_25;
		}
	}
	return 0;
}

int func_121()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

void func_122(int iParam0)
{
	if (!func_134())
	{
		return;
	}
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_1 = iParam0;
	if (func_125(4482, -1, 0) != func_123(unk_0x0C1D3C552325765B()))
	{
		func_101(4482, func_123(unk_0x0C1D3C552325765B()), -1, 1, 0);
	}
}

int func_123(int iParam0)
{
	if (func_124(iParam0) == -1)
	{
		return -1;
	}
	return (func_124(iParam0) + 43200);
}

int func_124(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_1;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_88(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_126()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0x71734982CF698966(1);
		if (func_69(1))
		{
			unk_0x44AC05FC1FC5CAA0(joaat("PI_BIK_0_T"));
		}
		else
		{
			unk_0x44AC05FC1FC5CAA0(-1755491431);
		}
	}
}

void func_127(char[64] cParam0)
{
	Global_2443212.f_3065.f_2 = { cParam0 };
}

void func_128(var uParam0, var uParam1)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_7[0] = uParam0;
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_7[1] = uParam1;
}

void func_129(int iParam0)
{
	func_130(204, iParam0, -1, 1);
}

void func_130(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_89())
	{
		iVar0 = Global_2506009[iParam0 /*3*/][func_88(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA75D835C91B77269(iVar0, uParam1, iParam3);
		}
	}
}

void func_131(bool bParam0)
{
	if (bParam0)
	{
		if (func_133(4))
		{
			func_81(21);
			func_81(22);
		}
		func_81(31);
		func_132(bParam0);
	}
	else
	{
		if (func_55(unk_0x0C1D3C552325765B(), 21))
		{
			func_82(21);
			if (!func_133(3) && func_133(4))
			{
				func_81(22);
			}
		}
		func_82(31);
		func_132(bParam0);
	}
}

void func_132(bool bParam0)
{
	func_130(286, bParam0, -1, 1);
}

bool func_133(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

int func_134()
{
	if (func_136() && func_135(0))
	{
		return 1;
	}
	return 0;
}

var func_135(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_136()
{
	return func_135(func_47() + 1);
}

bool func_137(int iParam0)
{
	return func_138(iParam0) > 0;
}

int func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_13(iParam0, 0, 1))
	{
		if (Global_1614576[iParam0 /*324*/].f_10.f_171 != -1)
		{
			iVar0 = Global_1614576[iParam0 /*324*/].f_10.f_171;
		}
		else
		{
			iVar0 = func_140(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_139()) - unk_0x39E54E7BC7452169());
		return iVar1;
	}
	return -1;
}

int func_139()
{
	return Global_262145.f_12833;
}

int func_140(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141()
{
	return Global_262145.f_10798;
}

int func_142()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar2))
		{
			if (func_182(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_143(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_182(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_52();
}

void func_144()
{
	char* sVar0;
	struct<3> Var16;
	bool bVar19;
	
	Global_1751888 = 1;
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
		Var16 = { unk_0x2E01486DB8218E16(iLocal_110, 0.0328f, -0.8f, 0.3f) };
		bVar19 = false;
		func_189(&uLocal_106);
		if (func_2(0, &sVar0))
		{
			while (!bVar19)
			{
				func_185();
				if (!func_195(&uLocal_106))
				{
					func_194(&uLocal_106, 0, 0);
				}
				else if (func_190(&uLocal_106, 4000, 0))
				{
					bVar19 = true;
				}
				if (!func_150(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var16, 0.05f, 0) && !func_149(unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5()), unk_0x5E6FDC4F3A8C8EDE(iLocal_110), 5f))
				{
					if (!func_146(unk_0xA0081090911D13E5(), 2106541073))
					{
						unk_0xF58CA5EA1A5B2762(unk_0xA0081090911D13E5(), Var16, 1f, 5000, unk_0x5E6FDC4F3A8C8EDE(iLocal_110), 0.25f);
					}
				}
				else
				{
					bVar19 = true;
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			func_189(&uLocal_106);
			iLocal_111 = 0;
		}
	}
	while (iLocal_111 != 3)
	{
		func_145(iLocal_110);
		func_185();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_145(int iParam0)
{
	char* sVar0;
	char* sVar16;
	char* sVar32;
	char* sVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	
	if (!unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return;
	}
	if (!func_193(unk_0x0C1D3C552325765B()) && !func_191(unk_0x0C1D3C552325765B()))
	{
		return;
	}
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return;
	}
	func_2(0, &sVar0);
	func_2(1, &sVar16);
	func_2(2, &sVar32);
	unk_0xA9DC3948106CC3E4(&sVar32);
	unk_0xA9DC3948106CC3E4(&sVar0);
	sVar48 = "idle_a";
	iVar49 = 1;
	if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == joaat("mp_f_freemode_01"))
	{
		iVar49 = 1;
	}
	switch (iLocal_111)
	{
		case 0:
			iLocal_103 = 0;
			unk_0x73528CE2C11028F7("walk", unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 64, 256, 64, 64);
			if (unk_0xAD21C77209FD2024(&sVar0))
			{
				if (unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), 2106541073) == 7 && unk_0xAD21C77209FD2024(&sVar0))
				{
					if (unk_0x74CC94B98FBFE813(iLocal_112))
					{
						unk_0x5FB710E6CD88134B(iLocal_112);
						iLocal_112 = -1;
					}
					iLocal_112 = unk_0xEB30FF1DBE2A8B1E(Local_116, unk_0x3A02D44277FBA4BE(iParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
					unk_0xBE7F8D6FC34B9646(unk_0xA0081090911D13E5(), iLocal_112, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					unk_0xB83A243EE68452E6(iLocal_112);
					unk_0x04269E768DDAF940(&sVar0);
					iLocal_111 = 1;
				}
			}
			break;
		
		case 1:
			unk_0x73528CE2C11028F7("enter", unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 64, 256, 64, 64);
			unk_0xA9DC3948106CC3E4(&sVar16);
			iVar50 = unk_0x7E968231FBCD5712(iLocal_112);
			if (!iLocal_103)
			{
				if (unk_0xA84C8086E7377CD5(iVar50) >= 0.93f)
				{
					unk_0xAB16AADE80707D47(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", 1);
					iLocal_103 = 1;
				}
			}
			if (unk_0xAD21C77209FD2024(&sVar16) && (!unk_0x74CC94B98FBFE813(iVar50) || unk_0xA84C8086E7377CD5(iVar50) >= 0.96f))
			{
				iVar51 = unk_0xB5BF1B58C833F7A9(0, iVar49);
				if ((((unk_0x28C1B9853548BD8E(&cLocal_119, "idle_a") && iVar51 == 0) || (unk_0x28C1B9853548BD8E(&cLocal_119, "idle_b") && iVar51 == 1)) || (unk_0x28C1B9853548BD8E(&cLocal_119, "idle_c") && iVar51 == 2)) || (unk_0x28C1B9853548BD8E(&cLocal_119, "idle_d") && iVar51 == 3))
				{
					iVar51++;
					if (iVar51 >= iVar49)
					{
						iVar51 = 0;
					}
				}
				if (unk_0x74CC94B98FBFE813(iLocal_112))
				{
					unk_0x5FB710E6CD88134B(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = unk_0xEB30FF1DBE2A8B1E(Local_116, unk_0x3A02D44277FBA4BE(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				switch (iVar51)
				{
					case 0:
						unk_0xBE7F8D6FC34B9646(unk_0xA0081090911D13E5(), iLocal_112, &sVar16, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xB83A243EE68452E6(iLocal_112);
						StringCopy(&cLocal_119, "idle_a", 16);
						iLocal_111 = 3;
						break;
					
					case 1:
						unk_0xBE7F8D6FC34B9646(unk_0xA0081090911D13E5(), iLocal_112, &sVar16, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xB83A243EE68452E6(iLocal_112);
						StringCopy(&cLocal_119, "idle_b", 16);
						iLocal_111 = 3;
						break;
					
					case 2:
						unk_0xBE7F8D6FC34B9646(unk_0xA0081090911D13E5(), iLocal_112, &sVar16, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xB83A243EE68452E6(iLocal_112);
						StringCopy(&cLocal_119, "idle_c", 16);
						iLocal_111 = 3;
						break;
					
					case 3:
						unk_0xBE7F8D6FC34B9646(unk_0xA0081090911D13E5(), iLocal_112, &sVar16, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						unk_0xB83A243EE68452E6(iLocal_112);
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
			if (unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), &sVar16, "idle_a", 2))
			{
				unk_0x73528CE2C11028F7("idle_a", unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 256, 64, 64, 64);
			}
			else if (unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), &sVar16, "idle_b", 2))
			{
				unk_0x73528CE2C11028F7("idle_b", unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 256, 64, 64, 64);
			}
			else if (unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), &sVar16, "idle_c", 2))
			{
				unk_0x73528CE2C11028F7("idle_c", unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 256, 64, 64, 64);
			}
			else if (unk_0x2FB5C9A04733E5EF(unk_0xA0081090911D13E5(), &sVar16, "idle_d", 2))
			{
				unk_0x73528CE2C11028F7("idle_d", unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 256, 64, 64, 64);
			}
			else
			{
				unk_0x73528CE2C11028F7("idle_XXX", unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 256, 64, 64, 64);
			}
			iVar50 = unk_0x7E968231FBCD5712(iLocal_112);
			if (!unk_0x74CC94B98FBFE813(iLocal_112) && !unk_0x74CC94B98FBFE813(iVar50))
			{
				if (unk_0x74CC94B98FBFE813(iLocal_112))
				{
					unk_0x5FB710E6CD88134B(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = unk_0xEB30FF1DBE2A8B1E(Local_116, unk_0x3A02D44277FBA4BE(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				iVar50 = unk_0x7E968231FBCD5712(iLocal_112);
				if (unk_0x74CC94B98FBFE813(iVar50))
				{
					unk_0xB1A2B8A065E00D0C(iVar50, 0f);
				}
				unk_0xBE7F8D6FC34B9646(unk_0xA0081090911D13E5(), iLocal_112, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0xB83A243EE68452E6(iLocal_112);
				iLocal_111 = 3;
				return;
			}
			if (unk_0xAD21C77209FD2024(&sVar16) && (!unk_0x74CC94B98FBFE813(iVar50) || unk_0xA84C8086E7377CD5(iVar50) >= 0.99f))
			{
				if (unk_0x74CC94B98FBFE813(iLocal_112))
				{
					unk_0x5FB710E6CD88134B(iLocal_112);
					iLocal_112 = -1;
				}
				iLocal_112 = unk_0xEB30FF1DBE2A8B1E(Local_116, unk_0x3A02D44277FBA4BE(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				unk_0xBE7F8D6FC34B9646(unk_0xA0081090911D13E5(), iLocal_112, &sVar16, sVar48, 4f, -2f, 5, 0, 1148846080, 0);
				unk_0xB83A243EE68452E6(iLocal_112);
				iLocal_111 = 3;
				return;
			}
			break;
	}
}

int func_146(int iParam0, int iParam1)
{
	if (func_147(iParam0))
	{
		if (unk_0x21178DF77817BF39(iParam0, iParam1) == 1 || unk_0x21178DF77817BF39(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_147(int iParam0)
{
	if (func_148(iParam0))
	{
		if (!unk_0xEB361B4BD195A4D3(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(float fParam0, float fParam1, float fParam2)
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

int func_150(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7466327978A6A24C((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	if (func_191(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 0) || unk_0x08BA6DD398CA197C(Global_1751948.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_152()
{
	if (func_193(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 0) || unk_0x08BA6DD398CA197C(Global_1751948.f_2, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_153()
{
	if (func_137(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_182(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	else if (func_142() < func_141())
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_155(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xC0691D80D21C989D(unk_0x4A0FB18E33FE5805()))
	{
		return 0;
	}
	if (func_181(0))
	{
		return 0;
	}
	if (unk_0x7C0379981B7E6E40())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/] == 1 && Global_36478[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36478[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36478[iVar0 /*32*/].f_5 = 1;
			Global_36478[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36478[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36478[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_155(int iParam0)
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
		if (Global_36478[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_156(bool bParam0)
{
	if (((((func_172(unk_0x0C1D3C552325765B()) || func_151()) && !unk_0xAADF264238014E81(unk_0x0C1D3C552325765B())) && !func_164()) && !Global_1751889) && func_149(unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5()), unk_0x5E6FDC4F3A8C8EDE(iLocal_110), 90f))
	{
		if (unk_0x1504F110F2576375())
		{
			func_163("WHSECUROBLCK");
		}
		else if (func_161())
		{
			if (func_172(unk_0x0C1D3C552325765B()))
			{
				func_163("BIKERWHBLCKC");
			}
			else
			{
				func_163("BIKERWHBLCKD");
			}
		}
		else if (func_50(unk_0x0C1D3C552325765B()))
		{
			if ((func_195(&uLocal_104) && func_190(&uLocal_104, 10000, 1)) || !iLocal_101)
			{
				if (func_157(unk_0x0C1D3C552325765B()) || Global_1751889 == 1)
				{
					iLocal_101 = 1;
					if (!Global_1751889)
					{
						func_163("WHSECUROBLCK");
					}
				}
				else
				{
					if (func_169())
					{
						unk_0x94724F7C938EBE34(1);
					}
					iLocal_101 = 0;
					func_189(&uLocal_104);
					func_168(&iLocal_99, 1, "BIKERWHINPUT", 0, 0, 0, 0);
				}
			}
			else if (iLocal_101)
			{
				if (!unk_0x598A9E990F05F82C())
				{
					func_163("WHSECUROBLCK");
				}
				if (!func_157(unk_0x0C1D3C552325765B()))
				{
					iLocal_101 = 0;
					unk_0x94724F7C938EBE34(1);
				}
			}
		}
		else if (!bParam0 && func_142() < func_141())
		{
			func_168(&iLocal_99, 1, "BIKERWHBLCKA", 0, 0, 0, 0);
		}
		else
		{
			func_163("BIKERWHBLCKB");
		}
	}
}

bool func_157(int iParam0)
{
	return func_158(func_159(iParam0));
}

int func_158(int iParam0)
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

int func_159(int iParam0)
{
	if (func_160(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_160(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_161()
{
	if (func_162())
	{
		return 1;
	}
	return Global_2442442.f_621;
}

bool func_162()
{
	return Global_1315189 == 10;
}

void func_163(char* sParam0)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 1, 1, -1);
}

bool func_164()
{
	return Global_1751948.f_12;
}

int func_165()
{
	if (unk_0xD3FACCDA4D66AEAD(iLocal_110))
	{
		if (func_191(unk_0x0C1D3C552325765B()) || func_166(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
	}
	return 0;
}

int func_166(int iParam0)
{
	if (func_173(Global_1588660[iParam0 /*532*/].f_256.f_11, -1))
	{
		return 1;
	}
	return 0;
}

void func_167(bool bParam0)
{
	if (((func_152() && !unk_0xAADF264238014E81(unk_0x0C1D3C552325765B())) && !func_164()) && !Global_1751889)
	{
		if (func_161())
		{
			func_163("WHPRIVSESLAP");
		}
		else if (!bParam0)
		{
			if (func_142() >= func_141())
			{
				func_168(&iLocal_99, 1, "WHSECUROMAXVIP", 0, 0, 0, 0);
			}
			else if (func_137(unk_0x0C1D3C552325765B()))
			{
				func_168(&iLocal_99, 1, "PIM_EXECH0x1", 0, 0, 0, 0);
			}
			else if (unk_0x1504F110F2576375())
			{
				func_163("WHSECUROBLCK");
			}
			else
			{
				func_168(&iLocal_99, 1, "SECINPUTTREGLAP", 0, 0, 0, 0);
			}
		}
		else if (func_50(unk_0x0C1D3C552325765B()))
		{
			func_163("WHBIKERBLCK");
		}
		else if ((func_195(&uLocal_104) && func_190(&uLocal_104, 10000, 1)) || !iLocal_101)
		{
			if (func_196(unk_0x0C1D3C552325765B()) || Global_1751889 == 1)
			{
				iLocal_101 = 1;
				if (!Global_1751889)
				{
					func_163("WHSECUROBLCK");
				}
			}
			else
			{
				if (func_169())
				{
					unk_0x94724F7C938EBE34(1);
				}
				iLocal_101 = 0;
				func_189(&uLocal_104);
				func_168(&iLocal_99, 1, "WHSECUROINPUT", 0, 0, 0, 0);
			}
		}
		else if (iLocal_101)
		{
			if (!unk_0x598A9E990F05F82C())
			{
				func_163("WHSECUROBLCK");
			}
			if (!func_196(unk_0x0C1D3C552325765B()))
			{
				unk_0x94724F7C938EBE34(1);
				iLocal_101 = 0;
			}
		}
	}
}

void func_168(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xA96867DD0A63C62C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xC740F8182E7E9681())
	{
		if (!*iParam0 == -1)
		{
			func_171(iParam0);
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
		if (!Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/] = 1;
			Global_36478[iVar0 /*32*/].f_1 = Global_36679;
			Global_36679++;
			Global_36478[iVar0 /*32*/].f_4 = 0;
			Global_36478[iVar0 /*32*/].f_29 = 0;
			Global_36478[iVar0 /*32*/].f_5 = 0;
			Global_36478[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36478[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36478[iVar0 /*32*/].f_6 = iParam3;
			Global_36478[iVar0 /*32*/].f_31 = unk_0xEAE20F1125B83888();
			Global_36478[iVar0 /*32*/].f_7 = 0;
			Global_36478[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x509383441597090D(sParam4))
			{
				Global_36478[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36478[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36478[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36478[iVar0 /*32*/].f_12 = 0;
				Global_36478[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36478[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_169()
{
	if (((((((((func_170("MP_OFF_LAP_1") || func_170("WHPRIVSESLAP")) || func_170("WHSECUROBLCK")) || func_170("SECINPUTTREGLAP")) || func_170("BIKERWHINPUT")) || func_170("BIKERWHBLCKA")) || func_170("BIKERWHBLCKB")) || func_170("WHBIKERBLCK")) || func_170("BIKERWHBLCKC")) || func_170("BIKERWHBLCKD"))
	{
		return 1;
	}
	return 0;
}

var func_170(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_171(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_155(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_172(int iParam0)
{
	if (func_173(Global_1588660[iParam0 /*532*/].f_256.f_11, -1) && !unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 1))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0, int iParam1)
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

int func_174(int iParam0)
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

int func_175()
{
	return func_182(unk_0x0C1D3C552325765B());
}

bool func_176()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

var func_177()
{
	return Global_68126;
}

var func_178()
{
	return Global_1739007;
}

int func_179()
{
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (unk_0x8FD32443A080784B(unk_0x02056DA113641E74(unk_0xA0081090911D13E5()), -1, 0) == unk_0xA0081090911D13E5())
		{
			return 1;
		}
	}
	return 0;
}

int func_180()
{
	if (unk_0xA96867DD0A63C62C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_52())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_183(int iParam0)
{
	if (func_173(Global_1588660[iParam0 /*532*/].f_256.f_11, -1))
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	if (unk_0xD3FACCDA4D66AEAD(iLocal_110))
	{
		if (unk_0x705BC1BB91F530B5(iLocal_110) == joaat("ex_prop_monitor_01_ex") || func_193(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
	}
	return 0;
}

void func_185()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_181(0))
		{
			func_186(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
	}
}

void func_186(int iParam0)
{
	if (Global_14604)
	{
		func_188(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_187())
	{
		Global_14443.f_1 = 3;
	}
}

int func_187()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_188(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_181(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

void func_189(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_190(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_194(uParam0, bParam2, 0);
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_192(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
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

int func_193(int iParam0)
{
	if (iParam0 != func_52())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_192(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

void func_194(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
		}
		uParam0->f_1 = 1;
	}
}

bool func_195(var uParam0)
{
	return uParam0->f_1;
}

bool func_196(int iParam0)
{
	return func_197(func_159(iParam0));
}

int func_197(int iParam0)
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

bool func_198(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_199()
{
	if (iLocal_99 != -1)
	{
		func_171(&iLocal_99);
	}
	if (((((((((func_170("MP_OFF_LAP_1") || func_170("WHPRIVSESLAP")) || func_170("WHSECUROBLCK")) || func_170("SECINPUTTREGLAP")) || func_170("BIKERWHINPUT")) || func_170("BIKERWHBLCKA")) || func_170("BIKERWHBLCKB")) || func_170("WHBIKERBLCK")) || func_170("BIKERWHBLCKC")) || func_170("BIKERWHBLCKD"))
	{
		unk_0x94724F7C938EBE34(1);
	}
	Global_1751889 = 0;
	Global_1751888 = 0;
}

