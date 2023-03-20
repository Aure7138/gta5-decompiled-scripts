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
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	float fLocal_114 = 0f;
	var uLocal_115 = 0;
	struct<6> Local_116 = { 0, 0, 0, 0, 0, -1 } ;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 3;
	var uLocal_125 = 17;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 17;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 17;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 3;
	var uLocal_180 = 17;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 17;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 17;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	var uLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
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
	sLocal_20 = "NULL";
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	fLocal_114 = 0.5f;
	if (unk_0x2170E7BC25114A22(2))
	{
		func_32();
	}
	unk_0x68A99AC5778ED123("FMMC", 2);
	unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
	iLocal_237 = Global_1632166.f_2;
	func_16(1, iLocal_237 != 6, 1);
	Global_1312435 = 0;
	Local_116.f_5 = Global_1632166;
	Global_1312366 = 0;
	Global_1312436 = 0;
	iLocal_236 = Global_1632166;
	if (Global_1632166 == 0)
	{
		Global_1632166.f_2 = iLocal_237;
	}
	Global_1738420 = 0;
	while (true)
	{
		if (iLocal_236 != Global_1632166)
		{
			func_15(&Local_116);
			iLocal_236 = Global_1632166;
			unk_0x4EA098C870B73AB7(&(Local_116.f_4), 0);
		}
		if (func_14() == 3)
		{
			func_32();
		}
		if (func_13())
		{
			func_32();
		}
		unk_0x4EDE34FBADD967A6(0);
		switch (iLocal_234)
		{
			case 0:
				unk_0x68A99AC5778ED123("FMMC", 2);
				if (unk_0xA4B9C538A4CD7B0F("FMMC", 2))
				{
					iLocal_234 = 1;
				}
				break;
			
			case 1:
				if (Local_116.f_5 != Global_1632166)
				{
					Local_116.f_5 = Global_1632166;
					func_16(1, 1, 1);
					func_15(&Local_116);
				}
				unk_0x656B4AD30BCEC831();
				func_12(&Local_116);
				Global_1738421 = 0;
				Global_1738420 = 0;
				iLocal_234 = 4;
				if (!func_11())
				{
					func_10();
				}
				break;
			
			case 4:
				if (func_9())
				{
					if ((Global_1632166.f_2 != 6 && Global_1632166 != 4) && Global_1632166.f_2 != 5)
					{
						if (func_8(&uLocal_235))
						{
							iLocal_234 = 2;
						}
					}
					else if (Global_1632166.f_2 == 5)
					{
						if (func_7(&uLocal_235))
						{
							iLocal_234 = 2;
						}
					}
					else if (func_6(&uLocal_235))
					{
						iLocal_234 = 2;
					}
				}
				else if (Global_1632166 == 1)
				{
					if (func_5(&uLocal_235))
					{
						iLocal_234 = 2;
					}
				}
				else if (func_4())
				{
					if (func_2(&uLocal_235))
					{
						iLocal_234 = 2;
					}
				}
				if (Global_1738420 == 1)
				{
					iLocal_234 = 3;
					Global_1738420 = 0;
				}
				break;
			
			case 3:
				if (unk_0x3CEEA45E4779F6BD(2, 217))
				{
					iLocal_234 = 1;
				}
				break;
			
			case 2:
				iLocal_234 = 1;
				break;
			
			case 5:
				func_12(&Local_116);
				break;
			
			case 8:
				func_32();
				break;
		}
		if (Global_1312436)
		{
			Global_1312436 = 0;
			func_32();
		}
		if (func_1())
		{
			Global_1312436 = 0;
			func_32();
		}
		if (Global_1632166.f_85932)
		{
			func_32();
		}
		if (Global_1312437)
		{
			func_32();
		}
	}
}

bool func_1()
{
	return Global_1312366;
}

