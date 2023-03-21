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
	struct<4> Local_44[10];
	bool bLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	float fLocal_124 = 0f;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 16;
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
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	char* sLocal_299 = NULL;
	char* sLocal_300 = NULL;
	char* sLocal_301 = NULL;
	char* sLocal_302 = NULL;
	char* sLocal_303 = NULL;
	char* sLocal_304 = NULL;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	char* sLocal_307 = NULL;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	struct<3> Local_313 = { 0, 0, 0 } ;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	char* sLocal_318 = NULL;
	char* sLocal_319 = NULL;
	char* sLocal_320 = NULL;
	char* sLocal_321 = NULL;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	var uLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = -1;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1000;
	var uLocal_340 = 1000;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	iLocal_119 = 1;
	sLocal_302 = "REBTH_HANGAR";
	sLocal_303 = "REBTH_RUNSOF";
	sLocal_304 = "REBTH_TAUNT";
	sLocal_318 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_319 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_321 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_322 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_323 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_324 = "RANDOM@BICYCLE_THIEF@THANKS";
	Local_96 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xB9B05E900D325C36(11))
	{
		func_216();
	}
	if (unk_0xB7A628320EFF8E47(Local_96, 421.92f, -1930.95f, 23.18f) < 16f)
	{
		iLocal_317 = 1;
	}
	else if (unk_0xB7A628320EFF8E47(Local_96, 769.3f, -151.66f, 73.79f) < 16f)
	{
		iLocal_317 = 2;
	}
	else if (unk_0xB7A628320EFF8E47(Local_96, -1923.93f, 254.48f, 85.7f) < 16f)
	{
		iLocal_317 = 3;
	}
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) != 0)
		{
			unk_0xBEE2834559A8897A();
		}
		else if (func_215(unk_0x0031992CA618A445(), Local_96, 1) < 100f)
		{
			unk_0xBEE2834559A8897A();
		}
	}
	if (iLocal_317 != 3)
	{
		if (func_175(Local_96, 26, iLocal_317, 0, 0))
		{
			func_172(26);
		}
		else
		{
			unk_0xBEE2834559A8897A();
		}
	}
	else if (func_175(Local_96, 8, 0, 0, 0))
	{
		func_172(8);
	}
	else
	{
		unk_0xBEE2834559A8897A();
	}
	iLocal_316 = func_170();
	uLocal_325 = unk_0x765BE154A2FACB3E(Local_96 - Vector(20f, 20f, 20f), Local_96 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_169();
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			unk_0x7EBF60D0132BF685(unk_0x3D35F9864E4640B1());
			unk_0x5569805F9BA0EE5C(unk_0x3D35F9864E4640B1(), 28);
			unk_0x5569805F9BA0EE5C(unk_0x3D35F9864E4640B1(), 13);
			unk_0x5569805F9BA0EE5C(unk_0x3D35F9864E4640B1(), 35);
		}
		if (unk_0x7FAAAEBD3B7CE5DA() || iLocal_89 > 1)
		{
			if (func_149())
			{
				func_148();
				func_216();
			}
			else
			{
				switch (iLocal_89)
				{
					case 0:
						func_145();
						break;
					
					case 1:
						if (func_144())
						{
							func_148();
							func_216();
						}
						else
						{
							func_132();
						}
						break;
					
					case 2:
						func_105();
						func_101();
						func_100();
						func_99();
						func_97();
						func_96();
						func_88();
						break;
					
					case 3:
						func_86();
						func_68();
						func_59();
						break;
					
					case 4:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_216();
		}
	}
}

void func_1()
{
	if (func_58(unk_0x0031992CA618A445()) && func_58(iLocal_92))
	{
		if (func_57(unk_0x0031992CA618A445(), iLocal_92, 1) > 50f)
		{
			func_56(8);
			func_20();
		}
		else if ((unk_0x31CD6E9F83C10233() - iLocal_129) > 10000)
		{
			func_56(8);
			func_20();
		}
		else if ((iLocal_329 == 0 && !func_19()) && func_2(&uLocal_134, "REBTHAU", sLocal_301, 4, 0, 0, 0))
		{
			iLocal_329 = 1;
		}
	}
}

bool func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_18(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x683F0CB6CA4C99D0(0);
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
					func_17();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0065EA0CBFB686EA())
		{
			return 0;
		}
		if (func_16(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_15();
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
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
			if (bParam2)
			{
				func_8();
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
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_7())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
				}
			}
			if (func_6())
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
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
				{
					return 0;
				}
			}
			func_5();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_4();
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
		func_17();
	}
	return 0;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x683F0CB6CA4C99D0(0);
	Global_15745 = 1;
}

void func_5()
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
	unk_0xD804ACF2A7171150(&Global_2314, 16);
}

int func_6()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	int iVar0;
	int iVar1;
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
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

