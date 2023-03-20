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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<3> Local_40 = { 0, 0, 0 } ;
	struct<27> Local_43 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_70[5];
	int iLocal_86[5] = { 0, 0, 0, 0, 0 };
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
	int iLocal_108 = 0;
	struct<3> Local_109[2];
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 16;
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
	var uLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	var uLocal_286 = 0;
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
	iLocal_17 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	Local_40 = { -690.938f, 512.2703f, 109.3639f };
	iLocal_100 = -1;
	iLocal_108 = 60000;
	iLocal_285 = 99;
	if (unk_0x2170E7BC25114A22(146))
	{
		func_90();
	}
	if (func_89(90) == 1)
	{
		func_88();
		unk_0x01DFCA3621B68C4A();
	}
	iLocal_99 = Global_101652.f_8992.f_103;
	func_87();
	if (func_86())
	{
		func_90();
	}
	func_85(6);
	func_84(&Local_43, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, Local_40, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
	func_83(&Local_43, 2);
	Local_43.f_4 = 3;
	unk_0xBCDF9E3086B4229C(Local_40, 5f, 0, 0, 0, 0, 0);
	func_82(&Local_109, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	unk_0xFC9F3169185868E7(Local_109[0 /*3*/], Local_109[1 /*3*/], 8.25f, 0, 0, 1);
	unk_0xFC9F3169185868E7(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	uLocal_118 = unk_0x2B2CCF3F6B9ED3A3(Var0, Var3, 0, 1, 1, 1);
	if (func_89(90) == 1)
	{
		func_88();
		func_90();
	}
	if (Global_101652.f_8992.f_104 == 0)
	{
		Global_101652.f_8992.f_104 = unk_0x3D13C79BF80EB767();
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
		func_75(unk_0xD5A676B97920D126());
		if (unk_0xC19959490984F18E() || func_70() != 0)
		{
			func_65();
		}
		switch (iLocal_94)
		{
			case 0:
				func_64(&iLocal_93);
				break;
			
			case 4:
				func_63(&iLocal_93);
				break;
			
			case 1:
				func_62(&iLocal_93);
				break;
			
			case 2:
				func_56(&iLocal_93);
				break;
			
			case 3:
				func_52(&iLocal_93);
				break;
			
			case 6:
				func_49(2, 6, 1);
				func_48(2, "EPS_LSTEMAIL", 1);
				func_47(2);
				func_90();
				break;
		}
		func_44(&Local_43);
		if (func_43(&Local_43))
		{
			if (func_37(&Local_43))
			{
				if (unk_0x4CA0B3553642A411() == Global_69431)
				{
					Global_69431 = 0;
					Global_101652.f_31373.f_5588 = 0;
				}
				unk_0xBCDF9E3086B4229C(Local_43.f_14, 8.5f, 0, 0, 0, 0, 0);
				Global_101652.f_8992.f_103 = iLocal_99;
				func_35();
				func_34(&uLocal_119, 0, unk_0xD5A676B97920D126(), "MICHAEL", 0, 1);
				func_22(&uLocal_119, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP"))
				{
					unk_0x04890EB0282525A5(1);
				}
				func_19();
			}
		}
		if (Global_101652.f_8992.f_104 != 0)
		{
			iLocal_97 = (Global_101652.f_8992.f_104 + 14 % func_18(unk_0xA93FEF8677A8AF58(), unk_0xAC9128C6933DA69B()));
			if (((unk_0x3D13C79BF80EB767() == iLocal_97 && !func_17(0)) && !unk_0x32DE3230A608DBE4(unk_0xFB6B3EEFAB2DD12C())) && unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_284, &uLocal_286, &iLocal_285);
		if ((iLocal_107 > 0 && unk_0x84A97C70FFDEC0C8() > iLocal_107) && iLocal_285 == 99)
		{
			iLocal_107 = 0;
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
			*iParam0 = unk_0x542F16A736FAC9A6("MIDSIZED_MESSAGE");
			if (unk_0x52622CA85B1C304B(*iParam0))
			{
				iVar0 = unk_0xA6EB3FD2D3CE76A2();
				unk_0xA93E75A5493862BD(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 1);
				*iParam2++;
			}
			break;
		
		case 1:
			unk_0x3B6EF6403E3F1CAC(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			unk_0x0BBDB952BE56A9DF("EPS_CAR_TITLE");
			unk_0xCB329F559FA7DCD0();
			unk_0x0BBDB952BE56A9DF("EPS_CAR_NOTE");
			unk_0xF99222307D7150A9(func_3());
			unk_0xCB329F559FA7DCD0();
			unk_0xBBAAC5B2437ACF2A();
			*uParam1 = unk_0x84A97C70FFDEC0C8();
			*iParam2++;
			break;
		
		case 2:
			if ((unk_0x84A97C70FFDEC0C8() - *uParam1) > 7000)
			{
				unk_0x3B6EF6403E3F1CAC(*iParam0, "SHARD_ANIM_OUT");
				unk_0x1B215CC37BF52E79(1);
				unk_0x573CAEB6F4A4E750(0.33f);
				unk_0xBBAAC5B2437ACF2A();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0x52622CA85B1C304B(*iParam0))
				{
					unk_0x131F832AD6923854(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 3:
			if ((unk_0x84A97C70FFDEC0C8() - *uParam1) > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (unk_0x52622CA85B1C304B(*iParam0))
				{
					unk_0x131F832AD6923854(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 4:
			if (unk_0x52622CA85B1C304B(*iParam0))
			{
				unk_0x4292FC2ED4EC4212(iParam0);
			}
			*iParam2 = 99;
			break;
		
		case 99:
			break;
	}
}

int func_2()
{
	if (Global_69957)
	{
		return 1;
	}
	else if (Global_55812 && !Global_55818)
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
		if (unk_0xF44A5E894FE76438(iLocal_99, iVar0))
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
	func_49(2, Local_70[(5 - iParam0) /*3*/], 1);
	if (func_15(iLocal_100))
	{
		func_48(2, Local_70[(5 - iParam0) /*3*/].f_2, 0);
	}
	else
	{
		func_48(2, Local_70[(5 - iParam0) /*3*/].f_1, 0);
	}
	iParam0 = 0;
	iVar0 = 0;
	iParam0 = 0;
	while (iParam0 < iLocal_86)
	{
		if (!func_14(iParam0))
		{
			func_12(2, func_13(iLocal_86[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_101652.f_8992.f_104 = unk_0x3D13C79BF80EB767();
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
	if (Global_46221[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_46221[iVar0 /*203*/].f_9 - 1);
	if (!Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_36921[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
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
		func_6(1, Global_36921[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36921[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_36921[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_36921[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_36921[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46221[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x30A37E559346657F())
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
				unk_0x053CD3063CA9436C("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x053CD3063CA9436C("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x053CD3063CA9436C("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x053CD3063CA9436C(sParam3);
				if (!unk_0xC55B9553B3EDADE9(iParam4))
				{
					unk_0xB1953EBEF4D6BD85(iParam4);
				}
				if (!unk_0xC55B9553B3EDADE9(iParam5))
				{
					unk_0xB1953EBEF4D6BD85(iParam5);
				}
				if (!unk_0xC55B9553B3EDADE9(iParam6))
				{
					unk_0xB1953EBEF4D6BD85(iParam6);
				}
				if (!unk_0xC55B9553B3EDADE9(iParam7))
				{
					unk_0xB1953EBEF4D6BD85(iParam7);
				}
				if (!unk_0xC55B9553B3EDADE9(iParam8))
				{
					unk_0xB1953EBEF4D6BD85(iParam8);
				}
				if (!unk_0xC55B9553B3EDADE9(iParam9))
				{
					unk_0xB1953EBEF4D6BD85(iParam9);
				}
				if (!unk_0xC55B9553B3EDADE9(iParam10))
				{
					unk_0xB1953EBEF4D6BD85(iParam10);
				}
				if (!unk_0xC55B9553B3EDADE9(iParam11))
				{
					unk_0xB1953EBEF4D6BD85(iParam11);
				}
				if (!unk_0xC55B9553B3EDADE9(iParam12))
				{
					unk_0xB1953EBEF4D6BD85(iParam12);
				}
				if (!unk_0xC55B9553B3EDADE9(iParam13))
				{
					unk_0xB1953EBEF4D6BD85(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(unk_0xF60216C118DDDFE5(&cVar2, &cVar2, 0, 2, unk_0xBC2999B1C8F62EDD(func_8(iParam1)), 0));
		}
		else
		{
			func_7(unk_0xF60216C118DDDFE5("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xBC2999B1C8F62EDD(func_8(iParam1)), 0));
		}
		switch (Global_14443)
		{
			case 0:
				StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
				Global_36913++;
				if (Global_36913 > 16)
				{
					Global_36913 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
				Global_36915++;
				if (Global_36915 > 16)
				{
					Global_36915 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
				Global_36914++;
				if (Global_36914 > 16)
				{
					Global_36914 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xA93E75A5493862BD(-1, "Notification", &Global_14432, 1);
	}
}

void func_7(var uParam0)
{
	Global_36916[Global_36920] = uParam0;
	Global_16803 = 1;
	Global_16802 = uParam0;
	Global_36920++;
	if (Global_36920 == 3)
	{
		Global_36920 = 0;
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
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[0 /*29*/].f_7));
		
		case 1:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[1 /*29*/].f_7));
		
		case 2:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[2 /*29*/].f_7));
		
		case 7:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[12 /*29*/].f_7));
		
		case 4:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[60 /*29*/].f_7));
		
		case 6:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[62 /*29*/].f_7));
		
		case 3:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[14 /*29*/].f_7));
		
		case 16:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[97 /*29*/].f_7));
		
		case 19:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[99 /*29*/].f_7));
		
		case 15:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[96 /*29*/].f_7));
		
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
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[15 /*29*/].f_7));
		
		case 26:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[30 /*29*/].f_7));
		
		case 27:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[17 /*29*/].f_7));
		
		case 29:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[20 /*29*/].f_7));
		
		case 30:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[43 /*29*/].f_7));
		
		case 31:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[44 /*29*/].f_7));
		
		case 32:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[19 /*29*/].f_7));
		
		case 34:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[40 /*29*/].f_7));
		
		case 36:
			return unk_0xBC2999B1C8F62EDD("CELL_E_381");
		
		case 38:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[64 /*29*/].f_7));
		
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
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[122 /*29*/].f_7));
		
		case 40:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[125 /*29*/].f_7));
		
		case 41:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[113 /*29*/].f_7));
		
		case 42:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[126 /*29*/].f_7));
		
		case 43:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[127 /*29*/].f_7));
		
		case 44:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[124 /*29*/].f_7));
		
		case 45:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[114 /*29*/].f_7));
		
		case 46:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[115 /*29*/].f_7));
		
		case 47:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[116 /*29*/].f_7));
		
		case 48:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[123 /*29*/].f_7));
		
		case 49:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[117 /*29*/].f_7));
		
		case 50:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[118 /*29*/].f_7));
		
		case 51:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[119 /*29*/].f_7));
		
		case 52:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[120 /*29*/].f_7));
		
		case 53:
			return unk_0xBC2999B1C8F62EDD(&(Global_101652.f_26993[121 /*29*/].f_7));
		
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
		if (Global_46221[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46221[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46221[iVar0 /*203*/].f_1;
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
	if (Global_46221[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_13(int iParam0)
{
	if (iParam0 == iLocal_86[0])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_86[1])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_86[2])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_86[3])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_86[4])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

bool func_14(int iParam0)
{
	return unk_0xF44A5E894FE76438(iLocal_99, iParam0);
}

bool func_15(int iParam0)
{
	if (iParam0 < 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(iLocal_99, iParam0 + 5);
}

int func_16()
{
	return (5 - func_3());
}

int func_17(int iParam0)
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
	
	iLocal_285 = 0;
	unk_0x5BC7B5709E38CBE0(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		unk_0xB924315F0872835A(joaat("num_epsilon_step"), (6 + func_3()), 1);
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
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x17E2C0D492B3FF29(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xFEDB818053A2C006(iParam0, iParam1);
	}
	return 0;
}

bool func_21(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x73998CD31AEFA620(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
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
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_30();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
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
				switch (Global_14443.f_1)
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_24();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(0);
	Global_15745 = 1;
}

void func_25()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_26()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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
		Global_14443 = func_70();
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

bool func_29(int iParam0)
{
	return Global_35777 == iParam0;
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_32()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
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
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
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
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

bool func_36(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	
	iVar2 = 0;
	iVar1 = unk_0xC57CE29906C6EA45(unk_0xD5A676B97920D126(), &uVar3);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_75(uVar3[iVar0]))
		{
			if (unk_0x1AC9C20D51EE6DC3(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, 0, 1, 0) && !uParam0->f_26)
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
		Global_101652.f_8992.f_104 = unk_0x3D13C79BF80EB767();
		iLocal_107 = (unk_0x84A97C70FFDEC0C8() + iLocal_108);
	}
	return iVar2;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xA0A4DA31DEDFAC4F(uParam0);
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
				func_40(iVar0, unk_0xB38A470B669AC00B(iParam0) < 875);
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
		unk_0xB8A73E7DA87B2968(&iLocal_99, iParam0);
		iLocal_100 = iParam0;
	}
	else
	{
		unk_0x4EA098C870B73AB7(&iLocal_99, iParam0);
	}
}

void func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xB8A73E7DA87B2968(&iLocal_99, iParam0 + 5);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&iLocal_99, iParam0 + 5);
	}
}

