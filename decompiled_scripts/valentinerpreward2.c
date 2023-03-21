#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	char cLocal_11[16] = "";
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<2> Local_85 = { 0, -1 } ;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	struct<6> Local_93 = { 0, 0, 0, 0, -1, 0 } ;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	var uLocal_175[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_201 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.42.33";
	StringCopy(&cLocal_11, "", 16);
	iLocal_16 = -1;
	iLocal_17 = -1;
	iLocal_54 = -1;
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = -1;
	iLocal_74 = -1;
	Local_77 = { 0f, 0f, 0f };
	iLocal_105 = -1;
	iLocal_128 = 89;
	iLocal_134 = -1;
	iLocal_135 = -1;
	iLocal_154 = -1;
	iLocal_162 = -1;
	unk_0xDA6A6B59F261B209(0);
	unk_0xEE998050210A7287();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315785 = unk_0x6E987D62C8535B6E(sLocal_0);
	iVar0 = unk_0x5AFB8ED811F05E4D() + 10000;
	while (unk_0x5AFB8ED811F05E4D() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_508())
		{
			func_507();
			if (bLocal_1)
			{
				unk_0x61EA61920DAA51B8(0f, 0.23f);
				unk_0xE14EBFD640A207D8(255, 255, 255, 255);
				func_506(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x44243F2E2F58B8E3() && Global_2455103.f_3)
		{
			func_504();
			func_503();
			func_499();
			func_498();
			func_497();
			func_494();
			func_493();
			func_491();
			func_490();
			func_489();
			func_487();
			func_486();
			func_480();
			func_478();
			func_475();
			func_473();
			func_470();
			func_469();
			func_465();
			func_462();
			func_461();
			func_450();
			func_422();
			func_411();
			func_410();
			func_409();
			func_400();
			func_397();
			func_395();
			func_376();
			func_375();
			func_365();
			func_363();
			func_335();
			func_334();
			func_330();
			func_325();
			func_311();
			func_308();
			func_307();
			func_303();
			func_294();
			func_293();
			func_283();
			func_278();
			func_260();
			func_254();
			func_238();
			func_236();
			func_235();
			func_216();
			func_209();
			func_205();
			func_204();
			func_202();
			func_200();
			func_192();
			func_191();
			func_187();
			func_182();
			func_171();
			func_169();
			func_168();
			func_161();
			func_160();
			func_158();
			func_154();
			func_153();
			func_149();
			func_148();
			func_143();
			func_137();
			func_135();
			func_132();
			func_128();
			func_127();
			func_125();
			func_124();
			func_123();
			func_118();
			func_117();
			func_115();
			func_111();
			func_109();
			func_106();
			func_101();
			func_99();
			func_97();
			func_79();
			func_77();
			func_73();
			func_65();
			func_50();
			func_47();
			func_39();
			func_35();
			func_24();
			func_18();
		}
		else
		{
			if (Global_2455103.f_3)
			{
				func_17();
			}
			iLocal_88 = 0;
			iLocal_89 = 0;
			iLocal_136 = 0;
			iLocal_137 = 0;
		}
		func_16();
		func_14();
		func_13();
		func_12();
		func_8();
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x810C5D6462DD69E6();
}

void func_1()
{
	var uVar0;
	struct<3> Var1;
	
	if (!func_7(&uLocal_168))
	{
		func_6(&uLocal_168, 0, 0);
	}
	else if (func_5(&uLocal_168, 500, 0))
	{
		func_4(&uLocal_168);
		if (func_3(&Var1, &uVar0))
		{
			if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (unk_0x1800B99666D25740(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
					{
						unk_0x00D6A93F33EF5EE4(unk_0x18F7BE9ACB7D08F4(), Var1);
					}
					else
					{
						unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Var1, 0, 0, 0, 1);
					}
				}
				else
				{
					unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Var1, 0, 0, 0, 1);
				}
				unk_0x874004759C4BE8DC(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
	}
}

int func_2(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x4AF13BCD120BCDBC(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x557001354138B7FB(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2436169.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_3(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 430.6286f, -28.09109f, 87.20728f, 393.7143f, -7.272818f, 105.5061f, 59.75f, 0, 1, 0))
				{
					*uParam0 = { 413.566f, -57.7203f, 72.2851f };
					*uParam1 = iVar0;
					return 1;
				}
				break;
			
			case 1:
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -693.048f, -2241.604f, 12.06383f, -693.4418f, -2268.685f, 18.28622f, 30.75f, 0, 1, 0))
				{
					*uParam0 = { -699.982f, -2228.944f, 4.9366f };
					*uParam1 = iVar0;
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 117.5022f, -621.1158f, 255.2845f, 130.4319f, -628.9565f, 261.6011f, 9f, 0, 1, 0))
				{
					*uParam0 = { 109.4907f, -626.8596f, 257.1491f };
					*uParam1 = iVar0;
					return 1;
				}
				break;
			
			case 3:
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -651.9481f, 312.1938f, 91.04256f, -701.5641f, 316.5341f, 97.58429f, 9.5f, 0, 1, 0))
				{
					*uParam0 = { -679.8203f, 309.2502f, 82.0842f };
					*uParam1 = iVar0;
					return 1;
				}
				break;
			
			case 4:
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1295.965f, -1387.152f, 3.53841f, -1290.7f, -1385.263f, 10.47685f, 4.75f, 0, 1, 0))
				{
					*uParam0 = { -1301.471f, -1396.088f, 3.4049f };
					*uParam1 = iVar0;
					return 1;
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_6(uParam0, bParam2, 0);
	if (unk_0x44243F2E2F58B8E3() && !bParam2)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
		}
		uParam0->f_1 = 1;
	}
}

bool func_7(var uParam0)
{
	return uParam0->f_1;
}

void func_8()
{
	if (!unk_0xC339C5C5B5E8BC5B())
	{
		return;
	}
	switch (iLocal_163)
	{
		case 0:
			if (func_11() == 0 && !Global_1312854)
			{
				if ((!unk_0x4EBF0CEB194BA564() && !unk_0x28811BD7BB384CB1()) && !unk_0xB49A6155968CE997())
				{
					if (func_10(&iLocal_165))
					{
						iLocal_163 = 2;
					}
				}
				else if (!unk_0x01EBCF2429B0B085())
				{
					if (func_10(&iLocal_166))
					{
						iLocal_163 = 2;
					}
				}
				else
				{
					if (iLocal_165 != 0)
					{
						iLocal_165 = 0;
					}
					if (iLocal_166 != 0)
					{
						iLocal_166 = 0;
					}
				}
			}
			else
			{
				if (iLocal_165 != 0)
				{
					iLocal_165 = 0;
				}
				if (iLocal_166 != 0)
				{
					iLocal_166 = 0;
				}
			}
			break;
		
		case 2:
			if (unk_0x0F88B7BAE118271A(&iLocal_162, 1474183246, 1551803880, -50712147, 0, 1))
			{
				if (unk_0xE91076F2B8E481C8(iLocal_162))
				{
					iLocal_163 = 1;
				}
			}
			break;
		
		case 1:
			func_9();
			if (iLocal_164 && unk_0xE5D55D650EDFDBAD(iLocal_162))
			{
				iLocal_162 = -1;
				iLocal_163 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_162 == -1 || iLocal_164)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		if (unk_0xD8DDA9403FAEDB57(1, iVar0) == 223)
		{
			if (unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar1, 7))
			{
				if (iVar1 == iLocal_162 && iVar1 != -1)
				{
					iLocal_164 = 1;
				}
			}
		}
		iVar0++;
	}
}

bool func_10(var uParam0)
{
	*uParam0++;
	return *uParam0 >= 60;
}

int func_11()
{
	return Global_25233;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xE7FAF8E78F7D3A73(joaat("fm_mission_controller")) > 0)
	{
		if (Global_1646129.f_2 == 6 || Global_1646129.f_2 == 5)
		{
			if (Global_1646129.f_73853 > 0)
			{
				iVar0 = 0;
				while (iVar0 <= (Global_1646129.f_73853 - 1))
				{
					if (Global_1646129.f_73858[iVar0 /*399*/].f_357 != 0)
					{
						Global_1646129.f_73858[iVar0 /*399*/].f_357 = 0;
					}
					iVar0++;
				}
			}
		}
	}
}

void func_13()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("fm_race_creator")) != 0)
	{
		if (Global_1646129.f_30 >= 31 || (Global_1646129.f_66586 >= 30 && !iLocal_144))
		{
			Global_1646129.f_30 = 27;
			iLocal_144 = 1;
		}
	}
	else if (iLocal_144)
	{
		iLocal_144 = 0;
	}
}

void func_14()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("fm_capture_creator")) != 0)
	{
		if (func_15("FMMCCMENU_CYC"))
		{
			if (unk_0x02EA7C5633421A0F(2, 190))
			{
				iLocal_143 = 1;
			}
			if (!iLocal_143)
			{
				unk_0x9C7EE7DE7041A3F4(2, 189, 1);
			}
		}
		if (iLocal_143 && unk_0x02EA7C5633421A0F(2, 202))
		{
			iLocal_143 = 0;
		}
	}
	else if (iLocal_143)
	{
		iLocal_143 = 0;
	}
}

bool func_15(char* sParam0)
{
	return unk_0x9D39145AD645E383(&(Global_17301.f_73[Global_17301.f_5606 * 2 /*6*/]), sParam0);
}

void func_16()
{
	int iVar0;
	
	if (unk_0xE7FAF8E78F7D3A73(joaat("fm_race_creator")) != 0)
	{
		if (Global_1646129.f_2 == 20)
		{
			if (Global_1646129.f_30 > 14)
			{
				if (unk_0x02EA7C5633421A0F(2, 190) || unk_0xFC0C00F9DE2AEC93(2, 190))
				{
					Global_1646129.f_30 = 0;
				}
				else
				{
					Global_1646129.f_30 = 14;
				}
			}
			if (Global_1646129.f_30 == 12 && iLocal_5 == 14)
			{
				Global_1646129.f_30 = 14;
			}
			iLocal_5 = Global_1646129.f_30;
			iVar0 = 0;
			while (iVar0 <= 20)
			{
				if (unk_0x9D39145AD645E383(&(Global_17301.f_73[iVar0 /*6*/]), "FMMC_T0_M1_O28"))
				{
					StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "FMMC_T0_M1_O14", 24);
				}
				else if (unk_0x9D39145AD645E383(&(Global_17301.f_73[iVar0 /*6*/]), "FMMC_T0_M1_O15"))
				{
					StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "FMMC_T0_M1_O0", 24);
				}
				iVar0++;
			}
		}
	}
	else
	{
		iLocal_5 = 0;
	}
}

void func_17()
{
	if (Global_1371396.f_64)
	{
		Global_1371396.f_64 = 0;
	}
}

void func_18()
{
	if (func_22(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_20(unk_0x8CFC7D6E1DA5D304()) || func_19(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x94881549299504FD();
			unk_0x49A7D0E6FD0C7DB1();
			if (!unk_0xF45F7A07410EF1F5())
			{
				unk_0xFCBDBEB257C6D3FB(0, 200);
				unk_0xFCBDBEB257C6D3FB(2, 200);
			}
			unk_0x9C7EE7DE7041A3F4(0, 200, 1);
			unk_0x9C7EE7DE7041A3F4(2, 200, 1);
		}
	}
}

bool func_19(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 11);
}

int func_20(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_255, 16);
	}
	return 0;
}

int func_21()
{
	return -1;
}

int func_22(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_23(Global_2422724[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_23(int iParam0)
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
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

void func_24()
{
	if (((unk_0x44243F2E2F58B8E3() && func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1)) && !Global_1574135) && Global_25233 == 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(joaat("cheat_controller")) > 0)
		{
			unk_0x983D86B7F4F283B8("cheat_controller");
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (func_25(16))
				{
					unk_0x56A4B1F9D9B3100D(unk_0x8CFC7D6E1DA5D304(), 1.15f);
				}
				else if (func_25(12))
				{
					unk_0x56A4B1F9D9B3100D(unk_0x8CFC7D6E1DA5D304(), 1.1f);
				}
				else if (func_25(8))
				{
					unk_0x56A4B1F9D9B3100D(unk_0x8CFC7D6E1DA5D304(), 1.075f);
				}
				else if (func_25(4))
				{
					unk_0x56A4B1F9D9B3100D(unk_0x8CFC7D6E1DA5D304(), 1.05f);
				}
				else
				{
					unk_0x56A4B1F9D9B3100D(unk_0x8CFC7D6E1DA5D304(), 1f);
				}
				if (func_25(15))
				{
					unk_0x71DC200691B821AF(unk_0x8CFC7D6E1DA5D304(), 1.1f);
				}
				else if (func_25(11))
				{
					unk_0x71DC200691B821AF(unk_0x8CFC7D6E1DA5D304(), 1.075f);
				}
				else if (func_25(7))
				{
					unk_0x71DC200691B821AF(unk_0x8CFC7D6E1DA5D304(), 1.05f);
				}
				else if (func_25(3))
				{
					unk_0x71DC200691B821AF(unk_0x8CFC7D6E1DA5D304(), 1.025f);
				}
				else
				{
					unk_0x71DC200691B821AF(unk_0x8CFC7D6E1DA5D304(), 1f);
				}
			}
		}
	}
}

bool func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_34())
	{
		return 0;
	}
	iVar0 = func_27(iParam0);
	iVar1 = iParam0;
	return unk_0xB03A1684359C50A1(iVar0, func_26(iVar1));
}

int func_26(int iParam0)
{
	return (iParam0 % 32);
}

int func_27(var uParam0)
{
	int iVar0;
	
	iVar0 = func_28(func_31(uParam0), -1, 0);
	return iVar0;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2522855[iParam0 /*3*/][func_29(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_30();
		if (iVar1 > -1)
		{
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

int func_30()
{
	return Global_1312736;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_33(iVar0);
	if ((func_11() == 0 || func_32() == 0) || (func_11() == 999 && func_32() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 690;
				break;
			
			case 1:
				return 691;
				break;
			
			case 2:
				return 692;
				break;
			}
	}
	return 7870;
}

int func_32()
{
	return Global_25234;
}

int func_33(int iParam0)
{
	return (iParam0 / 32);
}

bool func_34()
{
	return Global_1312833;
}

void func_35()
{
	if (func_38(unk_0x8CFC7D6E1DA5D304()) == 81)
	{
		if (!iLocal_201)
		{
			iLocal_201 = 1;
		}
	}
	else if (((iLocal_201 && unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) && unk_0xC8AB6A5E6C1E6613()) && !func_37(unk_0x8CFC7D6E1DA5D304()))
	{
		if (!func_36(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!unk_0xE168D673D141E51C(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x5F1E15DC35404E1B(unk_0x18F7BE9ACB7D08F4(), 1);
				iLocal_201 = 0;
			}
			else
			{
				iLocal_201 = 0;
			}
		}
		else
		{
			iLocal_201 = 0;
		}
	}
}

int func_36(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x8CFC7D6E1DA5D304()) && func_2(iParam0, 1, 0))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 != func_21() && func_2(iParam0, 1, 1))
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 3);
	}
	return 0;
}

int func_38(int iParam0)
{
	if (iParam0 != func_21() && func_2(iParam0, 1, 1))
	{
		return Global_2422724[iParam0 /*420*/].f_324.f_13;
	}
	return -1;
}

void func_39()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	
	if (func_36(unk_0x8CFC7D6E1DA5D304()) && func_23(func_46(unk_0x8CFC7D6E1DA5D304())) == 9)
	{
		if (Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_4 != unk_0x8CFC7D6E1DA5D304() && Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_4 != func_21())
		{
			if (!func_2(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_4, 0, 1) && func_44())
			{
				if (func_43())
				{
					if (!func_42(Global_1646129.f_116948))
					{
						iLocal_174 = 1;
					}
				}
			}
		}
	}
	if (iLocal_174)
	{
		iVar0 = unk_0x5CCABC051CDF332D(&uLocal_175);
		iVar3 = 0;
		while (iVar3 < iVar0)
		{
			if (func_41(uLocal_175[iVar3]))
			{
				uVar2 = unk_0x7677C12E3146DA0A(uLocal_175[iVar3], &iVar1);
				bVar4 = Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_2 == iVar1;
				if (((func_40(uLocal_175[iVar3], 1) && bVar4) && !unk_0xFAFFA408239A026B(uVar2)) && unk_0x9D39145AD645E383(uVar2, "am_mp_defunct_base"))
				{
					if (unk_0x1800B99666D25740(uLocal_175[iVar3]))
					{
						unk_0x337F2213526139E0(uLocal_175[iVar3], 0, 1);
						unk_0xBECECD970F645217(&(uLocal_175[iVar3]));
					}
				}
			}
			iVar3++;
		}
		iLocal_174 = 0;
	}
}

int func_40(int iParam0, bool bParam1)
{
	if (Global_70852)
	{
		if (unk_0x31F12808DC47A9E5(iParam0) && (!bParam1 || unk_0xC4B84EB67F78C1F0(iParam0, 0)))
		{
			if (unk_0x788C6B35BB3FCF53(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_41(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4995[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_43()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_196 != 0;
}

int func_44()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = unk_0x3479F6F64A48251C(iVar0);
		if ((((((iVar1 != unk_0x8CFC7D6E1DA5D304() && func_2(iVar1, 0, 1)) && func_36(iVar1)) && func_46(iVar1) == func_46(unk_0x8CFC7D6E1DA5D304())) && Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_4 == Global_2422724[iVar0 /*420*/].f_324.f_4) && Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_2 == Global_2422724[iVar0 /*420*/].f_324.f_2) && !func_45(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_45(int iParam0)
{
	return Global_1595681[iParam0 /*678*/].f_196 != 0;
}

int func_46(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1;
		}
		else if (((Global_1312854 || Global_2405047.f_2639) && iParam0 == unk_0x8CFC7D6E1DA5D304()) && func_2(iParam0, 1, 0))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1;
		}
	}
	return -1;
}

void func_47()
{
	if (func_49(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_37(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!iLocal_173)
			{
				iLocal_173 = 1;
			}
		}
		else if ((iLocal_173 && unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) && unk_0xC8AB6A5E6C1E6613())
		{
			func_48(0);
			iLocal_173 = 1;
		}
	}
	else
	{
		iLocal_173 = 0;
	}
}

void func_48(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255, 14))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255), 14);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255, 14))
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255), 14);
	}
}

int func_49(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_255, 14);
	}
	return 0;
}

void func_50()
{
	if (!func_63())
	{
		if (!iLocal_172)
		{
			func_51(0, 0, 1, 0, 1, 0, 0, 0);
			iLocal_172 = 1;
		}
	}
	else if (iLocal_172)
	{
		iLocal_172 = 0;
	}
}

void func_51(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	func_62(1);
	if (bParam0)
	{
		func_61(2);
		func_60(0);
		func_59(0);
		func_58(0);
		if (!bParam7)
		{
			func_57(1);
			func_56(1);
		}
	}
	else
	{
		func_61(1);
	}
	if (bParam1)
	{
		func_61(11);
	}
	if (bParam7)
	{
		func_61(43);
	}
	if (bParam2)
	{
		func_60(0);
		func_59(0);
		func_58(0);
		if (!bParam7)
		{
			func_57(1);
			func_56(1);
		}
		func_61(32);
		func_55(1);
		if (unk_0x2555B365FE39F7A4())
		{
			Global_2512581.f_5853 = unk_0xE92FCF3C05C2EF1D();
		}
		if (bParam3)
		{
			if (!func_54(unk_0x8CFC7D6E1DA5D304()))
			{
				func_61(33);
			}
		}
		else
		{
			func_53(33);
		}
	}
	else if (bParam5)
	{
		func_61(37);
	}
	if (bParam4)
	{
		func_61(36);
		func_60(0);
		func_59(0);
		func_58(0);
		if (!bParam7)
		{
			func_57(1);
			func_56(1);
		}
	}
	if (func_52(36))
	{
		if (func_52(2))
		{
			func_53(36);
		}
	}
	if (bParam6)
	{
		func_61(38);
	}
}

bool func_52(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0xB03A1684359C50A1(Global_2436169.f_502.f_5, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2436169.f_502.f_6, (iParam0 - 32));
}

void func_53(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xB03A1684359C50A1(Global_2436169.f_502.f_5, iParam0))
		{
			unk_0x62148293B793073B(&(Global_2436169.f_502.f_5), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2436169.f_502.f_6, (iParam0 - 32)))
	{
		unk_0x62148293B793073B(&(Global_2436169.f_502.f_6), (iParam0 - 32));
	}
}

int func_54(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324.f_10, 6);
	}
	return 0;
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1808664.f_2, 30))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2), 30);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1808664.f_2, 30))
	{
		unk_0x62148293B793073B(&(Global_1808664.f_2), 30);
	}
}

void func_56(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10, 25))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10), 25);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10, 25))
	{
		unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10), 25);
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10, 15))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10), 15);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10, 15))
	{
		unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10), 15);
	}
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10, 27))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10), 27);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10, 27))
	{
		unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10), 27);
	}
}

void func_59(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255, 12))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255), 12);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255, 12))
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255), 12);
	}
}

void func_60(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10, 26))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10), 26);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10, 26))
	{
		unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_10), 26);
	}
}

void func_61(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0xB03A1684359C50A1(Global_2436169.f_502.f_5, iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2436169.f_502.f_5), iParam0);
		}
	}
	else if (!unk_0xB03A1684359C50A1(Global_2436169.f_502.f_6, (iParam0 - 32)))
	{
		unk_0xD2A9C3F486236CC5(&(Global_2436169.f_502.f_6), (iParam0 - 32));
	}
}

void func_62(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255, 28))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255), 28);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255, 28))
	{
		unk_0x62148293B793073B(&(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_255), 28);
	}
}

int func_63()
{
	if (func_64() == 0)
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	return Global_1312466.f_18;
}

void func_65()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return;
	}
	if (func_41(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_7(&uLocal_170))
		{
			if (func_68() || func_67(unk_0x8CFC7D6E1DA5D304()))
			{
				func_66(&uLocal_170, 0, 0);
				unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 3);
				unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 4);
			}
			else if (func_5(&uLocal_170, 1000, 0))
			{
				func_4(&uLocal_170);
				unk_0x62148293B793073B(&(Global_1808664.f_2903), 3);
				unk_0x62148293B793073B(&(Global_1808664.f_2903), 4);
			}
		}
		else if ((func_68() && !unk_0xB03A1684359C50A1(Global_1808664.f_2903, 3)) && !unk_0xB03A1684359C50A1(Global_1808664.f_2903, 4))
		{
			func_6(&uLocal_170, 0, 0);
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 3);
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 4);
		}
	}
}

void func_66(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE92FCF3C05C2EF1D();
		}
		else
		{
			*uParam0 = unk_0x5E1037C28AA2B562();
		}
	}
	else
	{
		*uParam0 = unk_0x5AFB8ED811F05E4D();
	}
	uParam0->f_1 = 1;
}

int func_67(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_21() && (func_2(iParam0, 1, 1) || Global_2405047.f_2639))
	{
		bVar0 = unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 1);
		return bVar0;
	}
	return 0;
}