void func_8()
{
	if (func_14(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
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
		Global_14443 = func_9();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_9()
{
	func_10();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_13(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_12(unk_0x0031992CA618A445());
			if (func_11(iVar0) && (!func_14(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_11(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_11(int iParam0)
{
	return iParam0 < 3;
}

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_13(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_13(int iParam0)
{
	if (func_11(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_14(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_15()
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

bool func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

void func_17()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_18(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
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

int func_19()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_20()
{
	int iVar0;
	
	if (iLocal_317 == 3)
	{
		func_52(func_12(unk_0x0031992CA618A445()), 4, 5);
	}
	else
	{
		func_52(func_12(unk_0x0031992CA618A445()), 1, 3);
	}
	if (iLocal_317 != 3)
	{
		func_33(26, iLocal_317);
	}
	else
	{
		func_33(8, 0);
	}
	if (iLocal_317 == 1)
	{
		iVar0 = func_9();
		switch (iVar0)
		{
			case 0:
				while (!func_24(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 1:
				while (!func_24(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			
			case 2:
				while (!func_24(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				break;
			}
	}
	func_21();
	func_216();
}

void func_21()
{
	func_22();
}

int func_22()
{
	if (func_23(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

bool func_23(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (func_23(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0x2A3398C6222EB190(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104439.f_7549.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_32(iParam1);
		Var0.f_4 = (unk_0x31CD6E9F83C10233() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0xD804ACF2A7171150(&(Var0.f_1), 0);
		Global_104439.f_7549.f_765[Global_104439.f_7549.f_866 /*10*/] = { Var0 };
		Global_104439.f_7549.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_31(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_30(&iVar20);
		iVar21 = func_29(Var10, Global_104439.f_7549.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_27(Global_104439.f_7549.f_765[iVar20 /*10*/]);
			Global_104439.f_7549.f_765[iVar20 /*10*/] = { Var10 };
			func_26(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_25(Var10))
			{
				func_27(Global_104439.f_7549.f_765[iVar20 /*10*/]);
				Global_104439.f_7549.f_765[iVar20 /*10*/] = { Var10 };
				func_26(&Var10);
				return 1;
			}
			else
			{
				if (!func_25(Global_104439.f_7549.f_765[iVar20 /*10*/]))
				{
					Global_104439.f_7549.f_765[iVar20 /*10*/] = { Var10 };
					func_26(&Var10);
					return 1;
				}
				func_26(&Var10);
				return 1;
			}
		}
		else
		{
			func_27(Var10);
			func_26(&Var10);
			return 1;
		}
	}
	return 0;
}

int func_25(struct<9> Param0, var uParam9)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_26(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_27(struct<10> Param0)
{
	if (func_25(Param0))
	{
		func_28(Param0.f_8, 0);
	}
}

void func_28(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104439.f_8474[iParam0] = 1;
	Global_104439.f_8474.f_236[iParam0] = (unk_0x31CD6E9F83C10233() + iParam1);
}

int func_29(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param10.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_30(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_104439.f_7549.f_866)
	{
		if (func_29(Global_104439.f_7549.f_765[iVar0 /*10*/], Global_104439.f_7549.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_31(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_32(iParam1);
	Var0.f_4 = (unk_0x31CD6E9F83C10233() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0xD804ACF2A7171150(&(Var0.f_1), 0);
	return Var0;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_33(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_49(iParam0))
	{
		func_48(iParam0, iParam1);
		if (!func_47(51))
		{
			func_43("RE_REWARD", 1, 0, 4000, 10000, func_46(), 0, 138, 0);
			func_42(51);
		}
		if (func_41(iParam0))
		{
			Global_104439.f_24856.f_2 = 3;
		}
		if (func_40(iParam0, iParam1) != 322)
		{
			func_34(func_40(iParam0, iParam1), Local_86.f_0, Local_86.f_1);
		}
		Global_104427 = iParam1;
		if (Global_104425 == 0)
		{
			if (((Global_104428 == 1 || Global_104428 == 5) || Global_104428 == 11) || Global_104428 == 25)
			{
				func_56(2);
			}
			else if ((Global_104428 == 26 || Global_104428 == 8) || Global_104428 == 17)
			{
				func_56(7);
			}
			else
			{
				func_56(1);
			}
		}
	}
}

void func_34(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_38((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104439.f_10055[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104439.f_10055[iParam0 /*12*/].f_6 == 11 || Global_104439.f_10055[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104439.f_10055[iParam0 /*12*/].f_5 = 1;
		Global_104439.f_10055[iParam0 /*12*/].f_10 = uParam1;
		Global_104439.f_10055[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_35();
	}
}

void func_35()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104175 = 0;
	Global_104176 = 0;
	Global_104177 = 0;
	Global_104178 = 0;
	Global_104179 = 0;
	Global_104180 = 0;
	Global_104181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104439.f_10055.f_3853;
	Global_104439.f_10055.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104439.f_10055[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104439.f_10055[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104175++;
					fVar1 = (fVar1 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104176++;
					fVar2 = (fVar2 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104177++;
					fVar3 = (fVar3 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104178++;
					fVar4 = (fVar4 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104179++;
					fVar5 = (fVar5 + (Global_104439.f_10055[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104180++;
					fVar6 = (fVar6 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104181++;
					fVar7 = (fVar7 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104158 > 0)
	{
		if (Global_104175 == Global_104158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104159 > 0)
	{
		if (Global_104176 == Global_104159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104160 > 0)
	{
		if (Global_104177 == Global_104160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104161 > 0)
	{
		if (Global_104178 == Global_104161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104162 > 0)
	{
		if (((Global_104179 == Global_104162 || (Global_104162 * 10 / Global_104179) < 41) || Global_104179 > Global_104165) || Global_104179 == Global_104165)
		{
			if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 14))
			{
				if (Global_104179 == Global_104162)
				{
					unk_0x25676C1B212BF4A8(joaat("num_rndevents_completed"), Global_104162, 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104163 > 0)
	{
		if (Global_104180 == Global_104163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104164 > 0)
	{
		if (Global_104181 == Global_104164)
		{
			fVar7 = 5f;
		}
	}
	Global_104439.f_10055.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104179 > Global_104165 || Global_104179 == Global_104165)
	{
		iVar9 = Global_104165;
	}
	else
	{
		iVar9 = Global_104179;
	}
	unk_0xE931A869061F7BD2(joaat("num_missions_completed"), Global_104175, 1);
	unk_0xE931A869061F7BD2(joaat("num_missions_available"), Global_104158, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_completed"), Global_104176, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_available"), Global_104159, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_completed"), Global_104177, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_available"), Global_104160, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_completed"), Global_104178, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_available"), Global_104161, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_available"), Global_104165, 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_completed"), (Global_104181 + Global_104180), 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_available"), (Global_104164 + Global_104163), 1);
	Global_104182 = (Global_104175 * 100 / Global_104158);
	Global_104184 = ((Global_104177 + Global_104176) * 100 / (Global_104160 + Global_104159));
	Global_104183 = ((Global_104178 + iVar9) * 100 / (Global_104161 + Global_104165));
	Global_104185 = ((Global_104180 + Global_104181) * 100 / (Global_104163 + Global_104164));
	unk_0x16E461F1C38154B6(joaat("total_progress_made"), Global_104439.f_10055.f_3853, 1);
	unk_0xE931A869061F7BD2(joaat("percent_story_missions"), Global_104182, 1);
	unk_0xE931A869061F7BD2(joaat("percent_ambient_missions"), Global_104183, 1);
	unk_0xE931A869061F7BD2(joaat("percent_oddjobs"), Global_104184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853))
	{
		func_37(13, unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853));
	}
	if (!unk_0xCED7B36AA85A9CCD())
	{
		if (!Global_70785)
		{
			if (func_36() == 2 == 0 && !unk_0x27CA09C6DFAB1E79())
			{
				if (unk_0x04F2E3CF902D6F5D())
				{
					Global_104173 = 0;
				}
				if (!Global_55854)
				{
					func_22();
				}
			}
		}
	}
}

int func_36()
{
	return Global_25222;
}

int func_37(int iParam0, int iParam1)
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
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
	}
	return 0;
}

int func_38(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	
	if (iParam2 == -1)
	{
		iParam2 = func_39();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_39()
{
	return Global_1312735;
}

int func_40(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_20271.f_150[iVar1]), iVar0);
	}
}

void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_44(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xB3404E397FF56B3B(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0xB3404E397FF56B3B(&(Global_104439.f_20271[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104439.f_20271.f_145 < 9)
	{
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_4), sParam1, 16);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_8 = (unk_0x31CD6E9F83C10233() + iParam3);
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_9 = iParam5;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_11 = iParam6;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_12 = uParam2;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_13 = iParam7;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_14 = iParam8;
		Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = ((unk_0x31CD6E9F83C10233() + iParam3) + iParam4);
		}
		else
		{
			Global_104439.f_20271[Global_104439.f_20271.f_145 /*16*/].f_10 = -1;
		}
		Global_104439.f_20271.f_145++;
		func_45();
	}
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104439.f_20271.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104439.f_20271.f_145)
	{
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[0])
			{
				Global_104439.f_20271.f_146[0] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[1])
			{
				Global_104439.f_20271.f_146[1] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x2A3398C6222EB190(Global_104439.f_20271[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104439.f_20271[iVar0 /*16*/].f_12 > Global_104439.f_20271.f_146[2])
			{
				Global_104439.f_20271.f_146[2] = Global_104439.f_20271[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_46()
{
	func_10();
	switch (Global_104439.f_2244.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x2A3398C6222EB190(Global_104439.f_20271.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_48(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_24856.f_8[iParam0]), iParam1);
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_50()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x49CAADAD1ABAB70A(), 64);
	uVar16 = func_51(Var0);
	return uVar16;
}

int func_51(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x50B7853132D8438E(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_104439.f_2244.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_104439.f_2244.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 7237;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 7237)
			{
				iVar0 = func_55(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_53(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

int func_54(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_39();
		if (iVar1 > -1)
		{
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0x2553A7EB99AABF55(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_56(int iParam0)
{
	Global_104425 = iParam0;
}

float func_57(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	if (!unk_0x7A6C051038031EFA(iParam1, 0))
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xF177E0DA126D71C8(iParam1, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Var3, iParam2);
}

int func_58(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_59()
{
	if (func_58(iLocal_92) && func_67(iLocal_93))
	{
		if (!unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_93, 0))
		{
			func_66(&uLocal_342);
			func_65(&uLocal_132);
			if (iLocal_130 == 0 && !unk_0xA761A0B6072010C8(uLocal_131))
			{
				uLocal_131 = func_64(iLocal_93, 0, 0);
			}
		}
		else
		{
			func_65(&uLocal_131);
			if (!unk_0xA761A0B6072010C8(uLocal_132))
			{
				uLocal_132 = func_61(iLocal_92, 0, 145);
				if (iLocal_343 == 0)
				{
					func_60(&uLocal_342);
					iLocal_343 = 1;
				}
			}
		}
	}
}

void func_60(var uParam0)
{
	*uParam0 = -99;
}

var func_61(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA761A0B6072010C8(uVar0)) && unk_0xA56C5821F50C3275(&(Global_104439.f_27911[iParam2 /*29*/].f_3)))
	{
		unk_0x50B5259DFC71B8EC(uVar0, &(Global_104439.f_27911[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE80C2D6BF636C6C4(iParam0);
	if (unk_0x036E1D5EA494CEB2(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_63(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x8D60956768933D7C(uVar0, bParam1);
		}
		else
		{
			unk_0xEB934A06DDA5027D(uVar0, 2);
		}
	}
	else if (unk_0x269F274F1955DE87(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_63(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
		unk_0x8D60956768933D7C(uVar0, bParam1);
	}
	else if (unk_0xC207EA827E8CD735(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_63(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	return func_62(iParam0, !bParam1, bParam2);
}

void func_65(var uParam0)
{
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		unk_0xE4E08EF8CF4469E9(*uParam0, 0);
		unk_0x0C4BDC77192798AE(uParam0);
	}
}

void func_66(var uParam0)
{
	*uParam0 = (unk_0x31CD6E9F83C10233() - 5000);
}

int func_67(int iParam0)
{
	if (func_58(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (!unk_0xB3D4A3F00B489CC7(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_68()
{
	float fVar0;
	
	if (func_58(iLocal_92) && func_67(iLocal_93))
	{
		func_85(uLocal_132, &uLocal_342);
		if (fLocal_124 > 0f)
		{
			fVar0 = func_57(unk_0x0031992CA618A445(), iLocal_92, 1);
			if (fVar0 > (fLocal_124 + fLocal_117))
			{
				if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_93, 0))
				{
					func_56(7);
					func_20();
				}
				else
				{
					func_216();
				}
			}
		}
		else
		{
			fLocal_124 = func_57(unk_0x0031992CA618A445(), iLocal_92, 1);
			if (unk_0x3A7B47D96E536F61("RE_CAR_STEAL_SCENE"))
			{
				unk_0x8974265328B0DA68(iLocal_93, 0);
				unk_0xB3E27A9E412BBDF8("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_308 == 0)
		{
			if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_92, 40f, 40f, 40f, 0, 1, 0))
			{
				func_84();
				if (iLocal_311 == 0)
				{
					if (!unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_92, 25f, 25f, 25f, 0, 1, 0))
					{
						if (((((unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_93, 0) && unk_0x51D10CE903646C26(iLocal_92, unk_0x0031992CA618A445(), 30f)) && func_75(iLocal_92, unk_0x0031992CA618A445(), 1126825984, 1, 250, 7)) && !unk_0xABB40063444DEDAA(iLocal_92)) && !unk_0x3CE6EA6EC9DD3DE6(iLocal_92)) && func_2(&uLocal_134, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							unk_0xBE0E7D38FE7C495C(iLocal_92, sLocal_323, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
							unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
							iLocal_311 = 1;
						}
					}
					else
					{
						iLocal_311 = 1;
					}
				}
			}
		}
		else if (((!unk_0x830CAE5496B8AD6B(iLocal_93, iLocal_92, 35f, 35f, 35f, 0, 1, 0) && unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_93, 0)) && !func_74()) && func_2(&uLocal_134, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_72(0);
			unk_0xEB9B39274C401888(iLocal_92, 0);
			unk_0x85F49C37BE784CD7(5, uLocal_122, joaat("player"));
			unk_0x0EB00C68DDFABE19(iLocal_92, 1);
			unk_0x8B4EE19968C93083(iLocal_92, unk_0x0031992CA618A445(), 0, 16);
			unk_0x390D16BCBFB23E1A(iLocal_92, 1);
			unk_0x4EDE34FBADD967A6(0);
			func_56(7);
			func_20();
		}
		if (unk_0xA32DC7E16AD1DFB7(iLocal_92, iLocal_93, 0))
		{
			if (!func_19() && func_2(&uLocal_134, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_129 = unk_0x31CD6E9F83C10233();
			iLocal_89 = 4;
		}
		else if (unk_0x830CAE5496B8AD6B(iLocal_93, iLocal_92, 20f, 20f, 20f, 0, 1, 0))
		{
			if (func_71())
			{
				if (!func_69(iLocal_92, 242628503))
				{
					iLocal_130 = 1;
					func_72(0);
					func_66(&uLocal_342);
					func_65(&uLocal_132);
					func_65(&uLocal_131);
					unk_0x4AF3E3EF22AF92E4(iLocal_93, 0);
					unk_0x173325AAF2CD766A(&uLocal_95);
					if (iLocal_308 == 0)
					{
						unk_0x2E0E5BF2A31392F4(0, iLocal_93, 20000, -1, 2f, 8, 0);
					}
					else
					{
						unk_0x2E0E5BF2A31392F4(0, iLocal_93, 20000, -1, 2f, 262152, 0);
					}
					unk_0xF48F6EEC1EBEB012(0, iLocal_93, fLocal_114, 786485);
					unk_0xF81AD3C937316CCA(uLocal_95);
					unk_0xEDD5437C49B7B1F8(iLocal_92, uLocal_95);
					unk_0x1F5B34056C3CB80B(&uLocal_95);
					unk_0x390D16BCBFB23E1A(iLocal_92, 1);
				}
			}
			else
			{
				switch (iLocal_308)
				{
					case 0:
						if ((((iLocal_311 == 1 && !func_69(iLocal_92, -2017877118)) && !unk_0xABB40063444DEDAA(iLocal_92)) && !unk_0x3CE6EA6EC9DD3DE6(iLocal_92)) && func_2(&uLocal_134, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (unk_0x51D10CE903646C26(iLocal_92, unk_0x0031992CA618A445(), 30f) && unk_0xF57D21B49780A7A8(iLocal_92, -875674219) == 7)
							{
								unk_0xBE0E7D38FE7C495C(iLocal_92, sLocal_323, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_309 = unk_0x31CD6E9F83C10233();
							iLocal_308++;
						}
						else
						{
							func_84();
						}
						break;
					
					case 1:
						if (((((unk_0x31CD6E9F83C10233() - iLocal_309) > 10000 && !func_69(iLocal_92, -2017877118)) && !unk_0xABB40063444DEDAA(iLocal_92)) && !unk_0x3CE6EA6EC9DD3DE6(iLocal_92)) && func_2(&uLocal_134, "REBTHAU", sLocal_305, 4, 0, 0, 0))
						{
							if (unk_0x51D10CE903646C26(iLocal_92, unk_0x0031992CA618A445(), 30f))
							{
								func_72(0);
								unk_0xBE0E7D38FE7C495C(iLocal_92, sLocal_324, "THANKS_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_309 = unk_0x31CD6E9F83C10233();
							iLocal_308++;
						}
						else
						{
							func_72(1);
						}
						break;
					
					case 2:
						if (((((unk_0x31CD6E9F83C10233() - iLocal_309) > 10000 && !func_69(iLocal_92, -2017877118)) && !unk_0xABB40063444DEDAA(iLocal_92)) && !unk_0x3CE6EA6EC9DD3DE6(iLocal_92)) && func_2(&uLocal_134, "REBTHAU", sLocal_306, 4, 0, 0, 0))
						{
							if (unk_0x51D10CE903646C26(iLocal_92, unk_0x0031992CA618A445(), 30f))
							{
								func_72(0);
								unk_0xBE0E7D38FE7C495C(iLocal_92, sLocal_322, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_308++;
						}
						else
						{
							func_72(1);
						}
						break;
					
					default:
						func_72(1);
						break;
					}
				}
			}
	}
}

int func_69(int iParam0, int iParam1)
{
	if (func_70(iParam0))
	{
		if (unk_0xF57D21B49780A7A8(iParam0, iParam1) == 1 || unk_0xF57D21B49780A7A8(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (func_58(iParam0))
	{
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_71()
{
	if (iLocal_130 == 1)
	{
		return 1;
	}
	if ((unk_0x31CD6E9F83C10233() - iLocal_128) < 4000)
	{
		return 0;
	}
	if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_93, 1))
	{
		return 0;
	}
	if (func_58(iLocal_91) && unk_0x20BE8D7B7834CA2D(iLocal_91))
	{
		return 0;
	}
	if (!unk_0x00E962E9D49FD6C4(iLocal_93, -1, 0))
	{
		return 0;
	}
	return 1;
}

void func_72(int iParam0)
{
	if (func_58(iLocal_92))
	{
		if (iParam0 == 1)
		{
			if (!unk_0xCA71EE26095D78BE(iLocal_92) && func_58(unk_0x0031992CA618A445()))
			{
				unk_0xBF00F993DA29A169(iLocal_92, unk_0x46E5EE28C476604D(unk_0x0031992CA618A445()));
				unk_0x57532307FA210CDE(iLocal_92, 1);
				unk_0xCFBFD01018E91333(func_73(), 2f, -1082130432, -1082130432);
				unk_0x43EC517AF665D2B9(iLocal_92, unk_0x0031992CA618A445(), -1, 0, 2);
			}
		}
		else if (unk_0xCA71EE26095D78BE(iLocal_92))
		{
			unk_0x38396C255EC4D248(iLocal_92);
		}
	}
}

var func_73()
{
	return unk_0xC95BCBF0579C6F1A(unk_0xED1168B8D2D313FA());
}

int func_74()
{
	if (iLocal_317 == 3)
	{
		if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1875.858f, 262.3736f, 82.96029f, -1927.379f, 234.7951f, 90.71558f, 50.25f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_75(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_83(iParam0, iParam1);
	if (!func_58(iParam0) || !func_58(iParam1))
	{
		if (iVar4 != -1)
		{
			func_82(&(Local_44[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_79(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_78();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_44[iVar4 /*4*/].f_1 = iParam0;
		Local_44[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_76(&(Local_44[iVar4 /*4*/]), Var1, iParam1, &(Local_44[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x31CD6E9F83C10233() - Local_44[iVar4 /*4*/].f_3) < iParam4);
}

int func_76(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_58(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_77(iParam4, iParam7) };
		*uParam0 = unk_0xB654849962F7FBC3(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xF645F030F8429492(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x269F274F1955DE87(iVar7))
	{
		func_58(iVar7);
		if (unk_0x4849801147A2BA1E(iVar7) == iParam4)
		{
			if (bLocal_85)
			{
				unk_0x15DCE0232A265CCA(Param1, unk_0xF177E0DA126D71C8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x31CD6E9F83C10233();
			return 1;
		}
		return 0;
	}
	if (unk_0x036E1D5EA494CEB2(iVar7))
	{
		func_58(iVar7);
		if (unk_0x90219307C9D2728D(iParam4, 0))
		{
			if (unk_0x89C1AD6422029361(iVar7) == unk_0xCFA31F1E461A6BB5(iParam4, 0))
			{
				if (bLocal_85)
				{
					unk_0x15DCE0232A265CCA(Param1, unk_0xF177E0DA126D71C8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x31CD6E9F83C10233();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x3AF262D7332EEDF5(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xF177E0DA126D71C8(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x616B55A822407A37(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x616B55A822407A37(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x616B55A822407A37(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x616B55A822407A37(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x616B55A822407A37(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xF177E0DA126D71C8(iParam0, 1);
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		if ((Local_44[iVar0 /*4*/] == 0 && Local_44[iVar0 /*4*/].f_1 == 0) && Local_44[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_79(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_81(unk_0xF177E0DA126D71C8(iParam1, 1) - unk_0xF177E0DA126D71C8(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xE9EAE230056F8FA1(iParam0) };
	}
	else
	{
		Var3 = { func_81(unk_0x616B55A822407A37(iParam0, 31086, 0f, 5f, 0f) - unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_80(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_80(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_81(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_82(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		if (Local_44[iVar0 /*4*/].f_1 == iParam0 && Local_44[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_84()
{
	if (iLocal_130 == 0 && func_58(iLocal_92))
	{
		if (func_69(iLocal_92, 242628503))
		{
			unk_0xD706D9D85701BFBD(iLocal_92);
		}
		if ((((!func_69(iLocal_92, -2017877118) && !unk_0x51D10CE903646C26(iLocal_92, unk_0x0031992CA618A445(), 20f)) && unk_0xF57D21B49780A7A8(iLocal_92, -875674219) == 7) && !unk_0xABB40063444DEDAA(iLocal_92)) && !unk_0x3CE6EA6EC9DD3DE6(iLocal_92))
		{
			unk_0x3933C434ECC3BB69(iLocal_92, unk_0x0031992CA618A445(), 0);
			unk_0x43EC517AF665D2B9(iLocal_92, unk_0x0031992CA618A445(), -1, 0, 2);
		}
	}
}

void func_85(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x31CD6E9F83C10233();
	}
	if (unk_0xA761A0B6072010C8(uParam0))
	{
		iVar0 = (unk_0x31CD6E9F83C10233() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x2FC773C69270B2E5(uParam0) != 255)
				{
					unk_0x18EC814D577B92CE(uParam0, 255);
				}
			}
			else if (unk_0x2FC773C69270B2E5(uParam0) != 0)
			{
				unk_0x18EC814D577B92CE(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x2FC773C69270B2E5(uParam0) != 255)
			{
				unk_0x18EC814D577B92CE(uParam0, 255);
			}
		}
	}
}

void func_86()
{
	if (func_58(iLocal_91))
	{
		if (iLocal_120 == 0)
		{
			unk_0x67ABC034CBFBD349(iLocal_91, 2, 0);
			unk_0xD706D9D85701BFBD(iLocal_91);
			if (func_67(iLocal_93))
			{
				if (iLocal_317 == 2)
				{
					if (unk_0x6459D7B9F825DBCF(iLocal_93))
					{
						unk_0x6562DA95A43F027D(iLocal_93);
					}
					unk_0x0EA5304CED5FD5D1(1, "RE_BikeThief2");
				}
				if (unk_0xA32DC7E16AD1DFB7(iLocal_91, iLocal_93, 1))
				{
					unk_0x2E3E91CB53311534(iLocal_91);
				}
			}
			unk_0x390D16BCBFB23E1A(iLocal_91, 1);
			unk_0x53E150F8F0AD7101(iLocal_91, unk_0x0031992CA618A445(), 200f, -1, 0, 0);
			iLocal_120 = 1;
		}
		else
		{
			if (((((iLocal_121 == 0 && func_57(iLocal_91, unk_0x0031992CA618A445(), 1) < 30f) && !unk_0xABB40063444DEDAA(iLocal_91)) && func_69(iLocal_91, 1805844857)) && !func_19()) && func_2(&uLocal_134, "REBTHAU", sLocal_303, 4, 0, 0, 0))
			{
				iLocal_121 = 1;
			}
			if (func_57(iLocal_91, unk_0x0031992CA618A445(), 1) > 50f)
			{
				func_87(&iLocal_91, 1, 0, 1);
			}
		}
	}
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x76B3C79DE564AFC6(*iParam0))
	{
		if (!unk_0x8682D8A6269E52C9(*iParam0))
		{
			unk_0xCFC7B014BB928D6D(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x2758EB35EE475C21(*iParam0);
			}
			unk_0x390D16BCBFB23E1A(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xEB9B39274C401888(*iParam0, 0);
			}
		}
		unk_0x056049D9941BD43D(iParam0);
	}
}

void func_88()
{
	if ((func_58(iLocal_91) && func_58(iLocal_92)) && func_67(iLocal_93))
	{
		if (func_95())
		{
			func_93(&uLocal_330, 0, 0);
			func_92(&iLocal_91);
			func_91(&iLocal_93);
			if (unk_0x830CAE5496B8AD6B(iLocal_92, unk_0x0031992CA618A445(), 25f, 25f, 25f, 0, 1, 0) && func_2(&uLocal_134, "REBTHAU", sLocal_307, 4, 0, 0, 0))
			{
			}
			unk_0x3A85AE9FA7967993(iLocal_92, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
			func_90();
		}
		else
		{
			func_89(uLocal_131, iLocal_93, fLocal_117, 1061158912, 0);
		}
	}
}

void func_89(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA761A0B6072010C8(uParam0))
	{
		if ((unk_0x76B3C79DE564AFC6(iParam1) && unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445())) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (unk_0x036E1D5EA494CEB2(iParam1))
			{
				if (unk_0x432757A9E7AAFA96(unk_0x89C1AD6422029361(iParam1), 0))
				{
					fVar1 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xB989C497205DF6E8(uParam0, 1);
						unk_0x18EC814D577B92CE(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xB989C497205DF6E8(uParam0, 0);
						unk_0x18EC814D577B92CE(uParam0, 255);
					}
				}
			}
			else if (unk_0x269F274F1955DE87(iParam1))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x4849801147A2BA1E(iParam1)))
				{
					fVar1 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xB989C497205DF6E8(uParam0, 1);
						unk_0x18EC814D577B92CE(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xB989C497205DF6E8(uParam0, 0);
						unk_0x18EC814D577B92CE(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_90()
{
	func_216();
}

void func_91(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(*iParam0))
	{
		if (!unk_0xCC234795142FC2D2(*iParam0))
		{
			unk_0x1581691D748490F3(*iParam0, 1, 0);
		}
		if (func_67(*iParam0))
		{
			if (unk_0xCC234795142FC2D2(*iParam0) && unk_0xC9FBF92709010AC3(*iParam0, 1))
			{
				if (func_58(unk_0x0031992CA618A445()))
				{
					if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), *iParam0, 0))
					{
						unk_0x28BB69BE14577487(iParam0);
						return;
					}
				}
				unk_0xE9F8539D5AF6B052(iParam0);
			}
		}
		else
		{
			if (func_58(unk_0x0031992CA618A445()))
			{
				if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), *iParam0, 0))
				{
					unk_0x28BB69BE14577487(iParam0);
					return;
				}
			}
			unk_0xE9F8539D5AF6B052(iParam0);
		}
	}
}

void func_92(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(*iParam0))
	{
		if (!unk_0x7A6C051038031EFA(*iParam0, 0))
		{
			unk_0xCFC7B014BB928D6D(*iParam0, 0, 1);
		}
		if (!unk_0xCC234795142FC2D2(*iParam0))
		{
			unk_0x1581691D748490F3(*iParam0, 1, 0);
		}
		unk_0xA50DE967C5813F23(iParam0);
	}
}

void func_93(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_2501777.f_4545, 26))
		{
			return;
		}
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0x59FA14CE9944B95A(iParam2);
		unk_0xC84CB7879942C3BA("FocusIn");
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xC938B5CB1FF90CA1(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x996B09F758C57FBE(sVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x996B09F758C57FBE(uParam0->f_3))
	{
		if (func_94(uParam0->f_3))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
	if (!unk_0x996B09F758C57FBE(sVar0))
	{
		if (func_94(sVar0))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
}

bool func_94(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

int func_95()
{
	if (func_57(iLocal_93, unk_0x0031992CA618A445(), 1) > (fLocal_117 + 100f))
	{
		return 1;
	}
	if (func_57(iLocal_93, unk_0x0031992CA618A445(), 1) > fLocal_117)
	{
		if (((unk_0x4CB2F72EA418C083(iLocal_92, sLocal_321, "IDLE_A", 3) && unk_0x2D1A3279FE1D23D4(iLocal_92, sLocal_321, "IDLE_A") > 0.99f) || (unk_0x4CB2F72EA418C083(iLocal_92, sLocal_321, "IDLE_B", 3) && unk_0x2D1A3279FE1D23D4(iLocal_92, sLocal_321, "IDLE_B") > 0.99f)) || (unk_0x4CB2F72EA418C083(iLocal_92, sLocal_321, "IDLE_C", 3) && unk_0x2D1A3279FE1D23D4(iLocal_92, sLocal_321, "IDLE_C") > 0.99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_96()
{
	if ((((((((((iLocal_127 > -1 && (unk_0x31CD6E9F83C10233() - iLocal_127) > 5000) && !func_19()) && func_58(iLocal_91)) && func_58(iLocal_92)) && func_67(iLocal_93)) && !unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_91, 13f, 13f, 13f, 0, 1, 0)) && !unk_0x830CAE5496B8AD6B(iLocal_92, iLocal_91, 13f, 13f, 13f, 0, 1, 0)) && unk_0xA32DC7E16AD1DFB7(iLocal_91, iLocal_93, 0)) && unk_0x830CAE5496B8AD6B(iLocal_92, unk_0x0031992CA618A445(), 8f, 8f, 8f, 0, 1, 0)) && func_2(&uLocal_134, "REBTHAU", sLocal_302, 4, 0, 0, 0))
	{
		iLocal_127 = -1;
	}
}

void func_97()
{
	if (func_98())
	{
		iLocal_128 = unk_0x31CD6E9F83C10233();
		func_65(&uLocal_131);
		func_93(&uLocal_330, 0, 0);
		unk_0x2678FA30C5FB2080(0);
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
		{
			iLocal_94 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 1);
			unk_0x1581691D748490F3(iLocal_94, 1, 1);
		}
		if (func_58(iLocal_92))
		{
			unk_0xCFA3B07B6CEEF62C(iLocal_92);
		}
		if ((func_58(iLocal_91) && !func_19()) && func_2(&uLocal_134, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_89 = 3;
	}
	else
	{
		if (((iLocal_326 == 0 && unk_0xA761A0B6072010C8(uLocal_131)) && func_58(unk_0x0031992CA618A445())) && func_58(iLocal_91))
		{
			if (func_57(unk_0x0031992CA618A445(), iLocal_91, 1) < 30f || unk_0xA836CB82D16639AD(unk_0xF177E0DA126D71C8(iLocal_91, 1), 10f, 1))
			{
				iLocal_326 = 1;
				unk_0x02C0454478A70EFA(uLocal_131, iLocal_326);
			}
		}
		if (((iLocal_317 == 2 && func_58(iLocal_91)) && func_67(iLocal_93)) && unk_0xA32DC7E16AD1DFB7(iLocal_91, iLocal_93, 0))
		{
			if (iLocal_312 == 0)
			{
				unk_0x3C295DDDCC2F5258(iLocal_93, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_312 = 1;
				Local_313 = { unk_0x71F8AC7E7FB69DDE(unk_0x3BF8F973CCD31798(1, "RE_BikeThief2"), unk_0x311A9BB0AE4259EA(1, "RE_BikeThief2")) };
			}
			else if (!unk_0x6459D7B9F825DBCF(iLocal_93) || func_215(iLocal_93, Local_313, 1) < 5f)
			{
				if (unk_0x6459D7B9F825DBCF(iLocal_93))
				{
					unk_0x6562DA95A43F027D(iLocal_93);
				}
				unk_0xF67CC1918ACD3BB7(iLocal_91, iLocal_93, unk_0x0031992CA618A445(), 8, fLocal_114, 786468, 10f, 1f, 0);
			}
		}
	}
}

int func_98()
{
	if (!func_58(iLocal_91))
	{
		return 1;
	}
	else if (func_58(iLocal_93))
	{
		if (iLocal_344 == 0)
		{
			if (unk_0xA32DC7E16AD1DFB7(iLocal_91, iLocal_93, 0))
			{
				iLocal_344 = 1;
			}
		}
		else if (!unk_0xA32DC7E16AD1DFB7(iLocal_91, iLocal_93, 0))
		{
			return 1;
		}
		if (unk_0x7CA73A79B30385F3(iLocal_91, unk_0x0031992CA618A445(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()
{
	if ((func_58(iLocal_91) && func_67(iLocal_93)) && unk_0xA32DC7E16AD1DFB7(iLocal_91, iLocal_93, 0))
	{
		if (iLocal_119)
		{
			if (!unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_91, 40f, 40f, 40f, 0, 1, 0))
			{
				fLocal_114 = fLocal_116;
				unk_0xDCDAEB946BEBD18C(iLocal_91, fLocal_114);
				unk_0x43EC517AF665D2B9(iLocal_91, unk_0x0031992CA618A445(), 20000, 16, 2);
				iLocal_119 = 0;
			}
		}
		else if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_91, 40f, 40f, 40f, 0, 1, 0))
		{
			fLocal_114 = fLocal_115;
			unk_0xDCDAEB946BEBD18C(iLocal_91, fLocal_114);
			unk_0x43EC517AF665D2B9(iLocal_91, unk_0x0031992CA618A445(), 20000, 16, 2);
			iLocal_119 = 1;
		}
	}
}

void func_100()
{
	if (((((((((iLocal_125 < 5 && !func_19()) && func_58(iLocal_91)) && func_58(iLocal_92)) && func_67(iLocal_93)) && unk_0xA32DC7E16AD1DFB7(iLocal_91, iLocal_93, 0)) && unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_91, 13f, 13f, 13f, 0, 1, 0)) && !unk_0x830CAE5496B8AD6B(iLocal_92, iLocal_91, 13f, 13f, 13f, 0, 1, 0)) && (unk_0x31CD6E9F83C10233() - iLocal_126) > 15000) && func_2(&uLocal_134, "REBTHAU", sLocal_304, 4, 0, 0, 0))
	{
		if (unk_0xF57D21B49780A7A8(iLocal_91, -1273030092) == 1 && !unk_0xE755494A08762696(iLocal_91))
		{
			unk_0xF299E748C08E5830(iLocal_91, unk_0x0031992CA618A445(), 0, 0f, 0f, 0f, 15f, 50, 1, -753768974);
		}
		iLocal_126 = unk_0x31CD6E9F83C10233();
		iLocal_125++;
	}
}

void func_101()
{
	if ((((iLocal_310 == 0 && func_58(iLocal_92)) && func_58(iLocal_91)) && func_67(iLocal_93)) && unk_0xA32DC7E16AD1DFB7(iLocal_91, iLocal_93, 0))
	{
		if (iLocal_327 == 0)
		{
			if (func_2(&uLocal_134, "REBTHAU", sLocal_299, 4, func_104(), 0, 0))
			{
				unk_0x3000ECF14A659126(iLocal_92);
				unk_0x173325AAF2CD766A(&uLocal_95);
				unk_0x43EC517AF665D2B9(0, iLocal_91, -1, 2048, 2);
				unk_0xED5F2A2963728B55(0, Local_105, 2f, 20000, 1193033728, 1056964608);
				unk_0x3933C434ECC3BB69(0, iLocal_93, 1000);
				unk_0xBE0E7D38FE7C495C(0, sLocal_319, sLocal_320, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(0, sLocal_321, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(0, sLocal_321, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(0, sLocal_321, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(0, sLocal_321, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(0, sLocal_321, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(0, sLocal_321, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xBE0E7D38FE7C495C(0, sLocal_321, "IDLE_C", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0xF81AD3C937316CCA(uLocal_95);
				unk_0xEDD5437C49B7B1F8(iLocal_92, uLocal_95);
				unk_0x1F5B34056C3CB80B(&uLocal_95);
				iLocal_126 = unk_0x31CD6E9F83C10233();
				iLocal_127 = unk_0x31CD6E9F83C10233();
				if (iLocal_317 == 3)
				{
					sLocal_300 = "REBTH_HELP2X";
				}
				else
				{
					sLocal_300 = "REBTH_HELP2";
				}
				iLocal_327 = 1;
			}
		}
		else if (func_58(unk_0x0031992CA618A445()))
		{
			if (func_57(unk_0x0031992CA618A445(), iLocal_92, 1) < 30f)
			{
				if (!func_19())
				{
					if (func_2(&uLocal_134, "REBTHAU", sLocal_300, 4, 0, 0, 0))
					{
						iLocal_310 = 1;
					}
				}
				else if (iLocal_328 == 0)
				{
					func_102();
					iLocal_328 = 1;
				}
			}
		}
	}
}

void func_102()
{
	Global_14611 = 0;
	func_103();
}

void func_103()
{
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x8C8894B8C4CFE97F();
		Global_16756 = 0;
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

int func_104()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 100f, 100f, 20f };
	if (!unk_0x8682D8A6269E52C9(iLocal_92))
	{
		if (unk_0x830CAE5496B8AD6B(iLocal_92, unk_0x0031992CA618A445(), Var1, 0, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_105()
{
	if ((func_58(iLocal_91) && func_67(iLocal_93)) && unk_0xA32DC7E16AD1DFB7(iLocal_91, iLocal_93, 0))
	{
		func_106(&uLocal_330, iLocal_93, 0, 0, 1, 1, 1);
	}
}

void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_107(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_107(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_108(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_108(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		func_93(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_109(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_109(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x154C8F16279FF849())
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x996B09F758C57FBE(iVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_94(iVar0))
	{
		func_131();
	}
	if (func_130(iParam1) && unk_0x8CAADD2AA5EDCAAC(iParam1))
	{
		iVar1 = 0;
		if (unk_0x269F274F1955DE87(iParam1))
		{
			unk_0x74C81A83411D14D3(unk_0x4849801147A2BA1E(iParam1));
			unk_0x0FA8F26FCFDFF803(unk_0x4849801147A2BA1E(iParam1), 1);
			if (unk_0x5C428867F8F5FE0C(unk_0x4849801147A2BA1E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x036E1D5EA494CEB2(iParam1))
		{
			unk_0x932BE5F88FA96F6D(unk_0x89C1AD6422029361(iParam1));
			if (unk_0x896AC94320989D6D(unk_0x89C1AD6422029361(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xC207EA827E8CD735(iParam1))
		{
			unk_0x34CD6EBB80DC5D6B(unk_0x0B603933F47AABAA(iParam1));
			if (unk_0x3754E63199967977(unk_0x0B603933F47AABAA(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x154C8F16279FF849())
		{
			if (func_125(uParam0, bParam7, bParam9, 0))
			{
				func_121(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_114(iVar0))
				{
					if ((unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0)) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if ((iVar1 && !unk_0x068C69D0643C4B95()) && uParam8)
						{
							if (!func_94(iVar0))
							{
								func_113(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
								{
									func_112(1);
								}
							}
						}
					}
				}
			}
			else if (func_114(iVar0))
			{
				if (unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0))
				{
					if (((unk_0x4096DB4B0B8A982B(iParam1) && iVar1) && !unk_0x068C69D0643C4B95()) && uParam8)
					{
						if (!func_94(iVar0))
						{
							func_113(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
							{
								func_112(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x996B09F758C57FBE(sParam5))
			{
				if (func_94(sParam5))
				{
					unk_0x8C361F37C04084F4(1);
				}
			}
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
			{
				if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
				{
					func_93(uParam0, iVar0, 1);
				}
			}
			if (!func_125(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_111(uParam0))
				{
					func_110(uParam0);
				}
			}
		}
	}
	else
	{
		func_93(uParam0, iVar0, 0);
	}
}

void func_110(var uParam0)
{
	if (func_130(unk_0x0031992CA618A445()))
	{
		unk_0xCFA3B07B6CEEF62C(unk_0x0031992CA618A445());
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0xC938B5CB1FF90CA1(1);
		unk_0x59FA14CE9944B95A(0);
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		unk_0xC84CB7879942C3BA("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_111(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x31CD6E9F83C10233()
		{
			return 1;
		}
	}
	return 0;
}

int func_112(bool bParam0)
{
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104439.f_9910.f_100++;
			}
			return Global_104439.f_9910.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104439.f_9910.f_101++;
			}
			return Global_104439.f_9910.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104439.f_9910.f_102++;
			}
			return Global_104439.f_9910.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_113(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_114(char* sParam0)
{
	if (!func_115(1, 1, 0))
	{
		if ((!unk_0x0BD3CCFB6C6CFA91(sParam0) && func_94(sParam0)) || func_94("CMN_HINT"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		return 0;
	}
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (func_112(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_112(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_115(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x003E46CBEF6CE07A())
	{
		return 0;
	}
	if (func_120(0))
	{
		return 0;
	}
	if (func_119())
	{
		return 0;
	}
	if (unk_0xFCFC2645B6CF6425())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x7832F791572D5809(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53035)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
		{
			if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
			{
				return 0;
			}
			if (unk_0xCE65BA0D5E39A5CB())
			{
				return 0;
			}
		}
	}
	if (func_118() || func_117(Global_1641087.f_116067))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xCF432047F5AFBA06(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), func_116(unk_0x0031992CA618A445(), 0)) || (unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) == joaat("apc") && func_116(unk_0x0031992CA618A445(), 0) != -1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x90219307C9D2728D(iParam0, iParam1))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, iParam1);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				iVar1 = unk_0x09139F011D2AE2D0(unk_0xE9559A12052415BE(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x00E962E9D49FD6C4(iVar0, iVar3, 0))
					{
						if (unk_0x3251C2B06497863C(iVar0, iVar3, 0) == iParam0)
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

bool func_117(int iParam0)
{
	return iParam0 == 51;
}

var func_118()
{
	return Global_2445582.f_13;
}

bool func_119()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

int func_120(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_121(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316441 == 1)
	{
		return;
	}
	if (unk_0x7A6C051038031EFA(iParam1, 0))
	{
		func_93(uParam0, 0, 0);
	}
	if (func_124(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x269F274F1955DE87(iParam1))
		{
			iVar0 = unk_0x4849801147A2BA1E(iParam1);
			if (!unk_0x90219307C9D2728D(iVar0, 0))
			{
				if (unk_0x972B5786EA49FE1A(iVar0))
				{
					if (!func_122())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA7D1AE4528FB3B74(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xC938B5CB1FF90CA1(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xF539A9F1BCA8C0E9(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x43EC517AF665D2B9(unk_0x0031992CA618A445(), iParam1, -1, iVar3, iVar4);
	unk_0xF177BD202464664F("FocusIn", 0, 0);
	unk_0xFD69BDF108B32E5B("HINT_CAM_SCENE");
	unk_0x18F1BFAF88AC511B(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x31CD6E9F83C10233();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_122()
{
	return func_123(unk_0x3D35F9864E4640B1());
}

int func_123(var uParam0)
{
	if (unk_0xE9559A12052415BE(unk_0xD33F4BC17EB987E5(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_124(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_125(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_129(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_111(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (!func_129(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x31CD6E9F83C10233();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_128(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (!func_129(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_128(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_128(bParam1, bParam2, bParam3) || unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_129(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (func_127(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_127(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_111(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_115(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_131();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_127(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				unk_0xC938B5CB1FF90CA1(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_128(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				unk_0xC938B5CB1FF90CA1(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_130(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x036E1D5EA494CEB2(iParam0))
		{
			if (unk_0x432757A9E7AAFA96(unk_0x89C1AD6422029361(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x269F274F1955DE87(iParam0))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x4849801147A2BA1E(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xC207EA827E8CD735(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_131()
{
	unk_0xCD7E92DE2BFA0B0D(&Global_2314, 4);
}

void func_132()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_91))
	{
		if (unk_0x8682D8A6269E52C9(iLocal_91))
		{
			func_148();
			func_216();
		}
		else if (func_143())
		{
			if (func_9() == 0)
			{
				func_142(&uLocal_134, 0, unk_0x0031992CA618A445(), "MICHAEL", 0, 1);
				sLocal_301 = "REBTH_RESPM";
			}
			else if (func_9() == 1)
			{
				func_142(&uLocal_134, 0, unk_0x0031992CA618A445(), "FRANKLIN", 0, 1);
				sLocal_301 = "REBTH_RESPF";
			}
			else if (func_9() == 2)
			{
				func_142(&uLocal_134, 0, unk_0x0031992CA618A445(), "TREVOR", 0, 1);
				sLocal_301 = "REBTH_RESPT";
			}
			if (unk_0x432757A9E7AAFA96(iLocal_93, 0) && !unk_0x8682D8A6269E52C9(iLocal_91))
			{
				if (iLocal_317 == 2)
				{
					unk_0x2E0E5BF2A31392F4(iLocal_91, iLocal_93, 20000, -1, 1073741824, 1, 0);
				}
				else
				{
					unk_0x173325AAF2CD766A(&uLocal_95);
					unk_0x2E0E5BF2A31392F4(0, iLocal_93, 20000, -1, 1073741824, 1, 0);
					unk_0xF67CC1918ACD3BB7(0, iLocal_93, unk_0x0031992CA618A445(), 8, fLocal_114, 786468, 10f, 1f, 0);
					unk_0xF81AD3C937316CCA(uLocal_95);
					unk_0xEDD5437C49B7B1F8(iLocal_91, uLocal_95);
					unk_0x1F5B34056C3CB80B(&uLocal_95);
					unk_0x390D16BCBFB23E1A(iLocal_91, 1);
				}
			}
			func_65(&uLocal_133);
			uLocal_131 = func_61(iLocal_91, 1, 145);
			unk_0x02C0454478A70EFA(uLocal_131, iLocal_326);
			unk_0x2678FA30C5FB2080(2);
			if (iLocal_317 == 1)
			{
				unk_0xF3AB35ADAA20C9A9(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 0, 0, 1);
			}
			iLocal_89 = 2;
			func_133(1);
		}
	}
}

int func_133(int iParam0)
{
	if (func_136())
	{
		Global_104429 = 1;
		Global_104426 = unk_0x31CD6E9F83C10233();
		if (func_41(Global_104428))
		{
			func_134(0);
		}
		unk_0xD1DEB22AEDCCED60(1, "RE_TITLE");
		if (iParam0 && func_41(Global_104428))
		{
			unk_0x292298DDE6D3EE2A();
		}
		return 1;
	}
	return 0;
}

void func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104439.f_24856.f_2 < 3)
			{
				if (!unk_0x878B7171D1F304ED())
				{
					func_113(func_135(iParam0), -1);
					Global_104439.f_24856.f_2++;
					unk_0xCD7E92DE2BFA0B0D(&Global_104435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x2A3398C6222EB190(Global_104435, 1))
			{
				if (!unk_0x878B7171D1F304ED())
				{
					func_113(func_135(iParam0), -1);
					Global_104439.f_24856.f_3++;
					unk_0xCD7E92DE2BFA0B0D(&Global_104435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x2A3398C6222EB190(Global_104435, 2))
			{
				if (!unk_0x878B7171D1F304ED())
				{
					func_113(func_135(iParam0), -1);
					Global_104439.f_24856.f_4++;
					unk_0xCD7E92DE2BFA0B0D(&Global_104435, 2);
				}
			}
			break;
	}
}

char* func_135(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_136()
{
	switch (func_137(&Global_25281, 0, 5, 0, unk_0xFFDE6A3A0108B7CB()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_137(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90385.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_141(0))
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		unk_0x94EB0EFC2C10DAF6(unk_0xED1168B8D2D313FA(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x7EF668988342648C(8);
		}
		Global_35813 = iParam2;
		Global_35775 = *uParam0;
		Global_35776 = iParam4;
		Global_35774 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35774 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35774)
			{
				if (Global_35780[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35775 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_139(iParam2))
		{
			return 0;
		}
		if (Global_35774 == 8)
		{
			return 0;
		}
		Global_35777++;
		*uParam0 = Global_35777;
		Global_35780[Global_35774 /*4*/] = Global_35777;
		Global_35780[Global_35774 /*4*/].f_1 = iParam1;
		Global_35780[Global_35774 /*4*/].f_2 = iParam2;
		Global_35780[Global_35774 /*4*/].f_3 = 0;
		Global_35774++;
		if (iParam4 != 0)
		{
			func_138(uParam0, iParam4);
		}
	}
	return 2;
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35774 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35774)
	{
		if (Global_35780[iVar0 /*4*/] == *uParam0)
		{
			Global_35780[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_139(int iParam0)
{
	return func_140(iParam0, Global_35813);
}

int func_140(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (Global_35813 == 15)
	{
		return 0;
	}
	if (func_139(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_142(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

int func_143()
{
	switch (iLocal_317)
	{
		case 1:
			if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 365.9538f, -1971.716f, 18.34454f, 526.409f, -1861.941f, 34.52906f, 100f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 886.1401f, -229.9373f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), -1969.382f, 382.1331f, 68.15017f, -1878.152f, 158.4052f, 104.8504f, 100f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_144()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 16f, 16f, 6f };
	Var3 = { -16f, -16f, -6f };
	if (func_58(iLocal_91))
	{
		if (unk_0x7CA73A79B30385F3(iLocal_91, unk_0x0031992CA618A445(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_67(iLocal_93))
	{
		if (unk_0x7CA73A79B30385F3(iLocal_93, unk_0x0031992CA618A445(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_58(iLocal_92))
	{
		if (unk_0xA836CB82D16639AD(unk_0x616B55A822407A37(iLocal_92, 31086, 0f, 0f, 0f), 3f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0x616B55A822407A37(iLocal_92, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + unk_0x616B55A822407A37(iLocal_92, 31086, 0f, 0f, 0f) };
		if ((unk_0x2264DB771859B217(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x2264DB771859B217(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0x2264DB771859B217(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0xD9698BC08E26CB96(unk_0x616B55A822407A37(iLocal_92, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0x40F3590C2FDAEDCC(-1, unk_0x616B55A822407A37(iLocal_92, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0xFD4433475BBB55D3(iLocal_92))
		{
			return 1;
		}
		if (unk_0x7CA73A79B30385F3(iLocal_92, unk_0x0031992CA618A445(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_145()
{
	if (iLocal_118 == 0)
	{
		switch (iLocal_317)
		{
			case 1:
				Local_102 = { 433.57f, -1916.68f, 24.04f };
				fLocal_112 = 248.5f;
				Local_105 = { 439.054f, -1920.145f, 23.5581f };
				Local_108 = { 434.31f, -1908.87f, 25.92f };
				fLocal_113 = -163.17f;
				Local_99 = { 435.18f, -1915.18f, 24.68f };
				fLocal_111 = 226.13f;
				fLocal_115 = 10f;
				fLocal_116 = 20f;
				iLocal_90 = joaat("scorcher");
				fLocal_117 = 250f;
				sLocal_305 = "REBTH_THX2";
				sLocal_306 = "REBTH_THX3";
				sLocal_307 = "REBTH_GONE";
				break;
			
			case 2:
				Local_102 = { 774.06f, -155.63f, 73.44f };
				fLocal_112 = 144.3932f;
				Local_105 = { 769.8723f, -156.9548f, 73.5144f };
				Local_108 = { 773.632f, -150.3134f, 74.6217f };
				fLocal_113 = 151.6004f;
				Local_99 = { 771.41f, -154.29f, 74.09f };
				fLocal_111 = 150.54f;
				fLocal_115 = 10f;
				fLocal_116 = 20f;
				iLocal_90 = joaat("scorcher");
				fLocal_117 = 250f;
				sLocal_305 = "REBTH_THX2";
				sLocal_306 = "REBTH_THX3";
				sLocal_307 = "REBTH_GONE";
				break;
			
			case 3:
				Local_102 = { -1927.94f, 254.7125f, 84.4018f };
				fLocal_112 = 285.0046f;
				Local_105 = { -1934.785f, 253.2105f, 83.8164f };
				Local_108 = { -1931.04f, 252.19f, 84.99f };
				fLocal_113 = 42.33f;
				Local_99 = { -1932.27f, 254.5f, 84.4f };
				fLocal_111 = 96.81f;
				fLocal_115 = 10f;
				fLocal_116 = 35f;
				iLocal_90 = joaat("bati");
				fLocal_117 = 400f;
				sLocal_305 = "REBTH_THX2X";
				sLocal_306 = "REBTH_THX3X";
				sLocal_307 = "REBTH_GONEX";
				break;
		}
		unk_0x1ED966252985F895(Local_102 - Vector(20f, 20f, 20f), Local_102 + Vector(20f, 20f, 20f), 0, 1);
		unk_0x572B183FF881EBF0(Local_102 - Vector(20f, 20f, 20f), Local_102 + Vector(20f, 20f, 20f), 0);
		unk_0x963AAB0E6FFD7E02(Local_102, 20f, 1, 0, 0, 0);
		iLocal_118 = 1;
	}
	unk_0xBE91026C1FC72180(joaat("g_m_y_strpunk_01"));
	unk_0xBE91026C1FC72180(joaat("a_m_y_beachvesp_01"));
	unk_0xBE91026C1FC72180(iLocal_90);
	if ((((unk_0x772F801619C83779(joaat("g_m_y_strpunk_01")) && unk_0x772F801619C83779(joaat("a_m_y_beachvesp_01"))) && unk_0x772F801619C83779(iLocal_90)) && func_147()) && func_146())
	{
		iLocal_93 = unk_0x5129A9193468FF77(iLocal_90, Local_99, fLocal_111, 1, 1, 0);
		unk_0x9793B48C4C8275F8(iLocal_90);
		unk_0x05C9FC8771682275(iLocal_90, 1);
		unk_0x56B418F469976565(iLocal_93, 1, 1, 0);
		unk_0xC587296050B2CA93(iLocal_93, 0);
		unk_0x8BC8A4FEB4B8FB05(iLocal_93, 0);
		unk_0x014C5648BA70BF8B(iLocal_93, 1);
		unk_0xFD69BDF108B32E5B("RE_CAR_STEAL_SCENE");
		unk_0x56AE5027D2067D0B(iLocal_93, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		fLocal_114 = fLocal_116;
		if (iLocal_317 == 3)
		{
			unk_0xBF9154ADAF4F11E1(iLocal_93, 49, 0);
			unk_0x9B0BD13ABD4E15D1(iLocal_93, 0);
			unk_0x5A814851114E34FB(iLocal_93, 16, 2, 0);
			unk_0x5A814851114E34FB(iLocal_93, 11, 3, 0);
			unk_0x5A814851114E34FB(iLocal_93, 12, 2, 0);
			unk_0x5A814851114E34FB(iLocal_93, 13, 2, 0);
			unk_0x5A814851114E34FB(iLocal_93, 23, 10, 0);
			unk_0x5A814851114E34FB(iLocal_93, 24, 10, 0);
			unk_0xF4E4907109CEF0EC(iLocal_93, 22, 1);
			unk_0xF4E4907109CEF0EC(iLocal_93, 17, 1);
			unk_0xF4E4907109CEF0EC(iLocal_93, 21, 1);
			unk_0xF4E4907109CEF0EC(iLocal_93, 20, 1);
			unk_0xF4E4907109CEF0EC(iLocal_93, 19, 1);
			unk_0xBF9154ADAF4F11E1(iLocal_93, 89, 89);
			unk_0xD6B0D4015CC61FF4(iLocal_93, 0, 1);
			unk_0xD84C2B9A469EBB35(iLocal_93, 1);
		}
		unk_0x659E5E147E8E6635("re_bikethief_relGroupVictim", &uLocal_122);
		unk_0x659E5E147E8E6635("re_bikethief_relGroupThief", &uLocal_123);
		unk_0x85F49C37BE784CD7(5, uLocal_123, uLocal_122);
		unk_0x85F49C37BE784CD7(5, uLocal_123, joaat("player"));
		unk_0x85F49C37BE784CD7(1, iLocal_122, joaat("player"));
		iLocal_91 = unk_0x5618B819E5B9C053(19, joaat("g_m_y_strpunk_01"), Local_108, fLocal_113, 1, 1);
		unk_0x9793B48C4C8275F8(joaat("g_m_y_strpunk_01"));
		unk_0xEB9B39274C401888(iLocal_91, 1);
		unk_0x87A7451620C12125(iLocal_91, 1);
		unk_0x7F53E53C6F32D196(iLocal_91, uLocal_123);
		unk_0x541B678DB67C7CF0(iLocal_91, 3);
		unk_0xA8A16396F3E7CD41(iLocal_91, 17, 1);
		unk_0xA8A16396F3E7CD41(iLocal_91, 13, 0);
		unk_0x67ABC034CBFBD349(iLocal_91, 1, 1);
		unk_0x49C384CAABA72CC6(iLocal_91, 0);
		unk_0xD6A092D1F1B9A9F1(iLocal_91, 42, 1);
		unk_0xD6A092D1F1B9A9F1(iLocal_91, 281, 1);
		unk_0x1ADB46574E80A3AE(iLocal_91, 2);
		unk_0x37907A374973B718(iLocal_91, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		unk_0xBE0E7D38FE7C495C(iLocal_91, sLocal_318, "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
		iLocal_92 = unk_0x5618B819E5B9C053(19, joaat("a_m_y_beachvesp_01"), Local_102, fLocal_112, 1, 1);
		unk_0x9793B48C4C8275F8(joaat("a_m_y_beachvesp_01"));
		unk_0xEB9B39274C401888(iLocal_92, 1);
		unk_0x87A7451620C12125(iLocal_92, 1);
		unk_0x67ABC034CBFBD349(iLocal_92, 8, 1);
		if (iLocal_317 == 3)
		{
			unk_0x49C384CAABA72CC6(iLocal_92, 1);
		}
		else
		{
			unk_0x49C384CAABA72CC6(iLocal_92, 0);
		}
		unk_0xD6A092D1F1B9A9F1(iLocal_92, 26, 1);
		unk_0xD6A092D1F1B9A9F1(iLocal_92, 42, 1);
		unk_0xD6A092D1F1B9A9F1(iLocal_92, 167, 1);
		unk_0xD6A092D1F1B9A9F1(iLocal_92, 281, 1);
		unk_0x7F53E53C6F32D196(iLocal_92, iLocal_122);
		unk_0x0EB00C68DDFABE19(iLocal_92, 0);
		unk_0x37907A374973B718(iLocal_92, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		unk_0x3A85AE9FA7967993(iLocal_92, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
		func_142(&uLocal_134, 1, iLocal_91, "BThief", 0, 1);
		func_142(&uLocal_134, 2, iLocal_92, "BThiefVictim", 0, 1);
		if (iLocal_316 == 0)
		{
			if (iLocal_317 == 3)
			{
				sLocal_299 = "REBTH_HELPX";
			}
			else
			{
				sLocal_299 = "REBTH_HELP";
			}
			sLocal_303 = "REBTH_RUNSOF";
			sLocal_304 = "REBTH_TAUNT";
			sLocal_320 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_316 == 1)
		{
			if (iLocal_317 == 3)
			{
				sLocal_299 = "REBTH_HLPBX";
			}
			else
			{
				sLocal_299 = "REBTH_HLPB";
			}
			sLocal_303 = "REBTH_RUNB";
			sLocal_304 = "REBTH_TNTB";
			sLocal_320 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_299 = "REBTH_HLPC";
			sLocal_303 = "REBTH_RUNC";
			sLocal_304 = "REBTH_TNTC";
			sLocal_320 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		unk_0x862C6F0A4458264C(0);
		iLocal_89 = 1;
	}
}

int func_146()
{
	if (iLocal_317 == 2)
	{
		unk_0xB1F4C6EA4D59C5D0(1, "RE_BikeThief2");
		if (!unk_0x4B59C07015859DF4(1, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_147()
{
	unk_0x9F62787D280BF2EC(sLocal_318);
	unk_0x9F62787D280BF2EC(sLocal_319);
	unk_0x9F62787D280BF2EC(sLocal_321);
	unk_0x9F62787D280BF2EC(sLocal_322);
	unk_0x9F62787D280BF2EC(sLocal_324);
	unk_0x9F62787D280BF2EC(sLocal_323);
	if (((((unk_0xB3379AC2E71D1E7E(sLocal_318) && unk_0xB3379AC2E71D1E7E(sLocal_319)) && unk_0xB3379AC2E71D1E7E(sLocal_321)) && unk_0xB3379AC2E71D1E7E(sLocal_322)) && unk_0xB3379AC2E71D1E7E(sLocal_324)) && unk_0xB3379AC2E71D1E7E(sLocal_323))
	{
		return 1;
	}
	return 0;
}

void func_148()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_92))
	{
		if (func_69(iLocal_92, 993674639))
		{
			unk_0x3000ECF14A659126(iLocal_92);
		}
		else
		{
			unk_0xD706D9D85701BFBD(iLocal_92);
		}
		unk_0x390D16BCBFB23E1A(iLocal_92, 1);
		unk_0x53E150F8F0AD7101(iLocal_92, unk_0x0031992CA618A445(), 100f, -1, 0, 0);
	}
	if (!unk_0x8682D8A6269E52C9(iLocal_91))
	{
		unk_0x390D16BCBFB23E1A(iLocal_91, 1);
		unk_0x53E150F8F0AD7101(iLocal_91, unk_0x0031992CA618A445(), 100f, -1, 0, 1);
	}
}

int func_149()
{
	if (iLocal_89 == 0 && func_168())
	{
		return 1;
	}
	if (iLocal_89 == 1 && func_156())
	{
		return 1;
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_92))
	{
		if (unk_0x8682D8A6269E52C9(iLocal_92))
		{
			return 1;
		}
		else if (unk_0x7CA73A79B30385F3(iLocal_92, unk_0x0031992CA618A445(), 1))
		{
			func_154();
			func_153(&uLocal_134, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_150(iLocal_92, 170f))
		{
			func_154();
			func_153(&uLocal_134, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0 && iLocal_311 == 1)
	{
		return 1;
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_93) && !unk_0x432757A9E7AAFA96(iLocal_93, 0))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_58(unk_0x0031992CA618A445()) && func_58(iParam0))
	{
		if (func_152(iParam0) || unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iParam0))
		{
			if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_151(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_151(int iParam0, float fParam1)
{
	return func_75(iParam0, unk_0x0031992CA618A445(), fParam1, 1, 250, 7);
}

int func_152(var uParam0)
{
	if (unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), uParam0) && unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
	{
		return 1;
	}
	return 0;
}

void func_153(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_18(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xCD7E92DE2BFA0B0D(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

void func_154()
{
	Global_14611 = 0;
	func_155();
}

void func_155()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
	}
}

int func_156()
{
	if (!func_139(5))
	{
		return 1;
	}
	if (func_164())
	{
		return 1;
	}
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC267F33BC0EB4D24(unk_0x0031992CA618A445())) > 1369f && !func_163())
		{
			return 0;
		}
	}
	if (func_157(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_157(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (func_11(func_9()))
		{
			iVar36 = func_46();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x2A3398C6222EB190(Global_104439.f_18435[iVar32 /*6*/], 2) && !unk_0x2A3398C6222EB190(Global_104439.f_18435[iVar32 /*6*/], 3))
				{
					func_158(iVar32, &Var0);
					fVar35 = unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_158(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_159(uParam1, "Abigail1", func_161(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 1:
			func_159(uParam1, "Abigail2", func_161(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 2:
			func_159(uParam1, "Barry1", func_161(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 3:
			func_159(uParam1, "Barry2", func_161(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 4:
			func_159(uParam1, "Barry3", func_161(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 5:
			func_159(uParam1, "Barry3A", func_161(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 6:
			func_159(uParam1, "Barry3C", func_161(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 7:
			func_159(uParam1, "Barry4", func_161(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_160(iParam0), 0, 0);
			break;
		
		case 8:
			func_159(uParam1, "Dreyfuss1", func_161(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 9:
			func_159(uParam1, "Epsilon1", func_161(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 10:
			func_159(uParam1, "Epsilon2", func_161(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 11:
			func_159(uParam1, "Epsilon3", func_161(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 12:
			func_159(uParam1, "Epsilon4", func_161(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 13:
			func_159(uParam1, "Epsilon5", func_161(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 14:
			func_159(uParam1, "Epsilon6", func_161(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 15:
			func_159(uParam1, "Epsilon7", func_161(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 16:
			func_159(uParam1, "Epsilon8", func_161(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 17:
			func_159(uParam1, "Extreme1", func_161(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 18:
			func_159(uParam1, "Extreme2", func_161(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 19:
			func_159(uParam1, "Extreme3", func_161(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 20:
			func_159(uParam1, "Extreme4", func_161(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 21:
			func_159(uParam1, "Fanatic1", func_161(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_160(iParam0), 1, 0);
			break;
		
		case 22:
			func_159(uParam1, "Fanatic2", func_161(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_160(iParam0), 1, 0);
			break;
		
		case 23:
			func_159(uParam1, "Fanatic3", func_161(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_160(iParam0), 0, 1);
			break;
		
		case 24:
			func_159(uParam1, "Hao1", func_161(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_160(iParam0), 0, 1);
			break;
		
		case 25:
			func_159(uParam1, "Hunting1", func_161(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 26:
			func_159(uParam1, "Hunting2", func_161(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 27:
			func_159(uParam1, "Josh1", func_161(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 28:
			func_159(uParam1, "Josh2", func_161(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 29:
			func_159(uParam1, "Josh3", func_161(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 30:
			func_159(uParam1, "Josh4", func_161(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 31:
			func_159(uParam1, "Maude1", func_161(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 32:
			func_159(uParam1, "Minute1", func_161(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 33:
			func_159(uParam1, "Minute2", func_161(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 34:
			func_159(uParam1, "Minute3", func_161(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 35:
			func_159(uParam1, "MrsPhilips1", func_161(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 36:
			func_159(uParam1, "MrsPhilips2", func_161(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 37:
			func_159(uParam1, "Nigel1", func_161(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 38:
			func_159(uParam1, "Nigel1A", func_161(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 39:
			func_159(uParam1, "Nigel1B", func_161(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_160(iParam0), 1, 1);
			break;
		
		case 40:
			func_159(uParam1, "Nigel1C", func_161(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_160(iParam0), 1, 1);
			break;
		
		case 41:
			func_159(uParam1, "Nigel1D", func_161(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_160(iParam0), 1, 1);
			break;
		
		case 42:
			func_159(uParam1, "Nigel2", func_161(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 43:
			func_159(uParam1, "Nigel3", func_161(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 1);
			break;
		
		case 44:
			func_159(uParam1, "Omega1", func_161(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 45:
			func_159(uParam1, "Omega2", func_161(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 46:
			func_159(uParam1, "Paparazzo1", func_161(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 47:
			func_159(uParam1, "Paparazzo2", func_161(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 48:
			func_159(uParam1, "Paparazzo3", func_161(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 49:
			func_159(uParam1, "Paparazzo3A", func_161(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 50:
			func_159(uParam1, "Paparazzo3B", func_161(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 51:
			func_159(uParam1, "Paparazzo4", func_161(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 52:
			func_159(uParam1, "Rampage1", func_161(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 54:
			func_159(uParam1, "Rampage3", func_161(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 55:
			func_159(uParam1, "Rampage4", func_161(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 56:
			func_159(uParam1, "Rampage5", func_161(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_160(iParam0), 0, 0);
			break;
		
		case 53:
			func_159(uParam1, "Rampage2", func_161(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_160(iParam0), 1, 0);
			break;
		
		case 57:
			func_159(uParam1, "TheLastOne", func_161(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 58:
			func_159(uParam1, "Tonya1", func_161(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 59:
			func_159(uParam1, "Tonya2", func_161(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 60:
			func_159(uParam1, "Tonya3", func_161(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 61:
			func_159(uParam1, "Tonya4", func_161(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		case 62:
			func_159(uParam1, "Tonya5", func_161(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_160(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_159(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_161(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_162(iParam0) };
	if (unk_0x0BD3CCFB6C6CFA91(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_162(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_163()
{
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xEAD4F97609714B93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_164()
{
	if (func_167() && !func_163())
	{
		return 1;
	}
	if (func_166() && func_165())
	{
		return 1;
	}
	return 0;
}

bool func_165()
{
	return Global_104157 > 0;
}

int func_166()
{
	if (Global_89829 != -1)
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	if (Global_89829 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_83695[Global_89829 /*34*/].f_15, 20);
	}
	return 0;
}

int func_168()
{
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Local_86) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC267F33BC0EB4D24(unk_0x0031992CA618A445())) > 1369f && !func_163())
		{
			return 0;
		}
	}
	if (func_164())
	{
		return 1;
	}
	if (func_157(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_169()
{
}

int func_170()
{
	int iVar0;
	
	if (func_171(26, 1))
	{
		iVar0++;
	}
	if (func_171(26, 2))
	{
		iVar0++;
	}
	if (func_171(8, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_171(int iParam0, int iParam1)
{
	if (unk_0x2A3398C6222EB190(Global_104439.f_24856.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

void func_172(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_174(iParam0);
	unk_0x5048E5ECEC23D271(0);
	unk_0x4FA59397643FB016(1);
	Global_104425 = 0;
	func_173();
}

void func_173()
{
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			unk_0x05C9FC8771682275(unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)), 1);
		}
		unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 0);
	}
}

void func_174(int iParam0)
{
	Global_104428 = iParam0;
}

int func_175(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142565)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_50();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_214())
		{
			return 0;
		}
	}
	Local_86 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			Var1 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC267F33BC0EB4D24(unk_0x0031992CA618A445())) > 1369f && !func_163())
			{
				return 0;
			}
		}
		if (!Global_104439.f_8946)
		{
			return 0;
		}
		if (func_23(0))
		{
			return 0;
		}
		if (func_164())
		{
			return 0;
		}
		if (func_213())
		{
			return 0;
		}
		if (Global_104428 != -1)
		{
			return 0;
		}
		if (func_11(func_9()))
		{
			if (func_157(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()) && !bParam6)
		{
			if ((Var1.f_2 - Local_86.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_212(iParam3))
		{
			return 0;
		}
		if (func_11(func_9()))
		{
			if (func_211(func_9()) == 4 || func_211(func_9()) == 5)
			{
				return 0;
			}
		}
		if (func_11(func_9()))
		{
			if (!func_210(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_209(Global_104439.f_24856.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x31CD6E9F83C10233() - Global_104430) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_208())
		{
			return 0;
		}
		if (unk_0xD532AAF71376B5E8())
		{
			return 0;
		}
		if (unk_0x86EEE9A2AEF6EC88())
		{
			return 0;
		}
		if (!func_199(4))
		{
			return 0;
		}
		if (!func_139(5))
		{
			return 0;
		}
		if (func_171(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x68BBDCBE8B7849EB(unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445())))
		{
			if ((unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x0C84D01216EF2CB3(377.153f, -717.567f, 10.0536f) || unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x0C84D01216EF2CB3(320.9934f, 265.2515f, 82.1221f)) || unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()) == unk_0x0C84D01216EF2CB3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_171(0, 0))
		{
			return 0;
		}
		if (Global_25368)
		{
			return 0;
		}
		if (func_212(30) && !func_171(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_11(func_9()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_104439.f_2244.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104439.f_2244.f_539.f_2276[iVar4];
				if (func_198(iVar8))
				{
					if (func_176(iVar4))
					{
						if (!func_124(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var5) < (210f * 210f))
							{
								if (func_9() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104439.f_2244.f_539.f_2276[iParam0];
	return func_177(iVar0);
}

int func_177(int iParam0)
{
	return func_178(iParam0, 1);
}

int func_178(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_198(iParam0))
	{
		return 0;
	}
	func_179(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_179(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_180(func_191(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_180(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_190(iParam0, iParam1))
	{
		iVar0 = func_189(iParam1);
		iVar1 = func_187(iParam0);
		iVar2 = (func_187(iParam0) - func_187(iParam1));
		iVar3 = (func_189(iParam0) - func_189(iParam1));
		iVar4 = (func_186(iParam0) - func_186(iParam1));
		iVar5 = (func_185(iParam0) - func_185(iParam1));
		iVar6 = (func_184(iParam0) - func_184(iParam1));
		iVar7 = (func_183(iParam0) - func_183(iParam1));
	}
	else
	{
		iVar0 = func_189(iParam0);
		iVar1 = func_187(iParam1);
		iVar2 = (func_187(iParam1) - func_187(iParam0));
		iVar3 = (func_189(iParam1) - func_189(iParam0));
		iVar4 = (func_186(iParam1) - func_186(iParam0));
		iVar5 = (func_185(iParam1) - func_185(iParam0));
		iVar6 = (func_184(iParam1) - func_184(iParam0));
		iVar7 = (func_183(iParam1) - func_183(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_182(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_181(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_181(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_182(int iParam0, int iParam1)
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

int func_183(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_184(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_185(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_186(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_187(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_188(unk_0x2A3398C6222EB190(iParam0, 31), -1, 1)) + 2011;
}

int func_188(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_189(int iParam0)
{
	return iParam0 & 15;
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_198(iParam1) || !func_198(iParam0))
	{
		return 1;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_189(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_184(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_191()
{
	var uVar0;
	
	func_197(&uVar0, unk_0x6676AD594A1E113E());
	func_196(&uVar0, unk_0xE647A8424B4399CE());
	func_195(&uVar0, unk_0x41413FABD538FC3A());
	func_194(&uVar0, unk_0xEC3E0DDCEEBF8A00());
	func_193(&uVar0, unk_0x1A7BD52C0A88E679());
	func_192(&uVar0, unk_0x760D3328FB0F48C5());
	return uVar0;
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_194(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_189(*uParam0);
	iVar1 = func_187(*uParam0);
	if (iParam1 < 1 || iParam1 > func_182(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_195(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_196(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_197(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_183(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_184(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_185(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_187(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_189(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_186(iParam0);
	if (iVar5 < 1 || iVar5 > func_182(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_199(int iParam0)
{
	int iVar0;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				iVar0 = func_9();
				if (!func_11(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1()) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0x292D1BF190062D1C(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0)) || func_207()) || Global_103486) || Global_25224) || func_206()) || func_16(8, -1)) || func_205()) || func_204()) || func_203()) || func_202()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1) || func_207()) || Global_25224) || func_206()) || func_16(8, -1)) || func_203()) || func_205()) || func_204()) || func_202()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1()) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0x292D1BF190062D1C(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0)) || func_207()) || Global_103486) || Global_25224) || func_206()) || func_16(8, -1)) || func_203()) || func_205()) || func_204()) || func_202()) || Global_104439.f_7549.f_919[iVar0] == 5) || Global_36360 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0)) || func_207()) || Global_103486) || Global_25224) || func_206()) || func_16(8, -1)) || func_205()) || func_204()) || func_202()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_207() || unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0) || func_16(8, -1)) || func_202()) || func_201()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_205()) || func_204()) || func_201()) || func_200())
						{
							return 0;
						}
						if ((unk_0x003E46CBEF6CE07A() && unk_0xEBDBC787B1778ACF() != 3) && unk_0x3AA42F4BDAE68399() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
						{
							if ((((((((((((((unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0) || unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || func_207()) || Global_25224) || func_206()) || func_16(8, -1)) || func_204()) || func_203()) || func_202()) || Global_104439.f_7549.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0) || !unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) || !unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1())) || !unk_0xF9FC07CC13402AEF()) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || func_207()) || func_204()) || Global_103486) || Global_25224) || func_206()) || Global_36944) || func_16(8, -1)) || func_203()) || func_201()) || func_202()) || Global_104439.f_7549.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7B6CF729E00FFFB4(unk_0x0031992CA618A445(), 0) || !unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1())) || !unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1())) || !unk_0xF9FC07CC13402AEF()) || unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0)) || unk_0xF6C6ED9F9C63AEC0(unk_0x0031992CA618A445())) || unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1)) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) || unk_0x07D4F97D560E5CFD(unk_0x0031992CA618A445())) || unk_0x5BB7DB96F2D9F1A9(unk_0x0031992CA618A445())) || unk_0xC404231F59E81D81(unk_0x3D35F9864E4640B1(), 1)) || unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1())) || func_207()) || Global_103486) || Global_25224) || func_206()) || func_16(8, -1)) || func_203()) || func_201()) || func_205()) || func_204()) || func_202())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_200()
{
	return Global_92801.f_1;
}

int func_201()
{
	if (Global_89829 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_83695[Global_89829 /*34*/].f_15, 13);
	}
	return 0;
}

int func_202()
{
	if (unk_0x7832F791572D5809(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	if (Global_71045)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

bool func_204()
{
	return Global_92814.f_310 > 0;
}

bool func_205()
{
	return Global_92814.f_309 > 0;
}

var func_206()
{
	return Global_1312853;
}

int func_207()
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		return Global_90385.f_44 == 1;
	}
	return 0;
}

int func_208()
{
	func_8();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_209(int iParam0)
{
	return func_190(func_191(), iParam0);
}

int func_210(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_9();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_211(int iParam0)
{
	if (!func_11(iParam0))
	{
		return 7;
	}
	return Global_104439.f_7549.f_919[iParam0];
}

bool func_212(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_214())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x2A3398C6222EB190(Global_104439.f_24856, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x2A3398C6222EB190(Global_104439.f_24856.f_1, iVar0);
	}
	return bVar1;
}

int func_213()
{
	var uVar0;
	
	if (Global_25372)
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			uVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if (unk_0x432757A9E7AAFA96(uVar0, 0))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x3251C2B06497863C(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_214()
{
	var uVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0x9F3509E90B1EE108())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 2);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 4);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 6);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 2);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 4);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 6);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6008D10CE7FC9AA8())
				{
					iVar0 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
					unk_0x5149EEBBCD305987(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_142820 == 2)
	{
		return 1;
	}
	else if (Global_142820 == 3)
	{
		return 0;
	}
	if (unk_0x6008D10CE7FC9AA8())
	{
		if (unk_0x2A3398C6222EB190(unk_0x03CCEFDDDC599303(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

float func_215(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Param1, iParam4);
}

void func_216()
{
	func_93(&uLocal_330, 0, 0);
	if (unk_0x3A7B47D96E536F61("RE_CAR_STEAL_SCENE"))
	{
		if (unk_0x432757A9E7AAFA96(iLocal_93, 0))
		{
			unk_0x8974265328B0DA68(iLocal_93, 0);
		}
		unk_0xB3E27A9E412BBDF8("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_317 != 3)
	{
		func_219(26);
	}
	else
	{
		func_219(8);
	}
	if (iLocal_317 == 1)
	{
		unk_0xCE9A728371D47759(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 1);
	}
	unk_0x04021FF677078694(uLocal_325, 0);
	unk_0x1ED966252985F895(Local_102 - Vector(20f, 20f, 20f), Local_102 + Vector(20f, 20f, 20f), 1, 1);
	if (unk_0x432757A9E7AAFA96(iLocal_93, 0))
	{
		unk_0x4AF3E3EF22AF92E4(iLocal_93, 1);
		if (unk_0x6459D7B9F825DBCF(iLocal_93))
		{
			unk_0x6562DA95A43F027D(iLocal_93);
		}
	}
	if (iLocal_317 == 2)
	{
		unk_0x0EA5304CED5FD5D1(1, "RE_BikeThief2");
	}
	func_65(&uLocal_133);
	func_65(&uLocal_131);
	func_66(&uLocal_342);
	func_65(&uLocal_132);
	func_72(0);
	func_218(&uLocal_134, 0);
	func_218(&uLocal_134, 1);
	func_218(&uLocal_134, 2);
	if ((func_58(iLocal_92) && func_58(iLocal_93)) && unk_0xA32DC7E16AD1DFB7(iLocal_92, iLocal_93, 0))
	{
		unk_0xF48F6EEC1EBEB012(iLocal_92, iLocal_93, fLocal_114, 786485);
		unk_0x390D16BCBFB23E1A(iLocal_92, 1);
	}
	func_87(&iLocal_91, 1, 0, 1);
	func_87(&iLocal_92, 1, 0, 1);
	func_217(&iLocal_93);
	if (func_58(iLocal_94))
	{
		unk_0x42497AE28396017C(iLocal_94);
		func_217(&iLocal_94);
	}
	unk_0x9793B48C4C8275F8(joaat("g_m_y_strpunk_01"));
	unk_0x9793B48C4C8275F8(joaat("a_m_y_beachvesp_01"));
	unk_0x9793B48C4C8275F8(joaat("scorcher"));
	unk_0x9793B48C4C8275F8(joaat("bati"));
	unk_0xBE238DB7614E8074(sLocal_318);
	unk_0xBE238DB7614E8074(sLocal_319);
	unk_0xBE238DB7614E8074(sLocal_321);
	unk_0xBE238DB7614E8074(sLocal_322);
	unk_0xBE238DB7614E8074(sLocal_323);
	unk_0xBE238DB7614E8074(sLocal_324);
	unk_0x2678FA30C5FB2080(0);
	unk_0xBEE2834559A8897A();
}

void func_217(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		unk_0x7A6C051038031EFA(*uParam0, 0);
		if (unk_0xCC234795142FC2D2(*uParam0) && unk_0xC9FBF92709010AC3(*uParam0, 1))
		{
			unk_0x28BB69BE14577487(uParam0);
		}
	}
}

void func_218(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_219(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_230())
	{
		func_223(iParam0);
		unk_0xD1DEB22AEDCCED60(0, 0);
		Global_104430 = unk_0x31CD6E9F83C10233();
		func_222(30000);
		StringCopy(&cVar0, func_221(Global_104428, 1), 64);
		if (func_49(Global_104428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104427, 64);
		}
		unk_0xBE71FB92F44391FF(&cVar0, Global_104425, (unk_0x31CD6E9F83C10233() - Global_104426), 0);
	}
	else if (unk_0x2A3398C6222EB190(Global_104435, 0) && Global_104439.f_24856.f_2 < 3)
	{
		unk_0xD804ACF2A7171150(&Global_104435, 0);
	}
	func_220(&Global_25281);
	Global_104429 = 0;
	func_174(-1);
}

void func_220(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35775)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35774 = 0;
	Global_35776 = 0;
	Global_35813 = 15;
	Global_55851 = 0;
	Global_55852 = 0;
}

char* func_221(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_222(int iParam0)
{
	Global_36364 = (unk_0x31CD6E9F83C10233() + iParam0);
}

void func_223(int iParam0)
{
	func_224(iParam0, 0, func_229(iParam0));
}

void func_224(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_191();
	func_227(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_226(iParam0, &uVar0);
	Var1 = { func_225(&uVar0) };
}

struct<16> func_225(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_185(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_184(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_183(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_189(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_187(*uParam0), 64);
	return Var0;
}

void func_226(int iParam0, var uParam1)
{
	Global_104439.f_24856.f_43[iParam0] = *uParam1;
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_187(*uParam0);
	iVar1 = func_189(*uParam0);
	iVar2 = func_186(*uParam0);
	iVar3 = func_185(*uParam0);
	iVar4 = func_184(*uParam0);
	iVar5 = func_183(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_182(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_182(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_228(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_197(uParam0, iParam1);
	func_196(uParam0, iParam2);
	func_195(uParam0, iParam3);
	func_193(uParam0, iParam5);
	func_194(uParam0, iParam4);
	func_192(uParam0, iParam6);
}

int func_229(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_230()
{
	if ((Global_104428 == func_50() && unk_0x86EEE9A2AEF6EC88()) && Global_104429)
	{
		return 1;
	}
	return 0;
}