int func_2(var uParam0)
{
	if (!unk_0xF44A5E894FE76438(*uParam0, 2))
	{
		unk_0x7FC35FCC666F974E("FM_Race_Creator");
		if (unk_0x4AAFD43C0AFB7A1A("FM_Race_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Race_Creator", 20500);
				unk_0x0446A34B5E23D747("FM_Race_Creator");
				unk_0xB8A73E7DA87B2968(uParam0, 2);
			}
		}
	}
	else if (unk_0xAB964FCFAC3C767A(joaat("fm_race_creator")) == 0)
	{
		unk_0x4EA098C870B73AB7(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_3()
{
	if ((((unk_0xAB964FCFAC3C767A(joaat("fm_mission_creator")) > 0 || unk_0xAB964FCFAC3C767A(joaat("fm_deathmatch_creator")) > 0) || unk_0xAB964FCFAC3C767A(joaat("fm_race_creator")) > 0) || unk_0xAB964FCFAC3C767A(joaat("fm_capture_creator")) > 0) || unk_0xAB964FCFAC3C767A(joaat("fm_lts_creator")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (Global_1632166 == 2 || Global_1632166 == 8)
	{
		return 1;
	}
	return 0;
}

int func_5(var uParam0)
{
	if (!unk_0xF44A5E894FE76438(*uParam0, 2))
	{
		unk_0x7FC35FCC666F974E("FM_Deathmatch_Creator");
		if (unk_0x4AAFD43C0AFB7A1A("FM_Deathmatch_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Deathmatch_Creator", 20500);
				unk_0x0446A34B5E23D747("FM_Deathmatch_Creator");
				unk_0xB8A73E7DA87B2968(uParam0, 2);
			}
		}
	}
	else if (unk_0xAB964FCFAC3C767A(joaat("fm_deathmatch_creator")) == 0)
	{
		unk_0x4EA098C870B73AB7(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_6(var uParam0)
{
	if (!unk_0xF44A5E894FE76438(*uParam0, 2))
	{
		unk_0x7FC35FCC666F974E("FM_Capture_Creator");
		if (unk_0x4AAFD43C0AFB7A1A("FM_Capture_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Capture_Creator", 20500);
				unk_0x0446A34B5E23D747("FM_Capture_Creator");
				unk_0xB8A73E7DA87B2968(uParam0, 2);
			}
		}
	}
	else if (unk_0xAB964FCFAC3C767A(joaat("fm_capture_creator")) == 0)
	{
		unk_0x4EA098C870B73AB7(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_7(var uParam0)
{
	if (!unk_0xF44A5E894FE76438(*uParam0, 2))
	{
		unk_0x7FC35FCC666F974E("FM_LTS_Creator");
		if (unk_0x4AAFD43C0AFB7A1A("FM_LTS_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_LTS_Creator", 20500);
				unk_0x0446A34B5E23D747("FM_LTS_Creator");
				unk_0xB8A73E7DA87B2968(uParam0, 2);
			}
		}
	}
	else if (unk_0xAB964FCFAC3C767A(joaat("fm_lts_creator")) == 0)
	{
		unk_0x4EA098C870B73AB7(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_8(var uParam0)
{
	if (!unk_0xF44A5E894FE76438(*uParam0, 2))
	{
		unk_0x7FC35FCC666F974E("FM_Mission_Creator");
		if (unk_0x4AAFD43C0AFB7A1A("FM_Mission_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Mission_Creator", 20500);
				unk_0x0446A34B5E23D747("FM_Mission_Creator");
				unk_0xB8A73E7DA87B2968(uParam0, 2);
			}
		}
	}
	else if (unk_0xAB964FCFAC3C767A(joaat("fm_mission_creator")) == 0)
	{
		unk_0x4EA098C870B73AB7(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_9()
{
	if ((((((Global_1632166 == 0 || Global_1632166 == 4) || Global_1632166 == 6) || Global_1632166 == 3) || Global_1632166 == 31) || Global_1632166.f_2 == 6) || Global_1632166.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	Global_17151.f_5 = 1;
}

bool func_11()
{
	return (Global_17151.f_5 || Global_17151.f_6);
}

void func_12(var uParam0)
{
	if (Global_1632166 == 0)
	{
		Global_1632166.f_24 = uParam0->f_8[0 /*18*/][5];
		Global_1632166.f_25 = uParam0->f_8[0 /*18*/][5];
		Global_1632166.f_29 = uParam0->f_8[0 /*18*/][7] + 1;
	}
	else if (Global_1632166 == 1)
	{
		Global_1632166.f_24 = uParam0->f_8[1 /*18*/][0];
		Global_1632166.f_48 = uParam0->f_8[1 /*18*/][2];
		Global_1632166.f_50 = uParam0->f_8[1 /*18*/][3];
		Global_1632166.f_26 = uParam0->f_8[1 /*18*/][4];
		Global_1632166.f_52631 = uParam0->f_8[1 /*18*/][5];
		Global_1632166.f_52630 = uParam0->f_8[1 /*18*/][6];
		Global_1632166.f_56 = uParam0->f_8[1 /*18*/][7];
		Global_1632166.f_40784 = uParam0->f_8[1 /*18*/][8];
		Global_1632166.f_61 = uParam0->f_8[1 /*18*/][9];
		Global_1632166.f_51 = uParam0->f_8[1 /*18*/][10];
		Global_1632166.f_53 = uParam0->f_8[1 /*18*/][11];
		Global_1632166.f_55 = uParam0->f_8[1 /*18*/][12];
		Global_1632166.f_54 = uParam0->f_8[1 /*18*/][13];
		Global_1632166.f_55076 = uParam0->f_8[1 /*18*/][14];
	}
	else if (Global_1632166 == 2)
	{
		Global_1632166.f_24 = uParam0->f_8[2 /*18*/][4];
		Global_1632166.f_40142 = uParam0->f_8[2 /*18*/][14];
		Global_1632166.f_40139 = uParam0->f_8[2 /*18*/][7];
	}
}

bool func_13()
{
	return Global_1312364;
}

int func_14()
{
	if (unk_0xF44A5E894FE76438(Global_1352862.f_102, 1))
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(Global_1352862.f_102, 2))
	{
		unk_0x4EA098C870B73AB7(&(Global_1352862.f_102), 2);
		return 2;
	}
	if (unk_0xF44A5E894FE76438(Global_1352862.f_102, 3))
	{
		unk_0x4EA098C870B73AB7(&(Global_1352862.f_102), 3);
		return 3;
	}
	return 0;
}

void func_15(var uParam0)
{
}

void func_16(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Global_1632166.f_87000 = 0;
	if (bParam0)
	{
		if (((!func_31() || func_30() == 36) || func_30() == 39) || func_30() == 34)
		{
			Global_1632166.f_86360 = 0;
		}
		Global_1632166.f_59750 = -1;
		Global_1632166.f_11 = 0;
		Global_1632166.f_12 = 0;
		Global_1632166.f_13 = 0;
		Global_1632166.f_14 = 0;
		Global_1632166.f_15 = 0;
		Global_1632166.f_16 = 0;
		Global_1632166.f_17 = 0;
		Global_1632166.f_18 = 0;
		Global_1632166.f_19 = 0;
		Global_1632166.f_20 = 0;
		Global_1632166.f_21 = 0;
		Global_1632166.f_90 = 0;
		Global_1632166.f_100199 = 0;
		Global_1632166.f_10 = 0;
		Global_1632166.f_24 = 0;
		Global_1632166.f_49 = 0;
		Global_1632166.f_26 = 0;
		Global_1632166.f_48 = 0;
		Global_1632166.f_50 = 0;
		Global_1632166.f_51 = 0;
		Global_1632166.f_53 = 0;
		Global_1632166.f_54 = 0;
		Global_1632166.f_55 = 0;
		Global_1632166.f_56 = 0;
		Global_1632166.f_28 = 0;
		Global_1632166.f_29 = 1;
		Global_1632166.f_6 = 0;
		Global_1632166.f_44 = 0;
		Global_1632166.f_47 = 1;
		Global_1632166.f_25 = 0;
		Global_1632166.f_86977 = 0;
		Global_1632166.f_86980 = 0;
		Global_1632166.f_86979 = 0;
		Global_1632166.f_86976 = 0;
		Global_1632166.f_105305 = 0;
		if (bParam1)
		{
			Global_1632166.f_4 = 0;
			Global_1632166.f_5 = 0;
		}
		Global_1632166.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1632166.f_33450[iVar0 /*38*/] = -1;
			Global_1632166.f_33450[iVar0 /*38*/].f_1 = -1;
			Global_1632166.f_33450[iVar0 /*38*/].f_2 = 0;
			Global_1632166.f_33450[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1632166.f_86981 = 0;
		Global_1632166.f_86982 = 0;
		Global_1632166.f_86983 = 0;
		Global_1632166.f_86972 = -1;
		Global_1632166.f_86971 = 0;
		Global_1632166.f_60 = 0;
		Global_1632166.f_68 = { 0f, 0f, 0f };
		Global_1632166.f_71 = { 0f, 0f, 0f };
		Global_1632166.f_74 = { 0f, 0f, 0f };
		Global_1632166.f_77 = { 0f, 0f, 0f };
		Global_1632166.f_80 = { 0f, 0f, 0f };
		Global_1632166.f_83 = { 0f, 0f, 0f };
		Global_1632166.f_86 = 0f;
		Global_1632166.f_87 = 0f;
		Global_1632166.f_86335 = 0f;
		Global_1632166.f_89 = 0;
		Global_1632166.f_86999 = 0;
		Global_1632166.f_105294 = 0;
		Global_1632166.f_100411 = 0;
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			Global_1632166.f_40164[iVar0] = 0;
			Global_1632166.f_40148[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1632166.f_90795[iVar0] = 0;
		Global_1632166.f_90802[iVar0] = -1;
		iVar0++;
	}
	Global_1632166.f_90809 = 0;
	Global_1632166.f_90810 = -1;
	Global_1632166.f_1 = -1;
	StringCopy(&(Global_1632166.f_86685), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1632166.f_90399[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1632166.f_102223 = 0;
	Global_1632166.f_43 = 0;
	Global_1632166.f_62 = { 0f, 0f, 0f };
	Global_1632166.f_100410 = -1;
	Global_1632166.f_86978 = 0f;
	StringCopy(&(Global_1632166.f_86367), "", 64);
	StringCopy(&(Global_1632166.f_86669), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1632166.f_86653[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1632166.f_86389[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_29();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1632166.f_33450[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_28();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_36[iVar0] = 0;
		Global_1632166.f_100173[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_100178[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_1632166.f_31[iVar0] = 1;
		Global_1632166.f_85901[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_85914[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_85927[iVar0] = 0f;
		Global_1632166.f_102227[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_102240[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_102253[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_102266[iVar0] = 45f;
		Global_1632166.f_102271[iVar0] = 0f;
		Global_1632166.f_82772[iVar0] = -1;
		StringCopy(&(Global_1632166.f_102582[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1632166.f_102647[iVar0 /*16*/]), "", 64);
		Global_1632166.f_102712[iVar0] = 0;
		StringCopy(&(Global_1632166.f_102384[iVar0 /*16*/]), "", 64);
		Global_1632166.f_90849[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1632166.f_102449[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_1632166.f_34292[iVar0] = -1;
		Global_1632166.f_34297[iVar0] = -1;
		StringCopy(&(Global_1632166.f_105223[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_1632166.f_105240[iVar0 /*4*/]), "", 16);
		Global_1632166.f_105257[iVar0] = 0;
		Global_1632166.f_105287[iVar0] = 0;
		iVar0++;
	}
	Global_1632166.f_105329 = 0;
	Global_1632166.f_105328 = 0;
	Global_1632166.f_105330 = 0;
	Global_1632166.f_105331 = 1;
	Global_1632166.f_105332 = 2;
	Global_1632166.f_105333 = 3;
	Global_1632166.f_105334 = 4;
	Global_1632166.f_105335 = 6;
	Global_1632166.f_105336 = 7;
	Global_1632166.f_105337 = 9;
	Global_1632166.f_105338 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_105387[iVar0] = 0;
		Global_1632166.f_105392[iVar0] = 0;
		iVar0++;
	}
	Global_1632166.f_105340 = 5;
	Global_1632166.f_105339 = 0;
	Global_1632166.f_102276 = { 0f, 0f, 0f };
	Global_1632166.f_102279 = { 0f, 0f, 0f };
	Global_1632166.f_102282 = { 0f, 0f, 0f };
	Global_1632166.f_102285 = 45f;
	Global_1632166.f_102286 = 0f;
	Global_1632166.f_102287 = 0;
	Global_1632166.f_102730 = 10000;
	Global_1632166.f_102744 = 1;
	Global_1632166.f_102731 = 1f;
	Global_1632166.f_105374 = 1;
	Global_1632166.f_105375 = 0;
	Global_1632166.f_102732 = 0f;
	Global_1632166.f_102745 = 60f;
	Global_1632166.f_102746 = 5f;
	Global_1632166.f_102747 = 60f;
	Global_1632166.f_102748 = -1f;
	Global_1632166.f_102734 = 2;
	Global_1632166.f_102735 = 2;
	Global_1632166.f_102736 = 3000;
	Global_1632166.f_102737 = 150;
	Global_1632166.f_102738 = 3f;
	Global_1632166.f_102739 = 1f;
	Global_1632166.f_102740 = 25;
	Global_1632166.f_102741 = 5;
	Global_1632166.f_102742 = 5;
	Global_1632166.f_102743 = 2000;
	Global_1632166.f_102761 = -1f;
	StringCopy(&(Global_1632166.f_102762), "", 16);
	StringCopy(&(Global_1632166.f_102766), "", 16);
	Global_1632166.f_102749 = 0;
	Global_1632166.f_102758 = 0;
	Global_1632166.f_102750 = 0;
	Global_1632166.f_102751 = 0;
	Global_1632166.f_102752 = 0;
	Global_1632166.f_102753 = 0;
	Global_1632166.f_102754 = 0;
	Global_1632166.f_102755 = 0;
	Global_1632166.f_102759 = 0;
	Global_1632166.f_102756 = -1f;
	Global_1632166.f_102757 = 0;
	Global_1632166.f_102760 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1632166.f_77634[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1632166.f_77683[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1632166.f_77732[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_1632166.f_77833[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_26(&(Global_1632166.f_90854[iVar0 /*1274*/]));
		func_24(&(Global_1632166.f_97225[iVar0 /*434*/]));
		iVar0++;
	}
	func_24(&(Global_1632166.f_99396));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1632166.f_100307[iVar0 /*4*/].f_3 = 0;
		Global_1632166.f_100307[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1632166.f_100408 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1632166.f_59686[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1632166.f_59747 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_23(&(Global_1632166.f_87017[iVar0 /*49*/]), iVar0);
		iVar0++;
	}
	Global_1632166.f_90688[0] = 0;
	Global_1632166.f_90688[1] = 0;
	Global_1632166.f_90692 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_22(&(Global_1632166.f_100205[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1632166.f_105262 = 0;
	Global_1632166.f_2 = 0;
	Global_1632166.f_86952 = 0;
	Global_1632166.f_100199 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_86985[iVar0] = -1;
		Global_1632166.f_100412[iVar0] = -1;
		iVar0++;
	}
	Global_1632166.f_105263 = 0;
	Global_1632166.f_105285 = 0;
	Global_1632166.f_87015 = 0;
	Global_1632166.f_87016 = 0;
	Global_1632166.f_100451 = 0.5f;
	Global_1632166.f_90706 = 1;
	Global_1632166.f_90708 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1632166.f_100452[iVar0] = 0f;
		Global_1632166.f_100473[iVar0] = 0f;
		Global_1632166.f_100494[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_40735[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_40773[iVar0] = -1;
		iVar0++;
	}
	Global_1630921 = 0;
	Global_1632166.f_7 = 0;
	Global_1632166.f_86958 = 0;
	Global_1632166.f_32654 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1632166.f_82471)
	{
		Global_1632166.f_82471[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1632166.f_82471[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_33414[iVar0 /*3*/][0] = 0;
		Global_1632166.f_33414[iVar0 /*3*/][1] = 0;
		Global_1632166.f_33401[iVar0 /*3*/][0] = 0;
		Global_1632166.f_33401[iVar0 /*3*/][1] = 0;
		Global_1632166.f_33427[iVar0 /*3*/][0] = 0;
		Global_1632166.f_33427[iVar0 /*3*/][1] = 0;
		Global_1632166.f_33440[iVar0] = 0;
		Global_1632166.f_33445[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_1632166.f_90733[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_1632166.f_90826[iVar0 /*2*/][0] = 0;
		Global_1632166.f_90840[iVar0 /*2*/][0] = 0;
		Global_1632166.f_91[iVar0 /*8128*/] = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_4 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_7 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_11 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_14 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_15 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_18 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_19 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_22 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_23 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_36 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_24 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_25 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_26 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_27 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_28 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_29 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_30 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_31 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_32 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_33 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_34 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_57 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_3340 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3342 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3363 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3436 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4536 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3341 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3343 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4537 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_59 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_60 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_61 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_207 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_208 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_209 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_354 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_355 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_356 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4538 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_55 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_56 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2968 = 60000;
		Global_1632166.f_91[iVar0 /*8128*/].f_3194 = 60000;
		Global_1632166.f_91[iVar0 /*8128*/].f_4023 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_583 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_584 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_8108 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_8109 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_2974 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2975 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1632166.f_91[iVar0 /*8128*/].f_2976[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_2994[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3012[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3030[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3066[iVar1] = 4;
			Global_1632166.f_91[iVar0 /*8128*/].f_3084[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3120[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3138[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3156[iVar1] = 10;
			Global_1632166.f_91[iVar0 /*8128*/].f_3174[iVar1] = 10;
			Global_1632166.f_91[iVar0 /*8128*/].f_3102[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3048[iVar1] = -1;
			iVar1++;
		}
		Global_1632166.f_32604[iVar0] = 0;
		Global_1632166.f_32609[iVar0] = 0;
		Global_1632166.f_32614[iVar0] = -1;
		Global_1632166.f_32660[iVar0] = 0;
		StringCopy(&(Global_1632166.f_32665[iVar0 /*4*/]), "", 16);
		Global_1632166.f_32687[iVar0] = 3;
		Global_1632166.f_32692[iVar0] = -1;
		Global_1632166.f_32655[iVar0] = 0;
		Global_1632166.f_32682[iVar0] = 0;
		Global_1632166.f_90694[iVar0] = 0;
		Global_1632166.f_90699[iVar0] = 0;
		Global_1632166.f_40768[iVar0] = 100;
		Global_1632166.f_40778[iVar0] = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4331 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4332 = 0;
		Global_1630921.f_1[iVar0] = 0;
		Global_1632166.f_90811[iVar0] = 0;
		Global_1632166.f_90816[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1632166.f_86026[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1632166.f_86135[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				Global_1632166.f_86180[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_1632166.f_102717[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1632166.f_40180[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_105264[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1632166.f_40273[iVar0 /*93*/][0 /*23*/][iVar1] = 0;
			Global_1632166.f_40273[iVar0 /*93*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_102289[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_102342[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 69)
		{
			Global_1632166.f_91[iVar0 /*8128*/].f_62[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_210[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_357[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_133[iVar1] = 1f;
			Global_1632166.f_91[iVar0 /*8128*/].f_281[iVar1] = 1f;
			Global_1632166.f_91[iVar0 /*8128*/].f_428[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_91[iVar0 /*8128*/].f_501[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_506[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1632166.f_33831[iVar1 /*27*/] = 0;
			Global_1632166.f_33831[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1632166.f_33831[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1632166.f_33831[iVar1 /*27*/].f_25 = 0f;
			Global_1632166.f_33831[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1632166.f_33831[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1632166.f_33831[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1632166.f_33831[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1632166.f_91[iVar0 /*8128*/].f_4169[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4187[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4205[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4223[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4241[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4259[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4277[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4295[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4313[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_37[iVar1] = -1;
			Global_1632166.f_59600[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4333[iVar1] = 60000;
			Global_1632166.f_91[iVar0 /*8128*/].f_4351[iVar1] = 60000;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_4455[iVar2 /*16*/]), "", 64);
				Global_1632166.f_91[iVar0 /*8128*/].f_4369[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_1632166.f_32697[iVar1 /*5*/][iVar0] = -1;
			Global_1632166.f_32783[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_32869[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_32955[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_33041[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_33127[iVar1 /*5*/][iVar0] = 1500;
			Global_1632166.f_33213[iVar1 /*5*/][iVar0] = 1400;
			Global_1632166.f_33299[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1630921.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1630921.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_603[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_621[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3196[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3214[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3232[iVar1] = 1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3304[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3322[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3364[iVar1] = 10000;
			Global_1632166.f_91[iVar0 /*8128*/].f_3344[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3400[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3250[iVar1] = 1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3418[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3437[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3721[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3757[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3473[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3455[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3613[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3739[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3775[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3667[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3685[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3631[iVar1] = 100;
			Global_1632166.f_91[iVar0 /*8128*/].f_3491[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_3543[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_3595[iVar1] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_3649[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3703[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3793[iVar1] = -1f;
			Global_1632166.f_91[iVar0 /*8128*/].f_837[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_855[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_873[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_891[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_927[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_639[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_657[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_909[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_945[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7766[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7784[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7802[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7820[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7838[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7856[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_8036[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7874[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7892[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7910[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7928[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7946[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7964[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_511[iVar1] = 5;
			Global_1632166.f_91[iVar0 /*8128*/].f_529[iVar1] = 20;
			Global_1632166.f_91[iVar0 /*8128*/].f_4061[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4079[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4097[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4115[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_4133[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_801[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_819[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3268[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3286[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_547[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_565[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_585[iVar1] = 0;
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_4539[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_4812[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_5085[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_5904[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_5358[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_5631[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_7542[0 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_7542[1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_6177[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_6450[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_6723[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_6996[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_7269[iVar1 /*16*/]), "", 64);
			Global_1632166.f_91[iVar0 /*8128*/].f_3933[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3969[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3951[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3811[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_3863[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_16 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_9 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_10 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_19 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_17 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_18 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_20 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_21 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_22 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_23 = 120;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_16 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_9 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_10 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_19 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_17 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_18 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_20 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_21 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_22 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_23 = 120;
			Global_1632166.f_91[iVar0 /*8128*/].f_3915[iVar1] = 3f;
			Global_1632166.f_91[iVar0 /*8128*/].f_3382[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3987[iVar1] = 10.5f;
			Global_1632166.f_91[iVar0 /*8128*/].f_4005[iVar1] = 1f;
			Global_1632166.f_91[iVar0 /*8128*/].f_4151[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_675[iVar1] = 12;
			Global_1632166.f_91[iVar0 /*8128*/].f_693[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_711[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_729[iVar1] = 12;
			Global_1632166.f_91[iVar0 /*8128*/].f_747[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_765[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_783[iVar1] = 100;
			Global_1632166.f_91[iVar0 /*8128*/].f_8090[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/] = 1000;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_1 = 1.15f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_2 = 25;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_7 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_3 = 1;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_5 = 25;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_6 = 10f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2793[iVar1 /*3*/] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2793[iVar1 /*3*/].f_1 = 1;
			Global_1632166.f_91[iVar0 /*8128*/].f_2793[iVar1 /*3*/].f_2 = 50;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_1[0] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_1[1] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_1[2] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_1[3] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_6 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_7 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_8 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_9 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_10 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2914[iVar1 /*3*/] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_2914[iVar1 /*3*/].f_1 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_2914[iVar1 /*3*/].f_2 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7575[iVar1 /*5*/][0] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7575[iVar1 /*5*/][1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7575[iVar1 /*5*/][2] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7575[iVar1 /*5*/][3] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7661[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7679[iVar1 /*4*/][0] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7679[iVar1 /*4*/][1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7679[iVar1 /*4*/][2] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7748[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4025[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7982[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_8000[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_8018[iVar1] = 0;
			func_21(&(Global_1632166.f_91[iVar0 /*8128*/].f_2845[iVar1 /*4*/]));
			iVar1++;
		}
		Global_1632166.f_91[iVar0 /*8128*/].f_2967 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3193 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2966 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3192 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2969 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2970 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2971 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2972 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2973 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3195 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_963 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_964 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_352 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_353 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_499 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_500 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_4520 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4521 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4522 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4523 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4524 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4525 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4526 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4527 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4528 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4529 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4530 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4531 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4532 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4533 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4534 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4535 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_77781[iVar0] = 0;
		Global_1632166.f_77786[iVar0] = 0;
		iVar0++;
	}
	Global_1632166.f_77797 = 0;
	Global_1632166.f_77798 = 0;
	Global_1632166.f_77799 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1632166.f_77800[iVar0] = 0;
		Global_1632166.f_77811[iVar0] = 0;
		Global_1632166.f_77822[iVar0] = 0;
		iVar0++;
	}
	Global_1632166.f_65 = { 0f, 0f, 0f };
	Global_1632166.f_34302 = { 0f, 0f, 0f };
	Global_1632166.f_88 = 0f;
	Global_1632166.f_99830 = { 0f, 0f, 0f };
	Global_1632166.f_105263 = 0;
	Global_1632166.f_105285 = 0;
	Global_1632166.f_86953[0] = 0;
	Global_1632166.f_86953[1] = 0;
	Global_1632166.f_86956 = 0;
	Global_1632166.f_86952 = 0;
	Global_1632166.f_100417 = 0;
	Global_1632166.f_100418 = 0;
	Global_1632166.f_100419 = 0;
	Global_1632166.f_100420 = 0;
	Global_1632166.f_100422 = 0;
	Global_1632166.f_100424 = 0;
	Global_1632166.f_100426 = 0;
	Global_1632166.f_100429 = 0;
	Global_1632166.f_100430 = 0;
	Global_1632166.f_100431 = 0;
	Global_1632166.f_100432 = 0;
	Global_1632166.f_100433 = 0;
	Global_1632166.f_100434 = 0;
	Global_1632166.f_100440 = -1;
	Global_1632166.f_100441 = -1;
	Global_1632166.f_100442 = -1;
	Global_1632166.f_100443 = -1;
	Global_1632166.f_100444 = -1;
	Global_1632166.f_100445 = -1;
	Global_1632166.f_100446 = -1;
	Global_1632166.f_100447 = -1;
	Global_1632166.f_100448 = -1;
	Global_1632166.f_100449 = -1;
	Global_1632166.f_100450 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1632166.f_35006[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_36060[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_34305[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_34305[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_34305[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_35359[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_35359[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_35359[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_35217[iVar0] = 0f;
		Global_1632166.f_35288[iVar0] = 0;
		Global_1632166.f_36342[iVar0] = 0;
		Global_1632166.f_36271[iVar0] = 0f;
		Global_1632166.f_36484[iVar0] = 0;
		Global_1632166.f_36555[iVar0] = 0;
		Global_1632166.f_37474[iVar0] = 0;
		Global_1632166.f_37616[iVar0] = 1f;
		Global_1632166.f_36626[iVar0] = 0;
		Global_1632166.f_36768[iVar0] = 0;
		Global_1632166.f_36697[iVar0] = -1;
		Global_1632166.f_36839[iVar0] = 0;
		Global_1632166.f_37545[iVar0] = 0f;
		Global_1632166.f_36910[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_37121[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1632166.f_40138 = 0;
	if (bParam0)
	{
		Global_1632166.f_40139 = 0;
		Global_1632166.f_40147 = 0;
	}
	Global_1632166.f_40145 = 0;
	Global_1632166.f_40146 = 0;
	Global_1632166.f_40727 = 0f;
	Global_1632166.f_43047 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		Global_1632166.f_43048[iVar0 /*59*/] = { 0f, 0f, 0f };
		Global_1632166.f_43048[iVar0 /*59*/].f_6 = 0f;
		Global_1632166.f_43048[iVar0 /*59*/].f_7 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_9 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_8 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_10 = 1;
		Global_1632166.f_43048[iVar0 /*59*/].f_19 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_12 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_13 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_14 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_15 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_11 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_45 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_46 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_47 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_16 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_17 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_18 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_20 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_48 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_21 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_22 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_23 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_24 = 1;
		Global_1632166.f_43048[iVar0 /*59*/].f_34 = 10f;
		Global_1632166.f_43048[iVar0 /*59*/].f_35 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_20(&(Global_1632166.f_102770[iVar0 /*244*/]));
		iVar0++;
	}
	Global_1632166.f_105211 = 0;
	Global_1632166.f_51974 = 0;
	Global_1632166.f_51975 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1632166.f_51976[iVar0 /*31*/] = { 0f, 0f, 0f };
		Global_1632166.f_51976[iVar0 /*31*/].f_6 = 0f;
		Global_1632166.f_51976[iVar0 /*31*/].f_7 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_8 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_12 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_11 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_13 = 1;
		Global_1632166.f_51976[iVar0 /*31*/].f_18 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_14 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_28 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_29 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_30 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_15 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_16 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_17 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_9 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_10 = 1;
		iVar0++;
	}
	Global_1632166.f_42722 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1632166.f_42723[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1632166.f_42723[iVar0 /*19*/].f_3 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_4 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_14 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_12 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_15 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_16 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_6 = -1;
		Global_1632166.f_42723[iVar0 /*19*/].f_5 = -1;
		Global_1632166.f_42723[iVar0 /*19*/].f_13 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_8 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_9 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_10 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_11 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_7 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_17 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1632166.f_43009 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1632166.f_43010[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1632166.f_43010[iVar0 /*7*/].f_3 = 0f;
		Global_1632166.f_43010[iVar0 /*7*/].f_4 = 0;
		Global_1632166.f_43010[iVar0 /*7*/].f_5 = 0;
		Global_1632166.f_43010[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1632166.f_40728 = 3.5f;
		Global_1632166.f_40729 = 7f;
		Global_1632166.f_40730 = 0f;
		Global_1632166.f_40731 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1632166.f_40735[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1632166.f_40773[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1632166.f_86990 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_40127[iVar0] = 0;
		Global_1632166.f_90790[iVar0] = -1;
		Global_1632166.f_90835[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1632166.f_39633[iVar1 /*29*/][iVar0] = 0;
			Global_1632166.f_39633[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1632166.f_39633[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1632166.f_39633[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1632166.f_39633[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1632166.f_100200[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1632166.f_40784 = 1;
	}
	Global_1632166.f_40786 = 0;
	Global_1632166.f_40787 = 0;
	Global_1632166.f_40788 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1632166.f_40789[iVar0 /*92*/] = { 0f, 0f, 0f };
		Global_1632166.f_40789[iVar0 /*92*/].f_4 = { 0f, 0f, 0f };
		Global_1632166.f_40789[iVar0 /*92*/].f_3 = 0f;
		Global_1632166.f_40789[iVar0 /*92*/].f_7 = 50f;
		Global_1632166.f_40789[iVar0 /*92*/].f_8 = 0f;
		Global_1632166.f_40789[iVar0 /*92*/].f_9 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_10 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_11 = { 0f, 0f, 0f };
		Global_1632166.f_40789[iVar0 /*92*/].f_14 = 0f;
		Global_1632166.f_40789[iVar0 /*92*/].f_15 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_16 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_27 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_29 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_30 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_31 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_44 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_43 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_45 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_46 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_47 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_48 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_49 = 60;
		Global_1632166.f_40789[iVar0 /*92*/].f_50 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_37 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_32 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_33 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_34 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_55 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_35 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_51 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_52 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_53 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_83 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_84 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_85 = { 0f, 0f, 0f };
		Global_1632166.f_40789[iVar0 /*92*/].f_88 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_81 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_82 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_89 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_40789[iVar0 /*92*/].f_17[iVar1] = 0;
			Global_1632166.f_40789[iVar0 /*92*/].f_22[iVar1] = 99999;
			Global_1632166.f_40789[iVar0 /*92*/].f_65[iVar1] = 0;
			Global_1632166.f_40789[iVar0 /*92*/].f_70[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1632166.f_99848[iVar0 /*18*/]), "", 64);
		Global_1632166.f_99848[iVar0 /*18*/].f_16 = 0;
		Global_1632166.f_99848[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1632166.f_52628 = 0;
	Global_1632166.f_52629 = 0;
	if (bParam0)
	{
		if (func_9() && !func_19())
		{
			Global_1632166.f_52630 = -1;
		}
		else
		{
			Global_1632166.f_52630 = 0;
		}
	}
	Global_1632166.f_52631 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1632166.f_52632[iVar0 /*40*/] = { 0f, 0f, 0f };
		Global_1632166.f_52632[iVar0 /*40*/].f_3 = 0f;
		Global_1632166.f_52632[iVar0 /*40*/].f_13 = 77;
		Global_1632166.f_52632[iVar0 /*40*/].f_4 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_5 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_21 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_22 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_7 = 1f;
		Global_1632166.f_52632[iVar0 /*40*/].f_24 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_25 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_26 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_33 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_30 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_36 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_34 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_31 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_37 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_35 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_32 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_38 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_27 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_28 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_29 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_39 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_52632[iVar0 /*40*/].f_8[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_18();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1632166.f_77791[iVar0] = -1;
		iVar0++;
	}
	Global_1632166.f_87004 = -1;
	Global_1632166.f_87005 = 15;
	Global_1632166.f_87006 = -1;
	Global_1632166.f_87011 = -1;
	Global_1632166.f_87012 = 0;
	Global_1632166.f_87007 = 2.5f;
	Global_1632166.f_87008 = 8f;
	Global_1632166.f_87009 = 2.5f;
	Global_1632166.f_87010 = 8f;
	Global_1632166.f_55074 = 0;
	Global_1632166.f_43046 = 0;
	if (bParam0)
	{
		Global_1632166.f_40734 = -1;
		Global_1632166.f_40143 = -1;
	}
	Global_1632166.f_55075 = 0;
	Global_1632166.f_55076 = 0;
	Global_1632166.f_55077 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1632166.f_55078[iVar0 /*137*/] = { 0f, 0f, 0f };
		Global_1632166.f_55078[iVar0 /*137*/].f_3 = 0f;
		Global_1632166.f_55078[iVar0 /*137*/].f_4 = 50f;
		Global_1632166.f_55078[iVar0 /*137*/].f_5 = 0f;
		Global_1632166.f_55078[iVar0 /*137*/].f_6 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_7 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_8 = { 0f, 0f, 0f };
		Global_1632166.f_55078[iVar0 /*137*/].f_11 = 0f;
		Global_1632166.f_55078[iVar0 /*137*/].f_12 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_23 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_24 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_25 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_26 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_30 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_31 = 100;
		Global_1632166.f_55078[iVar0 /*137*/].f_32 = 1001f;
		Global_1632166.f_55078[iVar0 /*137*/].f_33 = 1001f;
		Global_1632166.f_55078[iVar0 /*137*/].f_35 = 1.5f;
		Global_1632166.f_55078[iVar0 /*137*/].f_44 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_111 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_45 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_46 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_27 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_28 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_29 = 0f;
		Global_1632166.f_55078[iVar0 /*137*/].f_50 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_39 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_40 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_41 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_63 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_64 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_66 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_109 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_108 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1632166.f_55078[iVar0 /*137*/].f_112[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_55078[iVar0 /*137*/].f_119[iVar1] = 0f;
			iVar1++;
		}
		Global_1632166.f_55078[iVar0 /*137*/].f_65 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_72 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_42 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_122 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_127 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_128 = { 0f, 0f, 0f };
		Global_1632166.f_55078[iVar0 /*137*/].f_131 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_124 = -1f;
		Global_1632166.f_55078[iVar0 /*137*/].f_123 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_126 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_36 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_37 = 5;
		Global_1632166.f_55078[iVar0 /*137*/].f_136 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_125 = 10;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_55078[iVar0 /*137*/].f_13[iVar1] = 0;
			Global_1632166.f_55078[iVar0 /*137*/].f_18[iVar1] = 99999;
			Global_1632166.f_55078[iVar0 /*137*/].f_102[iVar1] = 0;
			Global_1632166.f_55078[iVar0 /*137*/].f_85[iVar1] = 0;
			Global_1632166.f_55078[iVar0 /*137*/].f_90[iVar1] = 0;
			Global_1632166.f_55078[iVar0 /*137*/].f_53[iVar1] = -1;
			Global_1632166.f_55078[iVar0 /*137*/].f_58[iVar1] = -1;
			Global_1632166.f_55078[iVar0 /*137*/].f_67[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1632166.f_85934 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1632166.f_85935[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1632166.f_85935[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1632166.f_85935[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1632166.f_77914 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1632166.f_77921[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1632166.f_77921[iVar0 /*15*/].f_3 = 0f;
		Global_1632166.f_77921[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_77915[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/] = { 0f, 0f, 0f };
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_3 = 0f;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_4 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_5 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_7 = -1;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_8 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_9 = -1;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_10 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_11 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_12 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_13 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_14 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1632166.f_59748 = 0;
	Global_1632166.f_59751 = 0;
	Global_1632166.f_59752 = 0;
	Global_1632166.f_59749 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1632166.f_59753[iVar0 /*298*/].f_39 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_49 = 0;
		Global_1632166.f_59753[iVar0 /*298*/] = { 0f, 0f, 0f };
		Global_1632166.f_59753[iVar0 /*298*/].f_3 = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_4 = 0.75f;
		Global_1632166.f_59753[iVar0 /*298*/].f_14 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_15 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_16 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_32 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_36 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_37 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_38 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_215 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_214 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_216 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_217 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_218 = 20;
		Global_1632166.f_59753[iVar0 /*298*/].f_226 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_56 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_47 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_34 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_35 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_48 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_188 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_189 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_190 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_191 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_192 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_193 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_194 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_195 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_33 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_13 = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_5 = 50f;
		Global_1632166.f_59753[iVar0 /*298*/].f_6 = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_7 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_8 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_9 = { 0f, 0f, 0f };
		Global_1632166.f_59753[iVar0 /*298*/].f_12 = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_175 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_63 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_167 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_168 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_169 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_175 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_185 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_176 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_184 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_64 = { 0f, 0f, 0f };
		Global_1632166.f_59753[iVar0 /*298*/].f_57 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_58 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_62 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_59 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_252 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_263 = 1f;
		Global_1632166.f_59753[iVar0 /*298*/].f_264 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_80 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_201 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_52 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_202 = 250;
		Global_1632166.f_59753[iVar0 /*298*/].f_205 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_206 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_269 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_207 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_270 = 4;
		Global_1632166.f_59753[iVar0 /*298*/].f_237 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_153 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_154 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_155 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_227 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_228 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_229 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_266 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_265 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_267 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_268 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_156 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_157 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_60 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_59753[iVar0 /*298*/].f_17[iVar1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_22[iVar1] = 2;
			Global_1632166.f_59753[iVar0 /*298*/].f_27[iVar1] = 99999;
			Global_1632166.f_59753[iVar0 /*298*/].f_196[iVar1] = -1;
			Global_1632166.f_59753[iVar0 /*298*/].f_238[iVar1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_243[iVar1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_253[iVar1] = -1;
			Global_1632166.f_59753[iVar0 /*298*/].f_258[iVar1] = -1;
			Global_1632166.f_59753[iVar0 /*298*/].f_272[iVar1] = -2;
			Global_1632166.f_59753[iVar0 /*298*/].f_170[iVar1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_231[iVar1] = 0;
			iVar1++;
		}
		Global_1632166.f_59753[iVar0 /*298*/].f_115[0] = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_121[0] = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_133[0] = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_81[0] = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_87[0] = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_93[0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_59753[iVar0 /*298*/].f_109[0] = 3;
		Global_1632166.f_59753[iVar0 /*298*/].f_127[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_59753[iVar0 /*298*/].f_67[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_59753[iVar0 /*298*/].f_81[iVar1 + 1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_115[iVar1 + 1] = 0f;
			Global_1632166.f_59753[iVar0 /*298*/].f_121[iVar1 + 1] = 0f;
			Global_1632166.f_59753[iVar0 /*298*/].f_133[iVar1 + 1] = 0f;
			Global_1632166.f_59753[iVar0 /*298*/].f_87[iVar1 + 1] = -1;
			Global_1632166.f_59753[iVar0 /*298*/].f_93[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_59753[iVar0 /*298*/].f_109[iVar1 + 1] = 3;
			Global_1632166.f_59753[iVar0 /*298*/].f_127[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Global_1632166.f_59753[iVar0 /*298*/].f_139[iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1632166.f_59753[iVar0 /*298*/].f_285[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_59753[iVar0 /*298*/].f_292[iVar1] = 0f;
			iVar1++;
		}
		Global_1632166.f_59753[iVar0 /*298*/].f_186 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_187 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_271 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_277 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_278 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_279 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_283 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_280 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_281 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_282 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_284 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_296 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_297 = 0;
		iVar0++;
	}
	Global_1632166.f_77914 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1632166.f_77921[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1632166.f_77921[iVar0 /*15*/].f_3 = 0f;
		Global_1632166.f_77921[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1632166.f_40133[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1632166.f_37688[iVar0 /*108*/].f_53 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_46 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_20 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_28 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_29 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_30 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_55 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_56 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/] = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_21 = { 0f, 0f, 0f };
		Global_1632166.f_37688[iVar0 /*108*/].f_24 = { 0f, 0f, 0f };
		Global_1632166.f_37688[iVar0 /*108*/].f_27 = 1f;
		Global_1632166.f_37688[iVar0 /*108*/].f_97 = 10.5f;
		Global_1632166.f_37688[iVar0 /*108*/].f_99 = 1f;
		Global_1632166.f_37688[iVar0 /*108*/].f_100 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_101 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_96 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_54 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_19 = 1f;
		Global_1632166.f_37688[iVar0 /*108*/].f_102 = -1;
		Global_1632166.f_37688[iVar0 /*108*/].f_103 = -1f;
		Global_1632166.f_37688[iVar0 /*108*/].f_104 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_105 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_106 = -1;
		Global_1632166.f_37688[iVar0 /*108*/].f_47 = 0;
		if (Global_1632166.f_37688[iVar0 /*108*/].f_107 != 0)
		{
			unk_0x0EA596DC5E9AC3D5(Global_1632166.f_37688[iVar0 /*108*/].f_107);
			Global_1632166.f_37688[iVar0 /*108*/].f_107 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_37688[iVar0 /*108*/].f_14[iVar1] = 0f;
			Global_1632166.f_37688[iVar0 /*108*/].f_36[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_41[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_31[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_62[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_67[iVar1] = 99999;
			Global_1632166.f_37688[iVar0 /*108*/].f_72[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_77[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_57[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_82[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_87[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1632166.f_85932 = 0;
	Global_1632166.f_42 = 0;
	Global_1632166.f_102224 = 12;
	Global_1632166.f_102225 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_99834[iVar0] = -1;
		Global_1632166.f_99839[iVar0] = -1;
		iVar0++;
	}
	Global_1632166.f_40785 = 0;
	Global_1632166.f_100435 = -1;
	Global_1632166.f_99844 = 0;
	Global_1632166.f_99833 = 0;
	Global_1632166.f_99846 = 0;
	Global_1632166.f_99845 = 0;
	Global_1632166.f_99847 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1632166.f_105297[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_86963[iVar0] = 0;
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 <= 29)
	{
		Global_1632166.f_82808[iVar3] = -1;
		Global_1632166.f_82777[iVar3] = -1;
		iVar4 = 0;
		while (iVar4 <= 9)
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				Global_1632166.f_82839[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				Global_1632166.f_84370[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				iVar5++;
			}
			iVar4++;
		}
		iVar3++;
	}
	Global_1632166.f_105386 = 0;
	Global_1632166.f_105397 = { 0f, 0f, 0f };
	Global_1632166.f_105400 = { 0f, 0f, 0f };
	func_17();
}

void func_17()
{
	Global_1632166.f_105216 = { 0f, 0f, 0f };
	Global_1632166.f_105219 = 30f;
	Global_1632166.f_105220 = 5f;
	Global_1632166.f_105221 = 30000;
	Global_1632166.f_105222 = 15000;
}

void func_18()
{
	int iVar0;
	int iVar1;
	
	Global_1632166.f_86668 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1632166.f_86691[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_86691[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_86691[iVar0 /*26*/].f_9 = 0;
		Global_1632166.f_86691[iVar0 /*26*/].f_20 = 0;
		Global_1632166.f_86691[iVar0 /*26*/].f_22 = 0f;
		Global_1632166.f_86691[iVar0 /*26*/].f_23 = 0f;
		Global_1632166.f_86691[iVar0 /*26*/].f_21 = 0;
		Global_1632166.f_86691[iVar0 /*26*/].f_7 = 0f;
		Global_1632166.f_86691[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

int func_19()
{
	if (Global_1632166 == 0 && Global_1632166.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		*(uParam0[iVar0 /*3*/]) = { 0f, 0f, 0f };
		uParam0->f_91[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_182[iVar0] = 0;
		iVar0++;
	}
}

void func_21(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_22(var uParam0)
{
	uParam0->f_4 = -1;
	uParam0->f_3 = -1;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	*uParam0 = { 0f, 0f, 0f };
}

void func_23(var uParam0, int iParam1)
{
	int iVar0;
	
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 3f;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = 0;
	uParam0->f_14 = -1;
	uParam0->f_15 = -1;
	uParam0->f_16 = 0;
	uParam0->f_17 = -1;
	uParam0->f_19 = -1;
	uParam0->f_18 = -1;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_28 = -1;
	uParam0->f_29 = -1;
	uParam0->f_30 = -1;
	uParam0->f_31 = -1;
	uParam0->f_32 = -1;
	uParam0->f_33 = 0;
	uParam0->f_22 = -1;
	uParam0->f_34 = 0;
	StringCopy(&(uParam0->f_35), "", 24);
	StringCopy(&(uParam0->f_41), "", 24);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_23[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_47 = 0;
	if (iParam1 != -1)
	{
		unk_0x4EA098C870B73AB7(&(Global_1632166.f_90688[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0x6901135DDCC4904D(uParam0->f_48))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_48));
	}
}

void func_24(char* sParam0)
{
	int iVar0;
	
	StringCopy(sParam0, "", 64);
	sParam0->f_16 = 0;
	sParam0->f_17 = 0;
	sParam0->f_54 = { 0f, 0f, 0f };
	sParam0->f_60 = 0f;
	sParam0->f_57 = { 0f, 0f, 0f };
	sParam0->f_61 = 0;
	sParam0->f_62 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_18[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_31[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_44[iVar0] = 0f;
		sParam0->f_49[iVar0] = 0f;
		iVar0++;
	}
	sParam0->f_424 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_425[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_430[iVar0] = 0;
		sParam0->f_432[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_25(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_26(char* sParam0)
{
	int iVar0;
	
	StringCopy(sParam0, "", 16);
	sParam0->f_4 = 0;
	sParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_6[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_19[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_32[iVar0] = 0f;
		sParam0->f_37[iVar0] = 0f;
		sParam0->f_42[iVar0] = -1;
		iVar0++;
	}
	sParam0->f_1102 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_1103[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_1108[iVar0] = 0;
		sParam0->f_1110[iVar0] = 0;
		iVar0++;
	}
	sParam0->f_48 = 0;
	sParam0->f_47 = 0;
	sParam0->f_49 = 0;
	sParam0->f_740 = 0;
	sParam0->f_441 = 0;
	sParam0->f_442 = 0;
	sParam0->f_443 = 0;
	sParam0->f_444 = { 0f, 0f, 0f };
	sParam0->f_733 = { 0f, 0f, 0f };
	sParam0->f_736 = 0f;
	sParam0->f_737 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_27(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_25(&(sParam0->f_741[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_27(char* sParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_50[iParam1] = 0;
		sParam0->f_71[iParam1] = 0;
		sParam0->f_92[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_153[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_214[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_275[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_336[iParam1] = 0f;
		sParam0->f_357[iParam1] = 0f;
		sParam0->f_378[iParam1] = 0;
		sParam0->f_399[iParam1] = -1;
		sParam0->f_420[iParam1] = 0f;
		sParam0->f_447[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_508[iParam1] = 0f;
		StringCopy(&(sParam0->f_1112[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1193[iParam1 /*4*/]), "", 16);
	}
}

void func_28()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		Global_1632166.f_40698[iVar0] = 0;
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1632166.f_86518[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_30()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187;
}

bool func_31()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187 != 0;
}

void func_32()
{
	func_33();
	Global_1632166.f_85932 = 0;
	Global_1312435 = 1;
	Global_1312436 = 0;
	unk_0x01DFCA3621B68C4A();
}

void func_33()
{
	Global_17151.f_5 = 0;
}