int func_68()
{
	if (((((func_41(unk_0x18F7BE9ACB7D08F4()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) && func_41(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0))) && func_40(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 1)) && func_71(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) == unk_0x8CFC7D6E1DA5D304()) && func_70(unk_0x18F7BE9ACB7D08F4(), 0) == -1)
	{
		if (func_69(0))
		{
			return 1;
		}
	}
	if (Global_1808664.f_2069)
	{
		if (Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_11 != 81 && Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_11 != 88)
		{
			return 1;
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x657B649BA2AD3582(iParam0, iParam1))
		{
			uVar0 = unk_0x5AD687C3474F04B4(iParam0, iParam1);
			if (unk_0x31F12808DC47A9E5(uVar0))
			{
				iVar1 = unk_0x80F48E43F37DD7DD(unk_0x4F69FBD64CDF125B(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x74B8CA477787A438(iVar0, iVar3, 0))
					{
						if (unk_0x4983F8C51A0C0AF3(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (!func_40(iParam0, 1))
	{
		return func_21();
	}
	iVar0 = unk_0xFE0F5B815FB9D3D1(iParam0, "Player_Vehicle");
	return func_72(iVar0, 0, 1, 0);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0x3479F6F64A48251C(iVar1);
			if (func_2(iVar0, 0, 1) || (iParam1 && unk_0xE47C45886992C59C(iVar0)))
			{
				if (iParam0 == unk_0x7E3A1BB7F8EE1FD1(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_2(iParam3, 0, 1) || (iParam1 && unk_0xE47C45886992C59C(iParam3)))
	{
		if (iParam0 == unk_0x7E3A1BB7F8EE1FD1(iParam3))
		{
			return iParam3;
		}
	}
	return func_21();
}

void func_73()
{
	if (func_76())
	{
		if (((!func_75(unk_0x8CFC7D6E1DA5D304()) && !func_37(unk_0x8CFC7D6E1DA5D304())) && !func_36(unk_0x8CFC7D6E1DA5D304())) && unk_0xC8AB6A5E6C1E6613())
		{
			func_74(0);
		}
	}
}

void func_74(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1808664.f_2915, 10))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2915), 10);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1808664.f_2915, 10))
	{
		unk_0x62148293B793073B(&(Global_1808664.f_2915), 10);
	}
}

int func_75(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 5);
	}
	return 0;
}

bool func_76()
{
	return unk_0xB03A1684359C50A1(Global_1808664.f_2915, 10);
}

void func_77()
{
	if (func_11() == 0 && func_2(unk_0x8CFC7D6E1DA5D304(), 0, 1))
	{
		if (func_36(unk_0x8CFC7D6E1DA5D304()) && func_78(func_46(unk_0x8CFC7D6E1DA5D304()), 9))
		{
			if (Global_1808658 == 26)
			{
				if (unk_0xF45F7A07410EF1F5())
				{
					iLocal_167 = 1;
				}
			}
			if (iLocal_167)
			{
				if (((!unk_0xF45F7A07410EF1F5() && !unk_0xD89462DDD07112E7()) && func_36(unk_0x8CFC7D6E1DA5D304())) && !func_37(unk_0x8CFC7D6E1DA5D304()))
				{
					unk_0xFF91FEC6E57575E4(0);
					iLocal_167 = 0;
				}
				else if (!func_36(unk_0x8CFC7D6E1DA5D304()))
				{
					iLocal_167 = 0;
				}
			}
		}
	}
}

bool func_78(int iParam0, int iParam1)
{
	return func_23(iParam0) == iParam1;
}

void func_79()
{
	int iVar0;
	var uVar1;
	
	if (((((((((((((!unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_15, 3) && unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) && !unk_0x7DF51A716BE7A07F()) && unk_0xC8AB6A5E6C1E6613()) && !Global_1785477) && !Global_2436169.f_502.f_10) && !Global_2436169.f_502.f_11) && !func_95(unk_0x8CFC7D6E1DA5D304())) && !func_92(unk_0x8CFC7D6E1DA5D304())) && !func_89(unk_0x8CFC7D6E1DA5D304(), 1)) && !func_86(unk_0x8CFC7D6E1DA5D304())) && !func_85(unk_0x8CFC7D6E1DA5D304())) && !func_84(unk_0x8CFC7D6E1DA5D304())) && !func_22(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (func_83(iVar0, 1))
			{
				if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
				{
					if (func_82() != iVar0)
					{
						if (unk_0x1800B99666D25740(iVar0))
						{
							if (unk_0x9D39145AD645E383(unk_0x7677C12E3146DA0A(iVar0, &uVar1), "am_mp_defunct_base"))
							{
								if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 0)
								{
									func_80(iVar0);
									unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 576);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_80(int iParam0)
{
	unk_0xAE2E2838C25011ED(iParam0, 1);
	unk_0x6BA2A8789A43DAD8(iParam0);
	if (!func_76())
	{
		unk_0x73D7E57BF0ED7FEB(iParam0, false);
	}
	func_81(iParam0);
}

void func_81(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E808B211571A22("Player_Vehicle", 3))
	{
		if (!unk_0x788C6B35BB3FCF53(iParam0, "Player_Vehicle"))
		{
			unk_0x3259E4661D22EB25(iParam0, "Player_Vehicle", -1);
		}
		else
		{
			iVar0 = unk_0xFE0F5B815FB9D3D1(iParam0, "Player_Vehicle");
			unk_0x3259E4661D22EB25(iParam0, "Player_Vehicle", -1);
		}
	}
	if (unk_0x23E808B211571A22("Previous_Owner", 3))
	{
		if (!iVar0 == -1)
		{
			if (!unk_0x788C6B35BB3FCF53(iParam0, "Previous_Owner"))
			{
				unk_0x3259E4661D22EB25(iParam0, "Previous_Owner", iVar0);
			}
			else
			{
				unk_0x3259E4661D22EB25(iParam0, "Previous_Owner", iVar0);
			}
		}
	}
}

int func_82()
{
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == joaat("freemode"))
	{
		if (unk_0x49E68AAD93AADF10(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_49) && unk_0x5AD42783360AB57E(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_49))
		{
			return unk_0xFA62333764BA8F5D(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_49);
		}
	}
	return Global_2512581.f_284;
}

int func_83(int iParam0, bool bParam1)
{
	if (Global_70852)
	{
		if (unk_0x31F12808DC47A9E5(iParam0) && (!bParam1 || unk_0xC4B84EB67F78C1F0(iParam0, 0)))
		{
			if (unk_0x788C6B35BB3FCF53(iParam0, "Player_Vehicle"))
			{
				if (unk_0xFE0F5B815FB9D3D1(iParam0, "Player_Vehicle") == unk_0x7E3A1BB7F8EE1FD1(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_23(Global_2422724[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_23(Global_2422724[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (func_88(iParam0) && func_87(iParam0) == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_87(int iParam0)
{
	if (iParam0 == func_21())
	{
		return iParam0;
	}
	return Global_2422724[iParam0 /*420*/].f_324.f_4;
}

int func_88(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422724[iParam0 /*420*/].f_324.f_4 != func_21())
			{
				return func_23(Global_2422724[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

bool func_89(int iParam0, bool bParam1)
{
	if (Global_1595525 != func_21())
	{
		if (!func_91(Global_1595525))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x8CFC7D6E1DA5D304() != Global_1595525)
			{
				if (unk_0xB03A1684359C50A1(Global_2422724[Global_1595525 /*420*/].f_210, 24) || func_90(Global_1595525))
				{
					return 1;
				}
			}
		}
	}
	if (iParam0 == func_21())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 24);
}

int func_90(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 9);
	}
	return 0;
}

int func_91(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 2);
	}
	return 0;
}

int func_92(int iParam0)
{
	if (func_93(Global_1595681[iParam0 /*678*/].f_266.f_17, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_94(unk_0x8CFC7D6E1DA5D304(), 0);
	}
	if (bParam1)
	{
		if (func_94(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_94(int iParam0, bool bParam1)
{
	if (Global_1595525 != func_21())
	{
		if (!func_91(Global_1595525))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x8CFC7D6E1DA5D304() != Global_1595525)
			{
				if (unk_0xB03A1684359C50A1(Global_2422724[Global_1595525 /*420*/].f_210, 24) || func_90(Global_1595525))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 24);
}

int func_95(int iParam0)
{
	if (func_96(Global_1595681[iParam0 /*678*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
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

void func_97()
{
	if (func_98())
	{
		if (Global_1808664.f_32)
		{
			unk_0x9C7EE7DE7041A3F4(0, 72, 1);
			unk_0x9C7EE7DE7041A3F4(0, 71, 1);
			unk_0x9C7EE7DE7041A3F4(0, 23, 1);
		}
	}
}

bool func_98()
{
	return Global_1808664.f_28;
}

void func_99()
{
	if (func_100(unk_0x8CFC7D6E1DA5D304()) && func_23(Global_1808664.f_30) == 9)
	{
		if (Global_1808664.f_2903.f_2 == 15)
		{
			if (unk_0x7DF51A716BE7A07F())
			{
				if (unk_0xF45F7A07410EF1F5())
				{
					iLocal_161 = 1;
				}
			}
			else if (iLocal_161)
			{
				unk_0x4A918952774CFC67();
				iLocal_161 = 0;
			}
		}
		else
		{
			iLocal_161 = 0;
		}
	}
	else if (iLocal_161)
	{
		unk_0x4A918952774CFC67();
		iLocal_161 = 0;
	}
}

int func_100(int iParam0)
{
	if (iParam0 != func_21() && func_2(iParam0, 1, 1))
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 4);
	}
	return 0;
}

void func_101()
{
	if (((((((((unk_0x31F12808DC47A9E5(Global_2512581.f_284) && func_104()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) && unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0) == Global_2512581.f_284) && !unk_0xBF0517F7142EEB5B(Global_2512581.f_284)) && !unk_0x7DF51A716BE7A07F()) && !func_103(unk_0x8CFC7D6E1DA5D304())) && !func_37(unk_0x8CFC7D6E1DA5D304())) && !func_102(unk_0x8CFC7D6E1DA5D304(), 1, 1)) && unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 576);
	}
}

int func_102(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_21())
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_103(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_104()
{
	if (func_105(2) || func_105(1))
	{
		return 1;
	}
	return 0;
}

bool func_105(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0xB03A1684359C50A1(Global_2436169.f_502.f_1, iParam0);
	}
	return unk_0xB03A1684359C50A1(Global_2436169.f_502.f_2, (iParam0 - 32));
}

void func_106()
{
	if (((func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1) && func_108(unk_0x8CFC7D6E1DA5D304())) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) && !func_107(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
	{
		iLocal_160 = 1;
		Global_1816885 = 1;
	}
	else if (iLocal_160)
	{
		iLocal_160 = 0;
		Global_1816885 = 0;
	}
}

int func_107(int iParam0)
{
	switch (unk_0x4F69FBD64CDF125B(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_23(Global_2422724[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

void func_109()
{
	if (func_110())
	{
		if (!unk_0xB03A1684359C50A1(Global_1808664.f_2903, 9))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 9);
			iLocal_159 = 1;
		}
	}
	else if (iLocal_159)
	{
		unk_0x62148293B793073B(&(Global_1808664.f_2903), 9);
		iLocal_159 = 0;
	}
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		iVar1 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (unk_0xC4B84EB67F78C1F0(iVar1, 0))
		{
			iVar0 = -1;
			while (iVar0 <= 8)
			{
				if (!unk_0x74B8CA477787A438(iVar1, iVar0, 1))
				{
					iVar2 = unk_0x4983F8C51A0C0AF3(iVar1, iVar0, 1);
					if (unk_0x31F12808DC47A9E5(iVar2))
					{
						if (!unk_0xEE1E09882FA264CA(iVar2))
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_111()
{
	if (func_114(unk_0x8CFC7D6E1DA5D304()))
	{
		if (Global_1595530 != func_21() && Global_1595530 != unk_0x8CFC7D6E1DA5D304())
		{
			if (unk_0x09BCD61076F4FCCE() && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 0);
				unk_0x8359CF51370FC969(500);
			}
		}
	}
	if (func_22(unk_0x8CFC7D6E1DA5D304()))
	{
		if (Global_1595531 != func_21() && Global_1595531 != unk_0x8CFC7D6E1DA5D304())
		{
			if (unk_0x09BCD61076F4FCCE() && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 0);
				unk_0x8359CF51370FC969(500);
			}
		}
	}
	if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (func_75(unk_0x8CFC7D6E1DA5D304()) && !unk_0xF9CD31D0C5E37DE2(unk_0x18F7BE9ACB7D08F4(), 275f, 4700f, -72f, 550f, 4945f, -32f, 0, 1, 0))
		{
			if (!func_63())
			{
				iLocal_158 = Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_13;
				if (unk_0x1D96871229AA29DD("AM_MP_SMPL_INTERIOR_EXT", iLocal_158, 1, 0))
				{
					Global_1808664.f_2903.f_5 = iLocal_158;
				}
				func_112(0, -1);
				if (unk_0xB03A1684359C50A1(Global_1808664.f_2915, 10))
				{
					unk_0x62148293B793073B(&(Global_1808664.f_2915), 10);
				}
				if (unk_0xB03A1684359C50A1(Global_1808664.f_2915, 4))
				{
					unk_0x62148293B793073B(&(Global_1808664.f_2915), 4);
				}
			}
		}
	}
}

void func_112(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 5))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 5);
			if (iParam1 != -1)
			{
				func_113(1, iParam1);
			}
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 5))
	{
		unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 5);
		func_113(0, -1);
	}
}

void func_113(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_13 = iParam1;
	}
	else
	{
		Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_13 = -1;
	}
}

int func_114(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422724[iParam0 /*420*/].f_324.f_4 != func_21())
			{
				return func_23(Global_2422724[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

void func_115()
{
	int iVar0;
	
	if (iLocal_157)
	{
		unk_0x62148293B793073B(&(Global_1808664.f_2903), 2);
	}
	if ((func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1) && unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) && !unk_0x7DF51A716BE7A07F())
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && func_104())
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if ((func_40(iVar0, 1) && func_71(iVar0) == unk_0x8CFC7D6E1DA5D304()) && func_116(unk_0x8CFC7D6E1DA5D304(), -1))
			{
				unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 2);
				iLocal_157 = 1;
			}
		}
	}
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_2(iParam0, 1, 1))
	{
		if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(iParam0), 0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(unk_0x6604E096142B4B55(iParam0), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				if (unk_0x18F7BE9ACB7D08F4() == unk_0x4983F8C51A0C0AF3(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_117()
{
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xF45F7A07410EF1F5())
		{
			Global_1371396.f_573 = 1;
		}
		else
		{
			Global_1371396.f_573 = 0;
		}
	}
}

void func_118()
{
	if (((unk_0x44243F2E2F58B8E3() && !unk_0x13C2BC1B63ABBCD5()) && !unk_0x8D1AEC16F2956D17()) && func_22(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_41(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 361.7317f, 4826.229f, -59.9833f, 366.1775f, 4826.184f, -57.86346f, 2.3125f, 0, 1, 0))
			{
				if ((((((func_63() && !func_69(0)) && !unk_0xCCA9AC3AD0097F5A(unk_0x8CFC7D6E1DA5D304())) && !Global_68213) && !func_122()) && !Global_1824134) || iLocal_155)
				{
					if ((unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 2106541073) == 0 || unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 2106541073) == 1) || iLocal_156)
					{
						func_121();
						if (iLocal_156)
						{
							if ((unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 2106541073) == 0 || unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 2106541073) == 1) || unk_0xDFEB6D8BCE2B43F6(unk_0x18F7BE9ACB7D08F4(), "anim@mp_radio@garage@low", "idle_a", 3))
							{
								iLocal_156 = 0;
							}
						}
					}
					else if (func_119())
					{
						func_121();
						iLocal_156 = 1;
					}
					else if (iLocal_155)
					{
						iLocal_155 = 0;
						iLocal_156 = 0;
					}
				}
			}
			else if (iLocal_155)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 366.201f, 4823.152f, -59.97972f, 361.8166f, 4823.1f, -57.55096f, 5.25f, 0, 1, 0) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 367.2438f, 4825.442f, -59.97972f, 366.7208f, 4827.354f, -58.42596f, 1.25f, 0, 1, 0))
				{
					unk_0x9C7EE7DE7041A3F4(2, 51, 1);
					Global_36762 = 1;
				}
			}
		}
		else
		{
			iLocal_155 = 0;
		}
	}
}

int func_119()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_154 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_36563[iVar0 /*32*/] && unk_0x9D39145AD645E383(&(Global_36563[iVar0 /*32*/].f_8), "MPRD_CTXT"))
			{
				iLocal_154 = Global_36563[iVar0 /*32*/].f_1;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = func_120(iLocal_154);
		if (iVar1 == -1)
		{
			iLocal_154 = -1;
		}
		else if (Global_36563[iVar1 /*32*/].f_7)
		{
			if (Global_36563[iVar1 /*32*/] && Global_36563[iVar1 /*32*/].f_4)
			{
				iLocal_154 = -1;
				return 1;
			}
			iLocal_154 = -1;
		}
		else if (unk_0xFC0C00F9DE2AEC93(2, 51))
		{
			iLocal_154 = -1;
			return 1;
		}
	}
	return 0;
}

int func_120(int iParam0)
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
		if (Global_36563[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_121()
{
	if (!iLocal_155)
	{
		iLocal_155 = 1;
	}
	if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 366.201f, 4823.152f, -59.97972f, 361.8166f, 4823.1f, -57.55096f, 5.25f, 0, 1, 0) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 367.2438f, 4825.442f, -59.97972f, 366.7208f, 4827.354f, -58.42596f, 1.25f, 0, 1, 0))
	{
		unk_0x9C7EE7DE7041A3F4(2, 51, 1);
		Global_36762 = 1;
	}
}

bool func_122()
{
	return unk_0xAF5EF4AF56129D79() != 0;
}

void func_123()
{
	int iVar0;
	
	if ((Global_1646129.f_117602 == 0 && unk_0x13C2BC1B63ABBCD5()) && func_43())
	{
		iVar0 = 0;
		while (iVar0 <= 59)
		{
			if (Global_1646129.f_63900[iVar0 /*44*/].f_15 == joaat("pickup_weapon_stungun"))
			{
				unk_0x6EA577F00337D68A(-205, 0, 0);
			}
			iVar0++;
		}
	}
}

void func_124()
{
	if (func_75(unk_0x8CFC7D6E1DA5D304()) && func_23(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_13) == 9)
	{
		if (!func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			func_112(0, -1);
		}
		else if ((!bLocal_138 && unk_0xE7FAF8E78F7D3A73(joaat("am_mp_smpl_interior_int")) == 0) && unk_0xE7FAF8E78F7D3A73(joaat("am_mp_property_int")) == 0)
		{
			if (!unk_0xF45F7A07410EF1F5() && !unk_0x7DF51A716BE7A07F())
			{
				if (unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
				{
					func_112(0, -1);
				}
			}
		}
	}
}

void func_125()
{
	if (!iLocal_153)
	{
		if ((Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_12 != -1 && func_23(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_12) == 4) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iLocal_152 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (!unk_0xE168D673D141E51C(iLocal_152))
			{
				iLocal_153 = 1;
			}
		}
	}
	else if (unk_0x31F12808DC47A9E5(iLocal_152))
	{
		if (!func_37(unk_0x8CFC7D6E1DA5D304()) && unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!func_126(iLocal_152))
			{
				if (!unk_0xE168D673D141E51C(iLocal_152))
				{
					if (unk_0x1800B99666D25740(iLocal_152))
					{
						unk_0x5F1E15DC35404E1B(iLocal_152, 1);
						iLocal_153 = 0;
					}
					else
					{
						unk_0x89B8CFBBA51399C9(iLocal_152);
					}
				}
				else
				{
					iLocal_153 = 0;
				}
			}
			else
			{
				iLocal_153 = 0;
			}
		}
	}
	else
	{
		iLocal_153 = 0;
	}
}

int func_126(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xF9CD31D0C5E37DE2(iParam0, 1060.325f, -3064.239f, -100.9374f, 821.32f, -3255.345f, -75f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_127()
{
	if ((Global_103497 && unk_0xE7FAF8E78F7D3A73(joaat("director_mode")) <= 0) && func_63())
	{
		unk_0x583A365A2563BBAA();
	}
}

void func_128()
{
	if (func_131(unk_0x8CFC7D6E1DA5D304()))
	{
		if (!iLocal_151)
		{
			func_130(9);
			iLocal_151 = 1;
		}
	}
	else if ((!func_75(unk_0x8CFC7D6E1DA5D304()) && !func_37(unk_0x8CFC7D6E1DA5D304())) && !func_36(unk_0x8CFC7D6E1DA5D304()))
	{
		if (iLocal_151)
		{
			func_129(9);
			iLocal_151 = 0;
		}
	}
}

void func_129(int iParam0)
{
	unk_0x62148293B793073B(&Global_1573336, iParam0);
}

void func_130(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&Global_1573336, iParam0);
}

int func_131(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324.f_10, 7);
	}
	return 0;
}

void func_132()
{
	if (((Global_1808664.f_2903.f_3 == 81 && !func_85(unk_0x8CFC7D6E1DA5D304())) && !func_134(Global_1595527)) && !func_134(unk_0x8CFC7D6E1DA5D304()))
	{
		if ((Global_1808664.f_2903.f_1 == 7 || Global_1808664.f_2903.f_1 == 1) || Global_1808664.f_2903.f_1 == 8)
		{
			if (!unk_0xF9CD31D0C5E37DE2(unk_0x18F7BE9ACB7D08F4(), 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, 0, 1, 0))
			{
				if (unk_0xC8AB6A5E6C1E6613())
				{
					if (unk_0x0B7A8CF4057BF8C5(unk_0x18F7BE9ACB7D08F4()) || unk_0x5EC244BCCF9E2AF3(unk_0x18F7BE9ACB7D08F4()))
					{
						func_133(1);
					}
				}
			}
		}
	}
	if (func_75(unk_0x8CFC7D6E1DA5D304()) && func_38(unk_0x8CFC7D6E1DA5D304()) == 81)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0x7DF51A716BE7A07F())
			{
				unk_0x36076DDAEF07F00A(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 1, 0);
				unk_0xF4C4068F5B840E73(1, 0);
				unk_0x38451EAF24F8D818(1, 0);
				iLocal_150 = 1;
			}
		}
	}
	else if (iLocal_150)
	{
		if (unk_0x7DF51A716BE7A07F())
		{
			unk_0x38451EAF24F8D818(0, 0);
			iLocal_150 = 0;
		}
	}
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1808664.f_2915, 12))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2915), 12);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1808664.f_2915, 12))
	{
		unk_0x62148293B793073B(&(Global_1808664.f_2915), 12);
	}
}

int func_134(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 6);
	}
	return 0;
}

void func_135()
{
	if ((Global_1646129.f_117602 == 0 && unk_0x13C2BC1B63ABBCD5()) && func_43())
	{
		if (func_136())
		{
			unk_0x6EA577F00337D68A(-202, 0, 0);
		}
	}
}

int func_136()
{
	if (Global_1646129 == 0)
	{
		if (Global_1646129.f_138609 != 0)
		{
			return 1;
		}
		if (Global_1646129.f_2 == 4)
		{
			return 1;
		}
	}
	if (((Global_1646129 == 8 || Global_1646129 == 6) || Global_1646129 == 3) || Global_1646129 == 10)
	{
		return 1;
	}
	return 0;
}

void func_137()
{
	int iVar0;
	
	if (!func_142() || !unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	Global_4262403 = 3;
	Global_4262404 = 3;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/] != 0 && Global_4261865[iVar0 /*80*/].f_70 > 0)
		{
			if ((Global_4261865[iVar0 /*80*/].f_78 >= 400 && Global_4261865[iVar0 /*80*/].f_78 < 500) && Global_4261865[iVar0 /*80*/].f_78 != 408)
			{
				Global_4261865[iVar0 /*80*/].f_2 = 3;
				Global_4262417 = Global_4261865[iVar0 /*80*/].f_4;
				Global_4262419 = Global_4261865[iVar0 /*80*/].f_6;
				Global_4262420 = Global_4261865[iVar0 /*80*/].f_78;
				Global_4262418 = Global_4261865[iVar0 /*80*/].f_1;
				Global_4262414 = 1;
				if (Global_4261865[iVar0 /*80*/].f_4 == 1704445500)
				{
					unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_137.f_71), 0);
				}
				if (Global_4261865[iVar0 /*80*/].f_72 & 4 != 0)
				{
					func_138(iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_138(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_142())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_141(iParam0))
		{
			if (!bVar0)
			{
				unk_0x03E9246EC94148C2();
			}
		}
		else if (!bVar0)
		{
			unk_0xE5D55D650EDFDBAD(Global_4261865[iParam0 /*80*/]);
		}
		func_139(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_139(var uParam0)
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
	func_140(&(uParam0->f_8.f_3));
	func_140(&(uParam0->f_8.f_16));
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
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_140(var uParam0)
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

int func_141(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

int func_142()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return 1;
	}
	return 0;
}

void func_143()
{
	if (!unk_0xEC0ECEF2AF3FDA8D())
	{
		if (!func_146(unk_0x8CFC7D6E1DA5D304(), 1))
		{
			iLocal_149 = 1;
		}
		else
		{
			iLocal_149 = 0;
		}
	}
	else if (func_145() || func_144())
	{
		if (iLocal_149)
		{
			Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11 = func_21();
			Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_26 = func_21();
			StringCopy(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_99), "", 64);
			if (Global_2512581.f_4878.f_77 != func_21())
			{
				Global_2512581.f_4878.f_77 = func_21();
			}
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_409 != -1)
			{
				Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_409 = -1;
			}
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_410 != -1)
			{
				Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_410 = -1;
			}
			Global_2512581.f_4878.f_42 = 0;
			unk_0xF9B0975B04001CC6(unk_0x8CFC7D6E1DA5D304(), 1f);
			unk_0x8A23C0DA6DB30026(unk_0x8CFC7D6E1DA5D304(), 0.5f);
			unk_0xF9B0975B04001CC6(unk_0x8CFC7D6E1DA5D304(), 1f);
			iLocal_149 = 0;
		}
	}
}

bool func_144()
{
	return unk_0xB03A1684359C50A1(Global_1808664.f_2915, 8);
}

bool func_145()
{
	return unk_0xB03A1684359C50A1(Global_1808664, 13);
}

bool func_146(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_147(iParam0))
		{
			return 0;
		}
	}
	return Global_1627460[iParam0 /*530*/].f_11 != func_21();
}

