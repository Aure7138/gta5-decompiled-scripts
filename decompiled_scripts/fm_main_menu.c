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
	if (unk_0xBCA819F9975BEDFA(2))
	{
		func_33();
	}
	unk_0xA73AE78D2491E6E1("FMMC", 2);
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
	iLocal_237 = Global_1633501.f_2;
	func_16(1, iLocal_237 != 6, 1);
	Global_1312439 = 0;
	Local_116.f_5 = Global_1633501;
	Global_1312370 = 0;
	Global_1312440 = 0;
	iLocal_236 = Global_1633501;
	if (Global_1633501 == 0)
	{
		Global_1633501.f_2 = iLocal_237;
	}
	Global_1742299 = 0;
	while (true)
	{
		if (iLocal_236 != Global_1633501)
		{
			func_15(&Local_116);
			iLocal_236 = Global_1633501;
			unk_0x21E7933CCC7B3724(&(Local_116.f_4), 0);
		}
		if (func_14() == 3)
		{
			func_33();
		}
		if (func_13())
		{
			func_33();
		}
		unk_0x4EDE34FBADD967A6(0);
		switch (iLocal_234)
		{
			case 0:
				unk_0xA73AE78D2491E6E1("FMMC", 2);
				if (unk_0x207D0680D016A0D2("FMMC", 2))
				{
					iLocal_234 = 1;
				}
				break;
			
			case 1:
				if (Local_116.f_5 != Global_1633501)
				{
					Local_116.f_5 = Global_1633501;
					func_16(1, 1, 1);
					func_15(&Local_116);
				}
				unk_0x2C8E2F4CCFAAB00F();
				func_12(&Local_116);
				Global_1742300 = 0;
				Global_1742299 = 0;
				iLocal_234 = 4;
				if (!func_11())
				{
					func_10();
				}
				break;
			
			case 4:
				if (func_9())
				{
					if ((Global_1633501.f_2 != 6 && Global_1633501 != 4) && Global_1633501.f_2 != 5)
					{
						if (func_8(&uLocal_235))
						{
							iLocal_234 = 2;
						}
					}
					else if (Global_1633501.f_2 == 5)
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
				else if (Global_1633501 == 1)
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
				if (Global_1742299 == 1)
				{
					iLocal_234 = 3;
					Global_1742299 = 0;
				}
				break;
			
			case 3:
				if (unk_0x4B972043966C2EB8(2, 217))
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
				func_33();
				break;
		}
		if (Global_1312440)
		{
			Global_1312440 = 0;
			func_33();
		}
		if (func_1())
		{
			Global_1312440 = 0;
			func_33();
		}
		if (Global_1633501.f_88218)
		{
			func_33();
		}
		if (Global_1312441)
		{
			func_33();
		}
	}
}

bool func_1()
{
	return Global_1312370;
}