int func_41(int iParam0, int iParam1)
{
	if (iParam0 == iLocal_86[iParam1])
	{
		return 1;
	}
	if (iLocal_86[iParam1] != joaat("tornado2"))
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
	if (unk_0xB38A470B669AC00B(uParam0) < 750)
	{
		return 1;
	}
	if (unk_0xD39BBF03BAEB7BDE(iParam0, 1) || unk_0xD39BBF03BAEB7BDE(iParam0, 0))
	{
		return 1;
	}
	return unk_0x0367811FD0910DFC(iParam0) > 0;
}

bool func_43(var uParam0)
{
	return (uParam0->f_5 == 2 && uParam0->f_4 == 2);
}

void func_44(var uParam0)
{
	struct<3> Var0;
	
	uParam0->f_26 = 0;
	if (unk_0x43CD1F8DCB7CB8D9(uParam0->f_19[0 /*3*/], 1.2f, 0, 1, 1, 0, 0, unk_0xD5A676B97920D126(), 0))
	{
		uParam0->f_26 = 1;
	}
	else if (unk_0x43CD1F8DCB7CB8D9(uParam0->f_19[1 /*3*/], 1.2f, 0, 1, 1, 0, 0, unk_0xD5A676B97920D126(), 0))
	{
		uParam0->f_26 = 1;
	}
	else
	{
		Var0 = { func_45(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0.5f, 1) };
		uParam0->f_26 = unk_0x43CD1F8DCB7CB8D9(Var0, 1.2f, 0, 1, 1, 0, 0, unk_0xD5A676B97920D126(), 0);
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
			unk_0x91A6DE61891987F6(iLocal_95);
			iLocal_96 = 0;
			unk_0xEE59E0DAFA4B08CD(-1, "CLOSED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_96)
		{
			unk_0xEE59E0DAFA4B08CD(iLocal_95, "CLOSING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_96 = 1;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4))
	{
		uParam0->f_17 = (uParam0->f_17 + uParam0->f_18);
		if (uParam0->f_17 >= 1f)
		{
			uParam0->f_17 = 1f;
			uParam0->f_4 = 1;
			unk_0x91A6DE61891987F6(iLocal_95);
			iLocal_96 = 0;
			unk_0xEE59E0DAFA4B08CD(-1, "OPENED", *uParam0, "DOOR_GARAGE", 0, 0, 1);
		}
		else if (!iLocal_96)
		{
			unk_0xEE59E0DAFA4B08CD(iLocal_95, "OPENING", *uParam0, "DOOR_GARAGE", 0, 0, 1);
			iLocal_96 = 1;
		}
	}
	if (unk_0x7974087FFB309CBC(*uParam0, 20f, uParam0->f_3, 0))
	{
		unk_0xA63F14F5213BDF0F(uParam0->f_3, *uParam0, 1, uParam0->f_17, 0);
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
		if (!unk_0xF44A5E894FE76438(Global_101652.f_23929, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46221[iVar0 /*203*/] = 0;
}

void func_48(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46221[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_46221[iVar0 /*203*/].f_10[(Global_46221[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
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
	if (Global_46221[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_46221[iVar0 /*203*/].f_2 = iParam0;
	Global_46221[iVar0 /*203*/].f_10[Global_46221[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46221[iVar0 /*203*/].f_10[Global_46221[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46221[iVar0 /*203*/].f_10[Global_46221[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46221[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46221[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46221[iVar0 /*203*/].f_4[iVar1] == Global_36921[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46221[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46221[iVar0 /*203*/].f_4[Global_46221[iVar0 /*203*/].f_3] = Global_36921[iParam1 /*12*/].f_3;
			Global_46221[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46221[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46221[iVar0 /*203*/].f_4[iVar1] == Global_36921[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46221[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_46221[iVar0 /*203*/].f_4[Global_46221[iVar0 /*203*/].f_3] = Global_36921[iParam1 /*12*/].f_2;
			Global_46221[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46221[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46221[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_50(Global_46221[iVar0 /*203*/].f_4[iVar1], Global_46221[iVar0 /*203*/].f_1, 1, bParam2, 0);
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
		iVar19 = (Global_40246[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_40246[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_10(Global_36921[iVar20 /*12*/].f_1) };
		if (Global_36921[iVar20 /*12*/].f_2 == iParam0 && !Global_36921[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36921[iVar20 /*12*/].f_2;
		iVar0 = Global_45859[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45859[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36913 = (Global_36913 - 1);
						if (Global_36913 < 0)
						{
							Global_36913 = 0;
						}
						break;
					
					case 1:
						Global_36914 = (Global_36914 - 1);
						if (Global_36914 < 0)
						{
							Global_36914 = 0;
						}
						break;
					
					case 2:
						Global_36915 = (Global_36915 - 1);
						if (Global_36915 < 0)
						{
							Global_36915 = 0;
						}
						break;
					}
				}
		}
		Global_45859[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45859[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45859[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45859[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45859[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45859[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45859[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45859[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36913 = (Global_36913 - 1);
						if (Global_36913 < 0)
						{
							Global_36913 = 0;
						}
						break;
					
					case 1:
						Global_36914 = (Global_36914 - 1);
						if (Global_36914 < 0)
						{
							Global_36914 = 0;
						}
						break;
					
					case 2:
						Global_36915 = (Global_36915 - 1);
						if (Global_36915 < 0)
						{
							Global_36915 = 0;
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
			if (Global_46221[iVar24 /*203*/].f_1 == iParam1 && Global_46221[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45859[iParam0 /*120*/].f_18[iVar0] = Global_46221[iVar23 /*203*/].f_1;
		Global_45859[iParam0 /*120*/].f_1[iVar0] = (Global_46221[iVar23 /*203*/].f_9 - 1);
		Global_45859[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45859[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45859[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45859[iParam0 /*120*/]++;
		iVar25 = Global_45859[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46221[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36921[iVar26 /*12*/].f_2;
		if (Global_46221[iVar23 /*203*/].f_10[(Global_46221[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46221[iVar23 /*203*/].f_10[(Global_46221[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_36921[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45859[iParam0 /*120*/].f_69[iVar0] && !bParam3)
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
		if (Global_46221[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46221[iVar1 /*203*/] == 0)
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
		if (Global_46221[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46221[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_46221[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46221[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46221[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46221[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45859[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45859[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45859[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45859[iVar6 /*120*/].f_18[iVar8] == Global_46221[iVar4 /*203*/].f_1)
							{
								if (Global_45859[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36913 = (Global_36913 - 1);
											break;
										
										case 1:
											Global_36914 = (Global_36914 - 1);
											break;
										
										case 2:
											Global_36915 = (Global_36915 - 1);
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
	Global_46221[iVar4 /*203*/].f_2 = iParam0;
	Global_46221[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_46221[iVar4 /*203*/] = 1;
	}
	Global_101652.f_19980.f_310++;
	if (Global_101652.f_19980.f_310 == 0)
	{
		Global_101652.f_19980.f_310 = 1;
	}
	Global_46221[iVar4 /*203*/].f_1 = Global_101652.f_19980.f_310;
	Global_46221[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_52(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_55(&iLocal_92);
			func_54("EPS_DROP_PERSON", -1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!func_53())
			{
				*iParam0 = 4;
				return;
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
			{
				iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 1);
				if (func_75(iVar0))
				{
					if (unk_0x2FAE1B1A2FF430A6(iVar0) == 0)
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
	if (!func_75(unk_0xD5A676B97920D126()))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		iLocal_102 = 0;
		return 0;
	}
	uVar1 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
	if (!func_75(uVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_14(iVar0))
		{
			if (func_41(unk_0xA0A4DA31DEDFAC4F(uVar1), iVar0))
			{
				if (func_42(iVar1))
				{
					if (!iLocal_102)
					{
						func_54("EPS_DROP_FAIL", -1);
						iLocal_102 = 1;
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
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

void func_55(int iParam0)
{
	if (unk_0x6901135DDCC4904D(*iParam0))
	{
		unk_0xD947D2F43FD7F6D7(*iParam0, 0);
		unk_0x8A3D7569826A325D(iParam0);
	}
}

void func_56(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_83(&Local_43, 1);
			Local_43.f_4 = 4;
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				unk_0xCDB3CF095121B4E2(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 1.5f);
			}
			*iParam0 = 2;
			iLocal_98 = 0;
			iLocal_106 = 0;
			break;
		
		case 2:
			switch (iLocal_98)
			{
				case 0:
					if (iLocal_103 == 1 && !Local_43.f_26)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							unk_0x04890EB0282525A5(1);
						}
					}
					if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
					{
						func_76(4);
						return;
					}
					if (func_61(unk_0xD5A676B97920D126()) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 1);
					}
					if (func_75(iVar0) && unk_0x2FAE1B1A2FF430A6(iVar0) > 0)
					{
						if (unk_0x98BE504E8B389665(iVar0, 0, 0) != unk_0xD5A676B97920D126())
						{
							func_76(3);
							return;
						}
					}
					if (!Local_43.f_26)
					{
						if (iLocal_104 == 0)
						{
							if (func_60(iVar0))
							{
								if (unk_0x1AC9C20D51EE6DC3(iVar0, Local_43.f_6[0 /*3*/], Local_43.f_6[1 /*3*/], Local_43.f_6.f_7, 0, 1, 0))
								{
									func_59("EPS_DROP_EXIT", 7500, 1);
									iLocal_106 = 0;
									iLocal_104 = 1;
									iLocal_103 = 0;
								}
							}
						}
						if (func_58(unk_0xD5A676B97920D126(), Local_43.f_14, 0) < 3f)
						{
							func_55(&iLocal_92);
						}
						if (func_58(unk_0xD5A676B97920D126(), Local_43, 0) > (15f + 5f))
						{
							func_83(&Local_43, 2);
							Local_43.f_4 = 3;
							iLocal_104 = 0;
							iLocal_103 = 0;
							iLocal_106 = 0;
							func_76(1);
							return;
						}
						if (func_57(&Local_43) && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
						{
							func_83(&Local_43, 2);
							Local_43.f_4 = 3;
							iLocal_106 = 0;
							func_76(0);
							return;
						}
					}
					if ((Local_43.f_26 && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) && unk_0x1A77C0702D82B43D(unk_0xD5A676B97920D126()))
					{
						if (iLocal_106 == 0)
						{
							iLocal_106 = unk_0x84A97C70FFDEC0C8();
						}
						else if ((unk_0x84A97C70FFDEC0C8() - iLocal_106) > 500)
						{
							if (iLocal_103 == 0)
							{
								unk_0x59C0D363E5A5B548();
								func_54("EPS_DROP_MESS", -1);
								iLocal_103 = 1;
								iLocal_104 = 0;
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
	return (!uParam0->f_26 && !unk_0x43CD1F8DCB7CB8D9(uParam0->f_14, 6.2f, 0, 0, 1, 0, 0, 0, 0));
}

float func_58(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Param1, iParam4);
}

void func_59(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0x9C51EFE6A55E70E2(iParam1, 1);
}

int func_60(int iParam0)
{
	if (func_61(iParam0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
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
			if (!unk_0x6901135DDCC4904D(iLocal_92))
			{
				iLocal_92 = unk_0x6678F4628618607C(Local_40);
				if (unk_0x6901135DDCC4904D(iLocal_92))
				{
					unk_0xD6507DB77BCBD904(iLocal_92, 206);
					unk_0x4F095059F1C175D5(iLocal_92, 42);
				}
			}
			*iParam0 = 2;
			iLocal_98 = 0;
			break;
		
		case 2:
			if (!func_53())
			{
				func_76(0);
				return;
			}
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
			{
				func_76(4);
				return;
			}
			if (func_61(unk_0xD5A676B97920D126()) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
			{
				iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 1);
			}
			if (func_75(iVar0) && unk_0x2FAE1B1A2FF430A6(iVar0) > 0)
			{
				if (unk_0x98BE504E8B389665(iVar0, 0, 0) != unk_0xD5A676B97920D126())
				{
					func_76(3);
					return;
				}
			}
			if (func_58(unk_0xD5A676B97920D126(), Local_43, 0) < 15f)
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
			func_55(&iLocal_92);
			if (iLocal_105 == 0)
			{
				func_54("EPS_DROP_WANTED", -1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
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
				if (iLocal_105 == 0)
				{
					func_54("EPS_DROP_ESCAPE", -1);
				}
				func_76(2);
			}
			iLocal_105 = 1;
			break;
	}
}

void func_64(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_101 = 0;
			iLocal_103 = 0;
			func_55(&iLocal_92);
			break;
		
		case 2:
			if (func_61(unk_0xD5A676B97920D126()))
			{
				if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Local_43.f_6[0 /*3*/], Local_43.f_6[1 /*3*/], Local_43.f_6.f_7, 0, 1, 0) && func_43(&Local_43))
				{
					unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), -687.6668f, 500.598f, 109.0364f, 1, 0, 0, 1);
					unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), 200.7367f);
				}
			}
			if (func_58(unk_0xD5A676B97920D126(), Local_43, 0) > (15f + 5f))
			{
				func_83(&Local_43, 2);
				if (Local_43.f_4 != 2)
				{
					Local_43.f_4 = 3;
				}
			}
			if (func_53())
			{
				if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
				{
					func_76(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			if (iLocal_101 == 0 && func_61(unk_0xD5A676B97920D126()))
			{
				if (iLocal_117 != unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 1))
				{
					iLocal_117 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 1);
					func_54("EPS_DROP_HELP", -1);
					iLocal_101 = 1;
				}
			}
			iLocal_102 = 0;
			func_76(1);
			break;
	}
}

void func_65()
{
	func_67();
	while (unk_0xC19959490984F18E() || func_70() != 0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_66();
}

void func_66()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_75(unk_0xD5A676B97920D126()))
	{
	}
	unk_0xFC9F3169185868E7(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 0, 0, 1);
	func_81(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	uLocal_118 = unk_0x2B2CCF3F6B9ED3A3(Var0, Var3, 0, 1, 1, 1);
	iLocal_99 = Global_101652.f_8992.f_103;
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
	if (unk_0x6901135DDCC4904D(iLocal_92))
	{
		func_55(&iLocal_92);
		iLocal_92 = 0;
	}
	Global_101652.f_8992.f_103 = iLocal_99;
	func_55(&iLocal_92);
	func_77(0);
	func_69();
	func_68(&Local_43);
	unk_0x1AAA727AD9762D22(uLocal_118, 0);
	unk_0xC8BB600EA931F89A(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	unk_0xC8BB600EA931F89A(Local_109[0 /*3*/], Local_109[1 /*3*/], 8.25f, 1);
}

void func_68(var uParam0)
{
	if (unk_0x7974087FFB309CBC(*uParam0, 20f, uParam0->f_3, 0))
	{
		unk_0xA63F14F5213BDF0F(uParam0->f_3, *uParam0, 1, 0f, 0);
	}
}

void func_69()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0x8188DB74546FF484(iLocal_86[iVar0]);
		iVar0++;
	}
}

int func_70()
{
	func_71();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_71()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_74(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_73(unk_0xD5A676B97920D126());
			if (func_72(iVar0) && (!func_29(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_72(Global_101652.f_2079.f_539.f_3549))
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

bool func_72(int iParam0)
{
	return iParam0 < 3;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(uParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_75(int iParam0)
{
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	return !unk_0xB529B2A4B7C64D6D(iParam0, 0);
}

void func_76(int iParam0)
{
	iLocal_94 = iParam0;
	iLocal_93 = 1;
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
			Global_68526[iParam0] = 1;
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
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_31373[iParam0]), iParam1);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_31373[iParam0]), iParam1);
	}
}

bool func_80(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_101652.f_31373[iParam0], iParam1);
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
	if (unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_8028.f_99.f_219[iVar0]), iVar1);
	return 1;
}

bool func_86()
{
	return func_3() == 5;
}

void func_87()
{
	iLocal_86[0] = joaat("vacca");
	iLocal_86[1] = joaat("surano");
	iLocal_86[2] = joaat("tornado2");
	iLocal_86[3] = joaat("superd");
	iLocal_86[4] = joaat("double");
	Local_70[0 /*3*/] = 1;
	Local_70[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	Local_70[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	Local_70[1 /*3*/] = 2;
	Local_70[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	Local_70[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	Local_70[2 /*3*/] = 3;
	Local_70[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	Local_70[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	Local_70[3 /*3*/] = 4;
	Local_70[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	Local_70[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	Local_70[4 /*3*/] = 5;
	Local_70[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	Local_70[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_88()
{
	int iVar0;
	
	iLocal_99 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		unk_0xB8A73E7DA87B2968(&iLocal_99, iVar0);
		iVar0++;
	}
}

int func_89(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101652.f_8028.f_99.f_58[iParam0];
}

void func_90()
{
	int iVar0;
	
	func_55(&iLocal_92);
	func_77(0);
	func_69();
	func_68(&Local_43);
	Global_101652.f_8992.f_103 = iLocal_99;
	if (func_86() || func_89(90) == 1)
	{
		func_92(90, 1);
		func_91(6);
	}
	unk_0xC8BB600EA931F89A(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	unk_0xC8BB600EA931F89A(Local_109[0 /*3*/], Local_109[1 /*3*/], 8.25f, 1);
	unk_0x1AAA727AD9762D22(uLocal_118, 0);
	if (iLocal_284 != 0)
	{
		unk_0x4292FC2ED4EC4212(&iLocal_284);
		iLocal_284 = 0;
	}
	unk_0x5BC7B5709E38CBE0(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		unk_0xB924315F0872835A(joaat("num_epsilon_step"), (6 + func_3()), 1);
		func_20(23, (6 + func_3()));
	}
	unk_0x01DFCA3621B68C4A();
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
	if (unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[iVar0], iVar1))
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_8028.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101652.f_8028.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101652.f_8028.f_99.f_58[iParam0] = iParam1;
}