int func_147(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_21())
		{
			return Global_1627460[iParam0 /*530*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_148()
{
	if (func_22(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0x9C7EE7DE7041A3F4(0, 87, 1);
		unk_0x9C7EE7DE7041A3F4(0, 88, 1);
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!unk_0x74C2FE037DFC8B4A(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
			{
				if (unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("thruster")))
				{
					unk_0x73D7E57BF0ED7FEB(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), true);
				}
			}
		}
	}
}

void func_149()
{
	int iVar0;
	
	if (func_152() && func_23(Global_1808664.f_30) == 9)
	{
		if (unk_0x8CFC7D6E1DA5D304() == Global_1595531)
		{
			if (func_151() || func_150())
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && !iLocal_148)
				{
					iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0))
					{
						if (unk_0x0665EB554F07889E(iVar0, joaat("avenger")))
						{
							unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2915), 28);
							func_51(0, 0, 1, 0, 1, 0, 0, 0);
							iLocal_148 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_148 = 0;
	}
}

var func_150()
{
	return Global_1312739;
}

var func_151()
{
	return Global_1312823;
}

int func_152()
{
	if (func_98())
	{
		return Global_1808664.f_29 == 1;
	}
	return 0;
}

void func_153()
{
	if (!func_63())
	{
		if (Global_1595332.f_169)
		{
			Global_1595332.f_169 = 0;
		}
	}
}

void func_154()
{
	bool bVar0;
	
	if (func_41(unk_0x18F7BE9ACB7D08F4()) && unk_0xF9CD31D0C5E37DE2(unk_0x18F7BE9ACB7D08F4(), 275f, 4700f, -72f, 550f, 4945f, -32f, 0, 1, 0))
	{
		bVar0 = unk_0xDFEB6D8BCE2B43F6(unk_0x18F7BE9ACB7D08F4(), "anim@amb@warehouse@laptop@", "idle_a", 3);
		if (((bVar0 && unk_0xF45F7A07410EF1F5()) || (bVar0 && unk_0xD89462DDD07112E7())) || func_156())
		{
			if (!unk_0xB03A1684359C50A1(Global_2359302, 3) && !unk_0x8D1AEC16F2956D17())
			{
				unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 3);
				unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
				iLocal_7 = 1;
				return;
			}
			else
			{
				if (unk_0xF45F7A07410EF1F5() || unk_0xD89462DDD07112E7())
				{
					Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_183 = func_21();
					iLocal_9 = 1;
				}
				iLocal_8 = 1;
			}
		}
		else if (bVar0)
		{
			if (!unk_0xB03A1684359C50A1(Global_2359302, 3) && !unk_0x8D1AEC16F2956D17())
			{
				unk_0xF342BF6A7A4C7A8F(unk_0x18F7BE9ACB7D08F4(), true, 0);
				unk_0xD23CDB12B08F7E7F(unk_0x18F7BE9ACB7D08F4(), 1);
			}
		}
	}
	if (iLocal_9)
	{
		iLocal_9 = 0;
	}
	else if (iLocal_8)
	{
		if (!unk_0xB03A1684359C50A1(Global_2359302, 3) && !unk_0x8D1AEC16F2956D17())
		{
			iLocal_8 = 0;
			iLocal_7 = 1;
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 3);
			if (func_41(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
				if (!func_63())
				{
					unk_0x46C9EC5000FD8901(0, unk_0x18F7BE9ACB7D08F4());
					unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), true, 0);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), true, 0);
					unk_0x62148293B793073B(&Global_2359302, 4);
				}
			}
		}
		else if (unk_0xC8AB6A5E6C1E6613() && !unk_0xF662B8CF03C92579())
		{
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_183 = func_21();
			iLocal_8 = 0;
			iLocal_7 = 1;
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 3);
			if (func_41(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
				if (!func_63())
				{
					unk_0x46C9EC5000FD8901(0, unk_0x18F7BE9ACB7D08F4());
					unk_0xA12407EB7D7CF146(unk_0x18F7BE9ACB7D08F4(), true, 0);
					unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), true, 0);
					unk_0x62148293B793073B(&Global_2359302, 4);
				}
			}
		}
	}
	else if (iLocal_7)
	{
		if (!unk_0xDFEB6D8BCE2B43F6(unk_0x18F7BE9ACB7D08F4(), "anim@amb@warehouse@laptop@", "idle_a", 3) && !func_155())
		{
			unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 3);
			iLocal_7 = 0;
			if (!unk_0x8D1AEC16F2956D17())
			{
				unk_0xF342BF6A7A4C7A8F(unk_0x18F7BE9ACB7D08F4(), true, 0);
				unk_0xD23CDB12B08F7E7F(unk_0x18F7BE9ACB7D08F4(), 1);
			}
		}
	}
}

bool func_155()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
}

int func_156()
{
	if (func_155() && (((unk_0x9D39145AD645E383(&(Global_17301.f_1), "DB_AM_MENU_T") || unk_0x9D39145AD645E383(&(Global_17301.f_1), "DB_AM_MENU_T_1")) || unk_0x9D39145AD645E383(&(Global_17301.f_1), "DB_AM_MENU_T_2")) || func_157()))
	{
		if (func_43())
		{
			return 1;
		}
		return !unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 419.2876f, 4815.423f, -59.9983f, 0.4f, 0.5f, 2f, 0, 1, 0);
	}
	return 0;
}

int func_157()
{
	if ((((((((((unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_0") || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_9")) || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_10")) || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_1")) || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_2")) || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_3")) || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_4")) || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_5")) || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_6")) || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_7")) || unk_0x9D39145AD645E383(&(Global_17301.f_4562), "DB_AM_DESC_0_8"))
	{
		return 1;
	}
	return 0;
}

void func_158()
{
	if (iLocal_146)
	{
		if (unk_0xE7FAF8E78F7D3A73(joaat("am_mp_defunct_base")) > 0)
		{
			Global_1824122 = 1;
		}
		else
		{
			Global_1824122 = 0;
			iLocal_146 = 0;
			iLocal_145 = 0;
			iLocal_147 = 0;
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_414, 0))
	{
		if (unk_0xB03A1684359C50A1(Global_1824125, 1) || unk_0xB03A1684359C50A1(Global_1824125, 0))
		{
			iLocal_145 = 1;
			iLocal_147 = 0;
		}
		else if (iLocal_145)
		{
			iLocal_145 = 0;
		}
		if (iLocal_145 && func_159())
		{
			iLocal_146 = 1;
		}
	}
	else if (iLocal_145)
	{
		if (func_159())
		{
			iLocal_146 = 1;
			return;
		}
		if (iLocal_147 == 5)
		{
			iLocal_145 = 0;
			iLocal_147 = 0;
			return;
		}
		iLocal_147++;
	}
}

bool func_159()
{
	return Global_2436165;
}

void func_160()
{
	if (!bLocal_138)
	{
		if (unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_9, 31) && func_23(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_13) == 9)
		{
			bLocal_138 = true;
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 3);
			iLocal_139 = Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_13;
			iLocal_140 = unk_0x1D96871229AA29DD("AM_MP_SMPL_INTERIOR_EXT", iLocal_139, 1, 0);
		}
	}
	else if (unk_0xE7FAF8E78F7D3A73(joaat("am_mp_smpl_interior_int")) == 0 && unk_0xE7FAF8E78F7D3A73(joaat("am_mp_property_int")) == 0)
	{
		if (Global_1595332.f_169 == 1)
		{
			if ((Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_13 == -1 || !func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1)) || !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
			{
				Global_1595332.f_192 = 0;
				Global_1595332.f_169 = 0;
				bLocal_138 = false;
				unk_0x62148293B793073B(&(Global_1808664.f_2903), 3);
				if (unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()) && func_104())
				{
					if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 0)
					{
						unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 0);
					}
				}
				func_112(0, -1);
				Global_1808664.f_2903.f_5 = iLocal_139;
				iLocal_139 = -1;
			}
			else if ((unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()) && func_23(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_13) == 9) && func_104())
			{
				Global_1808664.f_2903.f_5 = iLocal_139;
				if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 0)
				{
					unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 0);
				}
				Global_1595332.f_192 = 0;
				Global_1595332.f_169 = 0;
				bLocal_138 = false;
				unk_0x62148293B793073B(&(Global_1808664.f_2903), 3);
				func_112(0, -1);
				iLocal_139 = -1;
				iLocal_140 = 0;
			}
		}
		else if (func_23(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_13) != 9 && !unk_0xF45F7A07410EF1F5())
		{
			bLocal_138 = false;
			unk_0x62148293B793073B(&(Global_1808664.f_2903), 3);
			iLocal_139 = -1;
			iLocal_140 = 0;
		}
		else if (iLocal_140 && !unk_0x1D96871229AA29DD("AM_MP_SMPL_INTERIOR_EXT", iLocal_139, 1, 0))
		{
			Global_1595332.f_192 = 0;
			Global_1595332.f_169 = 0;
			bLocal_138 = false;
			unk_0x62148293B793073B(&(Global_1808664.f_2903), 3);
			func_112(0, -1);
			iLocal_139 = -1;
			iLocal_140 = 0;
		}
	}
	else if (!unk_0xF45F7A07410EF1F5() && !unk_0x7DF51A716BE7A07F())
	{
		if (!func_7(&uLocal_141))
		{
			func_6(&uLocal_141, 1, 0);
		}
		else if (func_5(&uLocal_141, 3000, 1))
		{
			bLocal_138 = false;
			unk_0x62148293B793073B(&(Global_1808664.f_2903), 3);
			iLocal_139 = -1;
			iLocal_140 = 0;
		}
	}
	else
	{
		func_4(&uLocal_141);
	}
}

void func_161()
{
	if (func_167(unk_0x8CFC7D6E1DA5D304()) && !func_165())
	{
		if (!func_164() || !func_163())
		{
			func_162();
			unk_0x9C7EE7DE7041A3F4(0, 37, 1);
			unk_0x9C7EE7DE7041A3F4(0, 157, 1);
			unk_0x9C7EE7DE7041A3F4(0, 159, 1);
			unk_0x9C7EE7DE7041A3F4(0, 160, 1);
			unk_0x9C7EE7DE7041A3F4(0, 161, 1);
			unk_0x9C7EE7DE7041A3F4(0, 162, 1);
			unk_0x9C7EE7DE7041A3F4(0, 163, 1);
			unk_0x9C7EE7DE7041A3F4(0, 164, 1);
			unk_0x9C7EE7DE7041A3F4(0, 165, 1);
			unk_0x9C7EE7DE7041A3F4(0, 158, 1);
			unk_0x9C7EE7DE7041A3F4(0, 337, 1);
			unk_0x9C7EE7DE7041A3F4(0, 53, 1);
			unk_0x9C7EE7DE7041A3F4(0, 54, 1);
			unk_0x9C7EE7DE7041A3F4(0, 47, 1);
			unk_0x9C7EE7DE7041A3F4(0, 140, 1);
			unk_0x9C7EE7DE7041A3F4(0, 141, 1);
			unk_0x9C7EE7DE7041A3F4(0, 143, 1);
			unk_0x9C7EE7DE7041A3F4(0, 143, 1);
			unk_0x9C7EE7DE7041A3F4(0, 24, 1);
		}
	}
}

void func_162()
{
	int iVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
		}
	}
}

bool func_163()
{
	return unk_0xE7FAF8E78F7D3A73(joaat("am_mp_defunct_base")) > 0;
}

bool func_164()
{
	int iVar0;
	
	iVar0 = unk_0xE7FAF8E78F7D3A73(joaat("am_mp_smpl_interior_int"));
	return (iVar0 > 0 || unk_0x1D96871229AA29DD("AM_MP_SMPL_INTERIOR_INT", Global_1808664.f_1905, 1, 0));
}

bool func_165()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return func_166();
	}
	return func_42(Global_1646129.f_116948);
}

var func_166()
{
	return Global_2447128.f_16;
}

int func_167(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iParam0)) && !unk_0x74C2FE037DFC8B4A(unk_0x6604E096142B4B55(iParam0), 0))
			{
				if (unk_0xF9CD31D0C5E37DE2(unk_0x6604E096142B4B55(iParam0), 275f, 4700f, -72f, 550f, 4945f, -32f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_168()
{
	if (func_165() && !unk_0x13C2BC1B63ABBCD5())
	{
		if (func_22(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x9C7EE7DE7041A3F4(0, 72, 1);
			unk_0x9C7EE7DE7041A3F4(0, 71, 1);
			unk_0x9C7EE7DE7041A3F4(0, 23, 1);
		}
	}
}

void func_169()
{
	if (!unk_0x13C2BC1B63ABBCD5())
	{
		if (iLocal_136 && iLocal_137)
		{
			if (Global_1646129.f_116948 != 0 && func_42(Global_1646129.f_116948))
			{
				Global_1646129.f_116948 = 0;
			}
		}
		iLocal_136 = 0;
		iLocal_137 = 0;
		if (func_170())
		{
			iLocal_136 = 1;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("appjipmp")) != 0)
		{
			iLocal_137 = 1;
		}
	}
	else
	{
		iLocal_136 = 0;
		iLocal_137 = 0;
	}
}

bool func_170()
{
	return unk_0xB03A1684359C50A1(Global_2447128.f_2, 11);
}

void func_171()
{
	if (Global_1824111 && !unk_0x13C2BC1B63ABBCD5())
	{
		if (unk_0xB03A1684359C50A1(Global_1818764.f_2810, 1) && !unk_0xB03A1684359C50A1(Global_1818764.f_2810, 2))
		{
			if (iLocal_134 == -1)
			{
				iLocal_134 = Global_1818764.f_781;
				iLocal_135 = Global_1818764.f_797.f_1999;
				Global_1818764.f_2802.f_1 = 1;
			}
			else
			{
				Global_1818764.f_781 = iLocal_134;
				Global_1818764.f_797.f_1999 = iLocal_135;
			}
		}
		else
		{
			func_181();
		}
	}
	else
	{
		func_181();
	}
	if (func_43())
	{
		if (iLocal_133 == 0)
		{
			if (func_180(0))
			{
				if (Global_2447128.f_18 == 13)
				{
					if (func_179(unk_0x8CFC7D6E1DA5D304(), 1) == 2)
					{
						if ((((!func_174(unk_0x8CFC7D6E1DA5D304(), 29, 1) || !func_174(unk_0x8CFC7D6E1DA5D304(), 9, 1)) || !func_174(unk_0x8CFC7D6E1DA5D304(), 10, 1)) || !func_174(unk_0x8CFC7D6E1DA5D304(), 11, 1)) || !func_174(unk_0x8CFC7D6E1DA5D304(), 12, 1))
						{
							func_173(6);
							func_172(34);
							iLocal_133 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_133)
	{
		iLocal_133 = 0;
	}
}

void func_172(int iParam0)
{
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_196 = iParam0;
}

void func_173(int iParam0)
{
	Global_2447908.f_3819 = iParam0;
}

int func_174(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = iParam0;
	if (iVar2 != -1)
	{
		if (func_178(iParam1))
		{
			iVar0 = func_177(iParam1);
			if (iParam0 == unk_0x8CFC7D6E1DA5D304() && iParam2)
			{
				iVar1 = func_28(5642, -1, 0);
			}
			else
			{
				iVar1 = Global_1822808[iVar2 /*39*/].f_23;
			}
		}
		else if (func_176(iParam1))
		{
			iVar0 = func_175(iParam1);
			if (iParam0 == unk_0x8CFC7D6E1DA5D304() && iParam2)
			{
				iVar1 = func_28(6148, -1, 0);
			}
			else
			{
				iVar1 = Global_1822808[iVar2 /*39*/].f_24;
			}
		}
		return unk_0xB03A1684359C50A1(iVar1, iVar0);
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 19:
			return 3;
		
		case 20:
			return 4;
		
		case 21:
			return 5;
		
		case 22:
			return 6;
		
		case 23:
			return 7;
		
		case 24:
			return 8;
		
		case 25:
			return 9;
		
		case 26:
			return 10;
		
		case 27:
			return 11;
		
		case 28:
			return 12;
		
		case 29:
			return 13;
		
		default:
	}
	return -1;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return 1;
		
		default:
	}
	return 0;
}

int func_177(int iParam0)
{
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
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_178(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 != func_21())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304() && iParam1)
		{
			if (unk_0xB03A1684359C50A1(func_28(6407, -1, 0), 0))
			{
				return 0;
			}
			if (unk_0xB03A1684359C50A1(func_28(6407, -1, 0), 1))
			{
				return 1;
			}
			if (unk_0xB03A1684359C50A1(func_28(6407, -1, 0), 2))
			{
				return 2;
			}
		}
		else
		{
			if (unk_0xB03A1684359C50A1(Global_1822808[iParam0 /*39*/].f_26, 0))
			{
				return 0;
			}
			if (unk_0xB03A1684359C50A1(Global_1822808[iParam0 /*39*/].f_26, 1))
			{
				return 1;
			}
			if (unk_0xB03A1684359C50A1(Global_1822808[iParam0 /*39*/].f_26, 2))
			{
				return 2;
			}
		}
	}
	return -1;
}

bool func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 == 0)
	{
		return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2813, iVar1);
	}
	if (iVar0 == 1)
	{
		return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2814, iVar1);
	}
	if (iVar0 == 2)
	{
		return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2815, iVar1);
	}
	if (iVar0 == 3)
	{
		return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2816, iVar1);
	}
	if (iVar0 == 4)
	{
		return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2817, iVar1);
	}
	return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2818, iVar1);
}

void func_181()
{
	if (iLocal_134 != -1)
	{
		iLocal_134 = -1;
		iLocal_135 = -1;
	}
}

void func_182()
{
	if ((!func_63() && func_75(unk_0x8CFC7D6E1DA5D304())) && func_38(unk_0x8CFC7D6E1DA5D304()) == 81)
	{
		func_183();
	}
}

void func_183()
{
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (func_116(unk_0x8CFC7D6E1DA5D304(), -1))
		{
			unk_0x89B8CFBBA51399C9(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0));
			if (unk_0x1800B99666D25740(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
			{
				if (!unk_0x74C2FE037DFC8B4A(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0))
				{
					unk_0xF74B493CCF90C997(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0);
				}
			}
			else
			{
				unk_0x89B8CFBBA51399C9(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0));
			}
		}
	}
	unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 398, 0);
	unk_0xF5E25BA5F2D728A9(unk_0x18F7BE9ACB7D08F4(), 0);
	unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
	func_112(0, -1);
	func_186(0);
	if (func_185())
	{
		func_184();
	}
	unk_0x8359CF51370FC969(500);
	unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 19);
	Global_1808664.f_2903.f_5 = 81;
}

void func_184()
{
	Global_2436169.f_1040.f_10 = 0;
}

bool func_185()
{
	return Global_2436169.f_1040.f_10;
}

void func_186(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 18))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 18);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 18))
	{
		unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 18);
	}
}

void func_187()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (((!func_41(unk_0x18F7BE9ACB7D08F4()) || !func_190(unk_0x8CFC7D6E1DA5D304())) || func_189(0)) || !unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	bVar0 = ((unk_0x618E6B72C1385472() && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) && func_70(unk_0x18F7BE9ACB7D08F4(), 0) == -1);
	if (func_7(&uLocal_131))
	{
		if (unk_0xF45F7A07410EF1F5())
		{
			func_66(&uLocal_131, 0, 0);
		}
		else if (func_5(&uLocal_131, 11500, 0))
		{
			func_4(&uLocal_131);
			unk_0x62148293B793073B(&(Global_1808664.f_2903), 3);
			unk_0x62148293B793073B(&(Global_1808664.f_2903), 4);
		}
	}
	if (!func_7(&uLocal_129))
	{
		func_188(iLocal_128, &Var1);
		Var4 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0) };
		if (unk_0xB7A628320EFF8E47(Var1, Var4) < 2500f)
		{
			if ((((unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_9, 31) && unk_0xF45F7A07410EF1F5()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) && func_70(unk_0x18F7BE9ACB7D08F4(), 0) == -1) || bVar0)
			{
				if (unk_0xD89462DDD07112E7() || bVar0)
				{
					Global_1808664.f_2903.f_5 = iLocal_128;
					unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 9);
					unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 3);
					unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 4);
					func_6(&uLocal_129, 0, 0);
					if (func_23(iLocal_128) == 9)
					{
						Global_1595332.f_192 = 0;
						Global_1595332.f_169 = 0;
						func_112(0, -1);
					}
				}
				else if (!func_7(&uLocal_131))
				{
					unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 3);
					unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2903), 4);
					func_6(&uLocal_131, 0, 0);
				}
			}
			else
			{
				func_4(&uLocal_129);
			}
			return;
		}
		if (iLocal_128 == 97)
		{
			iLocal_128 = 89;
		}
		else
		{
			iVar7 = iLocal_128;
			iVar7++;
			iLocal_128 = iVar7;
		}
	}
	else if (unk_0xD89462DDD07112E7() || unk_0x618E6B72C1385472())
	{
		func_66(&uLocal_129, 0, 0);
	}
	else if (func_5(&uLocal_129, 10000, 0))
	{
		func_4(&uLocal_129);
		unk_0x62148293B793073B(&(Global_1808664.f_2903), 3);
		unk_0x62148293B793073B(&(Global_1808664.f_2903), 4);
		unk_0x62148293B793073B(&(Global_1808664.f_2903), 9);
	}
}

void func_188(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 89:
			*uParam1 = { 1273.138f, 2835.007f, 48.0734f };
			break;
		
		case 90:
			*uParam1 = { 34.4699f, 2620.977f, 84.6202f };
			break;
		
		case 91:
			*uParam1 = { 2755.981f, 3907.272f, 44.3148f };
			break;
		
		case 92:
			*uParam1 = { 3389.603f, 5508.971f, 24.875f };
			break;
		
		case 93:
			*uParam1 = { 19.4492f, 6825.361f, 14.4952f };
			break;
		
		case 94:
			*uParam1 = { -2229.408f, 2399.41f, 11.0106f };
			break;
		
		case 95:
			*uParam1 = { -3.0095f, 3344.489f, 40.2769f };
			break;
		
		case 96:
			*uParam1 = { 2086.067f, 1761.346f, 103.043f };
			break;
		
		case 97:
			*uParam1 = { 1864.803f, 269.0474f, 163.0169f };
			break;
	}
}

bool func_189(bool bParam0)
{
	return func_146(unk_0x8CFC7D6E1DA5D304(), bParam0);
}

int func_190(int iParam0)
{
	if (iParam0 != func_21())
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_248 != 0;
	}
	return 0;
}

void func_191()
{
	if (((unk_0x44243F2E2F58B8E3() && func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1)) && !Global_1574135) && Global_25233 == 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(joaat("animal_controller")) != 0)
		{
			unk_0x6EA577F00337D68A(-201, 0, 0);
		}
	}
}

void func_192()
{
	if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if ((((((((!func_170() && func_165()) && !unk_0x13C2BC1B63ABBCD5()) && !func_43()) && !func_199()) && !func_198()) && !func_194()) && func_63()) && !func_22(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1646129.f_116948 = 0;
		}
		if (iLocal_124)
		{
			if ((func_159() && func_193()) && func_165())
			{
				Global_1646129.f_116948 = 0;
			}
		}
		iLocal_124 = 0;
		if (func_43())
		{
			iLocal_124 = 1;
		}
	}
	else
	{
		iLocal_124 = 0;
	}
}

var func_193()
{
	return Global_2447128.f_586;
}

int func_194()
{
	if (((func_193() || func_197()) || func_196()) || func_195())
	{
		return 1;
	}
	return 0;
}

bool func_195()
{
	return unk_0xB03A1684359C50A1(Global_2447128, 1);
}

bool func_196()
{
	return unk_0xB03A1684359C50A1(Global_2447128, 2);
}

bool func_197()
{
	return unk_0xB03A1684359C50A1(Global_2447128, 20);
}

bool func_198()
{
	return Global_2447128.f_580;
}

bool func_199()
{
	return Global_2447128.f_579;
}

void func_200()
{
	int iVar0;
	
	if (func_102(unk_0x8CFC7D6E1DA5D304(), 0, 0))
	{
		if (func_165())
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
			{
				iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 1);
				if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0))
				{
					if (func_201(unk_0x4F69FBD64CDF125B(iVar0)))
					{
						Global_1803994 = 1;
						iLocal_123 = 1;
					}
					else if (iLocal_123)
					{
						Global_1803994 = 0;
						iLocal_123 = 0;
					}
				}
			}
		}
		else if (iLocal_123)
		{
			Global_1803994 = 0;
			iLocal_123 = 0;
		}
	}
	else if (iLocal_123)
	{
		Global_1803994 = 0;
		iLocal_123 = 0;
	}
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
			return Global_262145.f_20323;
		
		case joaat("ardent"):
			return Global_262145.f_20324;
		
		case joaat("nightshark"):
			return Global_262145.f_20325;
		
		case joaat("insurgent3"):
			return Global_262145.f_20326;
		
		case joaat("technical3"):
			return Global_262145.f_20327;
		
		case joaat("halftrack"):
			return Global_262145.f_20328;
		
		case joaat("trailersmall2"):
			return Global_262145.f_20329;
		
		case joaat("tampa3"):
			return Global_262145.f_20330;
		
		case joaat("dune3"):
			return Global_262145.f_20331;
		
		case joaat("oppressor"):
			return Global_262145.f_20332;
		
		case joaat("vigilante"):
			return Global_262145.f_21410;
		
		case joaat("thruster"):
			return Global_262145.f_21948;
		
		case joaat("deluxo"):
			return Global_262145.f_21949;
		
		case joaat("stromberg"):
			return Global_262145.f_21950;
		
		case joaat("riot2"):
			return Global_262145.f_21951;
		
		case joaat("chernobog"):
			return Global_262145.f_21952;
		
		case joaat("barrage"):
			return Global_262145.f_21953;
		
		case joaat("khanjali"):
			return Global_262145.f_21954;
		
		case joaat("comet4"):
			return Global_262145.f_21955;
		
		case joaat("savestra"):
			return Global_262145.f_21956;
		
		case joaat("revolter"):
			return Global_262145.f_21958;
		
		case joaat("avenger"):
			return Global_262145.f_21959;
		
		case joaat("volatol"):
			return Global_262145.f_21960;
		
		case joaat("akula"):
			return Global_262145.f_21961;
		
		default:
	}
	if (iParam0 == joaat("viseris"))
	{
		return Global_262145.f_21957;
	}
	return 0;
}

void func_202()
{
	if (!func_203())
	{
		return;
	}
	if (Global_1646129.f_116948 != Global_262145.f_7824)
	{
		return;
	}
	if (unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) != 0)
	{
		return;
	}
	if (Global_980512.f_12[0] < 7)
	{
		return;
	}
	if (Global_1794658)
	{
		Global_1794658 = 0;
		Global_1595332.f_25 = 1;
	}
	if (Global_1794661)
	{
		Global_1794661 = 0;
		Global_1595332.f_25 = 1;
	}
}

int func_203()
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	if (Global_2422724[iVar0 /*420*/].f_130 == 2 || Global_2422724[iVar0 /*420*/].f_130 == 7)
	{
		return 1;
	}
	return 0;
}

void func_204()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!iLocal_121)
	{
		if (func_203())
		{
			if (Global_1646129.f_116948 == Global_262145.f_7824)
			{
				iVar0 = unk_0x8CFC7D6E1DA5D304();
				iVar1 = unk_0x1BE7B010C9B9841E(iVar0);
				if (iVar1 == 1)
				{
					if (unk_0x7DF51A716BE7A07F() && Global_980512.f_12[iVar1] > 0)
					{
						if (!iLocal_120)
						{
							iLocal_120 = 1;
						}
					}
					else if (iLocal_120)
					{
						if (Global_980512.f_12[iVar1] >= 3)
						{
							iVar2 = unk_0x6604E096142B4B55(iVar0);
							if (!unk_0x0FAE113CE72ED842(iVar2))
							{
								if ((unk_0x756DE011CEDBBD7E() % 5) == 0)
								{
									iVar3 = 34879;
									iVar4 = unk_0x048A9E2FC8C538E3(874.4f, -2882f, 19f, 25f, joaat("casco"), iVar3);
									if (unk_0x31F12808DC47A9E5(iVar4) && unk_0xC4B84EB67F78C1F0(iVar4, 0))
									{
										if (unk_0x4983F8C51A0C0AF3(iVar4, -1, 0) == 0 && !iLocal_122)
										{
											unk_0xFDBDFC454E44A5BF(iVar2, iVar4, -1, -1, 1073741824, 16, 0);
											iLocal_122 = 1;
										}
										else if (unk_0x4983F8C51A0C0AF3(iVar4, 0, 0) == 0 && !iLocal_122)
										{
											unk_0xFDBDFC454E44A5BF(iVar2, iVar4, -1, 0, 1073741824, 16, 0);
											iLocal_122 = 1;
										}
										else
										{
											iLocal_121 = 1;
										}
									}
								}
							}
						}
					}
					else if (!unk_0x7DF51A716BE7A07F())
					{
					}
				}
			}
			else if ((unk_0x756DE011CEDBBD7E() % 100) == 0)
			{
			}
		}
	}
	else if (!func_203())
	{
		iLocal_121 = 0;
		iLocal_120 = 0;
		iLocal_122 = 0;
	}
}

void func_205()
{
	if ((((func_22(unk_0x8CFC7D6E1DA5D304()) && func_165()) && !unk_0x13C2BC1B63ABBCD5()) && !func_43()) && !func_194())
	{
		if ((unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 353.7142f, 4877.06f, -59.14812f, 1) >= 21f && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 345.1879f, 4864.415f, -60.02681f, 334.6017f, 4848.472f, -56.74947f, 6f, 0, 1, 0)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 336.949f, 4848.107f, -60.24947f, 339.9739f, 4843.732f, -56.74947f, 7f, 0, 1, 0))
		{
			if (func_170() || iLocal_119)
			{
				func_206();
				Global_1646129.f_116948 = 0;
				if (iLocal_119)
				{
					iLocal_119 = 0;
				}
			}
		}
		else if (func_170())
		{
			if (!iLocal_119)
			{
				iLocal_119 = 1;
			}
		}
	}
	else if (iLocal_119)
	{
		iLocal_119 = 0;
	}
}