int func_2(var uParam0)
{
	if (!unk_0x48B8265059381CD0(*uParam0, 2))
	{
		unk_0xFCDDC89C28E82BB4("FM_Race_Creator");
		if (unk_0x32B1F051FF487881("FM_Race_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Race_Creator", 20500);
				unk_0x07481837BFD9C1CD("FM_Race_Creator");
				unk_0xEB79FECD9022AAF0(uParam0, 2);
			}
		}
	}
	else if (unk_0x82F1A060D8F4583B(joaat("fm_race_creator")) == 0)
	{
		unk_0x21E7933CCC7B3724(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_3()
{
	if ((((unk_0x82F1A060D8F4583B(joaat("fm_mission_creator")) > 0 || unk_0x82F1A060D8F4583B(joaat("fm_deathmatch_creator")) > 0) || unk_0x82F1A060D8F4583B(joaat("fm_race_creator")) > 0) || unk_0x82F1A060D8F4583B(joaat("fm_capture_creator")) > 0) || unk_0x82F1A060D8F4583B(joaat("fm_lts_creator")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (Global_1633501 == 2 || Global_1633501 == 8)
	{
		return 1;
	}
	return 0;
}

int func_5(var uParam0)
{
	if (!unk_0x48B8265059381CD0(*uParam0, 2))
	{
		unk_0xFCDDC89C28E82BB4("FM_Deathmatch_Creator");
		if (unk_0x32B1F051FF487881("FM_Deathmatch_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Deathmatch_Creator", 20500);
				unk_0x07481837BFD9C1CD("FM_Deathmatch_Creator");
				unk_0xEB79FECD9022AAF0(uParam0, 2);
			}
		}
	}
	else if (unk_0x82F1A060D8F4583B(joaat("fm_deathmatch_creator")) == 0)
	{
		unk_0x21E7933CCC7B3724(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_6(var uParam0)
{
	if (!unk_0x48B8265059381CD0(*uParam0, 2))
	{
		unk_0xFCDDC89C28E82BB4("FM_Capture_Creator");
		if (unk_0x32B1F051FF487881("FM_Capture_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Capture_Creator", 20500);
				unk_0x07481837BFD9C1CD("FM_Capture_Creator");
				unk_0xEB79FECD9022AAF0(uParam0, 2);
			}
		}
	}
	else if (unk_0x82F1A060D8F4583B(joaat("fm_capture_creator")) == 0)
	{
		unk_0x21E7933CCC7B3724(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_7(var uParam0)
{
	if (!unk_0x48B8265059381CD0(*uParam0, 2))
	{
		unk_0xFCDDC89C28E82BB4("FM_LTS_Creator");
		if (unk_0x32B1F051FF487881("FM_LTS_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_LTS_Creator", 20500);
				unk_0x07481837BFD9C1CD("FM_LTS_Creator");
				unk_0xEB79FECD9022AAF0(uParam0, 2);
			}
		}
	}
	else if (unk_0x82F1A060D8F4583B(joaat("fm_lts_creator")) == 0)
	{
		unk_0x21E7933CCC7B3724(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_8(var uParam0)
{
	if (!unk_0x48B8265059381CD0(*uParam0, 2))
	{
		unk_0xFCDDC89C28E82BB4("FM_Mission_Creator");
		if (unk_0x32B1F051FF487881("FM_Mission_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Mission_Creator", 20500);
				unk_0x07481837BFD9C1CD("FM_Mission_Creator");
				unk_0xEB79FECD9022AAF0(uParam0, 2);
			}
		}
	}
	else if (unk_0x82F1A060D8F4583B(joaat("fm_mission_creator")) == 0)
	{
		unk_0x21E7933CCC7B3724(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_9()
{
	if ((((((Global_1633501 == 0 || Global_1633501 == 4) || Global_1633501 == 6) || Global_1633501 == 3) || Global_1633501 == 31) || Global_1633501.f_2 == 6) || Global_1633501.f_2 == 5)
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
	if (Global_1633501 == 0)
	{
		Global_1633501.f_25 = uParam0->f_8[0 /*18*/][5];
		Global_1633501.f_26 = uParam0->f_8[0 /*18*/][5];
		Global_1633501.f_30 = uParam0->f_8[0 /*18*/][7] + 1;
	}
	else if (Global_1633501 == 1)
	{
		Global_1633501.f_25 = uParam0->f_8[1 /*18*/][0];
		Global_1633501.f_49 = uParam0->f_8[1 /*18*/][2];
		Global_1633501.f_51 = uParam0->f_8[1 /*18*/][3];
		Global_1633501.f_27 = uParam0->f_8[1 /*18*/][4];
		Global_1633501.f_54824 = uParam0->f_8[1 /*18*/][5];
		Global_1633501.f_54823 = uParam0->f_8[1 /*18*/][6];
		Global_1633501.f_57 = uParam0->f_8[1 /*18*/][7];
		Global_1633501.f_42633 = uParam0->f_8[1 /*18*/][8];
		Global_1633501.f_62 = uParam0->f_8[1 /*18*/][9];
		Global_1633501.f_52 = uParam0->f_8[1 /*18*/][10];
		Global_1633501.f_54 = uParam0->f_8[1 /*18*/][11];
		Global_1633501.f_56 = uParam0->f_8[1 /*18*/][12];
		Global_1633501.f_55 = uParam0->f_8[1 /*18*/][13];
		Global_1633501.f_57269 = uParam0->f_8[1 /*18*/][14];
	}
	else if (Global_1633501 == 2)
	{
		Global_1633501.f_25 = uParam0->f_8[2 /*18*/][4];
		Global_1633501.f_41914 = uParam0->f_8[2 /*18*/][14];
		Global_1633501.f_41911 = uParam0->f_8[2 /*18*/][7];
	}
}

bool func_13()
{
	return Global_1312368;
}

int func_14()
{
	if (unk_0x48B8265059381CD0(Global_1353070.f_102, 1))
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_1353070.f_102, 2))
	{
		unk_0x21E7933CCC7B3724(&(Global_1353070.f_102), 2);
		return 2;
	}
	if (unk_0x48B8265059381CD0(Global_1353070.f_102, 3))
	{
		unk_0x21E7933CCC7B3724(&(Global_1353070.f_102), 3);
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
	int iVar6;
	
	Global_1633501.f_89286 = 0;
	if (bParam0)
	{
		if (((!func_32() || func_31() == 36) || func_31() == 39) || func_31() == 34)
		{
			Global_1633501.f_88646 = 0;
		}
		Global_1633501.f_61976 = -1;
		Global_1633501.f_11 = 0;
		Global_1633501.f_12 = 0;
		Global_1633501.f_13 = 0;
		Global_1633501.f_14 = 0;
		Global_1633501.f_15 = 0;
		Global_1633501.f_16 = 0;
		Global_1633501.f_17 = 0;
		Global_1633501.f_18 = 0;
		Global_1633501.f_19 = 0;
		Global_1633501.f_20 = 0;
		Global_1633501.f_21 = 0;
		Global_1633501.f_22 = 0;
		Global_1633501.f_23 = 0;
		Global_1633501.f_91 = 0;
		Global_1633501.f_102485 = 0;
		Global_1633501.f_10 = 0;
		Global_1633501.f_25 = 0;
		Global_1633501.f_50 = 0;
		Global_1633501.f_27 = 0;
		Global_1633501.f_49 = 0;
		Global_1633501.f_51 = 0;
		Global_1633501.f_52 = 0;
		Global_1633501.f_54 = 0;
		Global_1633501.f_55 = 0;
		Global_1633501.f_56 = 0;
		Global_1633501.f_57 = 0;
		Global_1633501.f_29 = 0;
		Global_1633501.f_30 = 1;
		Global_1633501.f_6 = 0;
		Global_1633501.f_45 = 0;
		Global_1633501.f_107626 = 10;
		Global_1633501.f_107627 = 5f;
		Global_1633501.f_107628 = 10;
		Global_1633501.f_48 = 1;
		Global_1633501.f_26 = 0;
		Global_1633501.f_89263 = 0;
		Global_1633501.f_89266 = 0;
		Global_1633501.f_89265 = 0;
		Global_1633501.f_89262 = 0;
		Global_1633501.f_107591 = 0;
		if (bParam1)
		{
			Global_1633501.f_4 = 0;
			Global_1633501.f_5 = 0;
		}
		Global_1633501.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1633501.f_35487[iVar0 /*38*/] = -1;
			Global_1633501.f_35487[iVar0 /*38*/].f_1 = -1;
			Global_1633501.f_35487[iVar0 /*38*/].f_2 = 0;
			Global_1633501.f_35487[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1633501.f_89267 = 0;
		Global_1633501.f_89268 = 0;
		Global_1633501.f_89269 = 0;
		Global_1633501.f_89258 = -1;
		Global_1633501.f_89257 = 0;
		Global_1633501.f_61 = 0;
		Global_1633501.f_69 = { 0f, 0f, 0f };
		Global_1633501.f_72 = { 0f, 0f, 0f };
		Global_1633501.f_75 = { 0f, 0f, 0f };
		Global_1633501.f_78 = { 0f, 0f, 0f };
		Global_1633501.f_81 = { 0f, 0f, 0f };
		Global_1633501.f_84 = { 0f, 0f, 0f };
		Global_1633501.f_87 = 0f;
		Global_1633501.f_88 = 0f;
		Global_1633501.f_88621 = 0f;
		Global_1633501.f_90 = 0;
		Global_1633501.f_89285 = 0;
		Global_1633501.f_107580 = 0;
		Global_1633501.f_102697 = 0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			Global_1633501.f_41937[iVar0] = 0;
			Global_1633501.f_41920[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1633501.f_107706[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1633501.f_93081[iVar0] = 0;
		Global_1633501.f_93088[iVar0] = -1;
		iVar0++;
	}
	Global_1633501.f_93095 = 0;
	Global_1633501.f_93096 = -1;
	Global_1633501.f_1 = -1;
	StringCopy(&(Global_1633501.f_88971), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1633501.f_92685[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1633501.f_104509 = 0;
	Global_1633501.f_44 = 0;
	Global_1633501.f_63 = { 0f, 0f, 0f };
	Global_1633501.f_102696 = -1;
	Global_1633501.f_89264 = 0f;
	StringCopy(&(Global_1633501.f_88653), "", 64);
	StringCopy(&(Global_1633501.f_88955), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1633501.f_88939[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1633501.f_88675[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_30();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1633501.f_35487[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_29();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_37[iVar0] = 0;
		Global_1633501.f_102459[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_102464[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_1633501.f_32[iVar0] = 1;
		Global_1633501.f_88187[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_88200[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_88213[iVar0] = 0f;
		Global_1633501.f_104513[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_104526[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_104539[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_104552[iVar0] = 45f;
		Global_1633501.f_104557[iVar0] = 0f;
		Global_1633501.f_85058[iVar0] = -1;
		StringCopy(&(Global_1633501.f_104868[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1633501.f_104933[iVar0 /*16*/]), "", 64);
		Global_1633501.f_104998[iVar0] = 0;
		StringCopy(&(Global_1633501.f_104670[iVar0 /*16*/]), "", 64);
		Global_1633501.f_93135[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1633501.f_104735[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_1633501.f_36330[iVar0] = -1;
		Global_1633501.f_36335[iVar0] = -1;
		StringCopy(&(Global_1633501.f_107509[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_1633501.f_107526[iVar0 /*4*/]), "", 16);
		Global_1633501.f_107543[iVar0] = 0;
		Global_1633501.f_107573[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_107615 = 0;
	Global_1633501.f_107614 = 0;
	Global_1633501.f_107616 = 0;
	Global_1633501.f_107617 = 1;
	Global_1633501.f_107618 = 2;
	Global_1633501.f_107619 = 3;
	Global_1633501.f_107620 = 4;
	Global_1633501.f_107621 = 6;
	Global_1633501.f_107622 = 7;
	Global_1633501.f_107623 = 9;
	Global_1633501.f_107624 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_107679[iVar0] = 0;
		Global_1633501.f_107684[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_107630 = 5;
	Global_1633501.f_107629 = 0;
	Global_1633501.f_107625 = 3;
	Global_1633501.f_107701 = 5000;
	Global_1633501.f_107702 = 2500;
	Global_1633501.f_107703 = 3000;
	Global_1633501.f_104562 = { 0f, 0f, 0f };
	Global_1633501.f_104565 = { 0f, 0f, 0f };
	Global_1633501.f_104568 = { 0f, 0f, 0f };
	Global_1633501.f_104571 = 45f;
	Global_1633501.f_104572 = 0f;
	Global_1633501.f_104573 = 0;
	Global_1633501.f_105016 = 10000;
	Global_1633501.f_105030 = 1;
	Global_1633501.f_105017 = 1f;
	Global_1633501.f_107664 = 1;
	Global_1633501.f_107665 = 0;
	Global_1633501.f_105018 = 0f;
	Global_1633501.f_105031 = 60f;
	Global_1633501.f_105032 = 5f;
	Global_1633501.f_105033 = 60f;
	Global_1633501.f_105034 = -1f;
	Global_1633501.f_105020 = 2;
	Global_1633501.f_105021 = 2;
	Global_1633501.f_105022 = 3000;
	Global_1633501.f_105023 = 150;
	Global_1633501.f_105024 = 3f;
	Global_1633501.f_105025 = 1f;
	Global_1633501.f_105026 = 25;
	Global_1633501.f_105027 = 5;
	Global_1633501.f_105028 = 5;
	Global_1633501.f_105029 = 2000;
	Global_1633501.f_105047 = -1f;
	StringCopy(&(Global_1633501.f_105048), "", 16);
	StringCopy(&(Global_1633501.f_105052), "", 16);
	Global_1633501.f_42495 = 0.075f;
	Global_1633501.f_42496 = 0.075f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1633501.f_42498[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_42529[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1633501.f_105035 = 0;
	Global_1633501.f_105044 = 0;
	Global_1633501.f_105036 = 0;
	Global_1633501.f_105037 = 0;
	Global_1633501.f_105038 = 0;
	Global_1633501.f_105039 = 0;
	Global_1633501.f_105040 = 0;
	Global_1633501.f_105041 = 0;
	Global_1633501.f_105045 = 0;
	Global_1633501.f_105042 = -1f;
	Global_1633501.f_105043 = 0;
	Global_1633501.f_105046 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1633501.f_79920[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1633501.f_79969[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1633501.f_80018[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_1633501.f_80119[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_27(&(Global_1633501.f_93140[iVar0 /*1274*/]));
		func_25(&(Global_1633501.f_99511[iVar0 /*434*/]));
		iVar0++;
	}
	func_25(&(Global_1633501.f_101682));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1633501.f_102593[iVar0 /*4*/].f_3 = 0;
		Global_1633501.f_102593[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1633501.f_102694 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_61912[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1633501.f_61973 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_24(&(Global_1633501.f_89303[iVar0 /*49*/]), iVar0);
		iVar0++;
	}
	Global_1633501.f_92974[0] = 0;
	Global_1633501.f_92974[1] = 0;
	Global_1633501.f_92978 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_23(&(Global_1633501.f_102491[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1633501.f_107548 = 0;
	Global_1633501.f_2 = 0;
	Global_1633501.f_89238 = 0;
	Global_1633501.f_102485 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_89271[iVar0] = -1;
		Global_1633501.f_102698[iVar0] = -1;
		iVar0++;
	}
	Global_1633501.f_107549 = 0;
	Global_1633501.f_107571 = 0;
	Global_1633501.f_89301 = 0;
	Global_1633501.f_89302 = 0;
	Global_1633501.f_102737 = 0.5f;
	Global_1633501.f_92992 = 1;
	Global_1633501.f_92994 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_102738[iVar0] = 0f;
		Global_1633501.f_102759[iVar0] = 0f;
		Global_1633501.f_102780[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_42574[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_42622[iVar0] = -1;
		iVar0++;
	}
	Global_1632256 = 0;
	Global_1633501.f_7 = 0;
	Global_1633501.f_89244 = 0;
	Global_1633501.f_34691 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1633501.f_84757)
	{
		Global_1633501.f_84757[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1633501.f_84757[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_35451[iVar0 /*3*/][0] = 0;
		Global_1633501.f_35451[iVar0 /*3*/][1] = 0;
		Global_1633501.f_35438[iVar0 /*3*/][0] = 0;
		Global_1633501.f_35438[iVar0 /*3*/][1] = 0;
		Global_1633501.f_35464[iVar0 /*3*/][0] = 0;
		Global_1633501.f_35464[iVar0 /*3*/][1] = 0;
		Global_1633501.f_35477[iVar0] = 0;
		Global_1633501.f_35482[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_1633501.f_93019[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_1633501.f_93112[iVar0 /*2*/][0] = 0;
		Global_1633501.f_93126[iVar0 /*2*/][0] = 0;
		Global_1633501.f_92[iVar0 /*8637*/] = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_4 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_7 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_11 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_14 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_15 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_18 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_19 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_22 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_23 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_36 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_24 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_25 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_26 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_27 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_28 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_29 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_30 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_31 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_32 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_33 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_34 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_57 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_3667 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3669 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3690 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3763 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4882 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3668 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3670 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4883 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_59 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_60 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_61 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_207 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_208 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_209 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_354 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_355 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_356 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4884 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_55 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_56 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3295 = 60000;
		Global_1633501.f_92[iVar0 /*8637*/].f_3521 = 60000;
		Global_1633501.f_92[iVar0 /*8637*/].f_4350 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_583 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_584 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_8454 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_8455 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_8456 = 1;
		Global_1633501.f_92[iVar0 /*8637*/].f_3301 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3302 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1633501.f_92[iVar0 /*8637*/].f_3303[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3321[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3339[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3357[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3393[iVar1] = 4;
			Global_1633501.f_92[iVar0 /*8637*/].f_3411[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3447[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3465[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3483[iVar1] = 10;
			Global_1633501.f_92[iVar0 /*8637*/].f_3501[iVar1] = 10;
			Global_1633501.f_92[iVar0 /*8637*/].f_3429[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3375[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8601[iVar1] = 10;
			Global_1633501.f_92[iVar0 /*8637*/].f_8619[iVar1] = 10;
			iVar1++;
		}
		Global_1633501.f_34641[iVar0] = 0;
		Global_1633501.f_34646[iVar0] = 0;
		Global_1633501.f_34651[iVar0] = -1;
		Global_1633501.f_34697[iVar0] = 0;
		StringCopy(&(Global_1633501.f_34702[iVar0 /*4*/]), "", 16);
		Global_1633501.f_34724[iVar0] = 3;
		Global_1633501.f_34729[iVar0] = -1;
		Global_1633501.f_34692[iVar0] = 0;
		Global_1633501.f_34719[iVar0] = 0;
		Global_1633501.f_92980[iVar0] = 0;
		Global_1633501.f_92985[iVar0] = 0;
		Global_1633501.f_42607[iVar0] = 100;
		Global_1633501.f_42612[iVar0] = 1f;
		Global_1633501.f_42617[iVar0] = 0;
		Global_1633501.f_42627[iVar0] = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4676 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4677 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4678 = 0;
		Global_1632256.f_1[iVar0] = 0;
		Global_1633501.f_93097[iVar0] = 0;
		Global_1633501.f_93102[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1633501.f_88312[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1633501.f_88421[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				Global_1633501.f_88466[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_1633501.f_105003[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1633501.f_41954[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_107550[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1633501.f_42047[iVar0 /*93*/][0 /*23*/][iVar1] = 0;
			Global_1633501.f_42047[iVar0 /*93*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_104575[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_104628[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 69)
		{
			Global_1633501.f_92[iVar0 /*8637*/].f_62[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_210[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_357[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_133[iVar1] = 1f;
			Global_1633501.f_92[iVar0 /*8637*/].f_281[iVar1] = 1f;
			Global_1633501.f_92[iVar0 /*8637*/].f_428[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_92[iVar0 /*8637*/].f_501[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_506[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1633501.f_35869[iVar1 /*27*/] = 0;
			Global_1633501.f_35869[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1633501.f_35869[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1633501.f_35869[iVar1 /*27*/].f_25 = 0f;
			Global_1633501.f_35869[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1633501.f_35869[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1633501.f_35869[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1633501.f_35869[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1633501.f_92[iVar0 /*8637*/].f_4496[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4514[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4532[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4550[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4568[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4586[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4604[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4622[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4640[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4658[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_37[iVar1] = -1;
			Global_1633501.f_61826[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4679[iVar1] = 60000;
			Global_1633501.f_92[iVar0 /*8637*/].f_4697[iVar1] = 60000;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_4801[iVar2 /*16*/]), "", 64);
				Global_1633501.f_92[iVar0 /*8637*/].f_4715[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_1633501.f_34734[iVar1 /*5*/][iVar0] = -1;
			Global_1633501.f_34820[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_34906[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_34992[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_35078[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_35164[iVar1 /*5*/][iVar0] = 1500;
			Global_1633501.f_35250[iVar1 /*5*/][iVar0] = 1400;
			Global_1633501.f_35336[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1632256.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1632256.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_603[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_621[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3523[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3541[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3559[iVar1] = 1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3631[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3649[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3691[iVar1] = 10000;
			Global_1633501.f_92[iVar0 /*8637*/].f_3671[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3727[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3577[iVar1] = 1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3745[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3764[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4048[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4084[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3800[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3782[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3940[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4066[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4102[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3994[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4012[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3958[iVar1] = 100;
			Global_1633501.f_92[iVar0 /*8637*/].f_3818[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_3870[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_3922[iVar1] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_3976[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4030[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4120[iVar1] = -1f;
			Global_1633501.f_92[iVar0 /*8637*/].f_891[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_909[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_927[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_945[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_981[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_639[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_657[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_963[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_999[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8112[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8130[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8148[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8166[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8184[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8202[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8382[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8220[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8238[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8256[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8274[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8292[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8310[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_511[iVar1] = 5;
			Global_1633501.f_92[iVar0 /*8637*/].f_529[iVar1] = 20;
			Global_1633501.f_92[iVar0 /*8637*/].f_4388[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4406[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4424[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4442[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_4460[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_855[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_873[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3595[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3613[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_547[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_565[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_585[iVar1] = 0;
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_4885[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_5158[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_5431[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_6250[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_5704[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_5977[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7888[0 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7888[1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_6523[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_6796[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7069[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7342[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7615[iVar1 /*16*/]), "", 64);
			Global_1633501.f_92[iVar0 /*8637*/].f_4260[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4296[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4278[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_4138[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_4190[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_16 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_9 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_10 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_19 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_17 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_18 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_20 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_21 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_22 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_23 = 120;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_16 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_9 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_10 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_19 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_17 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_18 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_20 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_21 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_22 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_23 = 120;
			Global_1633501.f_92[iVar0 /*8637*/].f_4242[iVar1] = 3f;
			Global_1633501.f_92[iVar0 /*8637*/].f_3709[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4314[iVar1] = 10.5f;
			Global_1633501.f_92[iVar0 /*8637*/].f_4332[iVar1] = 1f;
			Global_1633501.f_92[iVar0 /*8637*/].f_4478[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_675[iVar1] = 12;
			Global_1633501.f_92[iVar0 /*8637*/].f_693[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_711[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_729[iVar1] = 12;
			Global_1633501.f_92[iVar0 /*8637*/].f_747[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_765[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_783[iVar1] = 100;
			Global_1633501.f_92[iVar0 /*8637*/].f_8475[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_801[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_819[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_837[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8436[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/] = 1000;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_1 = 1.15f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_2 = 25;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_7 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_3 = 1;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_5 = 25;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_6 = 10f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2847[iVar1 /*3*/] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2847[iVar1 /*3*/].f_1 = 1;
			Global_1633501.f_92[iVar0 /*8637*/].f_2847[iVar1 /*3*/].f_2 = 50;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_1[0] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_1[1] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_1[2] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_1[3] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_6 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_7 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_8 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_9 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_10 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2968[iVar1 /*3*/] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_2968[iVar1 /*3*/].f_1 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_2968[iVar1 /*3*/].f_2 = 0;
			iVar3 = 0;
			iVar3 = 0;
			while (iVar3 <= 14)
			{
				Global_1633501.f_92[iVar0 /*8637*/].f_3020[iVar1 /*16*/][iVar3] = 0;
				iVar3++;
			}
			Global_1633501.f_92[iVar0 /*8637*/].f_8493[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8511[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8529[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8547[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8565[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8583[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_7921[iVar1 /*5*/][0] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_7921[iVar1 /*5*/][1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_7921[iVar1 /*5*/][2] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_7921[iVar1 /*5*/][3] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8007[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8025[iVar1 /*4*/][0] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8025[iVar1 /*4*/][1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8025[iVar1 /*4*/][2] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8094[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4352[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8328[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8346[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8364[iVar1] = 0;
			func_22(&(Global_1633501.f_92[iVar0 /*8637*/].f_2899[iVar1 /*4*/]));
			iVar1++;
		}
		Global_1633501.f_92[iVar0 /*8637*/].f_3294 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3520 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3293 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3519 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3296 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3297 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3298 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3299 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3300 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3522 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_1017 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_1018 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_352 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_353 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_499 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_500 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_4866 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4867 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4868 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4869 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4870 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4871 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4872 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4873 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4874 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4875 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4876 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4877 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4878 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4879 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4880 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4881 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_80067[iVar0] = 0;
		Global_1633501.f_80072[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_80083 = 0;
	Global_1633501.f_80084 = 0;
	Global_1633501.f_80085 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1633501.f_80086[iVar0] = 0;
		Global_1633501.f_80097[iVar0] = 0;
		Global_1633501.f_80108[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_66 = { 0f, 0f, 0f };
	Global_1633501.f_36340 = { 0f, 0f, 0f };
	Global_1633501.f_89 = 0f;
	Global_1633501.f_102116 = { 0f, 0f, 0f };
	Global_1633501.f_107549 = 0;
	Global_1633501.f_107571 = 0;
	Global_1633501.f_89239[0] = 0;
	Global_1633501.f_89239[1] = 0;
	Global_1633501.f_89242 = 0;
	Global_1633501.f_89238 = 0;
	Global_1633501.f_102703 = 0;
	Global_1633501.f_102704 = 0;
	Global_1633501.f_102705 = 0;
	Global_1633501.f_102706 = 0;
	Global_1633501.f_102708 = 0;
	Global_1633501.f_102710 = 0;
	Global_1633501.f_102712 = 0;
	Global_1633501.f_102715 = 0;
	Global_1633501.f_102716 = 0;
	Global_1633501.f_102717 = 0;
	Global_1633501.f_102718 = 0;
	Global_1633501.f_102719 = 0;
	Global_1633501.f_102720 = 0;
	Global_1633501.f_102726 = -1;
	Global_1633501.f_102727 = -1;
	Global_1633501.f_102728 = -1;
	Global_1633501.f_102729 = -1;
	Global_1633501.f_102730 = -1;
	Global_1633501.f_102731 = -1;
	Global_1633501.f_102732 = -1;
	Global_1633501.f_102733 = -1;
	Global_1633501.f_102734 = -1;
	Global_1633501.f_102735 = -1;
	Global_1633501.f_102736 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1633501.f_37044[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_38098[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_36343[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_36343[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_36343[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_37397[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_37397[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_37397[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_37255[iVar0] = 0f;
		Global_1633501.f_38309[iVar0] = 0f;
		Global_1633501.f_39370[iVar0] = 1f;
		Global_1633501.f_38380[iVar0] = 0;
		Global_1633501.f_38522[iVar0] = 0;
		Global_1633501.f_38451[iVar0] = -1;
		Global_1633501.f_38593[iVar0] = 0;
		Global_1633501.f_39299[iVar0] = 0f;
		Global_1633501.f_38664[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_38875[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_39086[iVar0] = -1;
		Global_1633501.f_39157[iVar0] = 0;
		Global_1633501.f_37326[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_41910 = 0;
	if (bParam0)
	{
		Global_1633501.f_41911 = 0;
		Global_1633501.f_41919 = 0;
	}
	Global_1633501.f_41917 = 0;
	Global_1633501.f_41918 = 0;
	Global_1633501.f_42566 = 0f;
	Global_1633501.f_44917 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		Global_1633501.f_44918[iVar0 /*61*/] = { 0f, 0f, 0f };
		Global_1633501.f_44918[iVar0 /*61*/].f_6 = 0f;
		Global_1633501.f_44918[iVar0 /*61*/].f_7 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_9 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_8 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_10 = 1;
		Global_1633501.f_44918[iVar0 /*61*/].f_19 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_12 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_13 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_14 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_15 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_11 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_45 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_46 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_47 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_16 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_17 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_18 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_20 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_48 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_21 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_22 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_23 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_24 = 1;
		Global_1633501.f_44918[iVar0 /*61*/].f_34 = 10f;
		Global_1633501.f_44918[iVar0 /*61*/].f_35 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_59 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_60 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_21(&(Global_1633501.f_105056[iVar0 /*244*/]));
		iVar0++;
	}
	Global_1633501.f_107497 = 0;
	Global_1633501.f_54146 = 0;
	Global_1633501.f_54147 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_54148[iVar0 /*32*/] = { 0f, 0f, 0f };
		Global_1633501.f_54148[iVar0 /*32*/].f_6 = 0f;
		Global_1633501.f_54148[iVar0 /*32*/].f_7 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_8 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_12 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_11 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_13 = 1;
		Global_1633501.f_54148[iVar0 /*32*/].f_18 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_31 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_14 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_28 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_29 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_30 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_15 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_16 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_17 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_9 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_10 = 1;
		iVar0++;
	}
	Global_1633501.f_44592 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1633501.f_44593[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1633501.f_44593[iVar0 /*19*/].f_3 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_4 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_14 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_12 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_15 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_16 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_6 = -1;
		Global_1633501.f_44593[iVar0 /*19*/].f_5 = -1;
		Global_1633501.f_44593[iVar0 /*19*/].f_13 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_8 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_9 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_10 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_11 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_7 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_17 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1633501.f_44879 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1633501.f_44880[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1633501.f_44880[iVar0 /*7*/].f_3 = 0f;
		Global_1633501.f_44880[iVar0 /*7*/].f_4 = 0;
		Global_1633501.f_44880[iVar0 /*7*/].f_5 = 0;
		Global_1633501.f_44880[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1633501.f_42567 = 3.5f;
		Global_1633501.f_42568 = 7f;
		Global_1633501.f_42569 = 0f;
		Global_1633501.f_42570 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1633501.f_42574[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1633501.f_42622[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1633501.f_89276 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_41899[iVar0] = 0;
		Global_1633501.f_93076[iVar0] = -1;
		Global_1633501.f_93121[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1633501.f_41405[iVar1 /*29*/][iVar0] = 0;
			Global_1633501.f_41405[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1633501.f_41405[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1633501.f_41405[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1633501.f_41405[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1633501.f_102486[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1633501.f_42633 = 1;
	}
	Global_1633501.f_42635 = 0;
	Global_1633501.f_42636 = 0;
	Global_1633501.f_42637 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_42638[iVar0 /*93*/] = { 0f, 0f, 0f };
		Global_1633501.f_42638[iVar0 /*93*/].f_4 = { 0f, 0f, 0f };
		Global_1633501.f_42638[iVar0 /*93*/].f_3 = 0f;
		Global_1633501.f_42638[iVar0 /*93*/].f_7 = 50f;
		Global_1633501.f_42638[iVar0 /*93*/].f_8 = 0f;
		Global_1633501.f_42638[iVar0 /*93*/].f_9 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_10 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_11 = { 0f, 0f, 0f };
		Global_1633501.f_42638[iVar0 /*93*/].f_14 = 0f;
		Global_1633501.f_42638[iVar0 /*93*/].f_15 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_16 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_27 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_29 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_30 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_31 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_44 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_43 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_45 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_46 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_47 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_48 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_49 = 60;
		Global_1633501.f_42638[iVar0 /*93*/].f_50 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_37 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_92 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_32 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_33 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_34 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_55 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_35 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_51 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_52 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_53 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_83 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_84 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_85 = { 0f, 0f, 0f };
		Global_1633501.f_42638[iVar0 /*93*/].f_88 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_81 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_82 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_89 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_42638[iVar0 /*93*/].f_17[iVar1] = 0;
			Global_1633501.f_42638[iVar0 /*93*/].f_22[iVar1] = 99999;
			Global_1633501.f_42638[iVar0 /*93*/].f_65[iVar1] = 0;
			Global_1633501.f_42638[iVar0 /*93*/].f_70[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1633501.f_102134[iVar0 /*18*/]), "", 64);
		Global_1633501.f_102134[iVar0 /*18*/].f_16 = 0;
		Global_1633501.f_102134[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1633501.f_54821 = 0;
	Global_1633501.f_54822 = 0;
	if (bParam0)
	{
		if (func_9() && !func_20())
		{
			Global_1633501.f_54823 = -1;
		}
		else
		{
			Global_1633501.f_54823 = 0;
		}
	}
	Global_1633501.f_54824 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1633501.f_54825[iVar0 /*40*/] = { 0f, 0f, 0f };
		Global_1633501.f_54825[iVar0 /*40*/].f_3 = 0f;
		Global_1633501.f_54825[iVar0 /*40*/].f_13 = 77;
		Global_1633501.f_54825[iVar0 /*40*/].f_4 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_5 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_21 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_22 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_7 = 1f;
		Global_1633501.f_54825[iVar0 /*40*/].f_24 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_25 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_26 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_33 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_30 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_36 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_34 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_31 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_37 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_35 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_32 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_38 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_27 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_28 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_29 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_39 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_54825[iVar0 /*40*/].f_8[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_19();
	func_18();
	Global_1633501.f_107947 = -1;
	Global_1633501.f_107948 = 0;
	Global_1633501.f_107950 = 0;
	Global_1633501.f_107949 = -1;
	Global_1633501.f_42497 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1633501.f_80077[iVar0] = -1;
		iVar0++;
	}
	Global_1633501.f_89290 = -1;
	Global_1633501.f_89291 = 15;
	Global_1633501.f_89292 = -1;
	Global_1633501.f_89297 = -1;
	Global_1633501.f_89298 = 0;
	Global_1633501.f_89293 = 2.5f;
	Global_1633501.f_89294 = 8f;
	Global_1633501.f_89295 = 2.5f;
	Global_1633501.f_89296 = 8f;
	Global_1633501.f_57267 = 0;
	Global_1633501.f_44916 = 0;
	if (bParam0)
	{
		Global_1633501.f_42573 = -1;
		Global_1633501.f_41915 = -1;
	}
	Global_1633501.f_57268 = 0;
	Global_1633501.f_57269 = 0;
	Global_1633501.f_57270 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1633501.f_57271[iVar0 /*138*/] = { 0f, 0f, 0f };
		Global_1633501.f_57271[iVar0 /*138*/].f_3 = 0f;
		Global_1633501.f_57271[iVar0 /*138*/].f_4 = 50f;
		Global_1633501.f_57271[iVar0 /*138*/].f_5 = 0f;
		Global_1633501.f_57271[iVar0 /*138*/].f_6 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_7 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_8 = { 0f, 0f, 0f };
		Global_1633501.f_57271[iVar0 /*138*/].f_11 = 0f;
		Global_1633501.f_57271[iVar0 /*138*/].f_12 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_23 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_24 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_25 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_26 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_30 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_31 = 100;
		Global_1633501.f_57271[iVar0 /*138*/].f_32 = 1001f;
		Global_1633501.f_57271[iVar0 /*138*/].f_33 = 1001f;
		Global_1633501.f_57271[iVar0 /*138*/].f_35 = 1.5f;
		Global_1633501.f_57271[iVar0 /*138*/].f_44 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_111 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_45 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_46 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_27 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_28 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_29 = -1f;
		Global_1633501.f_57271[iVar0 /*138*/].f_50 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_39 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_40 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_41 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_63 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_64 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_66 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_109 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_108 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1633501.f_57271[iVar0 /*138*/].f_112[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_57271[iVar0 /*138*/].f_119[iVar1] = 0f;
			iVar1++;
		}
		Global_1633501.f_57271[iVar0 /*138*/].f_65 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_72 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_42 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_122 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_127 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_128 = { 0f, 0f, 0f };
		Global_1633501.f_57271[iVar0 /*138*/].f_131 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_124 = -1f;
		Global_1633501.f_57271[iVar0 /*138*/].f_123 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_126 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_36 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_37 = 5;
		Global_1633501.f_57271[iVar0 /*138*/].f_136 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_125 = 10;
		Global_1633501.f_57271[iVar0 /*138*/].f_137 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_57271[iVar0 /*138*/].f_13[iVar1] = 0;
			Global_1633501.f_57271[iVar0 /*138*/].f_18[iVar1] = 99999;
			Global_1633501.f_57271[iVar0 /*138*/].f_102[iVar1] = 0;
			Global_1633501.f_57271[iVar0 /*138*/].f_85[iVar1] = 0;
			Global_1633501.f_57271[iVar0 /*138*/].f_90[iVar1] = 0;
			Global_1633501.f_57271[iVar0 /*138*/].f_53[iVar1] = -1;
			Global_1633501.f_57271[iVar0 /*138*/].f_58[iVar1] = -1;
			Global_1633501.f_57271[iVar0 /*138*/].f_67[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1633501.f_88220 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1633501.f_88221[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1633501.f_88221[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1633501.f_88221[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1633501.f_80200 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1633501.f_80207[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1633501.f_80207[iVar0 /*15*/].f_3 = 0f;
		Global_1633501.f_80207[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_80201[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/] = { 0f, 0f, 0f };
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_3 = 0f;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_4 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_5 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_7 = -1;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_8 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_9 = -1;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_10 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_11 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_12 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_13 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_14 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1633501.f_61974 = 0;
	Global_1633501.f_61977 = 0;
	Global_1633501.f_61978 = 0;
	Global_1633501.f_61975 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1633501.f_61979[iVar0 /*299*/].f_40 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_50 = 0;
		Global_1633501.f_61979[iVar0 /*299*/] = { 0f, 0f, 0f };
		Global_1633501.f_61979[iVar0 /*299*/].f_3 = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_4 = 0.75f;
		Global_1633501.f_61979[iVar0 /*299*/].f_15 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_16 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_17 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_33 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_37 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_38 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_39 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_216 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_215 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_217 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_218 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_219 = 20;
		Global_1633501.f_61979[iVar0 /*299*/].f_227 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_57 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_48 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_35 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_36 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_49 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_189 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_190 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_191 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_192 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_193 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_194 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_195 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_196 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_34 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_13 = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_5 = 50f;
		Global_1633501.f_61979[iVar0 /*299*/].f_6 = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_7 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_14 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_8 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_9 = { 0f, 0f, 0f };
		Global_1633501.f_61979[iVar0 /*299*/].f_12 = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_176 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_64 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_168 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_169 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_170 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_176 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_186 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_177 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_185 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_65 = { 0f, 0f, 0f };
		Global_1633501.f_61979[iVar0 /*299*/].f_58 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_59 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_63 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_60 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_253 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_264 = 1f;
		Global_1633501.f_61979[iVar0 /*299*/].f_265 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_81 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_202 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_53 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_203 = 250;
		Global_1633501.f_61979[iVar0 /*299*/].f_206 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_207 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_270 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_208 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_271 = 4;
		Global_1633501.f_61979[iVar0 /*299*/].f_238 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_154 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_155 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_156 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_228 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_229 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_230 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_267 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_266 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_268 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_269 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_157 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_158 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_61 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_61979[iVar0 /*299*/].f_18[iVar1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_23[iVar1] = 2;
			Global_1633501.f_61979[iVar0 /*299*/].f_28[iVar1] = 99999;
			Global_1633501.f_61979[iVar0 /*299*/].f_197[iVar1] = -1;
			Global_1633501.f_61979[iVar0 /*299*/].f_239[iVar1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_244[iVar1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_254[iVar1] = -1;
			Global_1633501.f_61979[iVar0 /*299*/].f_259[iVar1] = -1;
			Global_1633501.f_61979[iVar0 /*299*/].f_273[iVar1] = -2;
			Global_1633501.f_61979[iVar0 /*299*/].f_171[iVar1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_232[iVar1] = 0;
			iVar1++;
		}
		Global_1633501.f_61979[iVar0 /*299*/].f_116[0] = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_122[0] = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_134[0] = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_82[0] = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_88[0] = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_94[0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_61979[iVar0 /*299*/].f_110[0] = 3;
		Global_1633501.f_61979[iVar0 /*299*/].f_128[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_61979[iVar0 /*299*/].f_68[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_61979[iVar0 /*299*/].f_82[iVar1 + 1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_116[iVar1 + 1] = 0f;
			Global_1633501.f_61979[iVar0 /*299*/].f_122[iVar1 + 1] = 0f;
			Global_1633501.f_61979[iVar0 /*299*/].f_134[iVar1 + 1] = 0f;
			Global_1633501.f_61979[iVar0 /*299*/].f_88[iVar1 + 1] = -1;
			Global_1633501.f_61979[iVar0 /*299*/].f_94[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_61979[iVar0 /*299*/].f_110[iVar1 + 1] = 3;
			Global_1633501.f_61979[iVar0 /*299*/].f_128[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Global_1633501.f_61979[iVar0 /*299*/].f_140[iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1633501.f_61979[iVar0 /*299*/].f_286[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_61979[iVar0 /*299*/].f_293[iVar1] = 0f;
			iVar1++;
		}
		Global_1633501.f_61979[iVar0 /*299*/].f_187 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_188 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_272 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_278 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_279 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_280 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_284 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_281 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_282 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_283 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_285 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_297 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_298 = 0;
		iVar0++;
	}
	Global_1633501.f_80200 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1633501.f_80207[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1633501.f_80207[iVar0 /*15*/].f_3 = 0f;
		Global_1633501.f_80207[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1633501.f_41905[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1633501.f_39442[iVar0 /*109*/].f_53 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_46 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_20 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_28 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_29 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_30 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_55 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_56 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/] = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_21 = { 0f, 0f, 0f };
		Global_1633501.f_39442[iVar0 /*109*/].f_24 = { 0f, 0f, 0f };
		Global_1633501.f_39442[iVar0 /*109*/].f_27 = 1f;
		Global_1633501.f_39442[iVar0 /*109*/].f_97 = 10.5f;
		Global_1633501.f_39442[iVar0 /*109*/].f_99 = 1f;
		Global_1633501.f_39442[iVar0 /*109*/].f_100 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_101 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_96 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_54 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_19 = 1f;
		Global_1633501.f_39442[iVar0 /*109*/].f_102 = -1;
		Global_1633501.f_39442[iVar0 /*109*/].f_103 = -1f;
		Global_1633501.f_39442[iVar0 /*109*/].f_104 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_105 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_106 = -1;
		Global_1633501.f_39442[iVar0 /*109*/].f_108 = -1;
		Global_1633501.f_39442[iVar0 /*109*/].f_47 = 0;
		if (Global_1633501.f_39442[iVar0 /*109*/].f_107 != 0)
		{
			unk_0xCD9B3CC980D9A08F(Global_1633501.f_39442[iVar0 /*109*/].f_107);
			Global_1633501.f_39442[iVar0 /*109*/].f_107 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_39442[iVar0 /*109*/].f_14[iVar1] = 0f;
			Global_1633501.f_39442[iVar0 /*109*/].f_36[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_41[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_31[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_62[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_67[iVar1] = 99999;
			Global_1633501.f_39442[iVar0 /*109*/].f_72[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_77[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_57[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_82[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_87[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1633501.f_88218 = 0;
	Global_1633501.f_43 = 0;
	Global_1633501.f_104510 = 12;
	Global_1633501.f_104511 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_102120[iVar0] = -1;
		Global_1633501.f_102125[iVar0] = -1;
		iVar0++;
	}
	Global_1633501.f_42634 = 0;
	Global_1633501.f_102721 = -1;
	Global_1633501.f_102130 = 0;
	Global_1633501.f_102119 = 0;
	Global_1633501.f_102132 = 0;
	Global_1633501.f_102131 = 0;
	Global_1633501.f_102133 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1633501.f_107583[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_89249[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 29)
	{
		Global_1633501.f_85094[iVar4] = -1;
		Global_1633501.f_85063[iVar4] = -1;
		iVar5 = 0;
		while (iVar5 <= 9)
		{
			iVar6 = 0;
			while (iVar6 <= 3)
			{
				Global_1633501.f_85125[iVar4 /*51*/][iVar5 /*5*/][iVar6] = -1;
				Global_1633501.f_86656[iVar4 /*51*/][iVar5 /*5*/][iVar6] = -1;
				iVar6++;
			}
			iVar5++;
		}
		iVar4++;
	}
	Global_1633501.f_107678 = 0;
	Global_1633501.f_107689 = { 0f, 0f, 0f };
	Global_1633501.f_107692 = { 0f, 0f, 0f };
	func_17();
}

void func_17()
{
	Global_1633501.f_107502 = { 0f, 0f, 0f };
	Global_1633501.f_107505 = 30f;
	Global_1633501.f_107506 = 5f;
	Global_1633501.f_107507 = 30000;
	Global_1633501.f_107508 = 15000;
}

void func_18()
{
	int iVar0;
	
	Global_1633501.f_107725 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_107726[iVar0 /*11*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_107726[iVar0 /*11*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_107726[iVar0 /*11*/].f_7 = 0;
		Global_1633501.f_107726[iVar0 /*11*/].f_8 = 0;
		Global_1633501.f_107726[iVar0 /*11*/].f_9 = 0;
		Global_1633501.f_107726[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	int iVar1;
	
	Global_1633501.f_88954 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1633501.f_88977[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_88977[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_88977[iVar0 /*26*/].f_9 = 0;
		Global_1633501.f_88977[iVar0 /*26*/].f_20 = 0;
		Global_1633501.f_88977[iVar0 /*26*/].f_22 = 0f;
		Global_1633501.f_88977[iVar0 /*26*/].f_23 = 0f;
		Global_1633501.f_88977[iVar0 /*26*/].f_21 = 0;
		Global_1633501.f_88977[iVar0 /*26*/].f_7 = 0f;
		Global_1633501.f_88977[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

int func_20()
{
	if (Global_1633501 == 0 && Global_1633501.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

void func_21(var uParam0)
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

void func_22(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_23(var uParam0)
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

void func_24(var uParam0, int iParam1)
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
		unk_0x21E7933CCC7B3724(&(Global_1633501.f_92974[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0xA3794949321E107C(uParam0->f_48))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_48));
	}
}

void func_25(char* sParam0)
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
		func_26(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_26(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_27(char* sParam0)
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
		func_28(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_26(&(sParam0->f_741[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_28(char* sParam0, int iParam1)
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

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		Global_1633501.f_42472[iVar0] = 0;
		iVar0++;
	}
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1633501.f_88804[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_31()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188;
}

bool func_32()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
}

void func_33()
{
	func_34();
	Global_1633501.f_88218 = 0;
	Global_1312439 = 1;
	Global_1312440 = 0;
	unk_0x921053BAF754303D();
}

void func_34()
{
	Global_17151.f_5 = 0;
}

