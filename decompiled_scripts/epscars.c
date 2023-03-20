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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	struct<3> Local_39 = { 0, 0, 0 } ;
	struct<27> Local_42 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_69[5];
	int iLocal_85[5] = { 0, 0, 0, 0, 0 };
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	struct<3> Local_108[2];
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 16;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
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
	var uLocal_143 = 0;
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
	var uLocal_161 = 0;
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
	var uLocal_179 = 0;
	var uLocal_180 = 0;
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
	var uLocal_198 = 0;
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
	var uLocal_216 = 0;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	var uLocal_285 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	Local_39 = { -690.938f, 512.2703f, 109.3639f };
	iLocal_99 = -1;
	iLocal_107 = 60000;
	iLocal_284 = 99;
	if (unk_0xC11469DCA6FC3BB5(146))
	{
		func_90();
	}
	if (func_89(90) == 1)
	{
		func_88();
		unk_0x5E8B6D17FF91CD59();
	}
	iLocal_98 = Global_97353.f_8303.f_103;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_85(6);
	func_84(&Local_42, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, Local_39, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
	func_83(&Local_42, 2);
	Local_42.f_4 = 3;
	unk_0x894DDE7F2D919046(Local_39, 5f, 0, 0, 0, 0, 0);
	func_82(&Local_108, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	unk_0x014C4B659562111A(Local_108[0 /*3*/], Local_108[1 /*3*/], 8.25f, 0, 0, 1);
	unk_0x014C4B659562111A(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	uLocal_117 = unk_0x55686F8055FF786B(Var0, Var3, 0, 1, 1, 1);
	if (func_89(90) == 1)
	{
		func_88();
		func_90();
	}
	if (Global_97353.f_8303.f_104 == 0)
	{
		Global_97353.f_8303.f_104 = unk_0xDF2FD796C54480A5();
	}
	func_77(1);
	func_76(0);
	while (true)
	{
		if (func_89(90) == 1)
		{
			func_88();
			func_90();
		}
		func_75(unk_0x096275889B8E0EE0());
		if (unk_0xB15CD1CF58771DE1() || func_70() != 0)
		{
			func_65();
		}
		switch (iLocal_93)
		{
			case 0:
				func_64(&iLocal_92);
				break;
			
			case 4:
				func_63(&iLocal_92);
				break;
			
			case 1:
				func_62(&iLocal_92);
				break;
			
			case 2:
				func_56(&iLocal_92);
				break;
			
			case 3:
				func_52(&iLocal_92);
				break;
			
			case 6:
				func_49(2, 6, 1);
				func_48(2, "EPS_LSTEMAIL", 1);
				func_47(2);
				func_90();
				break;
		}
		func_44(&Local_42);
		if (func_43(&Local_42))
		{
			if (func_37(&Local_42))
			{
				if (unk_0xA94F3E0AB9695E19() == Global_68043)
				{
					Global_68043 = 0;
					Global_97353.f_18371.f_4796 = 0;
				}
				unk_0x894DDE7F2D919046(Local_42.f_14, 8.5f, 0, 0, 0, 0, 0);
				Global_97353.f_8303.f_103 = iLocal_98;
				func_35();
				func_34(&uLocal_118, 0, unk_0x096275889B8E0EE0(), "MICHAEL", 0, 1);
				func_22(&uLocal_118, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP"))
				{
					unk_0x0BFC2C61FB5B6CA1(1);
				}
				func_19();
			}
		}
		if (Global_97353.f_8303.f_104 != 0)
		{
			iLocal_96 = (Global_97353.f_8303.f_104 + 14 % func_18(unk_0x2D44E8FC79EAB1AC(), unk_0xE136DCA28C4A48BA()));
			if (((unk_0xDF2FD796C54480A5() == iLocal_96 && !func_17(0)) && !unk_0x2E9C3FCB6798F397(unk_0x217E9DC48139933D())) && unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_283, &uLocal_285, &iLocal_284);
		if ((iLocal_106 > 0 && unk_0x4F67E8ECA7D3F667() > iLocal_106) && iLocal_284 == 99)
		{
			iLocal_106 = 0;
			if (func_86())
			{
				func_76(6);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	switch (*iParam2)
	{
		case 0:
			*iParam0 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
			if (unk_0x64BAE9BE701E6C19(*iParam0))
			{
				iVar0 = unk_0xC488DC56F57F2505();
				unk_0xB906B139171B1845(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
				*iParam2++;
			}
			break;
		
		case 1:
			unk_0xF6EA2AC68E7C7293(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			unk_0x164FB269C22AF51C("EPS_CAR_TITLE");
			unk_0x5BB4D22B8B03A30B();
			unk_0x164FB269C22AF51C("EPS_CAR_NOTE");
			unk_0xF00CED653959DE03(func_3());
			unk_0x5BB4D22B8B03A30B();
			unk_0xD4D85E4148B638AD();
			*uParam1 = unk_0x4F67E8ECA7D3F667();
			*iParam2++;
			break;
		
		case 2:
			if ((unk_0x4F67E8ECA7D3F667() - *uParam1) > 7000)
			{
				unk_0xF6EA2AC68E7C7293(*iParam0, "SHARD_ANIM_OUT");
				unk_0xA734310215BCF528(1);
				unk_0xBC38230AD29DBDD4(0.33f);
				unk_0xD4D85E4148B638AD();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0x64BAE9BE701E6C19(*iParam0))
				{
					unk_0x2D8953D6CEBE69D2(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 3:
			if ((unk_0x4F67E8ECA7D3F667() - *uParam1) > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0x64BAE9BE701E6C19(*iParam0))
				{
					unk_0x2D8953D6CEBE69D2(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 4:
			if (unk_0x64BAE9BE701E6C19(*iParam0))
			{
				unk_0x6215C0F9FFF76BAD(iParam0);
			}
			*iParam2 = 99;
			break;
		
		case 99:
			break;
	}
}

int func_2()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x4ED6CFDFE8D4131A(iLocal_98, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	func_49(2, Local_69[(5 - iParam0) /*3*/], 1);
	if (func_15(iLocal_99))
	{
		func_48(2, Local_69[(5 - iParam0) /*3*/].f_2, 0);
	}
	else
	{
		func_48(2, Local_69[(5 - iParam0) /*3*/].f_1, 0);
	}
	iParam0 = 0;
	iVar0 = 0;
	iParam0 = 0;
	while (iParam0 < iLocal_85)
	{
		if (!func_14(iParam0))
		{
			func_12(2, func_13(iLocal_85[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_97353.f_8303.f_104 = unk_0xDF2FD796C54480A5();
	if (iVar0 == 0)
	{
	}
}

void func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45154[iVar0 /*203*/].f_9 - 1);
	if (!Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_35970[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_6(1, Global_35970[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_35970[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_35970[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45154[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x2004A43D1B1A5D9F())
	{
		return;
	}
	iVar0 = func_70();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x88D2BE4120CBF840("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x88D2BE4120CBF840("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x88D2BE4120CBF840("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x88D2BE4120CBF840(sParam3);
				if (!unk_0x2CF12F9ACF18F048(iParam4))
				{
					unk_0x734AB59A7DBD1DAA(iParam4);
				}
				if (!unk_0x2CF12F9ACF18F048(iParam5))
				{
					unk_0x734AB59A7DBD1DAA(iParam5);
				}
				if (!unk_0x2CF12F9ACF18F048(iParam6))
				{
					unk_0x734AB59A7DBD1DAA(iParam6);
				}
				if (!unk_0x2CF12F9ACF18F048(iParam7))
				{
					unk_0x734AB59A7DBD1DAA(iParam7);
				}
				if (!unk_0x2CF12F9ACF18F048(iParam8))
				{
					unk_0x734AB59A7DBD1DAA(iParam8);
				}
				if (!unk_0x2CF12F9ACF18F048(iParam9))
				{
					unk_0x734AB59A7DBD1DAA(iParam9);
				}
				if (!unk_0x2CF12F9ACF18F048(iParam10))
				{
					unk_0x734AB59A7DBD1DAA(iParam10);
				}
				if (!unk_0x2CF12F9ACF18F048(iParam11))
				{
					unk_0x734AB59A7DBD1DAA(iParam11);
				}
				if (!unk_0x2CF12F9ACF18F048(iParam12))
				{
					unk_0x734AB59A7DBD1DAA(iParam12);
				}
				if (!unk_0x2CF12F9ACF18F048(iParam13))
				{
					unk_0x734AB59A7DBD1DAA(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(unk_0xA514271203084072(&cVar2, &cVar2, 0, 2, unk_0xCFEDCCAD3C5BA90D(func_8(iParam1)), 0));
		}
		else
		{
			func_7(unk_0xA514271203084072("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xCFEDCCAD3C5BA90D(func_8(iParam1)), 0));
		}
		switch (Global_14393)
		{
			case 0:
				StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
				Global_35962++;
				if (Global_35962 > 16)
				{
					Global_35962 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
				Global_35964++;
				if (Global_35964 > 16)
				{
					Global_35964 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
				Global_35963++;
				if (Global_35963 > 16)
				{
					Global_35963 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xB906B139171B1845(-1, "Notification", &Global_14382, 1);
	}
}

void func_7(var uParam0)
{
	Global_35965[Global_35969] = uParam0;
	Global_16750 = 1;
	Global_16749 = uParam0;
	Global_35969++;
	if (Global_35969 == 3)
	{
		Global_35969 = 0;
	}
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_9(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[0 /*29*/].f_7));
		
		case 1:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[1 /*29*/].f_7));
		
		case 2:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[2 /*29*/].f_7));
		
		case 7:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[12 /*29*/].f_7));
		
		case 4:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[60 /*29*/].f_7));
		
		case 6:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[62 /*29*/].f_7));
		
		case 3:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[14 /*29*/].f_7));
		
		case 16:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[97 /*29*/].f_7));
		
		case 19:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[99 /*29*/].f_7));
		
		case 15:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[15 /*29*/].f_7));
		
		case 26:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[30 /*29*/].f_7));
		
		case 27:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[17 /*29*/].f_7));
		
		case 29:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[20 /*29*/].f_7));
		
		case 30:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[43 /*29*/].f_7));
		
		case 31:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[44 /*29*/].f_7));
		
		case 32:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[19 /*29*/].f_7));
		
		case 34:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[40 /*29*/].f_7));
		
		case 36:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[22 /*29*/].f_7));
		
		case 38:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[122 /*29*/].f_7));
		
		case 40:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[125 /*29*/].f_7));
		
		case 41:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[113 /*29*/].f_7));
		
		case 42:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[126 /*29*/].f_7));
		
		case 43:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[127 /*29*/].f_7));
		
		case 44:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[124 /*29*/].f_7));
		
		case 45:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[114 /*29*/].f_7));
		
		case 46:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[115 /*29*/].f_7));
		
		case 47:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[116 /*29*/].f_7));
		
		case 48:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[123 /*29*/].f_7));
		
		case 49:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[117 /*29*/].f_7));
		
		case 50:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[118 /*29*/].f_7));
		
		case 51:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[119 /*29*/].f_7));
		
		case 52:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[120 /*29*/].f_7));
		
		case 53:
			return unk_0xCFEDCCAD3C5BA90D(&(Global_97353.f_29774[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_10(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_45154[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45154[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45154[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_12(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_13(int iParam0)
{
	if (iParam0 == iLocal_85[0])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_85[1])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_85[2])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_85[3])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_85[4])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

bool func_14(int iParam0)
{
	return unk_0x4ED6CFDFE8D4131A(iLocal_98, iParam0);
}

bool func_15(int iParam0)
{
	if (iParam0 < 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(iLocal_98, iParam0 + 5);
}

int func_16()
{
	return (5 - func_3());
}

int func_17(int iParam0)
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

int func_18(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_19()
{
	int iVar0;
	
	iLocal_284 = 0;
	unk_0x380F22FED8D528A4(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		unk_0xA4DDF5DF95E65EED(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
}

int func_20(int iParam0, int iParam1)
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

bool func_21(char* sParam0)
{
	unk_0x7130CFD8526145CA(sParam0);
	return unk_0x6DF1648C223C3A9D(0);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0x89EEEEF0CEB4D045(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_32();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x200E87988220C592())
		{
			return 0;
		}
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_30();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_24();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}
	return 0;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x89EEEEF0CEB4D045(0);
	Global_15692 = 1;
}

void func_25()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
}

int func_26()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_28()
{
	if (func_29(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_70();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

bool func_29(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)
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

void func_32()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_34(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
			}
		}
	}
}

int func_35()
{
	if (func_36(0))
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

bool func_36(bool bParam0)
{
	if (!bParam0 && unk_0x8E34C953364A76DD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_68493, 0);
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	
	iVar2 = 0;
	iVar1 = unk_0x08DE8F632C7591EA(unk_0x096275889B8E0EE0(), &uVar3);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_75(uVar3[iVar0]))
		{
			if (unk_0xD3151E53134595E5(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, 0, 1, 0) && !uParam0->f_26)
			{
				if (func_38(uVar3[iVar0]))
				{
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		Global_97353.f_8303.f_104 = unk_0xDF2FD796C54480A5();
		iLocal_106 = (unk_0x4F67E8ECA7D3F667() + iLocal_107);
	}
	return iVar2;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDA76A9F39210D365(uParam0);
	if (func_42(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_41(iVar1, iVar0))
		{
			if (!func_14(iVar0))
			{
				func_40(iVar0, unk_0x82368787EA73C0F7(iParam0) < 875);
				func_39(iVar0, 1);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_39(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&iLocal_98, iParam0);
		iLocal_99 = iParam0;
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&iLocal_98, iParam0);
	}
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF73FBE4845C43B5B(&iLocal_98, iParam0 + 5);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&iLocal_98, iParam0 + 5);
	}
}

int func_41(int iParam0, int iParam1)
{
	if (iParam0 == iLocal_85[iParam1])
	{
		return 1;
	}
	if (iLocal_85[iParam1] != joaat("tornado2"))
	{
		return 0;
	}
	if (iParam0 == joaat("tornado"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado2"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado3"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado4"))
	{
		return 1;
	}
	return 0;
}

bool func_42(int iParam0)
{
	if (!func_75(uParam0))
	{
		return 1;
	}
	if (unk_0x82368787EA73C0F7(uParam0) < 750)
	{
		return 1;
	}
	if (unk_0x9A53C29BDC6F317E(iParam0, 1) || unk_0x9A53C29BDC6F317E(iParam0, 0))
	{
		return 1;
	}
	return unk_0x559F593DF36B5AF9(iParam0) > 0;
}

bool func_43(var uParam0)
{
	return (uParam0->f_5 == 2 && uParam0->f_4 == 2);
}

void func_44(var uParam0)
{
	struct<3> Var0;
	
	uParam0->f_26 = 0;
	if (unk_0x825CA3ED43831015(uParam0->f_19[0 /*3*/], 1.2f, 0, 1, 1, 0, 0, unk_0x096275889B8E0EE0(), 0))
	{
		uParam0->f_26 = 1;
	}
	else if (unk_0x825CA3ED43831015(uParam0->f_19[1 /*3*/], 1.2f, 0, 1, 1, 0, 0, unk_0x096275889B8E0EE0(), 0))
	{
		uParam0->f_26 = 1;
	}
	else
	{
		Var0 = { func_45(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0.5f, 1) };
		uParam0->f_26 = unk_0x825CA3ED43831015(Var0, 1.2f, 0, 1, 1, 0, 0, unk_0x096275889B8E0EE0(), 0);
		if (uParam0->f_26)
		{
		}
	}
	if (uParam0->f_5 == 2 && (uParam0->f_4 != 2 || uParam0->f_4 == 3))
	{
		uParam0->f_17 = (uParam0->f_17 - uParam0->f_18);
		if (uParam0->f_17 <= 0f)
		{
			uParam0->f_17 = 0f;
			uParam0->f_4 = 2;
			unk_0x9F36E8A3D2A21276(iLocal_94);
			iLocal_95 = 0;
			unk_0x8DA75EC60D972359(-1, "CLOSED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_95)
		{
			unk_0x8DA75EC60D972359(iLocal_94, "CLOSING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_95 = 1;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4))
	{
		uParam0->f_17 = (uParam0->f_17 + uParam0->f_18);
		if (uParam0->f_17 >= 1f)
		{
			uParam0->f_17 = 1f;
			uParam0->f_4 = 1;
			unk_0x9F36E8A3D2A21276(iLocal_94);
			iLocal_95 = 0;
			unk_0x8DA75EC60D972359(-1, "OPENED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_95)
		{
			unk_0x8DA75EC60D972359(iLocal_94, "OPENING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_95 = 1;
		}
	}
	if (unk_0x1C168182BEBE2DDA(*uParam0, 20f, uParam0->f_3, 0))
	{
		unk_0x9162718D723FEDDB(uParam0->f_3, *uParam0, 1, uParam0->f_17, 0);
	}
}

Vector3 func_45(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		fParam6 = func_46(fParam6, 0f, 1f);
	}
	return Param0 + Vector(fParam6, fParam6, fParam6) * Param3 - Param0;
}

float func_46(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_45154[iVar0 /*203*/] = 0;
}

void func_48(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_45154[iVar0 /*203*/].f_10[(Global_45154[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
}

int func_49(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_51(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_45154[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_45154[iVar0 /*203*/].f_2 = iParam0;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_45154[iVar0 /*203*/].f_10[Global_45154[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_45154[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45154[iVar0 /*203*/].f_4[iVar1] == Global_35970[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45154[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45154[iVar0 /*203*/].f_4[Global_45154[iVar0 /*203*/].f_3] = Global_35970[iParam1 /*12*/].f_3;
			Global_45154[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45154[iVar0 /*203*/].f_4[iVar1] == Global_35970[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45154[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45154[iVar0 /*203*/].f_4[Global_45154[iVar0 /*203*/].f_3] = Global_35970[iParam1 /*12*/].f_2;
			Global_45154[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_45154[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_45154[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_50(Global_45154[iVar0 /*203*/].f_4[iVar1], Global_45154[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_50(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_39271[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_39271[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_10(Global_35970[iVar20 /*12*/].f_1) };
		if (Global_35970[iVar20 /*12*/].f_2 == iParam0 && !Global_35970[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_35970[iVar20 /*12*/].f_2;
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_44792[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_44792[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35962 = (Global_35962 - 1);
						if (Global_35962 < 0)
						{
							Global_35962 = 0;
						}
						break;
					
					case 1:
						Global_35963 = (Global_35963 - 1);
						if (Global_35963 < 0)
						{
							Global_35963 = 0;
						}
						break;
					
					case 2:
						Global_35964 = (Global_35964 - 1);
						if (Global_35964 < 0)
						{
							Global_35964 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_45154[iVar24 /*203*/].f_1 == iParam1 && Global_45154[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_44792[iParam0 /*120*/].f_18[iVar0] = Global_45154[iVar23 /*203*/].f_1;
		Global_44792[iParam0 /*120*/].f_1[iVar0] = (Global_45154[iVar23 /*203*/].f_9 - 1);
		Global_44792[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44792[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_44792[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44792[iParam0 /*120*/]++;
		iVar25 = Global_44792[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45154[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_35970[iVar26 /*12*/].f_2;
		if (Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45154[iVar23 /*203*/].f_10[(Global_45154[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_35970[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_44792[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_51(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 > -1)
	{
		if (Global_45154[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45154[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45154[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_45154[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_45154[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_45154[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_45154[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_45154[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_44792[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_44792[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_44792[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_44792[iVar6 /*120*/].f_18[iVar8] == Global_45154[iVar4 /*203*/].f_1)
							{
								if (Global_44792[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_35962 = (Global_35962 - 1);
											break;
										
										case 1:
											Global_35963 = (Global_35963 - 1);
											break;
										
										case 2:
											Global_35964 = (Global_35964 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_45154[iVar4 /*203*/].f_2 = iParam0;
	Global_45154[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_45154[iVar4 /*203*/] = 1;
	}
	Global_97353.f_24262.f_310++;
	if (Global_97353.f_24262.f_310 == 0)
	{
		Global_97353.f_24262.f_310 = 1;
	}
	Global_45154[iVar4 /*203*/].f_1 = Global_97353.f_24262.f_310;
	Global_45154[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_52(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_91);
			func_54("EPS_DROP_PERSON", -1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!func_53())
			{
				*iParam0 = 4;
				return;
			}
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
			{
				iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1);
				if (func_75(iVar0))
				{
					if (unk_0x59F3F16577CD79B2(iVar0) == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				func_54("EPS_DROP_ESCAPE", -1);
				func_76(2);
			}
			break;
	}
}

int func_53()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	if (!func_75(unk_0x096275889B8E0EE0()))
	{
		return 0;
	}
	if (!unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
	{
		iLocal_101 = 0;
		return 0;
	}
	uVar1 = unk_0xAB2034839A6B4CF2(unk_0x096275889B8E0EE0());
	if (!func_75(uVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_14(iVar0))
		{
			if (func_41(unk_0xDA76A9F39210D365(uVar1), iVar0))
			{
				if (func_42(iVar1))
				{
					if (!iLocal_101)
					{
						func_54("EPS_DROP_FAIL", -1);
						iLocal_101 = 1;
					}
					return 0;
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_54(char* sParam0, int iParam1)
{
	unk_0x0718552FB84CF252(sParam0);
	unk_0x7178D3ABFAB2F9F4(0, 0, 1, iParam1);
}

void func_55(int iParam0)
{
	if (unk_0xCD82FA174080B3B1(*iParam0))
	{
		unk_0xA1BFA381D71B6D00(*iParam0, 0);
		unk_0xF2C3C9DA47AAA54A(iParam0);
	}
}

void func_56(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_83(&Local_42, 1);
			Local_42.f_4 = 4;
			if (unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
			{
				unk_0xDB38F247BD421708(unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1), 1.5f);
			}
			*iParam0 = 2;
			iLocal_97 = 0;
			iLocal_105 = 0;
			break;
		
		case 2:
			switch (iLocal_97)
			{
				case 0:
					if (iLocal_102 == 1 && !Local_42.f_26)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							unk_0x0BFC2C61FB5B6CA1(1);
						}
					}
					if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0)
					{
						func_76(4);
						return;
					}
					if (func_61(unk_0x096275889B8E0EE0()) && unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
					{
						iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1);
					}
					if (func_75(iVar0) && unk_0x59F3F16577CD79B2(iVar0) > 0)
					{
						if (unk_0xD214895E39AA3787(iVar0, 0) != unk_0x096275889B8E0EE0())
						{
							func_76(3);
							return;
						}
					}
					if (!Local_42.f_26)
					{
						if (iLocal_103 == 0)
						{
							if (func_60(iVar0))
							{
								if (unk_0xD3151E53134595E5(iVar0, Local_42.f_6[0 /*3*/], Local_42.f_6[1 /*3*/], Local_42.f_6.f_7, 0, 1, 0))
								{
									func_59("EPS_DROP_EXIT", 7500, 1);
									iLocal_105 = 0;
									iLocal_103 = 1;
									iLocal_102 = 0;
								}
							}
						}
						if (func_58(unk_0x096275889B8E0EE0(), Local_42.f_14, 0) < 3f)
						{
							func_55(&iLocal_91);
						}
						if (func_58(unk_0x096275889B8E0EE0(), Local_42, 0) > (15f + 5f))
						{
							func_83(&Local_42, 2);
							Local_42.f_4 = 3;
							iLocal_103 = 0;
							iLocal_102 = 0;
							iLocal_105 = 0;
							func_76(1);
							return;
						}
						if (func_57(&Local_42) && !unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0))
						{
							func_83(&Local_42, 2);
							Local_42.f_4 = 3;
							iLocal_105 = 0;
							func_76(0);
							return;
						}
					}
					if ((Local_42.f_26 && !unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 0)) && unk_0x20EB7B80D61EEA56(unk_0x096275889B8E0EE0()))
					{
						if (iLocal_105 == 0)
						{
							iLocal_105 = unk_0x4F67E8ECA7D3F667();
						}
						else if ((unk_0x4F67E8ECA7D3F667() - iLocal_105) > 500)
						{
							if (iLocal_102 == 0)
							{
								unk_0x00686F7B3723B82F();
								func_54("EPS_DROP_MESS", -1);
								iLocal_102 = 1;
								iLocal_103 = 0;
							}
						}
					}
					break;
			}
			break;
	}
}

bool func_57(var uParam0)
{
	return (!uParam0->f_26 && !unk_0x825CA3ED43831015(uParam0->f_14, 6.2f, 0, 0, 1, 0, 0, 0, 0));
}

float func_58(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7D5B1F88E7504BBA(iParam0))
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA86D5F069399F44D(iParam0, 0) };
	}
	return unk_0x0BE7F4E3CDBAFB28(Var0, Param1, iParam4);
}

void func_59(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0BBD76EF782760F3(sParam0);
	unk_0x3103E77581D5165C(iParam1, 1);
}

int func_60(int iParam0)
{
	if (func_61(iParam0))
	{
		if (unk_0xB86D29B10F627379(iParam0, 0))
		{
			if (!unk_0x1BD7C371CE257C3E(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (!unk_0x7D5B1F88E7504BBA(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			if (!unk_0xCD82FA174080B3B1(iLocal_91))
			{
				iLocal_91 = unk_0xAFE7B0E5A6396BD2(Local_39);
				if (unk_0xCD82FA174080B3B1(iLocal_91))
				{
					unk_0x74F74D3207ED525C(iLocal_91, 206);
					unk_0x2954B7F696FF4E2C(iLocal_91, 42);
				}
			}
			*iParam0 = 2;
			iLocal_97 = 0;
			break;
		
		case 2:
			if (!func_53())
			{
				func_76(0);
				return;
			}
			if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0)
			{
				func_76(4);
				return;
			}
			if (func_61(unk_0x096275889B8E0EE0()) && unk_0x52BE10F427339B39(unk_0x096275889B8E0EE0(), 1))
			{
				iVar0 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1);
			}
			if (func_75(iVar0) && unk_0x59F3F16577CD79B2(iVar0) > 0)
			{
				if (unk_0xD214895E39AA3787(iVar0, 0) != unk_0x096275889B8E0EE0())
				{
					func_76(3);
					return;
				}
			}
			if (func_58(unk_0x096275889B8E0EE0(), Local_42, 0) < 15f)
			{
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			func_76(2);
			break;
	}
}

void func_63(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_91);
			if (iLocal_104 == 0)
			{
				func_54("EPS_DROP_WANTED", -1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) == 0)
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (!func_53())
			{
				func_76(0);
			}
			else
			{
				if (iLocal_104 == 0)
				{
					func_54("EPS_DROP_ESCAPE", -1);
				}
				func_76(2);
			}
			iLocal_104 = 1;
			break;
	}
}

void func_64(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_100 = 0;
			iLocal_102 = 0;
			func_55(&iLocal_91);
			break;
		
		case 2:
			if (func_61(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), Local_42.f_6[0 /*3*/], Local_42.f_6[1 /*3*/], Local_42.f_6.f_7, 0, 1, 0) && func_43(&Local_42))
				{
					unk_0xF6A103413A202C37(unk_0x096275889B8E0EE0(), -687.6668f, 500.598f, 109.0364f, 1, 0, 0, 1);
					unk_0xCF2B9C0645C4651B(unk_0x096275889B8E0EE0(), 200.7367f);
				}
			}
			if (func_58(unk_0x096275889B8E0EE0(), Local_42, 0) > (15f + 5f))
			{
				func_83(&Local_42, 2);
				if (Local_42.f_4 != 2)
				{
					Local_42.f_4 = 3;
				}
			}
			if (func_53())
			{
				if (unk_0xABC532F9098BFD9D(unk_0x217E9DC48139933D()) > 0)
				{
					func_76(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			if (iLocal_100 == 0 && func_61(unk_0x096275889B8E0EE0()))
			{
				if (iLocal_116 != unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1))
				{
					iLocal_116 = unk_0xB3598EA616C3FFC3(unk_0x096275889B8E0EE0(), 1);
					func_54("EPS_DROP_HELP", -1);
					iLocal_100 = 1;
				}
			}
			iLocal_101 = 0;
			func_76(1);
			break;
	}
}

void func_65()
{
	func_67();
	while (unk_0xB15CD1CF58771DE1() || func_70() != 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_66();
}

void func_66()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_75(unk_0x096275889B8E0EE0()))
	{
	}
	unk_0x014C4B659562111A(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	uLocal_117 = unk_0x55686F8055FF786B(Var0, Var3, 0, 1, 1, 1);
	iLocal_98 = Global_97353.f_8303.f_103;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_77(1);
	if (func_11(2) == -1)
	{
		func_4(func_16());
	}
	func_76(0);
}

void func_67()
{
	if (unk_0xCD82FA174080B3B1(iLocal_91))
	{
		func_55(&iLocal_91);
		iLocal_91 = 0;
	}
	Global_97353.f_8303.f_103 = iLocal_98;
	func_55(&iLocal_91);
	func_77(0);
	func_69();
	func_68(&Local_42);
	unk_0xE2E2B535953BF59E(uLocal_117, 0);
	unk_0x305538B87F955257(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	unk_0x305538B87F955257(Local_108[0 /*3*/], Local_108[1 /*3*/], 8.25f, 1);
}

void func_68(var uParam0)
{
	if (unk_0x1C168182BEBE2DDA(*uParam0, 20f, uParam0->f_3, 0))
	{
		unk_0x9162718D723FEDDB(uParam0->f_3, *uParam0, 1, 0f, 0);
	}
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x4AD96EF928BD4F9A(iLocal_85[iVar0]);
		iVar0++;
	}
}

int func_70()
{
	func_71();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_71()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_74(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_73(unk_0x096275889B8E0EE0());
			if (func_72(iVar0) && (!func_29(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_72(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_72(int iParam0)
{
	return iParam0 < 3;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_74(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_74(int iParam0)
{
	if (func_72(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_75(int iParam0)
{
	if (!unk_0xD42BD6EB2E0F1677(iParam0))
	{
		return 0;
	}
	return !unk_0x7D5B1F88E7504BBA(iParam0);
}

void func_76(int iParam0)
{
	iLocal_93 = iParam0;
	iLocal_92 = 1;
}

void func_77(bool bParam0)
{
	func_78(44, bParam0);
	func_78(45, bParam0);
	func_78(46, bParam0);
	func_78(47, bParam0);
	func_78(48, bParam0);
	func_78(49, bParam0);
	func_78(50, bParam0);
}

void func_78(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_80(iParam0, 0))
		{
			func_79(iParam0, 1, 0);
			func_79(iParam0, 2, 0);
			func_79(iParam0, 3, 0);
			func_79(iParam0, 4, 0);
			func_79(iParam0, 0, 1);
			Global_67138[iParam0] = 1;
		}
	}
	else
	{
		func_79(iParam0, 0, 0);
	}
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF73FBE4845C43B5B(&(Global_97353.f_18371[iParam0]), iParam1);
	}
	else
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_18371[iParam0]), iParam1);
	}
}

bool func_80(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_97353.f_18371[iParam0], iParam1);
}

void func_81(struct<3> Param0, float fParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	
	Var0 = { fParam3, fParam3, fParam3 };
	*uParam4 = { Param0 - Var0 };
	*uParam5 = { Param0 + Var0 };
}

void func_82(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param4 };
	uParam0->f_7 = fParam7;
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_84(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, struct<3> Param11, float fParam14, struct<3> Param15, struct<3> Param18)
{
	uParam0->f_3 = iParam1;
	*uParam0 = { Param2 };
	uParam0->f_5 = 2;
	uParam0->f_4 = 0;
	uParam0->f_19[0 /*3*/] = { Param15 };
	uParam0->f_19[1 /*3*/] = { Param18 };
	uParam0->f_14 = { Param5 };
	func_82(&(uParam0->f_6), Param8, Param11, fParam14);
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF73FBE4845C43B5B(&(Global_97353.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

bool func_86()
{
	return func_3() == 5;
}

void func_87()
{
	iLocal_85[0] = joaat("vacca");
	iLocal_85[1] = joaat("surano");
	iLocal_85[2] = joaat("tornado2");
	iLocal_85[3] = joaat("superd");
	iLocal_85[4] = joaat("double");
	Local_69[0 /*3*/] = 1;
	Local_69[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	Local_69[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	Local_69[1 /*3*/] = 2;
	Local_69[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	Local_69[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	Local_69[2 /*3*/] = 3;
	Local_69[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	Local_69[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	Local_69[3 /*3*/] = 4;
	Local_69[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	Local_69[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	Local_69[4 /*3*/] = 5;
	Local_69[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	Local_69[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_88()
{
	int iVar0;
	
	iLocal_98 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0xF73FBE4845C43B5B(&iLocal_98, iVar0);
		iVar0++;
	}
}

int func_89(int iParam0)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97353.f_7341.f_99.f_58[iParam0];
}

void func_90()
{
	int iVar0;
	
	func_55(&iLocal_91);
	func_77(0);
	func_69();
	func_68(&Local_42);
	Global_97353.f_8303.f_103 = iLocal_98;
	if (func_86() || func_89(90) == 1)
	{
		func_92(90, 1);
		func_91(6);
	}
	unk_0x305538B87F955257(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	unk_0x305538B87F955257(Local_108[0 /*3*/], Local_108[1 /*3*/], 8.25f, 1);
	unk_0xE2E2B535953BF59E(uLocal_117, 0);
	if (iLocal_283 != 0)
	{
		unk_0x6215C0F9FFF76BAD(&iLocal_283);
		iLocal_283 = 0;
	}
	unk_0x380F22FED8D528A4(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		unk_0xA4DDF5DF95E65EED(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
	unk_0x5E8B6D17FF91CD59();
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iVar0], iVar1))
	{
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_7341.f_99.f_217[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return;
	}
	if (Global_97353.f_7341.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_97353.f_7341.f_99.f_58[iParam0] = iParam1;
}