void func_206()
{
	if (func_170() || func_208())
	{
		func_207();
	}
}

void func_207()
{
	Global_2447128.f_643 = 1;
}

var func_208()
{
	return Global_2447128.f_622;
}

void func_209()
{
	if (((unk_0x31F12808DC47A9E5(Global_2512581.f_284) && func_126(Global_2512581.f_284)) && Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_272 == -1) && !func_104())
	{
		func_210(1, 0, 1, 0, 0, 0, 0);
	}
}

void func_210(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_214() < 0 && Global_1817694)
	{
		return;
	}
	if (func_105(35))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_213(2);
	}
	else
	{
		func_213(1);
	}
	if (bParam1)
	{
		func_213(11);
	}
	if (bParam2)
	{
		func_213(32);
		if (bParam3)
		{
			if (func_214() >= 0 && unk_0xB03A1684359C50A1(Global_1320309[func_214() /*140*/].f_101, 0))
			{
				func_213(33);
			}
		}
		else
		{
			func_212(33);
		}
		if (func_214() >= 0)
		{
			if (func_211(Global_1320309[func_214() /*140*/].f_66))
			{
				func_213(40);
			}
		}
	}
	else if (bParam5)
	{
		func_213(37);
	}
	if (bParam4)
	{
		func_213(36);
	}
	if (func_105(36))
	{
		if (func_105(2))
		{
			func_212(36);
		}
	}
	if (bParam6)
	{
		func_213(38);
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		Global_2512581.f_372 = unk_0xE92FCF3C05C2EF1D();
	}
}

int func_211(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_212(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xB03A1684359C50A1(Global_2436169.f_502.f_1, iParam0))
		{
			unk_0x62148293B793073B(&(Global_2436169.f_502.f_1), iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2436169.f_502.f_2, (iParam0 - 32)))
	{
		unk_0x62148293B793073B(&(Global_2436169.f_502.f_2), (iParam0 - 32));
	}
}

void func_213(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0xB03A1684359C50A1(Global_2436169.f_502.f_1, iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2436169.f_502.f_1), iParam0);
		}
	}
	else if (!unk_0xB03A1684359C50A1(Global_2436169.f_502.f_2, (iParam0 - 32)))
	{
		unk_0xD2A9C3F486236CC5(&(Global_2436169.f_502.f_2), (iParam0 - 32));
	}
}

int func_214()
{
	return Global_2097152[func_215() /*12062*/].f_7637.f_2;
}

int func_215()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_216()
{
	if (unk_0xE7FAF8E78F7D3A73(unk_0x6E987D62C8535B6E("am_mp_smpl_interior_ext")) > 0)
	{
		if (unk_0x1D96871229AA29DD("am_mp_smpl_interior_ext", 81, 1, 0))
		{
			if (((unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_9, 7) || unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 25)) && func_225(81)) && !func_134(func_219()))
			{
				func_217(0);
				if (unk_0xE7FAF8E78F7D3A73(unk_0x6E987D62C8535B6E("am_mp_smpl_interior_int")) > 0)
				{
					func_133(1);
				}
				func_112(0, -1);
			}
		}
	}
}

void func_217(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!bParam0)
	{
		func_6(&Global_2520502, 1, 0);
	}
	else
	{
		func_4(&Global_2520502);
	}
	if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
	{
		uVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		iVar2 = -1;
		while (iVar2 <= 8)
		{
			if (iVar2 < unk_0x80F48E43F37DD7DD(unk_0x4F69FBD64CDF125B(uVar0)))
			{
				if (!unk_0x74B8CA477787A438(iVar0, iVar2, 0))
				{
					iVar1 = unk_0x4983F8C51A0C0AF3(iVar0, iVar2, 0);
					if ((unk_0x31F12808DC47A9E5(iVar1) && iVar1 != unk_0x18F7BE9ACB7D08F4()) && unk_0xEE1E09882FA264CA(iVar1))
					{
						func_218(unk_0xD3287DCBDBC58316(iVar1), 0);
					}
				}
			}
			iVar2++;
		}
	}
}

void func_218(int iParam0, bool bParam1)
{
	if (iParam0 == func_21())
	{
		return;
	}
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		return;
	}
	if (!bParam1)
	{
		if (!unk_0xB03A1684359C50A1(Global_2520506, iParam0))
		{
			func_6(&(Global_2520507[iParam0 /*2*/]), 1, 0);
			unk_0xD2A9C3F486236CC5(&Global_2520506, iParam0);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_2520506, iParam0))
	{
		func_4(&(Global_2520507[iParam0 /*2*/]));
		unk_0x62148293B793073B(&Global_2520506, iParam0);
	}
}

int func_219()
{
	return func_220(func_222());
}

int func_220(int iParam0)
{
	int iVar0;
	
	if (!func_221(iParam0, 1))
	{
		return func_21();
	}
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar0 = unk_0xFE0F5B815FB9D3D1(iParam0, "Player_Truck");
		return func_72(iVar0, 0, 1, 0);
	}
	return func_21();
}

int func_221(int iParam0, bool bParam1)
{
	if (Global_70852)
	{
		if (unk_0x31F12808DC47A9E5(iParam0) && (!bParam1 || unk_0xC4B84EB67F78C1F0(iParam0, 0)))
		{
			if (unk_0x788C6B35BB3FCF53(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_222()
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	var uVar28;
	int iVar29;
	int iVar30;
	var uVar31[25];
	int iVar57;
	int iVar58;
	var uVar59[25];
	int iVar85;
	
	if ((Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_12 != -1 && func_100(unk_0x8CFC7D6E1DA5D304())) && func_23(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_12) == 4)
	{
		return -1;
	}
	if (func_85(unk_0x8CFC7D6E1DA5D304()) && !func_224(unk_0x8CFC7D6E1DA5D304()))
	{
		iVar29 = unk_0xC4E133D43C01E0DF(unk_0x18F7BE9ACB7D08F4(), &uVar2);
		iVar0 = 0;
		while (iVar0 < iVar29)
		{
			if (unk_0x31F12808DC47A9E5(uVar2[iVar0]) && unk_0x978B4E1292EBBE41(uVar2[iVar0]))
			{
				if (!unk_0x74C2FE037DFC8B4A(uVar2[iVar0], 0))
				{
					if (unk_0x23E808B211571A22("Player_Truck", 3))
					{
						if (func_221(uVar2[iVar0], 1))
						{
							uVar28 = unk_0x7677C12E3146DA0A(uVar2[iVar0], &uVar1);
							if (!unk_0xFAFFA408239A026B(uVar28))
							{
								if (unk_0x9D39145AD645E383(uVar28, "am_mp_bunker"))
								{
									if (func_2(Global_1595527, 1, 1))
									{
										if (func_220(uVar2[iVar0]) == Global_1595527)
										{
											return uVar2[iVar0];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (func_146(unk_0x8CFC7D6E1DA5D304(), 0) && !func_85(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x8CFC7D6E1DA5D304() != func_223())
		{
			iVar57 = unk_0xC4E133D43C01E0DF(unk_0x18F7BE9ACB7D08F4(), &uVar31);
			iVar30 = 0;
			while (iVar30 < iVar57)
			{
				if (unk_0x31F12808DC47A9E5(uVar31[iVar30]) && unk_0x978B4E1292EBBE41(uVar31[iVar30]))
				{
					if (!unk_0x74C2FE037DFC8B4A(uVar31[iVar30], 0))
					{
						if (unk_0x23E808B211571A22("Player_Truck", 3))
						{
							if (func_221(uVar31[iVar30], 1))
							{
								if (func_2(func_223(), 1, 1))
								{
									if (func_220(uVar31[iVar30]) == func_223())
									{
										return uVar31[iVar30];
									}
								}
							}
						}
					}
				}
				iVar30++;
			}
		}
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (func_224(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!unk_0x31F12808DC47A9E5(Global_2512581.f_279))
			{
				iVar85 = unk_0xC4E133D43C01E0DF(unk_0x18F7BE9ACB7D08F4(), &uVar59);
				iVar58 = 0;
				while (iVar58 < iVar85)
				{
					if (unk_0x31F12808DC47A9E5(uVar59[iVar58]) && unk_0x978B4E1292EBBE41(uVar59[iVar58]))
					{
						if (!unk_0x74C2FE037DFC8B4A(uVar59[iVar58], 0))
						{
							if (unk_0x23E808B211571A22("Player_Truck", 3))
							{
								if (func_221(uVar59[iVar58], 1))
								{
									if (func_2(Global_1808664.f_2093, 1, 1))
									{
										if (func_220(uVar59[iVar58]) == Global_1808664.f_2093)
										{
											Global_2512581.f_279 = uVar59[iVar58];
											return uVar59[iVar58];
										}
									}
								}
							}
						}
					}
					iVar58++;
				}
			}
			else
			{
				return Global_2512581.f_279;
			}
		}
	}
	return Global_2512581.f_290[1];
}

int func_223()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11;
}

int func_224(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 8);
	}
	return 0;
}

int func_225(int iParam0)
{
	if (unk_0xF45F7A07410EF1F5() || func_226(iParam0))
	{
		return 1;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!func_116(unk_0x8CFC7D6E1DA5D304(), -1))
		{
			if (unk_0xEC0ECEF2AF3FDA8D())
			{
				if (Global_1808664.f_2093 != func_21())
				{
					if ((!func_37(Global_1808664.f_2093) && !func_36(Global_1808664.f_2093)) && !unk_0xB03A1684359C50A1(Global_2422724[Global_1808664.f_2093 /*420*/].f_324, 5))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	
	iVar0 = func_222();
	iVar1 = func_220(iVar0);
	if (unk_0x31F12808DC47A9E5(iVar0))
	{
		if (unk_0x74C2FE037DFC8B4A(iVar0, 0) && !unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 19))
		{
			return 1;
		}
	}
	if (unk_0x31F12808DC47A9E5(iVar0))
	{
		if ((!unk_0xBF0517F7142EEB5B(iVar0) && !unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 19)) && !func_234(unk_0x8CFC7D6E1DA5D304()))
		{
			return 1;
		}
	}
	if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0))
	{
		if (unk_0x2A72627520A107B5(iVar0) > 0.5f)
		{
			return 1;
		}
	}
	if (func_43())
	{
		return 1;
	}
	if ((((unk_0xB03A1684359C50A1(Global_1808664, 19) && unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4())) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) && !unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4())) && !func_234(unk_0x8CFC7D6E1DA5D304()))
	{
		if (!func_134(iVar1) && !func_85(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!unk_0xB03A1684359C50A1(Global_1808664.f_2, 3))
			{
				unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2), 3);
			}
		}
		return 1;
	}
	if (func_233(iVar1) || func_232(iVar1))
	{
		return 1;
	}
	if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0))
	{
		if (unk_0x2409C4B1759B2661(iVar0))
		{
			if (!unk_0xB03A1684359C50A1(Global_1808664.f_2, 3))
			{
				unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2), 3);
			}
			return 1;
		}
	}
	if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0))
	{
		if (unk_0x2409C4B1759B2661(iVar0))
		{
			if (!unk_0xB03A1684359C50A1(Global_1808664.f_2, 3))
			{
				unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2), 3);
			}
			return 1;
		}
	}
	if (func_146(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		if (unk_0x8CFC7D6E1DA5D304() == func_219())
		{
			return 1;
		}
	}
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (unk_0x31F12808DC47A9E5(func_231()))
		{
			func_229(iParam0, &Var2);
			if (func_228(func_231(), Var2, 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	if (iVar1 != func_21() && iVar1 != unk_0x8CFC7D6E1DA5D304())
	{
		if (unk_0xB03A1684359C50A1(Global_2422724[iVar1 /*420*/].f_324, 12))
		{
			return 1;
		}
	}
	if (iVar1 != func_21())
	{
		if (unk_0xB03A1684359C50A1(Global_2422724[iVar1 /*420*/].f_324.f_9, 20))
		{
			return 1;
		}
		if (unk_0xB03A1684359C50A1(Global_2422724[iVar1 /*420*/].f_324.f_9, 23))
		{
			return 1;
		}
	}
	if ((unk_0x7DF51A716BE7A07F() && !unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 19)) && !func_234(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	if (Global_2512581.f_296 && !func_85(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	func_229(iParam0, &Var5);
	if (((unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0)) && !func_134(iVar1)) && !func_234(unk_0x8CFC7D6E1DA5D304()))
	{
		Var8 = { unk_0x0AF3D0AB54EA2104(iVar0, 0f, -8.1f, 0f) };
		if (unk_0x36E1A96E1D63ED91((Var8.f_2 - Var5.f_2)) > 4f)
		{
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2), 3);
			return 1;
		}
	}
	if (Global_2492192)
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_1808664.f_2903, 3))
	{
		return 1;
	}
	if (func_227())
	{
		if (!func_134(iVar1) && !func_85(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!unk_0xB03A1684359C50A1(Global_1808664.f_2, 3))
			{
				unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2), 3);
			}
		}
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_1808664.f_2, 3))
	{
		unk_0x62148293B793073B(&(Global_1808664.f_2), 3);
	}
	return 0;
}

int func_227()
{
	int iVar0;
	int iVar1;
	var uVar2[25];
	int iVar28;
	struct<3> Var29;
	
	iVar0 = func_222();
	if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0))
	{
		func_229(81, &Var29);
		if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			iVar28 = unk_0xC4E133D43C01E0DF(unk_0x18F7BE9ACB7D08F4(), &uVar2);
			iVar1 = 0;
			while (iVar1 < iVar28)
			{
				if (unk_0x31F12808DC47A9E5(uVar2[iVar1]) && unk_0x978B4E1292EBBE41(uVar2[iVar1]))
				{
					if (!unk_0x74C2FE037DFC8B4A(uVar2[iVar1], 0) && !func_221(uVar2[iVar1], 1))
					{
						if (func_228(uVar2[iVar1], Var29, 1) < 8f)
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

float func_228(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

void func_229(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_222();
	switch (iParam0)
	{
		case 81:
			if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("trailerlarge"))
				{
					*uParam1 = { unk_0x0AF3D0AB54EA2104(iVar0, 0f, -8.9f, -2f) };
					if (unk_0xB5E0B10B5D88A8F5(*uParam1, &uVar1, 0, 0))
					{
						*uParam1 = { *uParam1, uParam1->f_1, uVar1 };
					}
					else
					{
						*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
					}
				}
			}
			break;
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (func_224(unk_0x8CFC7D6E1DA5D304()))
		{
			if (func_230(*uParam1))
			{
				if (Global_1808664.f_2093 != func_21())
				{
					if (!func_230(Global_2422724[Global_1808664.f_2093 /*420*/].f_324.f_5))
					{
						*uParam1 = { Global_2422724[Global_1808664.f_2093 /*420*/].f_324.f_5 };
					}
				}
			}
		}
	}
}

int func_230(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_231()
{
	return Global_2405047.f_2628;
}

int func_232(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 27);
	}
	return 0;
}

int func_233(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 26);
	}
	return 0;
}

int func_234(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 25);
	}
	return 0;
}

void func_235()
{
	if (!Global_262145.f_17987)
	{
		Global_262145.f_17987 = 1;
	}
}

void func_236()
{
	if (func_237())
	{
		unk_0x9C7EE7DE7041A3F4(2, 199, 1);
		unk_0x94881549299504FD();
	}
}

bool func_237()
{
	return unk_0xB03A1684359C50A1(Global_1808664.f_2, 12);
}

void func_238()
{
	if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (func_114(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0x8CFC7D6E1DA5D304() == Global_1595530)
			{
				if (func_69(0) || unk_0xF45F7A07410EF1F5())
				{
					func_4(&uLocal_117);
					if (!iLocal_116)
					{
						iLocal_116 = 1;
						if (unk_0xF45F7A07410EF1F5())
						{
						}
					}
				}
				else if (iLocal_116)
				{
					if (!func_7(&uLocal_117))
					{
						func_6(&uLocal_117, 0, 0);
					}
					else if (func_5(&uLocal_117, 2000, 0))
					{
						iLocal_116 = 0;
						func_4(&uLocal_117);
					}
				}
				if ((func_246() || func_241(-1)) || iLocal_116)
				{
					if (!func_240())
					{
						func_239(1);
						iLocal_115 = 1;
					}
				}
				else if (iLocal_115)
				{
					if (func_240())
					{
						func_239(0);
						iLocal_115 = 0;
					}
				}
			}
		}
		else if (iLocal_115)
		{
			func_239(0);
			iLocal_115 = 0;
			iLocal_116 = 0;
			func_4(&uLocal_117);
		}
	}
	else if (iLocal_115)
	{
		func_239(0);
		iLocal_115 = 0;
		iLocal_116 = 0;
		func_4(&uLocal_117);
	}
}

void func_239(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_1808664.f_2915, 27))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2915), 27);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1808664.f_2915, 27))
	{
		unk_0x62148293B793073B(&(Global_1808664.f_2915), 27);
	}
}

bool func_240()
{
	return unk_0xB03A1684359C50A1(Global_1808664.f_2915, 27);
}

int func_241(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_4;
	if (func_245(unk_0x8CFC7D6E1DA5D304()))
	{
		if (iVar0 == func_21() || !func_2(iVar0, 0, 1))
		{
			return 1;
		}
		return 0;
	}
	if (Global_1808664.f_16 == 0)
	{
		return 1;
	}
	if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 31))
	{
		if (Global_1595530 != func_21())
		{
			if (!func_2(Global_1595530, 0, 1) && !func_54(Global_1595530))
			{
				return 1;
			}
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1808664.f_16, 31))
	{
		if (func_146(unk_0x8CFC7D6E1DA5D304(), 0) && !func_54(Global_1595530))
		{
			iVar1 = func_223();
			if (iVar1 != func_21())
			{
				return 1;
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 31))
	{
		if (iVar0 != func_21())
		{
			if (!func_2(iVar0, 0, 1))
			{
				return 1;
			}
		}
	}
	if (func_244(Global_1595530) && unk_0x8CFC7D6E1DA5D304() != Global_1595530)
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
		}
		else if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 0)
		{
			return 1;
		}
	}
	if (func_243(Global_1595530))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
		}
		else if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 0)
		{
			return 1;
		}
	}
	if (func_242(Global_1595530))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
		}
		else if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_255, 20);
	}
	return 0;
}

int func_243(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324.f_10, 25);
	}
	return 0;
}

int func_244(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324.f_10, 15);
	}
	return 0;
}

int func_245(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324.f_10, 13);
	}
	return 0;
}

int func_246()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (func_245(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (Global_1595530 != func_21())
	{
		if (unk_0xB03A1684359C50A1(Global_1808664.f_16, 31))
		{
			if (func_146(unk_0x8CFC7D6E1DA5D304(), 0) && func_54(Global_1595530))
			{
				iVar1 = func_223();
				if (iVar1 != func_21())
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
					}
					else
					{
						return 1;
					}
				}
			}
		}
		if (func_252(Global_1595530) == 225 || func_252(Global_1595530) == 226)
		{
			if (func_54(Global_1595530))
			{
				bVar0 = true;
			}
		}
		if ((Global_1808664.f_2099 != func_249(func_251(Global_1595530)) && func_54(Global_1595530)) && Global_1808664.f_2099 != -1)
		{
			if (Global_1595530 == unk_0x8CFC7D6E1DA5D304())
			{
			}
			if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 11))
			{
				if (unk_0xB03A1684359C50A1(Global_1808664.f_16, 31))
				{
				}
				return 1;
			}
		}
		if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 31) && Global_1595530 != func_21())
		{
			if (!func_2(Global_1595530, 0, 1) && func_54(Global_1595530))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (!func_54(Global_1595530))
		{
			return 0;
		}
		if (Global_1595530 != unk_0x8CFC7D6E1DA5D304() && Global_1595530 != func_21())
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && func_114(unk_0x8CFC7D6E1DA5D304()))
			{
			}
			else if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 0)
			{
				if (func_146(unk_0x8CFC7D6E1DA5D304(), 1) && func_247(unk_0x8CFC7D6E1DA5D304(), Global_1595530))
				{
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_21() && iParam1 != func_21())
	{
		iVar0 = func_248(iParam0);
		if (iVar0 != func_21())
		{
			return iVar0 == func_248(iParam1);
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 != func_21())
	{
		return Global_1627460[iParam0 /*530*/].f_11;
	}
	return func_21();
}

int func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_23(iVar0) == 9)
		{
			if (func_250(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 3;
		
		case 92:
			return 4;
		
		case 93:
			return 5;
		
		case 94:
			return 6;
		
		case 95:
			return 7;
		
		case 96:
			return 8;
		
		case 97:
			return 9;
		
		default:
	}
	return 0;
}

int func_251(int iParam0)
{
	if (iParam0 == func_21())
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_266.f_248;
}

int func_252(int iParam0)
{
	if (func_253(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_33;
	}
	return -1;
}

int func_253(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_254()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	bVar4 = false;
	if (unk_0x13C2BC1B63ABBCD5())
	{
		if (func_147(unk_0x8CFC7D6E1DA5D304()))
		{
			if (func_259() && !func_258(14))
			{
				if (!func_43())
				{
					if (!iLocal_110)
					{
						iVar1 = 0;
						while (iVar1 <= (Global_980512.f_10 - 1))
						{
							if (Global_980512.f_12[iVar1] >= (Global_980512.f_17[iVar1] - 1) && Global_980512.f_12[iVar1] < 17)
							{
								if (!iLocal_114)
								{
									iLocal_114 = 1;
								}
							}
							iVar1++;
						}
						if (iLocal_114)
						{
							iVar0 = func_30();
							uVar2 = func_257(iVar0);
							iLocal_108 = unk_0x3A75EA627A024B7A(uVar2);
							iLocal_110 = 1;
							iLocal_109 = func_28(5642, -1, 0);
							iLocal_112 = 1;
							iLocal_114 = 0;
						}
					}
					else if (Global_1312782 && !iLocal_111)
					{
						iVar0 = func_30();
						uVar2 = func_257(iVar0);
						uVar3 = unk_0x3A75EA627A024B7A(uVar2);
						if (unk_0xB03A1684359C50A1(iLocal_108, 24))
						{
							unk_0xD2A9C3F486236CC5(&uVar3, 24);
							bVar4 = true;
						}
						if (unk_0xB03A1684359C50A1(iLocal_108, 25))
						{
							unk_0xD2A9C3F486236CC5(&uVar3, 25);
							bVar4 = true;
						}
						if (unk_0xB03A1684359C50A1(iLocal_108, 26))
						{
							unk_0xD2A9C3F486236CC5(&uVar3, 26);
							bVar4 = true;
						}
						if (bVar4)
						{
							unk_0x0FF7F0CDD8B0D493(uVar3, iVar0);
						}
						iLocal_111 = 1;
					}
				}
			}
			if (iLocal_112 && !iLocal_113)
			{
				if (iLocal_109 != func_28(5642, -1, 0))
				{
					iLocal_113 = 1;
				}
			}
			if (((iLocal_110 && iLocal_111) && iLocal_112) && iLocal_113)
			{
				func_256();
				func_255();
			}
		}
	}
	else
	{
		func_255();
	}
}

void func_255()
{
	if (iLocal_110)
	{
		iLocal_110 = 0;
		iLocal_111 = 0;
		iLocal_112 = 0;
		iLocal_113 = 0;
		iLocal_108 = 0;
		iLocal_109 = 0;
	}
}

void func_256()
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = func_30();
	uVar2 = func_257(iVar0);
	iVar3 = unk_0x3A75EA627A024B7A(uVar2);
	if (unk_0xB03A1684359C50A1(iVar3, 24))
	{
		unk_0x62148293B793073B(&iVar3, 24);
		bVar1 = true;
	}
	if (unk_0xB03A1684359C50A1(iVar3, 25))
	{
		unk_0x62148293B793073B(&iVar3, 25);
		bVar1 = true;
	}
	if (unk_0xB03A1684359C50A1(iVar3, 26))
	{
		unk_0x62148293B793073B(&iVar3, 26);
		bVar1 = true;
	}
	if (bVar1)
	{
		unk_0x0FF7F0CDD8B0D493(iVar3, iVar0);
	}
}

int func_257(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_258(int iParam0)
{
	return Global_262145.f_4995[iParam0] == Global_1646129.f_116948;
}

var func_259()
{
	return Global_2447128.f_17;
}

void func_260()
{
	int iVar0;
	int iVar1;
	
	if (func_142() && func_147(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_252(unk_0x8CFC7D6E1DA5D304()) == 190 || func_252(unk_0x8CFC7D6E1DA5D304()) == 226)
		{
			if (iLocal_106)
			{
				iVar0 = 1;
				if ((func_277() || Global_68213) || func_276() != -1)
				{
					iVar0 = 0;
				}
				if (iVar0 || iLocal_107 != 0)
				{
					iVar1 = func_274();
					if (iVar1 == -1)
					{
						return;
					}
					if (func_262(iVar1, iLocal_105, &iLocal_107))
					{
						iLocal_105 = -1;
						iLocal_106 = 0;
						iLocal_107 = 0;
					}
				}
			}
			else if (func_277())
			{
				if (iLocal_105 != -1)
				{
					iLocal_106 = 1;
				}
			}
			else if (iLocal_105 == -1)
			{
				iLocal_105 = func_261();
			}
		}
		else
		{
			iLocal_105 = -1;
			iLocal_106 = 0;
			iLocal_107 = 0;
		}
	}
	else
	{
		iLocal_105 = -1;
		iLocal_106 = 0;
		iLocal_107 = 0;
	}
}

int func_261()
{
	return Global_4262406;
}

bool func_262(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (*iParam2 != 0 && *iParam2 != 1)
	{
		*iParam2 = 0;
	}
	switch (*iParam2)
	{
		case 0:
			if (func_276() != -1)
			{
				return 0;
			}
			iVar0 = func_273(iParam0);
			if (func_269(78225582, -1799524201, iParam1, -1018905335, 1, 0, 1, 4, iVar0, 3))
			{
				*iParam2 = 1;
			}
			else
			{
				*iParam2 = 3;
			}
			if (*iParam2 == 1 && func_266())
			{
			}
			else
			{
				*iParam2 = 3;
				func_138(func_276());
			}
			break;
		
		case 1:
			if (func_265(func_276()))
			{
				if (func_264(func_276()) == 2)
				{
					*iParam2 = 2;
					func_138(func_276());
					func_263(iParam1);
				}
				else
				{
					*iParam2 = 3;
					func_138(func_276());
				}
			}
			break;
	}
	return *iParam2 != 1;
}

void func_263(int iParam0)
{
	Global_4262406 = iParam0;
}

int func_264(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_265(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

int func_266()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_142())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_276();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_30()) || unk_0x84F9D738F354D65C())
		{
			if (func_268(Global_4261865[iVar2 /*80*/].f_6, Global_4261865[iVar2 /*80*/].f_4, Global_4261865[iVar2 /*80*/].f_1) == 1)
			{
				Global_4262415 = 1;
			}
			return 0;
		}
		if (Global_2457935)
		{
			if (Global_4261865[iVar2 /*80*/].f_6 == 1067618600 || Global_4261865[iVar2 /*80*/].f_6 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_267(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xE91076F2B8E481C8(iVar3))
		{
			Global_4261865[iVar2 /*80*/].f_74 = 1;
			Global_4261865[iVar2 /*80*/].f_73 = 0;
			Global_4261865[iVar2 /*80*/].f_75 = unk_0x756DE011CEDBBD7E();
			if (bVar0)
			{
				Global_4261865[iVar2 /*80*/].f_69 = 1;
				Global_4261865[iVar2 /*80*/].f_73 = 1;
			}
			Global_4261865[iVar2 /*80*/].f_79 = 0;
			Global_4262402 = 1;
			return 1;
		}
	}
	return 0;
}

int func_267(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/];
	}
	return -1;
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -1426920838:
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
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_269(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_142())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_30()) || unk_0x84F9D738F354D65C())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457935)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_276();
	if (iVar1 == -1)
	{
		if (!func_271(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_270(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4261865[iVar1 /*80*/].f_1 = Var2.f_2;
		Global_4261865[iVar1 /*80*/].f_76 = Var2.f_0;
		Global_4261865[iVar1 /*80*/].f_77 = Var2.f_1;
		if (bVar0 || unk_0xEC1ED563CEFC07BC(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_271(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_142())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_30()) || unk_0x84F9D738F354D65C())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457935)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4261865[iVar1 /*80*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4261865[iVar1 /*80*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x33CEDD8141789508())
		{
			unk_0x03E9246EC94148C2();
		}
	}
	if (bVar0 || unk_0x10FA04307FB62A5E(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_272(uVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0);
		return 1;
	}
	return 0;
}

int func_272(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_142())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = uParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x756DE011CEDBBD7E();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_273(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0xFAFFA408239A026B(&cVar0))
	{
		return -1;
	}
	return unk_0x6E987D62C8535B6E(&cVar0);
}

int func_274()
{
	if (func_252(unk_0x8CFC7D6E1DA5D304()) == 226)
	{
		return 5;
	}
	if (func_252(unk_0x8CFC7D6E1DA5D304()) == 190)
	{
		return func_275(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_188);
	}
	return -1;
}

int func_275(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iVar0 /*12*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_276()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_267(iVar0) != 2147483647)
		{
			if (func_141(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_277()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0xB03A1684359C50A1(Global_2492144, iVar0 + 6))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_278()
{
	if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (func_88(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0x8CFC7D6E1DA5D304() == Global_1595526)
			{
				if (func_69(0) || unk_0xF45F7A07410EF1F5())
				{
					func_4(&uLocal_103);
					if (!iLocal_102)
					{
						iLocal_102 = 1;
					}
				}
				else if (iLocal_102)
				{
					if (!func_7(&uLocal_103))
					{
						func_6(&uLocal_103, 0, 0);
					}
					else if (func_5(&uLocal_103, 2000, 0))
					{
						iLocal_102 = 0;
						func_4(&uLocal_103);
					}
				}
				if ((func_282() || func_279()) || iLocal_102)
				{
					if (!func_240())
					{
						func_239(1);
						iLocal_101 = 1;
					}
				}
				else if (iLocal_101)
				{
					if (func_240())
					{
						func_239(0);
						iLocal_101 = 0;
					}
				}
			}
		}
		else if (iLocal_101)
		{
			func_239(0);
			iLocal_101 = 0;
			iLocal_102 = 0;
			func_4(&uLocal_103);
		}
	}
	else if (iLocal_101)
	{
		func_239(0);
		iLocal_101 = 0;
		iLocal_102 = 0;
		func_4(&uLocal_103);
	}
}

int func_279()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (Global_1595526 != func_21())
	{
		if (unk_0xB03A1684359C50A1(Global_1808664.f_16, 0))
		{
			if (func_146(unk_0x8CFC7D6E1DA5D304(), 0) && func_134(Global_1595526))
			{
				iVar1 = func_223();
				if (iVar1 != func_21())
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
					}
					else
					{
						return 1;
					}
				}
			}
		}
		if (func_252(Global_1595526) == 225 || func_252(Global_1595526) == 226)
		{
			if (func_134(Global_1595526))
			{
				bVar0 = true;
			}
		}
		if ((Global_1808664.f_2098 != func_281(Global_1595526) && func_134(Global_1595526)) && Global_1808664.f_2098 != -1)
		{
			if (Global_1595526 == unk_0x8CFC7D6E1DA5D304())
			{
			}
			if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 9) && unk_0xB03A1684359C50A1(Global_2422724[Global_1595526 /*420*/].f_324.f_9, 23))
			{
				return 1;
			}
		}
		if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 0) && Global_1595526 != func_21())
		{
			if (!func_2(Global_1595526, 0, 1) && func_134(Global_1595526))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (!func_134(Global_1595526) || func_280(Global_1595526))
		{
			return 0;
		}
		if (Global_1595526 != unk_0x8CFC7D6E1DA5D304() && Global_1595526 != func_21())
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && func_88(unk_0x8CFC7D6E1DA5D304()))
			{
			}
			else
			{
				if (func_146(unk_0x8CFC7D6E1DA5D304(), 1) && func_247(unk_0x8CFC7D6E1DA5D304(), Global_1595526))
				{
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324.f_9, 0);
	}
	return 0;
}

int func_281(int iParam0)
{
	if (iParam0 == func_21())
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_266.f_160[5 /*12*/];
}

int func_282()
{
	int iVar0;
	
	if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 0))
	{
		if (Global_1595526 != func_21())
		{
			if (!func_2(Global_1595526, 0, 1) && !func_134(Global_1595526))
			{
				return 1;
			}
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1808664.f_16, 0))
	{
		if (func_146(unk_0x8CFC7D6E1DA5D304(), 0) && !func_134(Global_1595526))
		{
			iVar0 = func_223();
			if (iVar0 != func_21())
			{
				return 1;
			}
		}
	}
	if (Global_1595526 != func_21())
	{
		if (func_233(Global_1595526) || func_232(Global_1595526))
		{
			if (unk_0x8CFC7D6E1DA5D304() == Global_1595526)
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && func_88(unk_0x8CFC7D6E1DA5D304()))
				{
				}
				else if ((unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 451360105) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 451360105) != 0) && !unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 0))
		{
			if (func_146(Global_1595526, 0))
			{
				return 1;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_2422724[Global_1595526 /*420*/].f_324, 12) && unk_0x8CFC7D6E1DA5D304() != Global_1595526)
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && func_88(unk_0x8CFC7D6E1DA5D304()))
			{
				if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 10))
				{
				}
			}
			else if ((unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 451360105) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 451360105) != 0) && !unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
			{
				return 1;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_2422724[Global_1595526 /*420*/].f_324.f_9, 20))
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && func_88(unk_0x8CFC7D6E1DA5D304()))
			{
				if (!unk_0xB03A1684359C50A1(Global_1808664.f_16, 10))
				{
				}
			}
			else if ((unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 451360105) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 451360105) != 0) && !unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
			{
				return 1;
			}
		}
		if ((unk_0xB03A1684359C50A1(Global_1808664.f_16, 10) && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 451360105) != 1) && unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 451360105) != 0)
		{
			return 1;
		}
		if (Global_2512581.f_296 && Global_2512581.f_299)
		{
			return 1;
		}
	}
	return 0;
}

void func_283()
{
	int iVar0;
	int iVar1;
	
	if (func_165() && unk_0x13C2BC1B63ABBCD5())
	{
		if (func_63())
		{
			if (func_292())
			{
				iVar0 = 0;
				while (iVar0 < 32)
				{
					iVar1 = unk_0x3479F6F64A48251C(iVar0);
					if (unk_0x4AF13BCD120BCDBC(iVar1))
					{
						if (unk_0xA43E30AC0AF7BE76(iVar1))
						{
							func_284();
						}
					}
					iVar0++;
				}
			}
		}
	}
}

void func_284()
{
	func_285(5);
	func_285(9);
	func_285(10);
}

void func_285(int iParam0)
{
	if (func_289(iParam0))
	{
		func_287(func_288(iParam0), 0);
		unk_0xD2A9C3F486236CC5(&Global_1803991, func_286(iParam0));
	}
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 7:
			return 2;
		
		case 8:
			return 3;
		
		case 5:
			return 4;
		
		case 9:
			return 5;
		
		case 10:
			return 6;
		
		case 11:
			return 7;
		
		default:
	}
	return -1;
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, 1);
	}
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("mpply_gangops_allinorder");
		
		case 4:
			return joaat("mpply_gangops_loyalty");
		
		case 7:
			return joaat("mpply_gangops_loyalty2");
		
		case 8:
			return joaat("mpply_gangops_loyalty3");
		
		case 5:
			return joaat("mpply_gangops_crimmasmd");
		
		case 9:
			return joaat("mpply_gangops_crimmasmd2");
		
		case 10:
			return joaat("mpply_gangops_crimmasmd3");
		
		case 11:
			return joaat("mpply_gangops_support");
		
		default:
	}
	return joaat("mpply_gangops_allinorder");
}

bool func_289(int iParam0)
{
	return (!func_291(iParam0) && func_290(func_288(iParam0)) > 0);
}

int func_290(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_291(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = Global_1367728[iParam0];
	uVar1 = uVar0;
	if (unk_0xA17AF9F044C9C70E(uVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

bool func_292()
{
	return ((func_289(5) || func_289(9)) || func_289(10));
}

void func_293()
{
	if ((func_155() && unk_0x9D39145AD645E383(&(Global_17301.f_1), "DB_AM_MENU_T")) && Global_17301.f_5606 > 3)
	{
		Global_2492266 = 2147483647;
		iLocal_6 = 1;
	}
	else if (iLocal_6)
	{
		Global_2492266 = 0;
		iLocal_6 = 0;
		func_490();
	}
}

void func_294()
{
	int iVar0;
	
	if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (!iLocal_99)
		{
			iLocal_100 = func_28(6410, -1, 0);
			iLocal_99 = 1;
		}
		else
		{
			iVar0 = func_28(6410, -1, 0);
			if (iVar0 > iLocal_100)
			{
				iLocal_100 = iVar0;
				func_302(6409, unk_0xE6E19D6A1FC25165(), -1, 1, 0);
				if (func_299(18114, -1, -1) && !func_299(18115, -1, -1))
				{
					func_298(18115, 1, -1, 1);
				}
				func_295(3, 0);
			}
		}
	}
}

void func_295(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_297(iParam0, iParam1))
	{
		iVar0 = func_296();
		Global_2456686[iVar0] = iParam0;
	}
}

int func_296()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456686[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_297(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_298(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_30();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(iVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	iVar1 = func_301(iParam0, iParam1);
	uVar2 = func_300(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_301(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

void func_302(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_29(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, iParam3);
	}
}

void func_303()
{
	if (Local_93.f_0 > 0)
	{
		if (Local_93.f_2)
		{
			if (Global_1808664.f_16 == 0)
			{
				Global_1808664.f_16 = Local_93.f_0;
				Global_1808664.f_1903 = Local_93.f_4;
				Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_4 = Local_93.f_5;
				Local_93.f_1 = 2;
			}
			else
			{
				if (func_36(unk_0x8CFC7D6E1DA5D304()) && Local_93.f_1 >= 2)
				{
					Local_93.f_2 = 0;
					Local_93.f_3 = 0;
					Local_93.f_1 = 0;
				}
				Local_93.f_1++;
			}
		}
		else if (Local_93.f_3)
		{
			if (!func_224(unk_0x8CFC7D6E1DA5D304()))
			{
				if (func_306(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (!func_37(unk_0x8CFC7D6E1DA5D304()))
					{
						if (Global_1808664.f_16 == 0)
						{
							Global_1808664.f_16 = Local_93.f_0;
							Global_1808664.f_1903 = Local_93.f_4;
							Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_4 = Local_93.f_5;
							Local_93.f_3 = 0;
							Local_93.f_1 = 0;
						}
					}
				}
				else
				{
					Local_93.f_3 = 0;
				}
			}
		}
		else if (!func_37(unk_0x8CFC7D6E1DA5D304()))
		{
			if (func_46(unk_0x8CFC7D6E1DA5D304()) != Local_93.f_4)
			{
				Local_93.f_0 = 0;
				Local_93.f_1 = 0;
				Local_93.f_4 = -1;
				Local_93.f_5 = func_21();
			}
		}
	}
	else if ((func_36(unk_0x8CFC7D6E1DA5D304()) && func_78(func_46(unk_0x8CFC7D6E1DA5D304()), 4)) && !unk_0x13C2BC1B63ABBCD5())
	{
		if (!func_37(unk_0x8CFC7D6E1DA5D304()) && Global_1808664.f_16 != 0)
		{
			Local_93.f_0 = Global_1808664.f_16;
			Local_93.f_4 = func_46(unk_0x8CFC7D6E1DA5D304());
			Local_93.f_5 = Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_4;
			Local_93.f_1 = 0;
		}
	}
	else
	{
		Local_93.f_5 = func_21();
		Local_93.f_2 = 0;
		Local_93.f_3 = 0;
		Local_93.f_1 = 0;
	}
	func_304();
}

void func_304()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			if (unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 2))
			{
				if (Var4.f_0 == -18272316)
				{
					func_305(iVar0);
				}
			}
		}
		Var4 = { Var2 };
		iVar0++;
	}
}

void func_305(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 4))
	{
		if (Var0.f_2)
		{
			if (!Var0.f_3)
			{
				if (func_41(unk_0x18F7BE9ACB7D08F4()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					iVar4 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
					if (func_41(iVar4))
					{
						if (func_70(unk_0x18F7BE9ACB7D08F4(), 0) != -1)
						{
							if (unk_0xF45F7A07410EF1F5())
							{
								Local_93.f_2 = 1;
							}
							else
							{
								Local_93.f_3 = 1;
							}
						}
					}
				}
			}
		}
	}
}

int func_306(int iParam0, bool bParam1)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xF9CD31D0C5E37DE2(iParam0, 1060.325f, -3064.239f, -100.9374f, 821.32f, -3255.345f, -75f, 0, 1, 0))
		{
			if (!bParam1)
			{
				if (((!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 892.162f, -3170.261f, -98.12341f, 893.6292f, -3170.498f, -95.62341f, 2f, 0, 1, 0) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 893.7611f, -3170.526f, -98.12341f, 895.2001f, -3170.787f, -95.62341f, 2f, 0, 1, 0)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 895.3466f, -3170.819f, -98.12341f, 896.7942f, -3171.079f, -95.62341f, 2f, 0, 1, 0)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 896.9323f, -3171.1f, -98.12341f, 898.3902f, -3171.377f, -95.62341f, 2f, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_307()
{
	if (func_85(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(Global_1350802) && unk_0xC4B84EB67F78C1F0(Global_1350802, 0))
		{
			if (unk_0x1800B99666D25740(Global_1350802))
			{
				unk_0xF74B493CCF90C997(Global_1350802, 1);
			}
		}
		if (unk_0x31F12808DC47A9E5(Global_1350803) && unk_0xC4B84EB67F78C1F0(Global_1350803, 0))
		{
			if (unk_0x1800B99666D25740(Global_1350803))
			{
				unk_0xF74B493CCF90C997(Global_1350803, 1);
			}
		}
	}
}

void func_308()
{
	if (func_309())
	{
		unk_0xD2A9C3F486236CC5(&Global_1816915, 14);
	}
	else
	{
		unk_0x62148293B793073B(&Global_1816915, 14);
	}
}

int func_309()
{
	if (func_310() != 2000 || Global_2491985.f_19 != 2000)
	{
		return 1;
	}
	return 0;
}

int func_310()
{
	int iVar0;
	
	if (func_147(unk_0x8CFC7D6E1DA5D304()))
	{
		return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_319;
	}
	else
	{
		iVar0 = func_223();
		if (iVar0 != func_21())
		{
			return Global_1627460[iVar0 /*530*/].f_11.f_319;
		}
	}
	return 2000;
}

void func_311()
{
	if (!unk_0x13C2BC1B63ABBCD5() && func_324())
	{
		if (iLocal_92)
		{
			if (!iLocal_91)
			{
				if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_98 == 8)
				{
					func_319();
					iLocal_91 = 1;
				}
			}
		}
		else if (iLocal_91)
		{
			iLocal_91 = 0;
		}
		if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_98 != 8 && func_318())
		{
			if ((func_317() && func_316()) && !func_63())
			{
				if (func_315() == 1)
				{
					func_172(34);
				}
				func_314();
				func_313();
				func_312();
				Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_98 = 8;
			}
		}
	}
	else if (iLocal_92)
	{
		iLocal_92 = 0;
		iLocal_91 = 0;
	}
}

void func_312()
{
	unk_0x62148293B793073B(&(Global_2447128.f_2), 11);
}

void func_313()
{
	Global_2447128.f_624 = 0;
}

void func_314()
{
	Global_2447128.f_726 = 1;
}

int func_315()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_196;
}

bool func_316()
{
	return unk_0xB03A1684359C50A1(Global_2447128, 7);
}

bool func_317()
{
	return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2810, 3);
}

var func_318()
{
	return Global_2447128.f_624;
}

void func_319()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	Var0 = { func_323() };
	iVar6 = unk_0x6E987D62C8535B6E(&Var0);
	if (iVar6 == 0)
	{
		return;
	}
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < Global_1311741)
	{
		if (Global_2359721[iVar7 /*26*/].f_25 == iVar6)
		{
			func_322(iVar7);
			func_320(iVar7);
		}
		iVar7++;
	}
}

void func_320(int iParam0)
{
	if (func_321(iParam0))
	{
		Global_1310987.f_14 = 1;
		return;
	}
	unk_0xD2A9C3F486236CC5(&(Global_2359721[iParam0 /*26*/].f_13), 16);
	Global_1310987.f_14 = 1;
}

bool func_321(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_2359721[iParam0 /*26*/].f_13, 16);
}

void func_322(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_2359721[iParam0 /*26*/].f_13, 5))
	{
		return;
	}
	unk_0xD2A9C3F486236CC5(&(Global_2359721[iParam0 /*26*/].f_13), 5);
}

struct<6> func_323()
{
	return Global_2447128.f_746;
}

bool func_324()
{
	return unk_0xB03A1684359C50A1(Global_2447128.f_3, 6);
}

void func_325()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	
	if ((func_315() == 9 && !unk_0x13C2BC1B63ABBCD5()) && !func_230(Global_2456768))
	{
		if (func_327(Global_2456768, &iVar0))
		{
			if (iVar0 != -1)
			{
				iVar1 = unk_0x61E9B3BFA06B017B(0, 2);
				if (func_326(iVar0, iVar1, &Var2, &uVar5))
				{
					Global_2456768 = { Var2 };
				}
			}
		}
	}
}

int func_326(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 89:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1271.16f, 2833.266f, 47.8505f };
					*uParam3 = 129.1997f;
					return 1;
				
				case 1:
					*uParam2 = { 1273.84f, 2832.423f, 48.0445f };
					*uParam3 = 129.1997f;
					return 1;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 35.5437f, 2623.229f, 84.2188f };
					*uParam3 = 313.3997f;
					return 1;
				
				case 1:
					*uParam2 = { 32.9167f, 2625.462f, 84.2134f };
					*uParam3 = 313.3997f;
					return 1;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2751.097f, 3905.699f, 43.5366f };
					*uParam3 = 127.6f;
					return 1;
				
				case 1:
					*uParam2 = { 2753.286f, 3903.578f, 43.8065f };
					*uParam3 = 127.6f;
					return 1;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 3388.162f, 5504.382f, 24.719f };
					*uParam3 = 81.3999f;
					return 1;
				
				case 1:
					*uParam2 = { 3388.654f, 5501.042f, 24.6321f };
					*uParam3 = 81.3999f;
					return 1;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 22.651f, 6818.573f, 14.131f };
					*uParam3 = 249f;
					return 1;
				
				case 1:
					*uParam2 = { 20.692f, 6821.736f, 14.191f };
					*uParam3 = 249f;
					return 1;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2229.391f, 2397.57f, 11.2311f };
					*uParam3 = 186.5998f;
					return 1;
				
				case 1:
					*uParam2 = { -2226.695f, 2398.113f, 11.2385f };
					*uParam3 = 186.5998f;
					return 1;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2.9559f, 3344.297f, 39.5231f };
					*uParam3 = 304.9976f;
					return 1;
				
				case 1:
					*uParam2 = { 4.9233f, 3342.803f, 39.2962f };
					*uParam3 = 304.9976f;
					return 1;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2088.716f, 1761.805f, 102.7459f };
					*uParam3 = 275.1998f;
					return 1;
				
				case 1:
					*uParam2 = { 2090.085f, 1759.769f, 102.665f };
					*uParam3 = 275.1998f;
					return 1;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1867.959f, 266.977f, 162.799f };
					*uParam3 = 144.998f;
					return 1;
				
				case 1:
					*uParam2 = { 1861.209f, 271.57f, 162.988f };
					*uParam3 = 144.998f;
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

int func_327(struct<3> Param0, var uParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x2A488C176D52CCA5(Param0, func_329(iVar0)) < 50f)
		{
			*uParam3 = func_328(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 89;
		
		case 1:
			return 90;
		
		case 2:
			return 91;
		
		case 3:
			return 92;
		
		case 4:
			return 93;
		
		case 5:
			return 94;
		
		case 6:
			return 95;
		
		case 7:
			return 96;
		
		case 8:
			return 97;
		
		default:
	}
	return -1;
}

Vector3 func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1273.138f, 2835.007f, 48.0734f;
		
		case 1:
			return 34.4699f, 2620.977f, 84.6202f;
		
		case 2:
			return 2755.981f, 3907.272f, 44.3148f;
		
		case 3:
			return 3389.603f, 5508.971f, 24.875f;
		
		case 4:
			return 19.4492f, 6825.361f, 14.4952f;
		
		case 5:
			return -2229.408f, 2399.41f, 11.0106f;
		
		case 6:
			return -3.0095f, 3344.489f, 40.2769f;
		
		case 7:
			return 2086.067f, 1761.346f, 103.043f;
		
		case 8:
			return 1864.803f, 269.0474f, 163.0169f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_330()
{
	if ((unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_414, 0) || func_333()) || func_332())
	{
		if (!iLocal_90)
		{
		}
		if (unk_0x9D39145AD645E383(&(Global_17301.f_1), "DB_AM_MENU_T"))
		{
			if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), true, 0);
			}
		}
		iLocal_90 = 1;
		func_331(0);
		Global_68216 = 1;
	}
	else if (iLocal_90)
	{
		iLocal_90 = 0;
	}
}

void func_331(int iParam0)
{
	Global_1824134 = iParam0;
}

bool func_332()
{
	return Global_92881.f_316 > 0;
}

int func_333()
{
	if (func_155())
	{
		if (((((((!unk_0x9D39145AD645E383(&(Global_17301.f_1), "DEL_VEH_SEL0") && !unk_0x9D39145AD645E383(&(Global_17301.f_1), "DEL_VEH_SEL3")) && !unk_0x9D39145AD645E383(&(Global_17301.f_1), "DEL_VEH_SEL3ac")) && !unk_0x9D39145AD645E383(&(Global_17301.f_1), "MP_REP_PROP_0")) && !unk_0x9D39145AD645E383(&(Global_17301.f_1), "MP_REP_PROP_0b")) && !unk_0x9D39145AD645E383(&(Global_17301.f_1), "REP_BUNKER_0")) && !unk_0x9D39145AD645E383(&(Global_17301.f_1), "REP_HANGAR_0")) && !unk_0x9D39145AD645E383(&(Global_17301.f_1), "REP_DBASE_0"))
		{
			return 1;
		}
	}
	return 0;
}

void func_334()
{
	if (Global_1824117 && unk_0xF42BE3276F704EDC(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) != 1)
		{
			unk_0x9482FF5633EE6914(unk_0xEBE31BF57A0E4641(), 1);
		}
	}
}

void func_335()
{
	int iVar0;
	
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return;
	}
	if (iLocal_88)
	{
		if (unk_0xB03A1684359C50A1(Global_1821575.f_1232, 2) && unk_0xB03A1684359C50A1(Global_1821575.f_1232, 6))
		{
			iLocal_89 = 1;
		}
	}
	if (iLocal_89 && Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_98 == 3)
	{
		iLocal_89 = 0;
		iVar0 = func_362(func_179(unk_0x8CFC7D6E1DA5D304(), 0), 0);
		func_336(func_177(iVar0), 2);
		Global_1808664.f_9 = 1;
		unk_0xD2A9C3F486236CC5(&(Global_1821575.f_1232), 2);
		unk_0xD2A9C3F486236CC5(&(Global_1821575.f_1232), 6);
	}
	iLocal_88 = 0;
	if (func_170() || func_208())
	{
		iLocal_88 = 1;
	}
}

int func_336(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_361(iParam1);
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	if (iVar0 < func_360(iParam1))
	{
		iVar1 = func_358(iVar0, iParam1);
		if (iVar1 != -1)
		{
			func_356(&(Global_794708.f_4[iVar1 /*88*/]));
			func_355();
			switch (iParam1)
			{
				case 0:
					func_354(222);
					break;
				
				case 1:
					func_354(228);
					break;
				
				case 2:
					func_353(unk_0x8CFC7D6E1DA5D304(), 0);
					if (func_351(Global_794708.f_98389[iVar1 /*13*/].f_1))
					{
						func_354(235);
					}
					else
					{
						func_354(233);
					}
					Global_2447908.f_6228 = { func_350(unk_0x8CFC7D6E1DA5D304()) };
					break;
			}
			func_349(Global_794708.f_4[iVar1 /*88*/].f_71);
			func_347();
			func_346();
			func_345();
			func_344();
			if (func_342() <= 3)
			{
				func_341();
			}
			func_340();
			func_338(func_339(), 0, 0, 0);
			unk_0x77B57B2BB7F3EA0A(0);
			func_337();
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_98 = 8;
			return 1;
		}
	}
	return 0;
}

void func_337()
{
	unk_0x62148293B793073B(&Global_2447128, 15);
}

void func_338(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (bParam1 && bParam2)
	{
		return;
	}
	if (bParam3)
	{
		if (!bParam1)
		{
			return;
		}
	}
	Global_2404633 = iParam0;
	if (bParam1)
	{
		Global_2404633 += 10000;
	}
	if (bParam2)
	{
		Global_2404633 += 10000;
		Global_2404633 += 20000;
	}
	if (bParam3)
	{
		Global_2404633 = (Global_2404633 + 40000);
	}
}

int func_339()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_17;
}

void func_340()
{
	unk_0xD2A9C3F486236CC5(&(Global_2447128.f_3), 4);
}

void func_341()
{
	unk_0xD2A9C3F486236CC5(&(Global_1626339[unk_0x8CFC7D6E1DA5D304() /*35*/].f_28), 12);
}

int func_342()
{
	if (func_223() == func_21())
	{
		return 0;
	}
	return func_343(func_223());
}

var func_343(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_19;
}

void func_344()
{
	Global_2447128.f_605 = 1;
}

void func_345()
{
	unk_0x62148293B793073B(&Global_2447128, 7);
}

void func_346()
{
	unk_0x62148293B793073B(&(Global_2447128.f_2), 14);
}

void func_347()
{
	unk_0xD2A9C3F486236CC5(&Global_2447128, 5);
	func_348();
}

void func_348()
{
	unk_0xD2A9C3F486236CC5(&Global_2447128, 8);
}

void func_349(var uParam0)
{
	Global_2447128.f_34 = uParam0;
}

struct<13> func_350(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(iParam0, &Var0, 13);
	return Var0;
}

int func_351(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (func_352(iVar0) && Global_262145.f_4995[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 8:
		case 14:
		case 15:
			return 1;
		
		default:
	}
	return 0;
}

void func_353(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x788C6B35BB3FCF53(unk_0xDEC40DF5CB14766D(iParam0), "MPBitset"))
	{
		iVar0 = unk_0xFE0F5B815FB9D3D1(unk_0xDEC40DF5CB14766D(iParam0), "MPBitset");
	}
	unk_0xD2A9C3F486236CC5(&iVar0, iParam1);
	unk_0x3259E4661D22EB25(unk_0xDEC40DF5CB14766D(iParam0), "MPBitset", iVar0);
}

void func_354(int iParam0)
{
	Global_2447128.f_6 = iParam0;
}

void func_355()
{
	unk_0xD2A9C3F486236CC5(&(Global_2447128.f_2), 29);
}

void func_356(char* sParam0)
{
	StringCopy(&(Global_2447128.f_746), sParam0, 24);
	if (func_357())
	{
		StringCopy(&(Global_971063.f_42), sParam0, 24);
	}
}

bool func_357()
{
	return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2809, 5);
}

int func_358(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_359(Global_262145.f_4977[iParam0]);
			break;
		
		case 1:
			return func_359(Global_262145.f_4986[iParam0]);
			break;
		
		case 2:
			return func_359(Global_262145.f_4995[iParam0]);
			break;
	}
	return -1;
}

int func_359(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1118)
	{
		if (iParam0 == Global_794708.f_98389[iVar0 /*13*/].f_1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 16;
			break;
	}
	return -1;
}

int func_361(int iParam0)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
			return func_28(3957, -1, 0);
		
		case 1:
			return func_28(5443, -1, 0);
		
		case 2:
			iVar1 = func_28(5642, -1, 0);
			iVar0 = 0;
			while (iVar0 < 16)
			{
				if (!unk_0xB03A1684359C50A1(iVar1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
			return 16;
		
		default:
	}
	return -1;
}

int func_362(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 8;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				case 1:
					return 15;
				
				default:
			}
			break;
	}
	return -1;
}

void func_363()
{
	int iVar0;
	
	iVar0 = func_364();
	if (unk_0x13C2BC1B63ABBCD5())
	{
		if (!iLocal_74 == iVar0)
		{
			iLocal_74 = iVar0;
		}
		return;
	}
	if (!Global_4265007.f_1)
	{
		if (iVar0 == 1)
		{
			Global_4265007 = 0;
			iLocal_74 = iVar0;
		}
		else if (!iLocal_74 == iVar0)
		{
			iLocal_74 = iVar0;
		}
	}
	else if (!iLocal_74 == iVar0)
	{
		iLocal_74 = iVar0;
	}
}

var func_364()
{
	return Global_4265007;
}

void func_365()
{
	if (iLocal_72 && iLocal_73)
	{
		if (unk_0xD89462DDD07112E7())
		{
			func_367(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			iLocal_72 = 0;
		}
	}
	iLocal_73 = 0;
	if (func_366())
	{
		iLocal_73 = 1;
		if (func_69(0) && !iLocal_72)
		{
			iLocal_72 = 1;
		}
	}
}

bool func_366()
{
	return Global_1824134;
}

void func_367(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x52F4DD18485E81C7())
		{
			unk_0x3B82047F26E2CEDB(0);
		}
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		uVar0 = iParam2;
		unk_0xF70DE7344EBF0825(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_63())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x4AF13BCD120BCDBC(iParam0) && unk_0x557001354138B7FB(iParam0))
		{
			iVar25 = unk_0x6604E096142B4B55(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x44243F2E2F58B8E3())
				{
					unk_0x710A8C8CDF18A4F9(1);
				}
				else if (bVar13 || (!func_373(unk_0x8CFC7D6E1DA5D304(), 0) && !func_372()))
				{
					unk_0xA12407EB7D7CF146(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x44243F2E2F58B8E3() && !bVar18)
					{
						unk_0x710A8C8CDF18A4F9(0);
					}
					Global_2422724[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_371(iVar25) && !unk_0x4AA6B5B9E27A254A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(iVar25, true, 0);
					}
				}
				if (!unk_0x4A296E47F281D02F(iVar25))
				{
					if (!bVar20)
					{
						unk_0x73D7E57BF0ED7FEB(iVar25, false);
					}
					unk_0xB05881241072FEE6(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x73D7E57BF0ED7FEB(iVar25, false);
				}
				unk_0x44EB7E24C5D75087(iVar25, true);
				unk_0x36643EAE6212D16F(iParam0, 0);
				unk_0x0ACEE7BC79EA804E(iVar25);
				unk_0xBDFA8A71B1A23D86(iVar25, 1);
				func_370();
				func_369();
				if (unk_0x1E550B6CDBC1308F())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x8BDE5BE4E46BA35F())
				{
				}
				Global_2422724[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_371(iVar25) && !unk_0x4AA6B5B9E27A254A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(iVar25, !bVar14, 0);
					}
					if (!unk_0x4A296E47F281D02F(iVar25))
					{
						if (!bVar20)
						{
							unk_0x73D7E57BF0ED7FEB(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xB05881241072FEE6(iVar25, 1);
						}
					}
					if (func_368(Global_1646129.f_138609))
					{
						unk_0x73D7E57BF0ED7FEB(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x36643EAE6212D16F(iParam0, 0);
				}
				else
				{
					unk_0x36643EAE6212D16F(iParam0, 1);
				}
				unk_0x44EB7E24C5D75087(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x570C394C1E0D8834(iVar25) && !unk_0x657B649BA2AD3582(iVar25, 0))
					{
						unk_0xD9FCA20C1C5553F7(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0xF70DE7344EBF0825(iParam0, bParam1, iVar26);
		}
	}
}

bool func_368(int iParam0)
{
	return iParam0 == 17;
}

void func_369()
{
	struct<3> Var0;
	
	Global_2436169.f_1117 = 0;
	Global_2436169.f_1118 = 0;
	Global_2436169.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436169.f_1124 = -1;
	Global_2436169.f_1125 = 0;
	Global_2405047.f_2648 = { Var0 };
}

void func_370()
{
	Global_2405047.f_674 = 0;
	Global_2405047.f_2691 = 0;
	Global_2405047.f_507 = 0;
	Global_2405047.f_586 = 0;
	Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_222 = 0;
}

int func_371(int iParam0)
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x2BBAA45ECDE3DAE2(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_372()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

bool func_373(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_374(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_374(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_30();
	}
	if (Global_1312834[iVar1] == 1)
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

void func_375()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		if (func_258(14) || func_258(15))
		{
			if (Global_2447128.f_35.f_521 != 0)
			{
				if (iLocal_87 != Global_2447128.f_35.f_521)
				{
					iLocal_87 = Global_2447128.f_35.f_521;
				}
			}
			else if (iLocal_87 != 0 && Global_2447128.f_35.f_521 == 0)
			{
				Global_2447128.f_35.f_521 = iLocal_87;
			}
		}
	}
	else if (iLocal_87 != 0)
	{
		iLocal_87 = 0;
	}
}

void func_376()
{
	struct<3> Var0;
	
	if (Global_1812592.f_4109 != -1 && func_394(&(Global_1812592.f_4109)))
	{
		if (unk_0xE7FAF8E78F7D3A73(joaat("gb_delivery")) > 0 && !iLocal_81)
		{
			if (func_230(Local_77))
			{
				Local_77 = { func_393(Global_1812592.f_4109) };
				if (func_41(unk_0x18F7BE9ACB7D08F4()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					iLocal_80 = 1;
				}
				func_4(&uLocal_83);
				iLocal_82 = 0;
				Local_85 = { func_387(unk_0x8CFC7D6E1DA5D304(), -1, 1) };
			}
			else if (iLocal_80)
			{
				if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()) && !unk_0xCCA9AC3AD0097F5A(unk_0x8CFC7D6E1DA5D304()))
				{
					if (func_41(unk_0x18F7BE9ACB7D08F4()))
					{
						Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
						if (unk_0x2A488C176D52CCA5(Local_77, Var0) < 15f)
						{
							if (unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4()) < 1f)
							{
								if (!func_7(&uLocal_83))
								{
									func_6(&uLocal_83, 0, 0);
								}
								else if (func_5(&uLocal_83, 15000, 0))
								{
									if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
									{
										unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 0);
									}
									func_367(unk_0x8CFC7D6E1DA5D304(), 1, 0);
									if (Local_85.f_1 != -1)
									{
										func_379(Local_85, (func_386(Local_85) - 1), Global_1812592.f_4109, func_384(Local_85), func_383());
									}
									iLocal_81 = 1;
									iLocal_82 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xCCA9AC3AD0097F5A(unk_0x8CFC7D6E1DA5D304()))
				{
					iLocal_81 = 1;
					iLocal_82 = 0;
				}
			}
		}
		else
		{
			Local_77 = { 0f, 0f, 0f };
			func_4(&uLocal_83);
		}
	}
	else if (iLocal_81)
	{
		if (!func_41(unk_0x18F7BE9ACB7D08F4()) || !unk_0x879BEE8D3501CA4E(unk_0x18F7BE9ACB7D08F4(), 2))
		{
			if (Local_85.f_1 != -1 && iLocal_82)
			{
				func_377(Local_85);
			}
			iLocal_81 = 0;
			iLocal_82 = 0;
		}
	}
	else
	{
		Local_77 = { 0f, 0f, 0f };
		iLocal_80 = 0;
		iLocal_81 = 0;
		iLocal_82 = 0;
		func_4(&uLocal_83);
	}
}

void func_377(struct<2> Param0)
{
	struct<3> Var0;
	int iVar4;
	
	Var0.f_2.f_1 = -1;
	Var0.f_0 = 1813893151;
	Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
	Var0.f_2 = { Param0 };
	iVar4 = func_378(1, 1);
	if (!iVar4 == 0)
	{
		unk_0xDC8B8CF2FBDF3387(1, &Var0, 4, iVar4);
	}
}

var func_378(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3479F6F64A48251C(iVar1);
		if (func_2(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x8CFC7D6E1DA5D304() || iParam0)
			{
				if (bParam1)
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
				}
				else if (!func_373(iVar2, 0))
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_379(struct<2> Param0, int iParam2, var uParam3, int iParam4, bool bParam5)
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2.f_1 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_0 = 558963687;
	Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
	Var0.f_2 = { Param0 };
	Var0.f_6 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_7 = bParam5;
	if (bParam5)
	{
		Var0.f_8 = Global_2512581.f_5855.f_4;
		Var0.f_9 = Global_2512581.f_5855.f_5;
	}
	if (func_382(unk_0x8CFC7D6E1DA5D304(), Var0.f_2))
	{
		iVar10 = func_381(1);
	}
	else
	{
		if (bParam5 && (iParam4 == 14 || iParam4 == 13))
		{
			if (func_223() != func_21())
			{
				iVar10 = func_381(0);
			}
			if (func_2(Var0.f_2, 0, 1))
			{
				unk_0xD2A9C3F486236CC5(&iVar10, Var0.f_2);
			}
		}
		else
		{
			if (func_2(Var0.f_2, 0, 1))
			{
				iVar10 = func_380(Var0.f_2);
			}
			if (func_223() != func_21())
			{
				unk_0xD2A9C3F486236CC5(&iVar10, func_223());
			}
		}
		unk_0xD2A9C3F486236CC5(&iVar10, unk_0x8CFC7D6E1DA5D304());
	}
	if (!iVar10 == 0)
	{
		unk_0xDC8B8CF2FBDF3387(1, &Var0, 10, iVar10);
	}
}

var func_380(int iParam0)
{
	var uVar0;
	
	unk_0xD2A9C3F486236CC5(&uVar0, iParam0);
	return uVar0;
}

var func_381(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_147(unk_0x8CFC7D6E1DA5D304()))
	{
		iVar2 = unk_0x8CFC7D6E1DA5D304();
	}
	else
	{
		iVar2 = func_223();
	}
	if (iVar2 == unk_0x8CFC7D6E1DA5D304() || func_2(iVar2, bParam0, 1))
	{
		unk_0xD2A9C3F486236CC5(&uVar0, iVar2);
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = iVar1;
		if ((iVar2 != iVar3 && func_382(iVar3, iVar2)) && func_2(iVar3, bParam0, 1))
		{
			unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_248(iParam0);
	if (!iVar0 == func_21())
	{
		if (iVar0 == func_248(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_383()
{
	return Global_1812592.f_4253 != -1;
}

int func_384(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419374.f_192.f_1[iVar0 /*12*/].f_1.f_1 != -1 && func_385(Global_2419374.f_192.f_1[iVar0 /*12*/].f_1, Param0))
		{
			return Global_2419374.f_192.f_1[iVar0 /*12*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

int func_385(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0.f_0 == Param2.f_0 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

int func_386(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419374.f_192.f_1[iVar0 /*12*/].f_1.f_1 != -1 && func_385(Global_2419374.f_192.f_1[iVar0 /*12*/].f_1, Param0))
		{
			return Global_2419374.f_192.f_1[iVar0 /*12*/].f_11;
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_387(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	Var0.f_1 = -1;
	if (!func_392(iParam0))
	{
		return Var0;
	}
	if ((func_2(iParam0, 0, 1) && iParam1 > -2) && iParam1 < 3)
	{
		if (iParam1 == -1)
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if ((func_391(Global_1627460[iParam0 /*530*/].f_510.f_1[iVar2 /*2*/]) && func_390(Global_1627460[iParam0 /*530*/].f_510.f_1[iVar2 /*2*/])) && (!bParam2 || !func_388(Global_1627460[iParam0 /*530*/].f_510.f_1[iVar2 /*2*/])))
				{
					return Global_1627460[iParam0 /*530*/].f_510.f_1[iVar2 /*2*/];
				}
				iVar2++;
			}
		}
		else
		{
			iVar3 = iParam1;
			if (func_391(Global_1627460[iParam0 /*530*/].f_510.f_1[iVar3 /*2*/]) && func_390(Global_1627460[iParam0 /*530*/].f_510.f_1[iVar3 /*2*/]))
			{
				return Global_1627460[iParam0 /*530*/].f_510.f_1[iVar3 /*2*/];
			}
		}
	}
	return Var0;
}

int func_388(struct<2> Param0)
{
	if (func_391(Param0))
	{
		if (func_389(Param0) == 2 || func_385(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_510.f_8, Param0))
		{
			return 1;
		}
	}
	return 0;
}

int func_389(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419374.f_192.f_1[iVar0 /*12*/].f_1.f_1 != -1 && func_385(Global_2419374.f_192.f_1[iVar0 /*12*/].f_1, Param0))
		{
			return Global_2419374.f_192.f_1[iVar0 /*12*/];
		}
		iVar0++;
	}
	return -1;
}

int func_390(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419374.f_192.f_1[iVar0 /*12*/].f_1.f_1 != -1 && func_385(Global_2419374.f_192.f_1[iVar0 /*12*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_391(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0.f_0 != func_21());
}

int func_392(int iParam0)
{
	if (iParam0 != func_21() && func_2(iParam0, 0, 1))
	{
		return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_510, 0);
	}
	return 0;
}

Vector3 func_393(int iParam0)
{
	switch (iParam0)
	{
		case 674:
			return 1272.357f, 2834.424f, 47.9951f;
		
		case 675:
			return 35.1777f, 2621.545f, 84.4465f;
		
		case 676:
			return 2755.241f, 3906.798f, 44.2074f;
		
		case 677:
			return 3388.732f, 5509.329f, 24.78f;
		
		case 678:
			return 20.3048f, 6825.069f, 14.3348f;
		
		case 679:
			return -2229.332f, 2398.65f, 11.0724f;
		
		case 680:
			return -2.7877f, 3345.063f, 40.1563f;
		
		case 681:
			return 2086.75f, 1761.963f, 102.9603f;
		
		case 682:
			return 1864.349f, 268.5328f, 162.9432f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_394(var uParam0)
{
	return (*uParam0 >= 674 && *uParam0 <= 682);
}

void func_395()
{
	if (iLocal_71)
	{
		if (unk_0xD89462DDD07112E7())
		{
			if (!unk_0xC83C302702976DCB())
			{
				func_367(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				iLocal_71 = 0;
			}
		}
	}
	if (func_366())
	{
		if (func_396())
		{
			if (!iLocal_71)
			{
				iLocal_71 = 1;
			}
		}
	}
	else if (iLocal_71)
	{
		iLocal_71 = 0;
	}
}

bool func_396()
{
	return Global_68213;
}

void func_397()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (func_399("TS_HELPALT", 4000))
		{
			unk_0xEFF1F12403847394(1);
			func_398("TS_HELP", 4000, 20000);
		}
		if (func_399("TS_HELPALT", 7000))
		{
			unk_0xEFF1F12403847394(1);
			func_398("TS_HELP", 7000, 20000);
		}
		if (func_399("TS_HELPALT", 10000))
		{
			unk_0xEFF1F12403847394(1);
			func_398("TS_HELP", 10000, 20000);
		}
	}
}

void func_398(char* sParam0, int iParam1, int iParam2)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0x3A12001DBF78DC62(iParam1);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam2);
}

bool func_399(char* sParam0, int iParam1)
{
	unk_0x24BB6189982CE7D6(sParam0);
	unk_0x3A12001DBF78DC62(iParam1);
	return unk_0xF2850FB50EE28440(0);
}

void func_400()
{
	if ((func_63() && func_11() == 0) && !Global_1312854)
	{
		if ((((unk_0xB95FCDA4D970FCF9() && func_408()) && !func_406(unk_0x8CFC7D6E1DA5D304())) || func_404()) || func_402())
		{
			if (func_401())
			{
				unk_0x583A365A2563BBAA();
			}
		}
	}
}

int func_401()
{
	int iVar0;
	
	iVar0 = joaat("player_zero");
	unk_0x9016574B77A748EE(iVar0);
	if (unk_0xEDFE27D1AEA0EA7F(iVar0))
	{
		unk_0xCE21DDFFF715B08C(unk_0x8CFC7D6E1DA5D304(), iVar0);
		unk_0xE2699CCD9CCA6181(0);
		return 1;
	}
	return 0;
}

int func_402()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4());
	iVar1 = 0;
	while (iVar1 < 28)
	{
		if (iVar0 == func_403(iVar1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("player_one");
		
		case 1:
			return joaat("player_two");
		
		case 2:
			return joaat("player_zero");
		
		case 3:
			return joaat("ig_amandatownley");
		
		case 4:
			return joaat("ig_beverly");
		
		case 5:
			return joaat("ig_brad");
		
		case 6:
			return joaat("ig_chrisformage");
		
		case 7:
			return joaat("ig_davenorton");
		
		case 8:
			return joaat("ig_devin");
		
		case 9:
			return joaat("ig_drfriedlander");
		
		case 10:
			return joaat("ig_fabien");
		
		case 11:
			return joaat("ig_floyd");
		
		case 12:
			return joaat("ig_jimmydisanto");
		
		case 13:
			return joaat("ig_lamardavis");
		
		case 14:
			return joaat("ig_lazlow");
		
		case 15:
			return joaat("ig_lestercrest");
		
		case 16:
			return joaat("ig_maude");
		
		case 17:
			return joaat("ig_mrs_thornhill");
		
		case 18:
			return joaat("ig_nervousron");
		
		case 19:
			return joaat("ig_patricia");
		
		case 20:
			return joaat("ig_siemonyetarian");
		
		case 21:
			return joaat("ig_solomon");
		
		case 22:
			return joaat("ig_stevehains");
		
		case 23:
			return joaat("ig_stretch");
		
		case 24:
			return joaat("ig_tanisha");
		
		case 25:
			return joaat("ig_taocheng");
		
		case 26:
			return joaat("ig_tracydisanto");
		
		case 27:
			return joaat("ig_wade");
		
		default:
	}
	return 0;
	return 0;
}

int func_404()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4());
	iVar1 = 0;
	while (iVar1 < 13)
	{
		if (iVar0 == func_405(iVar1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("u_m_y_hippie_01");
		
		case 1:
			return joaat("u_m_y_baygor");
		
		case 2:
			return joaat("u_m_o_finguru_01");
		
		case 3:
			return joaat("u_m_y_militarybum");
		
		case 4:
			return joaat("u_m_m_griff_01");
		
		case 5:
			return joaat("u_f_y_comjane");
		
		case 6:
			return joaat("s_m_m_strpreach_01");
		
		case 7:
			return joaat("u_m_m_jesus_01");
		
		case 8:
			return joaat("u_m_y_mani");
		
		case 9:
			return joaat("s_m_y_mime");
		
		case 10:
			return joaat("u_f_o_moviestar");
		
		case 11:
			return joaat("u_m_y_imporage");
		
		case 12:
			return joaat("u_m_y_zombie_01");
		
		default:
	}
	return 0;
	return 0;
}

int func_406(int iParam0)
{
	if (func_407(iParam0) == 146)
	{
		if (iParam0 == Global_2512581.f_4803)
		{
			return 1;
		}
	}
	return 0;
}

int func_407(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1627460[iVar0 /*530*/];
	}
	return -1;
}

int func_408()
{
	int iVar0;
	
	iVar0 = unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4());
	switch (iVar0)
	{
		case joaat("a_c_boar"):
		case joaat("a_c_cat_01"):
		case joaat("a_c_cow"):
		case joaat("a_c_coyote"):
		case joaat("a_c_deer"):
		case joaat("a_c_husky"):
		case joaat("a_c_mtlion"):
		case joaat("a_c_pig"):
		case joaat("a_c_poodle"):
		case joaat("a_c_pug"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_retriever"):
		case joaat("a_c_rottweiler"):
		case joaat("a_c_shepherd"):
		case joaat("a_c_westy"):
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
		case joaat("ig_orleans"):
			return 1;
			break;
	}
	return 0;
}

void func_409()
{
	if (Global_1824117)
	{
		Global_1817807.f_689 = 0;
		Global_1818764.f_689 = 0;
		Global_1821575.f_689 = 0;
		iLocal_70 = 1;
	}
	else if (iLocal_70)
	{
		Global_1817807.f_689 = 1;
		Global_1818764.f_689 = 1;
		Global_1821575.f_689 = 1;
		iLocal_70 = 0;
	}
}

void func_410()
{
	if (!unk_0x13C2BC1B63ABBCD5())
	{
		if (func_324())
		{
			if (func_315() == 35)
			{
				if (func_42(Global_1646129.f_116948))
				{
					if (!unk_0xB03A1684359C50A1(Global_1808664.f_2915, 17))
					{
						Global_1646129.f_116948 = 0;
					}
				}
			}
		}
	}
}

void func_411()
{
	int iVar0;
	struct<13> Var1;
	int iVar14;
	
	if (unk_0x13C2BC1B63ABBCD5())
	{
		if (func_43())
		{
			if (func_324() && func_315() == 34)
			{
				if (unk_0xEC0ECEF2AF3FDA8D() || unk_0xBC13F084F3B1B544())
				{
					unk_0x8359CF51370FC969(0);
				}
			}
			if (func_315() == 31)
			{
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (func_421(iVar0))
					{
						Var1 = { Global_2447908.f_1.f_845[iVar0 /*57*/] };
					}
					else
					{
						iVar0++;
					}
				}
				if (func_420(Var1))
				{
					iVar14 = unk_0x7370302DFEE7F45E(&Var1);
					if (iVar14 == func_21())
					{
						if (!func_7(&uLocal_75))
						{
							func_6(&uLocal_75, 0, 0);
						}
						else if (func_5(&uLocal_75, 60000, 0))
						{
							func_172(34);
							func_416(0);
							func_415(1);
							func_173(11);
							func_414(1);
							if (unk_0xEC0ECEF2AF3FDA8D() || unk_0xBC13F084F3B1B544())
							{
								unk_0x8359CF51370FC969(0);
							}
						}
					}
				}
				else if (func_7(&uLocal_75))
				{
					func_4(&uLocal_75);
				}
			}
		}
	}
	else if (func_7(&uLocal_75))
	{
		func_4(&uLocal_75);
	}
	switch (iLocal_67)
	{
		case 0:
			if (func_324() && func_43())
			{
				iLocal_67 = 1;
				func_413(&uLocal_68);
			}
			break;
		
		case 1:
			if (func_41(unk_0x18F7BE9ACB7D08F4()) && unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 344.496f, 4876.871f, -62.43793f, 355.2799f, 4865.131f, -55.78775f, 15.75f, 0, 1, 0))
			{
				iLocal_67 = 5;
				func_413(&uLocal_68);
				return;
			}
			func_412(&uLocal_68, 25000);
			break;
		
		case 5:
			if (unk_0xEC0ECEF2AF3FDA8D())
			{
				if (!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 344.496f, 4876.871f, -62.43793f, 355.2799f, 4865.131f, -55.78775f, 15.75f, 0, 1, 0))
				{
					if ((!unk_0x13C2BC1B63ABBCD5() && !func_36(unk_0x8CFC7D6E1DA5D304())) && unk_0xE7FAF8E78F7D3A73(joaat("am_mp_defunct_base")) <= 0)
					{
						unk_0x8359CF51370FC969(750);
						func_4(&uLocal_68);
						iLocal_67 = 0;
						return;
					}
				}
			}
			func_412(&uLocal_68, 45000);
			break;
	}
}

void func_412(var uParam0, int iParam1)
{
	if (func_5(uParam0, iParam1, 1))
	{
		func_4(uParam0);
		iLocal_67 = 0;
	}
}

void func_413(var uParam0)
{
	func_4(uParam0);
	func_6(uParam0, 1, 0);
}

void func_414(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_1800859.f_53), iParam0);
	Global_1800859.f_54 = 0;
}

void func_415(int iParam0)
{
	Global_1795316.f_1767 = iParam0;
}

void func_416(int iParam0)
{
	func_419();
	if (iParam0 == 0)
	{
		if (unk_0x40E364CCE009E0BA())
		{
			return;
		}
	}
	if (func_418() == 0 || unk_0xC83C302702976DCB())
	{
		func_417(1);
		unk_0x74C56BC938E3F7F3(0);
		unk_0x74C56BC938E3F7F3(0);
	}
}

void func_417(int iParam0)
{
	if (Global_1312466.f_20 != iParam0)
	{
		Global_1312466.f_20 = iParam0;
	}
}

int func_418()
{
	return Global_1312466.f_20;
}

void func_419()
{
	Global_2458319 = 1;
}

bool func_420(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xBD82AF3F842B99A5(&uParam0, 13);
}

bool func_421(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

void func_422()
{
	int iVar0;
	int iVar1;
	
	if (func_396())
	{
		if (iLocal_57 == 0)
		{
			iLocal_57 = unk_0xC6483FE5035615A1("web_browser");
			iLocal_58 = 0;
			func_4(&uLocal_59);
			iLocal_61 = -1;
			iLocal_62 = -1;
		}
		else if (!unk_0x28594E70803AF3BA(iLocal_57))
		{
			iLocal_58 = 0;
			func_4(&uLocal_59);
			iLocal_61 = -1;
			iLocal_62 = -1;
		}
		else
		{
			iVar0 = unk_0xD47560EA3608A4AE();
			iVar1 = unk_0xF4335CACA336475C();
			if (iLocal_58)
			{
				if (iLocal_61 == 28)
				{
					if (!func_7(&uLocal_59))
					{
						func_6(&uLocal_59, 0, 0);
					}
					else if (func_5(&uLocal_59, 500, 0))
					{
						func_427(iLocal_57, 0);
						func_66(&uLocal_59, 0, 0);
						iLocal_63 = func_425(6, -1);
						iLocal_64 = func_281(unk_0x8CFC7D6E1DA5D304());
						iLocal_65 = func_424(unk_0x8CFC7D6E1DA5D304());
						iLocal_66 = func_423(unk_0x8CFC7D6E1DA5D304());
					}
				}
			}
			if ((iVar0 == 28 && (iLocal_62 == 1 || iLocal_62 == 2)) && Global_70852)
			{
				if (!iLocal_58)
				{
					if (iLocal_61 != iVar0 || iLocal_62 != iVar1)
					{
						iLocal_58 = 1;
					}
				}
			}
			else if ((iVar0 == 28 && iLocal_62 == 10) && Global_70852)
			{
				if (!iLocal_58)
				{
					if (((!iLocal_63 == func_425(6, -1) || !iLocal_64 == func_281(unk_0x8CFC7D6E1DA5D304())) || !iLocal_65 == func_424(unk_0x8CFC7D6E1DA5D304())) || !iLocal_66 == func_423(unk_0x8CFC7D6E1DA5D304()))
					{
						iLocal_58 = 1;
					}
				}
			}
			else
			{
				iLocal_58 = 0;
				func_4(&uLocal_59);
			}
			iLocal_61 = iVar0;
			iLocal_62 = iVar1;
		}
	}
	else if (iLocal_57 != 0)
	{
		iLocal_58 = 0;
		func_4(&uLocal_59);
		iLocal_61 = -1;
		iLocal_62 = -1;
		unk_0xEBE532BFFE618875(&iLocal_57);
		iLocal_57 = 0;
	}
}

int func_423(int iParam0)
{
	if (iParam0 != func_21())
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_248;
	}
	return 0;
}

int func_424(int iParam0)
{
	if (iParam0 != func_21())
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_241;
	}
	return 0;
}

int func_425(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_30();
	}
	if (iParam0 == 7 && !Global_262145.f_16127)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_426(iParam0);
		if (iVar1 == 0 && func_28(5376, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1367880[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2549041[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 14)
		{
			return 0;
		}
		return Global_2548958[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_426(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

void func_427(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 3;
	iVar1 = 16;
	iVar0 = 21;
	while (iVar0 <= 31)
	{
		if (func_281(unk_0x8CFC7D6E1DA5D304()) == iVar0)
		{
			func_429(&iVar1, iVar0, iParam0);
		}
		else if (!func_428(iVar0))
		{
			func_429(&iVar1, iVar0, iParam0);
		}
		iVar0++;
	}
	unk_0x76F4FB5EFF5BDED5(iParam0, "UPDATE_TEXT");
	unk_0xE2B30EB9B14EEAB2();
}

int func_428(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_16883;
		
		case 1:
			return Global_262145.f_16895;
		
		case 3:
			return Global_262145.f_16899;
		
		case 5:
			return Global_262145.f_16887;
		
		case 4:
			return Global_262145.f_16891;
		
		case 7:
			return Global_262145.f_16884;
		
		case 6:
			return Global_262145.f_16896;
		
		case 8:
			return Global_262145.f_16900;
		
		case 10:
			return Global_262145.f_16888;
		
		case 9:
			return Global_262145.f_16892;
		
		case 12:
			return Global_262145.f_16885;
		
		case 11:
			return Global_262145.f_16897;
		
		case 13:
			return Global_262145.f_16901;
		
		case 15:
			return Global_262145.f_16889;
		
		case 14:
			return Global_262145.f_16893;
		
		case 17:
			return Global_262145.f_16886;
		
		case 16:
			return Global_262145.f_16898;
		
		case 18:
			return Global_262145.f_16902;
		
		case 20:
			return Global_262145.f_16890;
		
		case 19:
			return Global_262145.f_16894;
		
		case 21:
			return 0;
		
		case 22:
			return 0;
		
		case 23:
			return 0;
		
		case 24:
			return 0;
		
		case 25:
			return 0;
		
		case 26:
			return 0;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 0;
		
		case 30:
			return 0;
		
		case 31:
			return 0;
		
		default:
	}
	return 1;
}

void func_429(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = iParam1;
	iVar1 = func_448(iVar0);
	Var2 = { func_447(iVar1) };
	if (iVar0 == 23)
	{
		Var2 = { 19.5202f, 2968.974f, 52.0321f };
	}
	Var5 = { func_446(iVar0, 5) };
	iVar9 = func_281(unk_0x8CFC7D6E1DA5D304());
	iVar10 = func_444(iVar0);
	iVar11 = func_442(3, iVar0);
	iVar12 = func_442(4, iVar0);
	iVar13 = func_442(5, iVar0);
	iVar14 = func_442(6, iVar0);
	iVar15 = func_442(7, iVar0);
	iVar16 = func_442(8, iVar0);
	iVar17 = func_442(9, iVar0);
	iVar18 = func_442(10, iVar0);
	iVar19 = func_442(11, iVar0);
	iVar20 = -1;
	iVar21 = -1;
	iVar22 = -1;
	iVar23 = -1;
	iVar24 = -1;
	iVar25 = -1;
	iVar26 = -1;
	iVar27 = -1;
	iVar28 = -1;
	iVar29 = -1;
	if (Global_262145.f_11864)
	{
		if ((func_441(iVar0) != 0 && func_441(iVar0) > iVar10) && !func_437(iVar0))
		{
			iVar20 = iVar10;
			iVar10 = func_441(iVar0);
		}
		if ((func_434(3, iVar0) != 0 && func_434(3, iVar0) > iVar11) && !iVar9 != iVar0)
		{
			iVar21 = iVar11;
			iVar11 = func_434(3, iVar0);
		}
		if (func_434(4, iVar0) != 0 && func_434(4, iVar0) > iVar12)
		{
			iVar22 = iVar12;
			iVar12 = func_434(4, iVar0);
		}
		if (func_434(5, iVar0) != 0 && func_434(5, iVar0) > iVar13)
		{
			iVar23 = iVar13;
			iVar13 = func_434(5, iVar0);
		}
		if (func_434(6, iVar0) != 0 && func_434(6, iVar0) > iVar14)
		{
			iVar24 = iVar14;
			iVar14 = func_434(6, iVar0);
		}
		if (func_434(7, iVar0) != 0 && func_434(7, iVar0) > iVar15)
		{
			iVar25 = iVar15;
			iVar15 = func_434(7, iVar0);
		}
		if (func_434(8, iVar0) != 0 && func_434(8, iVar0) > iVar16)
		{
			iVar26 = iVar16;
			iVar16 = func_434(8, iVar0);
		}
		if (func_434(9, iVar0) != 0 && func_434(9, iVar0) > iVar17)
		{
			iVar27 = iVar17;
			iVar17 = func_434(9, iVar0);
		}
		if (func_434(10, iVar0) != 0 && func_434(10, iVar0) > iVar18)
		{
			iVar28 = iVar18;
			iVar18 = func_434(10, iVar0);
		}
		if (func_434(11, iVar0) != 0 && func_434(11, iVar0) > iVar19)
		{
			iVar29 = iVar19;
			iVar19 = func_434(11, iVar0);
		}
	}
	unk_0x76F4FB5EFF5BDED5(uParam2, "SET_DATA_SLOT");
	unk_0x22DD5585E00B80C3(*iParam0);
	unk_0x22DD5585E00B80C3(iParam1);
	func_432(func_433(iVar0));
	unk_0x22DD5585E00B80C3(2);
	unk_0x954263F3D07BEFC2(Var2.f_0);
	unk_0x954263F3D07BEFC2(Var2.f_1);
	func_430(func_431(iVar0));
	func_432(&Var5);
	func_432("");
	if (iVar10 == 0)
	{
		unk_0x22DD5585E00B80C3(0);
	}
	else
	{
		unk_0x22DD5585E00B80C3(iVar10);
	}
	if (iVar9 != iVar0)
	{
		unk_0x22DD5585E00B80C3(0);
	}
	else
	{
		unk_0x22DD5585E00B80C3(iVar11);
	}
	unk_0x22DD5585E00B80C3(iVar12);
	unk_0x22DD5585E00B80C3(iVar13);
	unk_0x22DD5585E00B80C3(iVar14);
	unk_0x22DD5585E00B80C3(iVar15);
	unk_0x22DD5585E00B80C3(iVar16);
	unk_0x22DD5585E00B80C3(iVar17);
	unk_0x22DD5585E00B80C3(iVar18);
	unk_0x22DD5585E00B80C3(iVar19);
	unk_0xE2B30EB9B14EEAB2();
	unk_0x76F4FB5EFF5BDED5(iParam2, "APPEND_OFFICE_DATA_SLOT");
	unk_0x22DD5585E00B80C3(*iParam0);
	unk_0x22DD5585E00B80C3(iVar20);
	unk_0x22DD5585E00B80C3(iVar21);
	unk_0x22DD5585E00B80C3(iVar22);
	unk_0x22DD5585E00B80C3(iVar23);
	unk_0x22DD5585E00B80C3(iVar24);
	unk_0x22DD5585E00B80C3(iVar25);
	unk_0x22DD5585E00B80C3(iVar26);
	unk_0x22DD5585E00B80C3(iVar27);
	unk_0x22DD5585E00B80C3(iVar28);
	unk_0x22DD5585E00B80C3(iVar29);
	if (func_437(iVar0))
	{
		unk_0xD6F1BD29497A51C8(1);
	}
	else
	{
		unk_0xD6F1BD29497A51C8(0);
	}
	unk_0xE2B30EB9B14EEAB2();
	*iParam0++;
}

void func_430(var uParam0)
{
	unk_0xC34A54899652DAAF(uParam0);
}

char* func_431(int iParam0)
{
	switch (iParam0)
	{
		case 21:
			return "MP_BNKR1";
			break;
		
		case 22:
			return "MP_BNKR2";
			break;
		
		case 23:
			return "MP_BNKR3";
			break;
		
		case 24:
			return "MP_BNKR4";
			break;
		
		case 25:
			return "MP_BNKR5";
			break;
		
		case 26:
			return "MP_BNKR6";
			break;
		
		case 27:
			return "MP_BNKR7";
			break;
		
		case 28:
			return "MP_BNKR9";
			break;
		
		case 29:
			return "MP_BNKR10";
			break;
		
		case 30:
			return "MP_BNKR11";
			break;
		
		case 31:
			return "MP_BNKR8";
			break;
	}
	return "";
}

void func_432(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

char* func_433(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

int func_434(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_436(iParam1);
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16758;
				
				case 2:
					return Global_262145.f_16759;
				
				case 1:
					return Global_262145.f_16760;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16761;
				
				case 2:
					return Global_262145.f_16762;
				
				case 1:
					return Global_262145.f_16763;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16764;
				
				case 2:
					return Global_262145.f_16765;
				
				case 1:
					return Global_262145.f_16766;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16767;
				
				case 2:
					return Global_262145.f_16768;
				
				case 1:
					return Global_262145.f_16769;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16770;
				
				case 2:
					return Global_262145.f_16771;
				
				case 1:
					return Global_262145.f_16772;
				
				default:
			}
			break;
		
		case 5:
			iVar1 = func_281(unk_0x8CFC7D6E1DA5D304());
			switch (iParam0)
			{
				case 0:
					return 1155000;
				
				case 2:
					return 351000;
				
				case 1:
					return 598500;
				
				case 3:
					return 175000;
				
				case 4:
					return 215000;
				
				case 5:
					return 290000;
				
				case 6:
					return 265000;
				
				case 7:
					if (func_435(1, iParam1, iVar1) == 0)
					{
						return 740000;
					}
					else
					{
						return 50000;
					}
					break;
				
				case 8:
					if (func_435(2, iParam1, iVar1) == 0)
					{
						return 845000;
					}
					else
					{
						return 105000;
					}
					break;
				
				case 9:
					return 175000;
				
				case 10:
					return 85000;
				
				case 11:
					return 120000;
			}
			break;
	}
	return 0;
}

int func_435(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0)
	{
		if (iParam1 != iParam2)
		{
			return 0;
		}
		if (func_28(5364, -1, 0) == 0)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_437(int iParam0)
{
	if (func_438())
	{
		if (iParam0 == 28 || iParam0 == 14)
		{
			return 1;
		}
	}
	return 0;
}

bool func_438()
{
	return (func_440() || func_439());
}

int func_439()
{
	switch (unk_0x155467ACA0F55705())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_440()
{
	switch (unk_0x754615490A029508())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_16739;
		
		case 1:
			return Global_262145.f_16735;
		
		case 3:
			return Global_262145.f_16731;
		
		case 5:
			return Global_262145.f_16723;
		
		case 4:
			return Global_262145.f_16727;
		
		case 7:
			return Global_262145.f_16740;
		
		case 6:
			return Global_262145.f_16736;
		
		case 8:
			return Global_262145.f_16732;
		
		case 10:
			return Global_262145.f_16724;
		
		case 9:
			return Global_262145.f_16728;
		
		case 12:
			return Global_262145.f_16741;
		
		case 11:
			return Global_262145.f_16737;
		
		case 13:
			return Global_262145.f_16733;
		
		case 15:
			return Global_262145.f_16725;
		
		case 14:
			return Global_262145.f_16729;
		
		case 17:
			return Global_262145.f_16742;
		
		case 16:
			return Global_262145.f_16738;
		
		case 18:
			return Global_262145.f_16734;
		
		case 20:
			return Global_262145.f_16726;
		
		case 19:
			return Global_262145.f_16730;
		
		case 21:
			return 2035000;
		
		case 22:
			return 2120000;
		
		case 23:
			return 1950000;
		
		case 24:
			return 2375000;
		
		case 25:
			return 2205000;
		
		case 26:
			return 2290000;
		
		case 27:
			return 1750000;
		
		case 28:
			return 1165000;
		
		case 29:
			return 1450000;
		
		case 30:
			return 1550000;
		
		case 31:
			return 1650000;
		
		default:
	}
	return 0;
}

int func_442(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	var uVar20;
	var uVar21;
	
	iVar0 = func_436(iParam1);
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16743;
				
				case 2:
					return Global_262145.f_16744;
				
				case 1:
					return Global_262145.f_16745;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16746;
				
				case 2:
					return Global_262145.f_16747;
				
				case 1:
					return Global_262145.f_16748;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16749;
				
				case 2:
					return Global_262145.f_16750;
				
				case 1:
					return Global_262145.f_16751;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16752;
				
				case 2:
					return Global_262145.f_16753;
				
				case 1:
					return Global_262145.f_16754;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16755;
				
				case 2:
					return Global_262145.f_16756;
				
				case 1:
					return Global_262145.f_16757;
				
				default:
			}
			break;
		
		case 5:
			iVar1 = func_281(unk_0x8CFC7D6E1DA5D304());
			if (unk_0x44243F2E2F58B8E3() && func_142())
			{
				iVar2 = 0;
				iVar3 = 0;
				if (iParam0 == 8)
				{
					iVar2 = 2;
					iVar3 = func_435(iVar2, iParam1, iVar1);
				}
				else if (iParam0 == 7)
				{
					iVar2 = 1;
					iVar3 = func_435(iVar2, iParam1, iVar1);
				}
				else if (iParam0 == 5 || iParam0 == 11)
				{
					iVar2 = 2;
				}
				else if ((((((iParam0 == 4 || iParam0 == 10) || iParam0 == 6) || iParam0 == 9) || iParam0 == 0) || iParam0 == 2) || iParam0 == 1)
				{
					iVar2 = 1;
				}
				func_443(&sVar4, iVar0, iParam0, iVar2, iVar3);
				uVar20 = unk_0x6E987D62C8535B6E(&sVar4);
				if (unk_0x3242E670C1BA444C(uVar20))
				{
					uVar21 = unk_0xF3106E57A8698995(uVar20, 426439576, 1);
					return uVar21;
				}
			}
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_20029;
				
				case 2:
					return Global_262145.f_20030;
				
				case 1:
					return Global_262145.f_20031;
				
				case 3:
					return Global_262145.f_20019;
				
				case 4:
					return Global_262145.f_20020;
				
				case 5:
					return Global_262145.f_20021;
				
				case 6:
					return Global_262145.f_20022;
				
				case 7:
					if (func_435(1, iParam1, iVar1) == 0)
					{
						return Global_262145.f_20023;
					}
					else
					{
						return (0 + Global_262145.f_20024);
					}
					break;
				
				case 8:
					if (func_435(2, iParam1, iVar1) == 0)
					{
						return (Global_262145.f_20023 + Global_262145.f_20025);
					}
					else
					{
						return (0 + Global_262145.f_20025);
					}
					break;
				
				case 9:
					return Global_262145.f_20026;
				
				case 10:
					return Global_262145.f_20027;
				
				case 11:
					return Global_262145.f_20028;
			}
			break;
	}
	return 0;
}

void func_443(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 5:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_EQUIP_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 1:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_STAFF_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 2:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_SEC_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 3:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 4:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 5:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 6:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_ACCOM_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 7:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_RANGE_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 8:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_RANGE_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 9:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_GNLCK_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 10:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_TRNPT_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 11:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_TRNPT_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
			}
			break;
	}
}

int func_444(int iParam0)
{
	bool bVar0;
	char* sVar1;
	var uVar17;
	var uVar18;
	char cVar19[16];
	char cVar23[16];
	
	if (unk_0x44243F2E2F58B8E3() && func_142())
	{
		bVar0 = false;
		if (func_437(iParam0))
		{
			bVar0 = true;
		}
		func_445(&sVar1, iParam0, bVar0);
		uVar17 = unk_0x6E987D62C8535B6E(&sVar1);
		if (unk_0x3242E670C1BA444C(uVar17))
		{
			uVar18 = unk_0xF3106E57A8698995(uVar17, 426439576, 1);
			StringCopy(&cVar19, func_433(iParam0), 16);
			return uVar18;
		}
		else
		{
			StringCopy(&cVar23, func_433(iParam0), 16);
		}
	}
	if (func_437(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_16719;
		
		case 1:
			return Global_262145.f_16715;
		
		case 3:
			return Global_262145.f_16711;
		
		case 5:
			return Global_262145.f_16703;
		
		case 4:
			return Global_262145.f_16707;
		
		case 7:
			return Global_262145.f_16720;
		
		case 6:
			return Global_262145.f_16716;
		
		case 8:
			return Global_262145.f_16712;
		
		case 10:
			return Global_262145.f_16704;
		
		case 9:
			return Global_262145.f_16708;
		
		case 12:
			return Global_262145.f_16721;
		
		case 11:
			return Global_262145.f_16717;
		
		case 13:
			return Global_262145.f_16713;
		
		case 15:
			return Global_262145.f_16705;
		
		case 14:
			return Global_262145.f_16709;
		
		case 17:
			return Global_262145.f_16722;
		
		case 16:
			return Global_262145.f_16718;
		
		case 18:
			return Global_262145.f_16714;
		
		case 20:
			return Global_262145.f_16706;
		
		case 19:
			return Global_262145.f_16710;
		
		case 21:
			return Global_262145.f_20012;
		
		case 22:
			return Global_262145.f_20011;
		
		case 23:
			return Global_262145.f_20013;
		
		case 24:
			return Global_262145.f_20008;
		
		case 25:
			return Global_262145.f_20010;
		
		case 26:
			return Global_262145.f_20009;
		
		case 27:
			return Global_262145.f_20014;
		
		case 28:
			return Global_262145.f_20018;
		
		case 29:
			return Global_262145.f_20017;
		
		case 30:
			return Global_262145.f_20016;
		
		case 31:
			return Global_262145.f_20015;
		
		default:
	}
	return 0;
}

void func_445(char* sParam0, int iParam1, bool bParam2)
{
	StringCopy(sParam0, "FACTORY_INDEX_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v0", 64);
	if (bParam2)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

struct<4> func_446(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	
	switch (iParam1)
	{
		case 4:
			StringCopy(&Var0, "MP_BWH_CRACK_", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "MP_BWH_WEED_", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "MP_BWH_FCASH_", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "MP_BWH_METH_", 16);
			break;
		
		case 0:
			StringCopy(&Var0, "MP_BWH_FID_", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "MP_BWH_WEA_", 16);
			break;
	}
	iVar4 = iParam0;
	if (iParam1 == 5)
	{
		iVar4 = (iVar4 - 21);
		StringIntConCat(&Var0, iVar4, 16);
	}
	else
	{
		StringIntConCat(&Var0, unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar4) / 5f)), 16);
	}
	StringConCat(&Var0, "D", 16);
	return Var0;
}

Vector3 func_447(int iParam0)
{
	switch (iParam0)
	{
		case 70:
			return 492.8395f, 3014.057f, 39.9793f;
		
		case 71:
			return 849.603f, 3021.697f, 40.3076f;
		
		case 72:
			return 39.5967f, 2930.506f, 54.8034f;
		
		case 73:
			return 1572.078f, 2226.001f, 77.2829f;
		
		case 74:
			return 2110.019f, 3326.12f, 44.3526f;
		
		case 75:
			return 2489.36f, 3162.12f, 48.0015f;
		
		case 76:
			return 1801.273f, 4705.483f, 38.8253f;
		
		case 77:
			return -763.3162f, 5941.412f, 19.2857f;
		
		case 78:
			return -387.287f, 4334.919f, 54.7422f;
		
		case joaat("mpsv_lp0_31"):
			return -3032.704f, 3334.692f, 9.2599f;
		
		case 80:
			return -3157.599f, 1376.695f, 15.866f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_448(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_449(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case joaat("mpsv_lp0_31"):
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

void func_450()
{
	var uVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[1];
	int iVar7;
	
	if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (!unk_0x13C2BC1B63ABBCD5())
		{
			unk_0xC4E133D43C01E0DF(unk_0x18F7BE9ACB7D08F4(), &uVar0);
			iVar3 = 0;
			while (iVar3 < 32)
			{
				iVar2 = unk_0x3479F6F64A48251C(iVar3);
				if (unk_0x31F12808DC47A9E5(uVar0[0]) && unk_0x978B4E1292EBBE41(uVar0[0]))
				{
					if (!unk_0x74C2FE037DFC8B4A(uVar0[0], 0))
					{
						if (func_460(uVar0[0], 1))
						{
							if (func_458(func_459(uVar0[0], iVar2), uVar0[0], iVar2))
							{
								if (unk_0x1CCD1F099AF178B8(unk_0x18F7BE9ACB7D08F4()) == uVar0[0])
								{
									unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
								}
								if (unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4()) == uVar0[0])
								{
									unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 16);
								}
								unk_0x9C7EE7DE7041A3F4(0, 23, 1);
							}
							func_456(uVar0[0], iVar2);
						}
					}
				}
				if (func_114(unk_0x8CFC7D6E1DA5D304()))
				{
					if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 506.9767f, 4750.366f, -69.99597f, 509.3737f, 4750.375f, -67.49597f, 2.75f, 0, 1, 0))
					{
						if (!func_455(iVar2))
						{
							if (!func_240())
							{
								func_239(1);
								iLocal_55 = 1;
							}
						}
						else if (iLocal_55)
						{
							func_239(0);
							iLocal_55 = 0;
						}
					}
					else if (iLocal_55)
					{
						func_239(0);
						iLocal_55 = 0;
					}
				}
				else if (iLocal_55)
				{
					func_239(0);
					iLocal_55 = 0;
				}
				iVar3++;
			}
		}
		else
		{
			iVar7 = 0;
			while (iVar7 < 32)
			{
				iVar4 = unk_0x3479F6F64A48251C(iVar7);
				unk_0xC4E133D43C01E0DF(unk_0x18F7BE9ACB7D08F4(), &uVar5);
				if (unk_0x31F12808DC47A9E5(uVar5[0]) && unk_0x978B4E1292EBBE41(uVar5[0]))
				{
					if (!unk_0x74C2FE037DFC8B4A(uVar5[0], 0))
					{
						if (unk_0x23E808B211571A22("Creator_Trailer", 3))
						{
							if (unk_0x0665EB554F07889E(uVar5[0], joaat("avenger")))
							{
								if (func_453(func_454(uVar5[0], iVar4), uVar5[0], iVar4))
								{
									if (unk_0x1CCD1F099AF178B8(unk_0x18F7BE9ACB7D08F4()) == uVar5[0])
									{
										unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
									}
									if (unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4()) == uVar5[0])
									{
										unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 16);
									}
									unk_0x9C7EE7DE7041A3F4(0, 23, 1);
								}
								func_456(uVar5[0], iVar4);
							}
						}
					}
				}
				if (func_452(unk_0x8CFC7D6E1DA5D304()))
				{
					if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 506.9767f, 4750.366f, -69.99597f, 509.3737f, 4750.375f, -67.49597f, 2.75f, 0, 1, 0))
					{
						if (!func_451(iVar4))
						{
							if (!func_240())
							{
								func_239(1);
								iLocal_55 = 1;
							}
						}
						else if (iLocal_55)
						{
							func_239(0);
							iLocal_55 = 0;
						}
					}
					else if (iLocal_55)
					{
						func_239(0);
						iLocal_55 = 0;
					}
				}
				else if (iLocal_55)
				{
					func_239(0);
					iLocal_55 = 0;
				}
				iVar7++;
			}
		}
	}
	else
	{
		if (iLocal_55)
		{
			func_239(0);
			iLocal_55 = 0;
		}
		if (iLocal_56)
		{
			Global_2492192 = 0;
			iLocal_56 = 0;
		}
	}
}

int func_451(int iParam0)
{
	if (func_2(iParam0, 1, 1) && iParam0 != unk_0x8CFC7D6E1DA5D304())
	{
		if (!func_36(iParam0))
		{
			if (unk_0x31F12808DC47A9E5(Global_2512581.f_295))
			{
				if (unk_0x9EA0BBD07AFF816B(unk_0x6604E096142B4B55(iParam0)) == Global_2512581.f_295 || unk_0x1CCD1F099AF178B8(unk_0x6604E096142B4B55(iParam0)) == Global_2512581.f_295)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_452(int iParam0)
{
	if (iParam0 != func_21())
	{
		if (func_2(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_23(Global_2422724[iParam0 /*420*/].f_324.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_453(int iParam0, int iParam1, int iParam2)
{
	if (func_2(iParam2, 1, 1))
	{
		if (iParam2 != unk_0x8CFC7D6E1DA5D304() && !func_452(unk_0x8CFC7D6E1DA5D304()))
		{
			if (func_452(iParam2))
			{
				if ((unk_0xB03A1684359C50A1(Global_1595681[iParam2 /*678*/].f_266.f_255, 24) || unk_0x2BBAA45ECDE3DAE2(unk_0x6604E096142B4B55(iParam2), -1794415470) == 0) || unk_0x2BBAA45ECDE3DAE2(unk_0x6604E096142B4B55(iParam2), -1794415470) == 1)
				{
					if (Global_2422724[iParam2 /*420*/].f_324.f_4 != func_21())
					{
						if (Global_2422724[iParam2 /*420*/].f_324.f_4 == iParam0)
						{
							return 1;
						}
					}
				}
			}
			else if (unk_0x31F12808DC47A9E5(iParam1) && !unk_0x74C2FE037DFC8B4A(iParam1, 0))
			{
				if (unk_0x88B79D32B518C327(unk_0x6604E096142B4B55(iParam2), iParam1, 0))
				{
					if ((((unk_0xB03A1684359C50A1(Global_1595681[iParam2 /*678*/].f_266.f_255, 30) || unk_0xB03A1684359C50A1(Global_1595681[iParam2 /*678*/].f_266.f_255, 24)) || unk_0x2BBAA45ECDE3DAE2(unk_0x6604E096142B4B55(iParam2), 355471868) == 0) || unk_0x2BBAA45ECDE3DAE2(unk_0x6604E096142B4B55(iParam2), 355471868) == 1) || unk_0xE0D2CEF7DC916792(unk_0x6604E096142B4B55(iParam2), 373))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_454(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0x23E808B211571A22("Creator_Trailer", 3))
		{
			if (unk_0x788C6B35BB3FCF53(iParam0, "Creator_Trailer"))
			{
				iVar0 = unk_0xFE0F5B815FB9D3D1(iParam0, "Creator_Trailer");
				return func_72(iVar0, 0, 0, iParam1);
			}
		}
	}
	return func_21();
}

int func_455(int iParam0)
{
	if (func_2(iParam0, 1, 1) && iParam0 != unk_0x8CFC7D6E1DA5D304())
	{
		if (!func_36(iParam0))
		{
			if (unk_0x31F12808DC47A9E5(Global_1350813))
			{
				if (unk_0x9EA0BBD07AFF816B(unk_0x6604E096142B4B55(iParam0)) == Global_1350813 || unk_0x1CCD1F099AF178B8(unk_0x6604E096142B4B55(iParam0)) == Global_1350813)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_456(int iParam0, int iParam1)
{
	if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iParam0, 0))
	{
		if (func_457(iParam0, iParam1))
		{
			Global_2492192 = 1;
			iLocal_56 = 1;
		}
		else if (iLocal_56)
		{
			Global_2492192 = 0;
			iLocal_56 = 0;
		}
	}
	else if (iLocal_56)
	{
		Global_2492192 = 0;
		iLocal_56 = 0;
	}
}

int func_457(int iParam0, int iParam1)
{
	if (func_2(iParam1, 1, 1))
	{
		if (!func_36(iParam1))
		{
			if (unk_0x9EA0BBD07AFF816B(unk_0x6604E096142B4B55(iParam1)) == iParam0 || unk_0x1CCD1F099AF178B8(unk_0x6604E096142B4B55(iParam1)) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_458(int iParam0, int iParam1, int iParam2)
{
	if (func_2(iParam2, 1, 1))
	{
		if (iParam2 != unk_0x8CFC7D6E1DA5D304() && !func_114(unk_0x8CFC7D6E1DA5D304()))
		{
			if (func_114(iParam2))
			{
				if ((unk_0xB03A1684359C50A1(Global_1595681[iParam2 /*678*/].f_266.f_255, 24) || unk_0x2BBAA45ECDE3DAE2(unk_0x6604E096142B4B55(iParam2), -1794415470) == 0) || unk_0x2BBAA45ECDE3DAE2(unk_0x6604E096142B4B55(iParam2), -1794415470) == 1)
				{
					if (Global_2422724[iParam2 /*420*/].f_324.f_4 != func_21())
					{
						if (Global_2422724[iParam2 /*420*/].f_324.f_4 == iParam0)
						{
							return 1;
						}
					}
				}
			}
			else if (unk_0x31F12808DC47A9E5(iParam1) && !unk_0x74C2FE037DFC8B4A(iParam1, 0))
			{
				if (unk_0x88B79D32B518C327(unk_0x6604E096142B4B55(iParam2), iParam1, 0))
				{
					if ((((unk_0xB03A1684359C50A1(Global_1595681[iParam2 /*678*/].f_266.f_255, 30) || unk_0xB03A1684359C50A1(Global_1595681[iParam2 /*678*/].f_266.f_255, 24)) || unk_0x2BBAA45ECDE3DAE2(unk_0x6604E096142B4B55(iParam2), 355471868) == 0) || unk_0x2BBAA45ECDE3DAE2(unk_0x6604E096142B4B55(iParam2), 355471868) == 1) || unk_0xE0D2CEF7DC916792(unk_0x6604E096142B4B55(iParam2), 373))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_459(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!func_460(iParam0, 1))
	{
		return func_21();
	}
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar0 = unk_0xFE0F5B815FB9D3D1(iParam0, "Player_Avenger");
		return func_72(iVar0, 0, 0, iParam1);
	}
	return func_21();
}

int func_460(int iParam0, bool bParam1)
{
	if (Global_70852)
	{
		if (unk_0x31F12808DC47A9E5(iParam0) && (!bParam1 || unk_0xC4B84EB67F78C1F0(iParam0, 0)))
		{
			if (unk_0x788C6B35BB3FCF53(iParam0, "Player_Avenger"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_461()
{
	if (!iLocal_53)
	{
		if (func_22(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!unk_0xC4C5E5A7D6CF16CC("Prop_x17DLC_Monitor_Wall_01a"))
			{
				unk_0x04E46F978DBA89A5("Prop_x17DLC_Monitor_Wall_01a", 0);
				unk_0xE4D6B173230EC834(joaat("xm_prop_x17dlc_monitor_wall_01a"));
				iLocal_54 = unk_0x342E43BC5418FEA4("Prop_x17DLC_Monitor_Wall_01a");
				iLocal_53 = 1;
			}
		}
	}
	else if (!func_22(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0xE6A3D06B88B7827C("Prop_x17DLC_Monitor_Wall_01a");
		iLocal_53 = 0;
		iLocal_54 = -1;
	}
	if (Global_1817807.f_704 == -1 && iLocal_54 != -1)
	{
		Global_1817807.f_704 = iLocal_54;
	}
}

void func_462()
{
	var uVar0;
	
	if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (func_463(uVar0))
			{
				if (unk_0xBF0517F7142EEB5B(uVar0))
				{
					iLocal_52 = 1;
				}
			}
			else if (iLocal_52)
			{
				if (!unk_0xBF0517F7142EEB5B(iVar0))
				{
					if (unk_0x1800B99666D25740(iVar0))
					{
						unk_0xA12407EB7D7CF146(iVar0, true, 0);
					}
				}
				iLocal_52 = 0;
			}
		}
		else if (iLocal_52)
		{
			iLocal_52 = 0;
		}
	}
	else if (iLocal_52)
	{
		iLocal_52 = 0;
	}
}

int func_463(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4A296E47F281D02F(uParam0))
	{
		iVar0 = unk_0xBCC760ED4FC15D87(iParam0);
		if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iVar0, 0))
		{
			iVar1 = unk_0x00ABCA0241A97143(iVar0);
			if (func_464(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_464(int iParam0)
{
	return (((unk_0x4F69FBD64CDF125B(iParam0) == joaat("cargobob") || unk_0x4F69FBD64CDF125B(iParam0) == joaat("cargobob2")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("cargobob3")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("cargobob4"));
}

void func_465()
{
	struct<3> Var0;
	var uVar3[50];
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_468(&(Global_1808664.f_2495), 0) && func_41(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_100(unk_0x8CFC7D6E1DA5D304()) && func_467(unk_0x8CFC7D6E1DA5D304()) == 97)
		{
			Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			if (Var0.f_2 < -57f)
			{
				iVar54 = unk_0x74A7D93DBA7322F5(unk_0x18F7BE9ACB7D08F4(), &uVar3, -1);
				if (iVar54 > 0)
				{
					iVar55 = 0;
					while (iVar55 < iVar54)
					{
						if (unk_0x31F12808DC47A9E5(uVar3[iVar55]))
						{
							if (unk_0x4F69FBD64CDF125B(uVar3[iVar55]) == joaat("mp_m_freemode_01") || unk_0x4F69FBD64CDF125B(uVar3[iVar55]) == joaat("mp_f_freemode_01"))
							{
								if ((!unk_0xEE1E09882FA264CA(uVar3[iVar55]) && func_41(uVar3[iVar55])) && unk_0xAA105CEB513D802A(uVar3[iVar55]))
								{
									unk_0xB05E48165A6F6058(uVar3[iVar55], 151, 1);
									if (unk_0x00C9F17EF169BFC9(uVar3[iVar55]))
									{
										if (!func_466(uVar3[iVar55]))
										{
											unk_0x1DCD07B7EA2DDAFE(uVar3[iVar55], joaat("MotionState_Idle"), 0, 0, 0);
											unk_0x277F581982E2DD7D(uVar3[iVar55], "WORLD_HUMAN_GUARD_STAND", 0, 0);
											unk_0x8F2E6C470A0005D4(uVar3[iVar55], 0, 0);
											iLocal_19[iLocal_50] = uVar3[iVar55];
											iLocal_50++;
											if (iLocal_50 >= 30)
											{
												iLocal_50 = 0;
											}
										}
									}
								}
							}
						}
						iVar55++;
					}
				}
			}
		}
	}
	else if (iLocal_50 > 0)
	{
		iLocal_50 = 0;
		iLocal_51 = 0;
	}
	if (!iLocal_51)
	{
		iVar56 = 0;
		while (iVar56 < iLocal_19)
		{
			iLocal_19[iVar56] = 0;
			iVar56++;
		}
		iLocal_51 = 1;
	}
}

int func_466(int iParam0)
{
	int iVar0;
	
	if (iLocal_50 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if (iLocal_19[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_467(int iParam0)
{
	if (iParam0 != func_21() && func_2(iParam0, 1, 1))
	{
		return Global_2422724[iParam0 /*420*/].f_324.f_12;
	}
	return -1;
}

bool func_468(var uParam0, int iParam1)
{
	return (uParam0->f_382 == iParam1 && unk_0xB03A1684359C50A1(uParam0->f_379, iParam1));
}

void func_469()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x6604E096142B4B55(unk_0x8CFC7D6E1DA5D304());
	if (!unk_0x74C2FE037DFC8B4A(iVar1, 0))
	{
		if (unk_0x1A7B277A2CBA7ADF(iVar1))
		{
			iVar2 = unk_0x5AD687C3474F04B4(iVar1, 0);
			if (!unk_0x74C2FE037DFC8B4A(iVar2, 0))
			{
				if (unk_0x4F69FBD64CDF125B(iVar2) == joaat("akula"))
				{
					iVar0 = unk_0x4983F8C51A0C0AF3(iVar2, 0, 0);
					if (iVar0 == unk_0x18F7BE9ACB7D08F4())
					{
						if (unk_0x2BBAA45ECDE3DAE2(iVar0, 355471868) == 1)
						{
							unk_0xFDBDFC454E44A5BF(iVar0, iVar2, -1, 0, 1073741824, 1, 0);
							Global_1316738 = 1;
						}
					}
				}
			}
		}
	}
}

void func_470()
{
	if (func_22(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (func_70(unk_0x18F7BE9ACB7D08F4(), 0) == -1)
			{
				if (unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("avenger")))
				{
					func_472(42, 1);
					iLocal_18 = 1;
				}
			}
		}
		else if (iLocal_18)
		{
			func_471();
			iLocal_18 = 0;
		}
	}
	else if (iLocal_18)
	{
		func_471();
		iLocal_18 = 0;
	}
}

void func_471()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_94365)
	{
		Global_94365[iVar0] = 0;
		iVar0++;
	}
}

void func_472(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_94365[(iParam0 / 32)]), (iParam0 % 32));
	}
	else
	{
		unk_0x62148293B793073B(&(Global_94365[(iParam0 / 32)]), (iParam0 % 32));
	}
}

void func_473()
{
	int iVar0;
	
	if (unk_0x13C2BC1B63ABBCD5())
	{
		if (func_258(14))
		{
			if (!unk_0xFAFFA408239A026B(&(Global_1646129.f_117241[0 /*6*/])) && unk_0x9D39145AD645E383(&(Global_1646129.f_117241[0 /*6*/]), "DUktNT1BcESgZn5_IQDcVQ"))
			{
				StringCopy(&(Global_1646129.f_117241[0 /*6*/]), "NgoyFjgEfEKpavBYi7CzPw", 24);
			}
			if (func_474(unk_0x8CFC7D6E1DA5D304()))
			{
				if (!func_373(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					unk_0x72257312E2429BB1(unk_0x8CFC7D6E1DA5D304(), 8);
					Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211 = 8;
					iVar0 = func_30();
					if (iVar0 != -1)
					{
						if (Global_1312730[iVar0] != 8)
						{
							Global_1312730[iVar0] = 8;
						}
						if (!Global_1312834[iVar0])
						{
							Global_1312834[iVar0] = 1;
						}
					}
				}
			}
			if (iLocal_16 == -1 && Global_786546 != 0)
			{
				iLocal_16 = Global_786546;
			}
			if (iLocal_17 == -1 && Global_786546.f_1 != 0)
			{
				iLocal_17 = Global_786546.f_1;
			}
		}
		else if (func_258(15))
		{
			if (iLocal_16 != -1 && Global_786546 == 0)
			{
				Global_786546 = iLocal_16;
				Global_786481.f_43 = iLocal_16;
				iLocal_16 = -1;
			}
			if (iLocal_17 != -1 && Global_786546.f_1 == 0)
			{
				Global_786546.f_1 = iLocal_17;
				Global_786481.f_44 = iLocal_17;
				iLocal_17 = -1;
			}
		}
	}
	else
	{
		if (iLocal_16 != -1)
		{
			iLocal_16 = -1;
		}
		if (iLocal_17 != -1)
		{
			iLocal_17 = -1;
		}
	}
}

bool func_474(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_39.f_18, 14);
}

void func_475()
{
	if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (func_477() || func_476())
		{
			if (!iLocal_15)
			{
				if (unk_0xEC0ECEF2AF3FDA8D())
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 16);
					}
					else
					{
						unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
						iLocal_15 = 1;
					}
				}
			}
		}
		else if (iLocal_15)
		{
			iLocal_15 = 0;
		}
	}
	else
	{
		iLocal_15 = 0;
	}
}

bool func_476()
{
	return unk_0xB03A1684359C50A1(Global_1808664.f_2915, 18);
}

int func_477()
{
	if (unk_0x8CFC7D6E1DA5D304() != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_247, 2);
	}
	return 0;
}

void func_478()
{
	if (func_479(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_366())
		{
			func_331(0);
		}
	}
}

int func_479(int iParam0)
{
	if (iParam0 != func_21())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324.f_10, 31);
	}
	return 0;
}

void func_480()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_481(4))
	{
		StringCopy(&cLocal_11, "", 16);
		return;
	}
	if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		StringCopy(&cLocal_11, "", 16);
		return;
	}
	iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
	if (unk_0x31F12808DC47A9E5(iVar0) && unk_0x4F69FBD64CDF125B(iVar0) == joaat("autarch"))
	{
		if (!unk_0x9D39145AD645E383(&cLocal_11, &(Global_17301.f_1)))
		{
			iVar2 = -1;
			iVar1 = 0;
			while (iVar1 < Global_17301.f_5088)
			{
				if (!unk_0xFAFFA408239A026B(&(Global_17301.f_73[iVar1 /*6*/])))
				{
				}
				if ((iVar2 == -1 && unk_0x9D39145AD645E383(&(Global_17301.f_1), "CMOD_COL0_T")) && unk_0x9D39145AD645E383(&(Global_17301.f_73[iVar1 /*6*/]), "CMOD_COL0_3"))
				{
					iVar2 = iVar1;
				}
				iVar1++;
			}
			if (iVar2 != -1)
			{
				func_472(5, 1);
			}
			else
			{
				func_472(5, 0);
			}
		}
		cLocal_11 = { Global_17301.f_1 };
	}
	else
	{
		StringCopy(&cLocal_11, "", 16);
	}
}

int func_481(int iParam0)
{
	int iVar0;
	
	if (func_332())
	{
		iVar0 = 0;
		while (iVar0 < 48)
		{
			if (func_485(iVar0) == iParam0)
			{
				if (func_482(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_482(int iParam0)
{
	return func_483(iParam0, 6, 1);
}

int func_483(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB03A1684359C50A1(Global_92881.f_1322[iParam0], iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_11() == 0)
		{
			return unk_0xB03A1684359C50A1(func_28(func_484(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7011;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7870;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

void func_486()
{
	int iVar0;
	
	iVar0 = func_214();
	if (!iVar0 == -1)
	{
		if (Global_1320309[iVar0 /*140*/].f_102 == -999)
		{
			if (!func_105(36))
			{
				func_213(36);
				Global_1320309[iVar0 /*140*/].f_102 = -1000;
			}
		}
	}
}

void func_487()
{
	if (func_2(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (func_488())
		{
			if (unk_0x269AFAE1B755444D(unk_0x18F7BE9ACB7D08F4()) == joaat("bunker_bigbit"))
			{
				if (unk_0xC8AB6A5E6C1E6613() || unk_0x610450B2545892B5())
				{
					if (!iLocal_10)
					{
						if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
						{
							if (func_70(unk_0x18F7BE9ACB7D08F4(), 0) == -1)
							{
								unk_0x73D7E57BF0ED7FEB(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), false);
								func_217(0);
								unk_0x3FD6A16249380C92(unk_0x18F7BE9ACB7D08F4(), 1, 1);
								iLocal_10 = 1;
							}
						}
					}
				}
			}
		}
		else if (iLocal_10)
		{
			iLocal_10 = 0;
		}
	}
}

bool func_488()
{
	return unk_0xB03A1684359C50A1(Global_1808664, 17);
}

void func_489()
{
	if (func_22(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("riot2")))
			{
				if (unk_0x9D39145AD645E383(&(Global_17301.f_4562), "CMOD_MOD_19_D"))
				{
					StringCopy(&(Global_17301.f_4562), "CMOD_WATER_N", 16);
				}
			}
		}
	}
}

void func_490()
{
	if (Global_1573345.f_106[1] != -1 && Global_1573345.f_106[1] != unk_0x8CFC7D6E1DA5D304())
	{
		Global_2492266 = 2147483647;
	}
	else
	{
		Global_2492266 = 0;
	}
}

void func_491()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (Global_2512581.f_272 != 0)
		{
			func_492();
		}
	}
}

void func_492()
{
	Global_2512581.f_272 = 0;
	Global_2512581.f_273 = 0;
	Global_2512581.f_274 = 0;
}

void func_493()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1574143)
		{
			iVar0 = func_290(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_9294 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1574143)
	{
		iLocal_4 = 0;
	}
}

void func_494()
{
	if (!iLocal_3)
	{
		if (Global_1574143)
		{
			if (func_496() || func_495())
			{
				Global_262145.f_18802 = 1;
			}
			else
			{
				Global_262145.f_18802 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1574143)
	{
		iLocal_3 = 0;
	}
}

int func_495()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_290(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_9403)
	{
		return 0;
	}
	uVar1[0] = func_290(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_290(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_290(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_290(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_9399 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_9403)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_496()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_290(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_9402)
	{
		return 0;
	}
	uVar1[0] = func_290(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_290(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_290(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_290(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_9398 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_9402)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_497()
{
	int iVar0;
	
	if (unk_0xC339C5C5B5E8BC5B())
	{
		iVar0 = 0;
		while (iVar0 < Global_1595681)
		{
			unk_0xD2A9C3F486236CC5(&(Global_1595681[iVar0 /*678*/].f_563), 1);
			iVar0++;
		}
	}
}

void func_498()
{
	if (Global_262145.f_9378 != 120)
	{
		Global_262145.f_9378 = 120;
	}
}

void func_499()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar0 = unk_0xD8DDA9403FAEDB57(1, iVar1);
		switch (iVar0)
		{
			case 204:
				func_502(iVar1);
				break;
			
			case 171:
				func_500(iVar1);
				break;
		}
		iVar1++;
	}
}

void func_500(int iParam0)
{
	int iVar0;
	
	unk_0xF6A7C6FEAD04F4B3(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -553012712:
			if (!Global_1371396.f_64 && unk_0xC339C5C5B5E8BC5B())
			{
				func_501(iParam0);
			}
			break;
	}
}

void func_501(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, uParam0, &Var0, 22))
	{
		if (!unk_0xB03A1684359C50A1(iLocal_126, Var0.f_1))
		{
			unk_0xD2A9C3F486236CC5(&iLocal_126, Var0.f_1);
		}
		else if (!iLocal_127)
		{
			iLocal_127 = 1;
		}
	}
}

void func_502(int iParam0)
{
	int iVar0;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &iVar0, 15))
	{
		switch (iVar0)
		{
			case 18:
				if (!unk_0x13C2BC1B63ABBCD5())
				{
					iLocal_92 = 1;
				}
				break;
			}
	}
}

void func_503()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0x3479F6F64A48251C(iVar1);
		if (iVar0 != func_21() && func_2(iVar0, 0, 1))
		{
			if (Global_1573345.f_4[iVar0 /*3*/] && unk_0xC339C5C5B5E8BC5B())
			{
				if (!unk_0xB03A1684359C50A1(iLocal_125, iVar1))
				{
					unk_0xD2A9C3F486236CC5(&iLocal_125, iVar1);
					unk_0x62148293B793073B(&iLocal_126, iVar1);
					iLocal_127 = 0;
				}
			}
			else if (unk_0xB03A1684359C50A1(iLocal_125, iVar1))
			{
				unk_0x62148293B793073B(&iLocal_125, iVar1);
			}
		}
		else if (unk_0xB03A1684359C50A1(iLocal_125, iVar1))
		{
			unk_0x62148293B793073B(&iLocal_125, iVar1);
		}
		iVar1++;
	}
}

void func_504()
{
	if (!unk_0xC339C5C5B5E8BC5B())
	{
		return;
	}
	if (iLocal_125 == 0)
	{
		func_505();
		if (iLocal_126 != 0)
		{
			iLocal_126 = 0;
		}
		if (iLocal_127)
		{
			iLocal_127 = 0;
		}
	}
	else
	{
		if (iLocal_127)
		{
			func_505();
			return;
		}
		func_17();
	}
}

void func_505()
{
	if (!Global_1371396.f_64)
	{
		Global_1371396.f_64 = 1;
	}
}

void func_506(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0xD74B746610C55548(sParam2);
	unk_0x6F8D47F40E94DBED(sParam3);
	unk_0x5D7608D88BED248F(fParam0, fParam1, 0);
}

void func_507()
{
	if (!bLocal_1)
	{
		if (unk_0xC83C302702976DCB())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0xFC0C00F9DE2AEC93(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0xFC0C00F9DE2AEC93(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0xFC0C00F9DE2AEC93(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0xFC0C00F9DE2AEC93(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0xFC0C00F9DE2AEC93(2, 188))
					{
						bLocal_1 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xC83C302702976DCB())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0xFC0C00F9DE2AEC93(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0xFC0C00F9DE2AEC93(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0xFC0C00F9DE2AEC93(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0xFC0C00F9DE2AEC93(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0xFC0C00F9DE2AEC93(2, 189))
				{
					bLocal_1 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

bool func_508()
{
	return unk_0x5E02CD27DBE77D67(-1762644250);
}

