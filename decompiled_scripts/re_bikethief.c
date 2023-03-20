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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	struct<4> Local_43[10];
	bool bLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	float fLocal_123 = 0f;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int* iLocal_130 = NULL;
	int* iLocal_131 = NULL;
	int* iLocal_132 = NULL;
	var uLocal_133 = 16;
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
	char* sLocal_298 = NULL;
	char* sLocal_299 = NULL;
	char* sLocal_300 = NULL;
	char* sLocal_301 = NULL;
	char* sLocal_302 = NULL;
	char* sLocal_303 = NULL;
	char* sLocal_304 = NULL;
	char* sLocal_305 = NULL;
	char* sLocal_306 = NULL;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	struct<3> Local_312 = { 0, 0, 0 } ;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	char* sLocal_317 = NULL;
	char* sLocal_318 = NULL;
	char* sLocal_319 = NULL;
	char* sLocal_320 = NULL;
	char* sLocal_321 = NULL;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	int iLocal_324 = 0;
	bool bLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = -1;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 1000;
	var uLocal_339 = 1000;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_118 = 1;
	sLocal_301 = "REBTH_HANGAR";
	sLocal_302 = "REBTH_RUNSOF";
	sLocal_303 = "REBTH_TAUNT";
	sLocal_317 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_318 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_320 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_321 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_322 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_323 = "RANDOM@BICYCLE_THIEF@THANKS";
	Local_95 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xC968670BFACE42D9(11))
	{
		func_206();
	}
	if (unk_0xB7A628320EFF8E47(Local_95, 421.92f, -1930.95f, 23.18f) < 16f)
	{
		iLocal_316 = 1;
	}
	else if (unk_0xB7A628320EFF8E47(Local_95, 769.3f, -151.66f, 73.79f) < 16f)
	{
		iLocal_316 = 2;
	}
	else if (unk_0xB7A628320EFF8E47(Local_95, -1923.93f, 254.48f, 85.7f) < 16f)
	{
		iLocal_316 = 3;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) != 0)
		{
			unk_0x1090044AD1DA76FA();
		}
		else if (func_205(unk_0xD80958FC74E988A6(), Local_95, 1) < 100f)
		{
			unk_0x1090044AD1DA76FA();
		}
	}
	if (iLocal_316 != 3)
	{
		if (func_165(Local_95, 26, iLocal_316, 0, 0))
		{
			func_162(26);
		}
		else
		{
			unk_0x1090044AD1DA76FA();
		}
	}
	else if (func_165(Local_95, 8, 0, 0, 0))
	{
		func_162(8);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	iLocal_315 = func_160();
	iLocal_324 = unk_0x1B5C85C612E5256E(Local_95 - Vector(20f, 20f, 20f), Local_95 + Vector(20f, 20f, 20f), false, true, true, true);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_159();
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x471D2FF42A94B4F2(unk_0x4F8644AF03D0E0D6());
			unk_0x9A987297ED8BD838(unk_0x4F8644AF03D0E0D6(), 28);
			unk_0x9A987297ED8BD838(unk_0x4F8644AF03D0E0D6(), 13);
			unk_0x9A987297ED8BD838(unk_0x4F8644AF03D0E0D6(), 35);
		}
		if (unk_0xC5042CC6F5E3D450() || iLocal_88 > 1)
		{
			if (func_139())
			{
				func_138();
				func_206();
			}
			else
			{
				switch (iLocal_88)
				{
					case 0:
						func_135();
						break;
					
					case 1:
						if (func_134())
						{
							func_138();
							func_206();
						}
						else
						{
							func_122();
						}
						break;
					
					case 2:
						func_98();
						func_94();
						func_93();
						func_92();
						func_90();
						func_89();
						func_81();
						break;
					
					case 3:
						func_79();
						func_61();
						func_52();
						break;
					
					case 4:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_206();
		}
	}
}

void func_1()
{
	if (func_51(unk_0xD80958FC74E988A6()) && func_51(iLocal_91))
	{
		if (func_50(unk_0xD80958FC74E988A6(), iLocal_91, 1) > 50f)
		{
			func_49(8);
			func_20();
		}
		else if ((unk_0x9CD27B0045628463() - iLocal_128) > 10000)
		{
			func_49(8);
			func_20();
		}
		else if ((iLocal_328 == 0 && !func_19()) && func_2(&uLocal_133, "REBTHAU", sLocal_300, 4, 0, 0, 0))
		{
			iLocal_328 = 1;
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
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD79DEEFB53455EBA(false);
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
					func_17();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_16(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_15();
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_8();
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_7())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_5();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_4();
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_5()
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_6()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_9();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

int func_9()
{
	func_10();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_13(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_12(unk_0xD80958FC74E988A6());
			if (func_11(iVar0) && (!func_14(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_11(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_11(int iParam0)
{
	return iParam0 < 3;
}

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_14(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_15()
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

bool func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_17()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_18(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
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

int func_19()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_20()
{
	int iVar0;
	
	if (iLocal_316 == 3)
	{
		func_45(func_12(unk_0xD80958FC74E988A6()), 4, 5);
	}
	else
	{
		func_45(func_12(unk_0xD80958FC74E988A6()), 1, 3);
	}
	if (iLocal_316 != 3)
	{
		func_26(26, iLocal_316);
	}
	else
	{
		func_26(8, 0);
	}
	if (iLocal_316 == 1)
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
	func_206();
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
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_23(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	
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
		if (unk_0xA921AA820C25702F(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_97173.f_5944.f_836 < 7)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_25(iParam1);
		Var0.f_4 = (unk_0x9CD27B0045628463() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0xE80492A9AC099A93(&(Var0.f_1), 0);
		Global_97173.f_5944.f_765[Global_97173.f_5944.f_836 /*10*/] = { Var0 };
		Global_97173.f_5944.f_836++;
		return 1;
	}
	return 0;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 0:
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
		
		case 4:
			return 5;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_26(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_42(iParam0))
	{
		func_41(iParam0, iParam1);
		if (!func_40(51))
		{
			func_36("RE_REWARD", 1, 0, 4000, 10000, func_39(), 0, 138, 0);
			func_35(51);
		}
		if (func_34(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_33(iParam0, iParam1) != 322)
		{
			func_27(func_33(iParam0, iParam1), Local_85.f_0, Local_85.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_49(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_49(7);
			}
			else
			{
				func_49(1);
			}
		}
	}
}

void func_27(int iParam0, var uParam1, var uParam2)
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
		func_31((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = uParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_28();
	}
}

void func_28()
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
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_30(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_29() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_22();
				}
			}
		}
	}
}

int func_29()
{
	return Global_24444;
}

int func_30(int iParam0, int iParam1)
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
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_31(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_32();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_32()
{
	return Global_1312736;
}

int func_33(int iParam0, int iParam1)
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

int func_34(int iParam0)
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

void func_35(int iParam0)
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
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_36(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_37(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_37(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
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
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_38();
	}
}

void func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_39()
{
	func_10();
	switch (Global_97173.f_1729.f_539.f_3213)
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

int func_40(int iParam0)
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
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_41(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

int func_42(int iParam0)
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

int func_43()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_44(Var0);
	return uVar16;
}

int func_44(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xD24D37CC275948CC(&cParam0))
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

void func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 2827;
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
			if (iVar1 != 2827)
			{
				iVar0 = func_48(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_46(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_46(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_47(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_32();
		if (iVar1 > -1)
		{
			Global_2453901 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453901 = 1;
		}
	}
	return iVar0;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454188[iParam0 /*6*/][func_47(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_49(int iParam0)
{
	Global_97159 = iParam0;
}

float func_50(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

int func_51(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_52()
{
	if (func_51(iLocal_91) && func_60(iLocal_92))
	{
		if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_92, false))
		{
			func_59(&uLocal_341);
			func_58(&iLocal_131);
			if (iLocal_129 == 0 && !unk_0xA6DB27D19ECBB7DA(iLocal_130))
			{
				iLocal_130 = func_57(iLocal_92, 0, 0);
			}
		}
		else
		{
			func_58(&iLocal_130);
			if (!unk_0xA6DB27D19ECBB7DA(iLocal_131))
			{
				iLocal_131 = func_54(iLocal_91, 0, 145);
				if (iLocal_342 == 0)
				{
					func_53(&uLocal_341);
					iLocal_342 = 1;
				}
			}
		}
	}
}

void func_53(var uParam0)
{
	*uParam0 = -99;
}

int func_54(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_55(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_55(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_56(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_56(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_56(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_56(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	return func_55(iParam0, !bParam1, bParam2);
}

void func_58(int* iParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x4F7D8A9BFB0B43E9(*iParam0, false);
		unk_0x86A652570E5F25DD(iParam0);
	}
}

void func_59(var uParam0)
{
	*uParam0 = (unk_0x9CD27B0045628463() - 5000);
}

int func_60(int iParam0)
{
	if (func_51(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (!unk_0x28D3FED7190D3A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_61()
{
	float fVar0;
	
	if (func_51(iLocal_91) && func_60(iLocal_92))
	{
		func_78(iLocal_131, &uLocal_341);
		if (fLocal_123 > 0f)
		{
			fVar0 = func_50(unk_0xD80958FC74E988A6(), iLocal_91, 1);
			if (fVar0 > (fLocal_123 + fLocal_116))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_92, false))
				{
					func_49(7);
					func_20();
				}
				else
				{
					func_206();
				}
			}
		}
		else
		{
			fLocal_123 = func_50(unk_0xD80958FC74E988A6(), iLocal_91, 1);
			if (unk_0xB65B60556E2A9225("RE_CAR_STEAL_SCENE"))
			{
				unk_0x18EB48CFC41F2EA0(iLocal_92, 0f);
				unk_0xDFE8422B3B94E688("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_307 == 0)
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_91, 40f, 40f, 40f, false, true, 0))
			{
				func_77();
				if (iLocal_310 == 0)
				{
					if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_91, 25f, 25f, 25f, false, true, 0))
					{
						if (((((unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_92, false) && unk_0xD71649DB0A545AA3(iLocal_91, unk_0xD80958FC74E988A6(), 30f)) && func_68(iLocal_91, unk_0xD80958FC74E988A6(), 1126825984, 1, 250, 7)) && !unk_0x47E4E977581C5B55(iLocal_91)) && !unk_0x2A74E1D5F2F00EEC(iLocal_91)) && func_2(&uLocal_133, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							unk_0xEA47FE3719165B94(iLocal_91, sLocal_322, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0f, false, false, false);
							unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), 0, false);
							unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
							iLocal_310 = 1;
						}
					}
					else
					{
						iLocal_310 = 1;
					}
				}
			}
		}
		else if (((!unk_0x751B70C3D034E187(iLocal_92, iLocal_91, 35f, 35f, 35f, false, true, 0) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_92, false)) && !func_67()) && func_2(&uLocal_133, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_65(0);
			unk_0x9F8AA94D6D97DBF4(iLocal_91, false);
			unk_0xBF25EB89375A37AD(5, iLocal_121, joaat("player"));
			unk_0x63F58F7C80513AAD(iLocal_91, true);
			unk_0xF166E48407BAC484(iLocal_91, unk_0xD80958FC74E988A6(), 0, 16);
			unk_0x971D38760FBC02EF(iLocal_91, true);
			unk_0x4EDE34FBADD967A6(0);
			func_49(7);
			func_20();
		}
		if (unk_0xA3EE4A07279BB9DB(iLocal_91, iLocal_92, false))
		{
			if (!func_19() && func_2(&uLocal_133, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_128 = unk_0x9CD27B0045628463();
			iLocal_88 = 4;
		}
		else if (unk_0x751B70C3D034E187(iLocal_92, iLocal_91, 20f, 20f, 20f, false, true, 0))
		{
			if (func_64())
			{
				if (!func_62(iLocal_91, 242628503))
				{
					iLocal_129 = 1;
					func_65(0);
					func_59(&uLocal_341);
					func_58(&iLocal_131);
					func_58(&iLocal_130);
					unk_0x31B927BBC44156CD(iLocal_92, false);
					unk_0xE8854A4326B9E12B(&iLocal_94);
					if (iLocal_307 == 0)
					{
						unk_0xC20E50AA46D09CA8(0, iLocal_92, 20000, -1, 2f, 8, 0);
					}
					else
					{
						unk_0xC20E50AA46D09CA8(0, iLocal_92, 20000, -1, 2f, 262152, 0);
					}
					unk_0x480142959D337D00(0, iLocal_92, fLocal_113, 786485);
					unk_0x39E72BC99E6360CB(iLocal_94);
					unk_0x5ABA3986D90D8A3B(iLocal_91, iLocal_94);
					unk_0x3841422E9C488D8C(&iLocal_94);
					unk_0x971D38760FBC02EF(iLocal_91, true);
				}
			}
			else
			{
				switch (iLocal_307)
				{
					case 0:
						if ((((iLocal_310 == 1 && !func_62(iLocal_91, -2017877118)) && !unk_0x47E4E977581C5B55(iLocal_91)) && !unk_0x2A74E1D5F2F00EEC(iLocal_91)) && func_2(&uLocal_133, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (unk_0xD71649DB0A545AA3(iLocal_91, unk_0xD80958FC74E988A6(), 30f) && unk_0x77F1BEB8863288D5(iLocal_91, -875674219) == 7)
							{
								unk_0xEA47FE3719165B94(iLocal_91, sLocal_322, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							iLocal_308 = unk_0x9CD27B0045628463();
							iLocal_307++;
						}
						else
						{
							func_77();
						}
						break;
					
					case 1:
						if (((((unk_0x9CD27B0045628463() - iLocal_308) > 10000 && !func_62(iLocal_91, -2017877118)) && !unk_0x47E4E977581C5B55(iLocal_91)) && !unk_0x2A74E1D5F2F00EEC(iLocal_91)) && func_2(&uLocal_133, "REBTHAU", sLocal_304, 4, 0, 0, 0))
						{
							if (unk_0xD71649DB0A545AA3(iLocal_91, unk_0xD80958FC74E988A6(), 30f))
							{
								func_65(0);
								unk_0xEA47FE3719165B94(iLocal_91, sLocal_323, "THANKS_A", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							iLocal_308 = unk_0x9CD27B0045628463();
							iLocal_307++;
						}
						else
						{
							func_65(1);
						}
						break;
					
					case 2:
						if (((((unk_0x9CD27B0045628463() - iLocal_308) > 10000 && !func_62(iLocal_91, -2017877118)) && !unk_0x47E4E977581C5B55(iLocal_91)) && !unk_0x2A74E1D5F2F00EEC(iLocal_91)) && func_2(&uLocal_133, "REBTHAU", sLocal_305, 4, 0, 0, 0))
						{
							if (unk_0xD71649DB0A545AA3(iLocal_91, unk_0xD80958FC74E988A6(), 30f))
							{
								func_65(0);
								unk_0xEA47FE3719165B94(iLocal_91, sLocal_321, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							iLocal_307++;
						}
						else
						{
							func_65(1);
						}
						break;
					
					default:
						func_65(1);
						break;
					}
				}
			}
	}
}

int func_62(int iParam0, int iParam1)
{
	if (func_63(iParam0))
	{
		if (unk_0x77F1BEB8863288D5(iParam0, iParam1) == 1 || unk_0x77F1BEB8863288D5(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_51(iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (iLocal_129 == 1)
	{
		return 1;
	}
	if ((unk_0x9CD27B0045628463() - iLocal_127) < 4000)
	{
		return 0;
	}
	if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_92, true))
	{
		return 0;
	}
	if (func_51(iLocal_90) && unk_0x9A497FE2DF198913(iLocal_90))
	{
		return 0;
	}
	if (!unk_0x22AC59A870E6A669(iLocal_92, -1))
	{
		return 0;
	}
	return 1;
}

void func_65(int iParam0)
{
	if (func_51(iLocal_91))
	{
		if (iParam0 == 1)
		{
			if (!unk_0x5891CAC5D4ACFF74(iLocal_91) && func_51(unk_0xD80958FC74E988A6()))
			{
				unk_0x9F3480FE65DB31B5(iLocal_91, unk_0xF162E133B4E7A675(unk_0xD80958FC74E988A6()));
				unk_0x3DBFC55D5C9BB447(iLocal_91, true);
				unk_0x1D9D45004C28C916(func_66(), 2f, -1f, -1f);
				unk_0x69F4BE8C8CC4796C(iLocal_91, unk_0xD80958FC74E988A6(), -1, 0, 2);
			}
		}
		else if (unk_0x5891CAC5D4ACFF74(iLocal_91))
		{
			unk_0xED74007FFB146BC2(iLocal_91);
		}
	}
}

int func_66()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

int func_67()
{
	if (iLocal_316 == 3)
	{
		if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1875.858f, 262.3736f, 82.96029f, -1927.379f, 234.7951f, 90.71558f, 50.25f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_68(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_76(iParam0, iParam1);
	if (!func_51(iParam0) || !func_51(iParam1))
	{
		if (iVar4 != -1)
		{
			func_75(&(Local_43[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_72(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_71();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_43[iVar4 /*4*/].f_1 = iParam0;
		Local_43[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_69(&(Local_43[iVar4 /*4*/]), Var1, iParam1, &(Local_43[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x9CD27B0045628463() - Local_43[iVar4 /*4*/].f_3) < iParam4);
}

int func_69(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_51(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_70(iParam4, iParam7) };
		*uParam0 = unk_0x7EE9F5D83DD4F90E(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x3D87450E15D98694(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x524AC5ECEA15343E(iVar7))
	{
		func_51(iVar7);
		if (unk_0x04A2A40C73395041(iVar7) == iParam4)
		{
			if (bLocal_84)
			{
				unk_0xD8B9A8AC5608FF94(Param1, unk_0x3FEF770D40960D5A(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x9CD27B0045628463();
			return 1;
		}
		return 0;
	}
	if (unk_0x6AC7003FA6E5575E(iVar7))
	{
		func_51(iVar7);
		if (unk_0x997ABD671D25CA0B(iParam4, false))
		{
			if (unk_0x4B53F92932ADFAC0(iVar7) == unk_0x9A9112A0FE9A4713(iParam4, false))
			{
				if (bLocal_84)
				{
					unk_0xD8B9A8AC5608FF94(Param1, unk_0x3FEF770D40960D5A(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xD53343AA4FB7DD28(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x3FEF770D40960D5A(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x17C07FC640E86B4E(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x3FEF770D40960D5A(iParam0, true);
}

int func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_43.f_0)
	{
		if ((Local_43[iVar0 /*4*/] == 0 && Local_43[iVar0 /*4*/].f_1 == 0) && Local_43[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_72(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_74(unk_0x3FEF770D40960D5A(iParam1, true) - unk_0x3FEF770D40960D5A(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x0A794A5A57F8DF91(iParam0) };
	}
	else
	{
		Var3 = { func_74(unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 5f, 0f) - unk_0x17C07FC640E86B4E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_73(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_73(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_74(struct<3> Param0)
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

void func_75(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_43.f_0)
	{
		if (Local_43[iVar0 /*4*/].f_1 == iParam0 && Local_43[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_77()
{
	if (iLocal_129 == 0 && func_51(iLocal_91))
	{
		if (func_62(iLocal_91, 242628503))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_91);
		}
		if ((((!func_62(iLocal_91, -2017877118) && !unk_0xD71649DB0A545AA3(iLocal_91, unk_0xD80958FC74E988A6(), 20f)) && unk_0x77F1BEB8863288D5(iLocal_91, -875674219) == 7) && !unk_0x47E4E977581C5B55(iLocal_91)) && !unk_0x2A74E1D5F2F00EEC(iLocal_91))
		{
			unk_0x5AD23D40115353AC(iLocal_91, unk_0xD80958FC74E988A6(), 0);
			unk_0x69F4BE8C8CC4796C(iLocal_91, unk_0xD80958FC74E988A6(), -1, 0, 2);
		}
	}
}

void func_78(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x9CD27B0045628463();
	}
	if (unk_0xA6DB27D19ECBB7DA(iParam0))
	{
		iVar0 = (unk_0x9CD27B0045628463() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x970F608F0EE6C885(iParam0) != 255)
				{
					unk_0x45FF974EEE1C8734(iParam0, 255);
				}
			}
			else if (unk_0x970F608F0EE6C885(iParam0) != 0)
			{
				unk_0x45FF974EEE1C8734(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x970F608F0EE6C885(iParam0) != 255)
			{
				unk_0x45FF974EEE1C8734(iParam0, 255);
			}
		}
	}
}

void func_79()
{
	if (func_51(iLocal_90))
	{
		if (iLocal_119 == 0)
		{
			unk_0x70A2D1137C8ED7C9(iLocal_90, 2, false);
			unk_0xE1EF3C1216AFF2CD(iLocal_90);
			if (func_60(iLocal_92))
			{
				if (iLocal_316 == 2)
				{
					if (unk_0x1C8A4C2C19E68EEC(iLocal_92))
					{
						unk_0x54833611C17ABDEA(iLocal_92);
					}
					unk_0xF1160ACCF98A3FC8(1, "RE_BikeThief2");
				}
				if (unk_0xA3EE4A07279BB9DB(iLocal_90, iLocal_92, true))
				{
					unk_0x45BBCBA77C29A841(iLocal_90);
				}
			}
			unk_0x971D38760FBC02EF(iLocal_90, true);
			unk_0x22B0D0E37CCB840D(iLocal_90, unk_0xD80958FC74E988A6(), 200f, -1, false, false);
			iLocal_119 = 1;
		}
		else
		{
			if (((((iLocal_120 == 0 && func_50(iLocal_90, unk_0xD80958FC74E988A6(), 1) < 30f) && !unk_0x47E4E977581C5B55(iLocal_90)) && func_62(iLocal_90, 1805844857)) && !func_19()) && func_2(&uLocal_133, "REBTHAU", sLocal_302, 4, 0, 0, 0))
			{
				iLocal_120 = 1;
			}
			if (func_50(iLocal_90, unk_0xD80958FC74E988A6(), 1) > 50f)
			{
				func_80(&iLocal_90, 1, 0, 1);
			}
		}
	}
}

void func_80(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x84A2DD9AC37C35C1(*iParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*iParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x176CECF6F920D707(*iParam0);
			}
			unk_0x971D38760FBC02EF(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x9F8AA94D6D97DBF4(*iParam0, false);
			}
		}
		unk_0x2595DD4236549CE3(iParam0);
	}
}

void func_81()
{
	if ((func_51(iLocal_90) && func_51(iLocal_91)) && func_60(iLocal_92))
	{
		if (func_88())
		{
			func_86(&uLocal_329, 0, 0);
			func_85(&iLocal_90);
			func_84(&iLocal_92);
			if (unk_0x751B70C3D034E187(iLocal_91, unk_0xD80958FC74E988A6(), 25f, 25f, 25f, false, true, 0) && func_2(&uLocal_133, "REBTHAU", sLocal_306, 4, 0, 0, 0))
			{
			}
			unk_0x142A02425FF02BD9(iLocal_91, "WORLD_HUMAN_STAND_MOBILE", 0, true);
			func_83();
		}
		else
		{
			func_82(iLocal_130, iLocal_92, fLocal_116, 1061158912, 0);
		}
	}
}

void func_82(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA6DB27D19ECBB7DA(iParam0))
	{
		if ((unk_0x7239B21A38F536BA(iParam1) && unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6())) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x6AC7003FA6E5575E(iParam1))
			{
				if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam1), false))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam1, true), true);
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
						unk_0xB14552383D39CE3E(iParam0, true);
						unk_0x45FF974EEE1C8734(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(iParam0, false);
						unk_0x45FF974EEE1C8734(iParam0, 255);
					}
				}
			}
			else if (unk_0x524AC5ECEA15343E(iParam1))
			{
				if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam1)))
				{
					fVar1 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(iParam1, true), true);
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
						unk_0xB14552383D39CE3E(iParam0, true);
						unk_0x45FF974EEE1C8734(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xB14552383D39CE3E(iParam0, false);
						unk_0x45FF974EEE1C8734(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_83()
{
	func_206();
}

void func_84(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x0A7B270912999B3C(*iParam0))
		{
			unk_0xAD738C3085FE7E11(*iParam0, true, false);
		}
		if (func_60(*iParam0))
		{
			if (unk_0x0A7B270912999B3C(*iParam0) && unk_0xDDE6DF5AE89981D2(*iParam0, true))
			{
				if (func_51(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *iParam0, false))
					{
						unk_0x629BFA74418D6239(iParam0);
						return;
					}
				}
				unk_0xEA386986E786A54F(iParam0);
			}
		}
		else
		{
			if (func_51(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), *iParam0, false))
				{
					unk_0x629BFA74418D6239(iParam0);
					return;
				}
			}
			unk_0xEA386986E786A54F(iParam0);
		}
	}
}

void func_85(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(*iParam0))
		{
			unk_0x0DC7CABAB1E9B67E(*iParam0, 0);
		}
		if (!unk_0x0A7B270912999B3C(*iParam0))
		{
			unk_0xAD738C3085FE7E11(*iParam0, true, false);
		}
		unk_0x9614299DCB53E54B(iParam0);
	}
}

void func_86(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_2446208.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(bParam2);
		unk_0x068E835A1D0DC0E3("FocusIn");
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x51669F7D1FB53D9F(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xF22B6C47C6EAB066(uParam0->f_3))
	{
		if (func_87(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (func_87(sVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

bool func_87(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

int func_88()
{
	if (func_50(iLocal_92, unk_0xD80958FC74E988A6(), 1) > (fLocal_116 + 100f))
	{
		return 1;
	}
	if (func_50(iLocal_92, unk_0xD80958FC74E988A6(), 1) > fLocal_116)
	{
		if (((unk_0x1F0B79228E461EC9(iLocal_91, sLocal_320, "IDLE_A", 3) && unk_0x346D81500D088F42(iLocal_91, sLocal_320, "IDLE_A") > 0.99f) || (unk_0x1F0B79228E461EC9(iLocal_91, sLocal_320, "IDLE_B", 3) && unk_0x346D81500D088F42(iLocal_91, sLocal_320, "IDLE_B") > 0.99f)) || (unk_0x1F0B79228E461EC9(iLocal_91, sLocal_320, "IDLE_C", 3) && unk_0x346D81500D088F42(iLocal_91, sLocal_320, "IDLE_C") > 0.99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_89()
{
	if ((((((((((iLocal_126 > -1 && (unk_0x9CD27B0045628463() - iLocal_126) > 5000) && !func_19()) && func_51(iLocal_90)) && func_51(iLocal_91)) && func_60(iLocal_92)) && !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90, 13f, 13f, 13f, false, true, 0)) && !unk_0x751B70C3D034E187(iLocal_91, iLocal_90, 13f, 13f, 13f, false, true, 0)) && unk_0xA3EE4A07279BB9DB(iLocal_90, iLocal_92, false)) && unk_0x751B70C3D034E187(iLocal_91, unk_0xD80958FC74E988A6(), 8f, 8f, 8f, false, true, 0)) && func_2(&uLocal_133, "REBTHAU", sLocal_301, 4, 0, 0, 0))
	{
		iLocal_126 = -1;
	}
}

void func_90()
{
	if (func_91())
	{
		iLocal_127 = unk_0x9CD27B0045628463();
		func_58(&iLocal_130);
		func_86(&uLocal_329, 0, 0);
		unk_0xC5F0A8EBD3F361CE(0);
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			iLocal_93 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true);
			unk_0xAD738C3085FE7E11(iLocal_93, true, true);
		}
		if (func_51(iLocal_91))
		{
			unk_0x0F804F1DB19B9689(iLocal_91);
		}
		if ((func_51(iLocal_90) && !func_19()) && func_2(&uLocal_133, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_88 = 3;
	}
	else
	{
		if (((bLocal_325 == 0 && unk_0xA6DB27D19ECBB7DA(iLocal_130)) && func_51(unk_0xD80958FC74E988A6())) && func_51(iLocal_90))
		{
			if (func_50(unk_0xD80958FC74E988A6(), iLocal_90, 1) < 30f || unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(iLocal_90, true), 10f, true))
			{
				bLocal_325 = true;
				unk_0x75A16C3DA34F1245(iLocal_130, bLocal_325);
			}
		}
		if (((iLocal_316 == 2 && func_51(iLocal_90)) && func_60(iLocal_92)) && unk_0xA3EE4A07279BB9DB(iLocal_90, iLocal_92, false))
		{
			if (iLocal_311 == 0)
			{
				unk_0x29DE5FA52D00428C(iLocal_92, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_311 = 1;
				Local_312 = { unk_0x92523B76657A517D(unk_0x21543C612379DB3C(1, "RE_BikeThief2"), unk_0x0E48D1C262390950(1, "RE_BikeThief2")) };
			}
			else if (!unk_0x1C8A4C2C19E68EEC(iLocal_92) || func_205(iLocal_92, Local_312, 1) < 5f)
			{
				if (unk_0x1C8A4C2C19E68EEC(iLocal_92))
				{
					unk_0x54833611C17ABDEA(iLocal_92);
				}
				unk_0x9454528DF15D657A(iLocal_90, iLocal_92, unk_0xD80958FC74E988A6(), 8, fLocal_113, 786468, 10f, 1f, false);
			}
		}
	}
}

int func_91()
{
	if (!func_51(iLocal_90))
	{
		return 1;
	}
	else if (func_51(iLocal_92))
	{
		if (iLocal_343 == 0)
		{
			if (unk_0xA3EE4A07279BB9DB(iLocal_90, iLocal_92, false))
			{
				iLocal_343 = 1;
			}
		}
		else if (!unk_0xA3EE4A07279BB9DB(iLocal_90, iLocal_92, false))
		{
			return 1;
		}
		if (unk_0xC86D67D52A707CF8(iLocal_90, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	return 0;
}

void func_92()
{
	if ((func_51(iLocal_90) && func_60(iLocal_92)) && unk_0xA3EE4A07279BB9DB(iLocal_90, iLocal_92, false))
	{
		if (iLocal_118)
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90, 40f, 40f, 40f, false, true, 0))
			{
				fLocal_113 = fLocal_115;
				unk_0x5C9B84BD7D31D908(iLocal_90, fLocal_113);
				unk_0x69F4BE8C8CC4796C(iLocal_90, unk_0xD80958FC74E988A6(), 20000, 16, 2);
				iLocal_118 = 0;
			}
		}
		else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90, 40f, 40f, 40f, false, true, 0))
		{
			fLocal_113 = fLocal_114;
			unk_0x5C9B84BD7D31D908(iLocal_90, fLocal_113);
			unk_0x69F4BE8C8CC4796C(iLocal_90, unk_0xD80958FC74E988A6(), 20000, 16, 2);
			iLocal_118 = 1;
		}
	}
}

void func_93()
{
	if (((((((((iLocal_124 < 5 && !func_19()) && func_51(iLocal_90)) && func_51(iLocal_91)) && func_60(iLocal_92)) && unk_0xA3EE4A07279BB9DB(iLocal_90, iLocal_92, false)) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90, 13f, 13f, 13f, false, true, 0)) && !unk_0x751B70C3D034E187(iLocal_91, iLocal_90, 13f, 13f, 13f, false, true, 0)) && (unk_0x9CD27B0045628463() - iLocal_125) > 15000) && func_2(&uLocal_133, "REBTHAU", sLocal_303, 4, 0, 0, 0))
	{
		if (unk_0x77F1BEB8863288D5(iLocal_90, -1273030092) == 1 && !unk_0x8785E6E40C7A8818(iLocal_90))
		{
			unk_0x2F8AF0E82773A171(iLocal_90, unk_0xD80958FC74E988A6(), 0, 0f, 0f, 0f, 15f, 50, true, -753768974);
		}
		iLocal_125 = unk_0x9CD27B0045628463();
		iLocal_124++;
	}
}

void func_94()
{
	if ((((iLocal_309 == 0 && func_51(iLocal_91)) && func_51(iLocal_90)) && func_60(iLocal_92)) && unk_0xA3EE4A07279BB9DB(iLocal_90, iLocal_92, false))
	{
		if (iLocal_326 == 0)
		{
			if (func_2(&uLocal_133, "REBTHAU", sLocal_298, 4, func_97(), 0, 0))
			{
				unk_0xAAA34F8A7CB32098(iLocal_91);
				unk_0xE8854A4326B9E12B(&iLocal_94);
				unk_0x69F4BE8C8CC4796C(0, iLocal_90, -1, 2048, 2);
				unk_0xD76B57B44F1E6F8B(0, Local_104, 2f, 20000, 40000f, 0.5f);
				unk_0x5AD23D40115353AC(0, iLocal_92, 1000);
				unk_0xEA47FE3719165B94(0, sLocal_318, sLocal_319, 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, sLocal_320, "IDLE_A", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, sLocal_320, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, sLocal_320, "IDLE_C", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, sLocal_320, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, sLocal_320, "IDLE_A", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, sLocal_320, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, sLocal_320, "IDLE_C", 8f, -8f, -1, 1, 0f, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_94);
				unk_0x5ABA3986D90D8A3B(iLocal_91, iLocal_94);
				unk_0x3841422E9C488D8C(&iLocal_94);
				iLocal_125 = unk_0x9CD27B0045628463();
				iLocal_126 = unk_0x9CD27B0045628463();
				if (iLocal_316 == 3)
				{
					sLocal_299 = "REBTH_HELP2X";
				}
				else
				{
					sLocal_299 = "REBTH_HELP2";
				}
				iLocal_326 = 1;
			}
		}
		else if (func_51(unk_0xD80958FC74E988A6()))
		{
			if (func_50(unk_0xD80958FC74E988A6(), iLocal_91, 1) < 30f)
			{
				if (!func_19())
				{
					if (func_2(&uLocal_133, "REBTHAU", sLocal_299, 4, 0, 0, 0))
					{
						iLocal_309 = 1;
					}
				}
				else if (iLocal_327 == 0)
				{
					func_95();
					iLocal_327 = 1;
				}
			}
		}
	}
}

void func_95()
{
	Global_14558 = 0;
	func_96();
}

void func_96()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_16703 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

int func_97()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 100f, 100f, 20f };
	if (!unk_0x84A2DD9AC37C35C1(iLocal_91))
	{
		if (unk_0x751B70C3D034E187(iLocal_91, unk_0xD80958FC74E988A6(), Var1, false, true, 0))
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

void func_98()
{
	if ((func_51(iLocal_90) && func_60(iLocal_92)) && unk_0xA3EE4A07279BB9DB(iLocal_90, iLocal_92, false))
	{
		func_99(&uLocal_329, iLocal_92, 0, 0, 1, 1, 1);
	}
}

void func_99(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_100(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_100(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_101(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_101(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_86(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_102(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_102(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xF22B6C47C6EAB066(iVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_87(iVar0))
	{
		func_121();
	}
	if (func_120(iParam1) && unk_0x47D6F43D77935C75(iParam1))
	{
		iVar1 = 0;
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			unk_0x7D7A2E43E74E2EB8(unk_0x04A2A40C73395041(iParam1));
			unk_0x2BC338A7B21F4608(unk_0x04A2A40C73395041(iParam1), true);
			if (unk_0x91C8E617F64188AC(unk_0x04A2A40C73395041(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6AC7003FA6E5575E(iParam1))
		{
			unk_0x64473AEFDCF47DCA(unk_0x4B53F92932ADFAC0(iParam1));
			if (unk_0xAA0A52D24FB98293(unk_0x4B53F92932ADFAC0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam1))
		{
			unk_0xB252BC036B525623(unk_0xD7E3B9735C0F89D6(iParam1));
			if (unk_0x8B32ACE6326A7546(unk_0xD7E3B9735C0F89D6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE520FF1AD2785B40())
		{
			if (func_115(uParam0, bParam7, bParam9, 0))
			{
				func_111(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_107(iVar0))
				{
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam8)
						{
							if (!func_87(iVar0))
							{
								func_106(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
								{
									func_105(1);
								}
							}
						}
					}
				}
			}
			else if (func_107(iVar0))
			{
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0))
				{
					if (((unk_0xE659E47AF827484B(iParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam8)
					{
						if (!func_87(iVar0))
						{
							func_106(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
							{
								func_105(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xF22B6C47C6EAB066(sParam5))
			{
				if (func_87(sParam5))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
					{
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_86(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
				{
					func_86(uParam0, iVar0, 1);
				}
			}
			if (!func_115(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_104(uParam0))
				{
					func_103(uParam0);
				}
			}
		}
	}
	else
	{
		func_86(uParam0, iVar0, 0);
	}
}

void func_103(var uParam0)
{
	if (func_120(unk_0xD80958FC74E988A6()))
	{
		unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0x51669F7D1FB53D9F(true);
		unk_0xF46C581C61718916(false);
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		unk_0x068E835A1D0DC0E3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_104(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9CD27B0045628463()
		{
			return 1;
		}
	}
	return 0;
}

int func_105(bool bParam0)
{
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97173.f_8270.f_100++;
			}
			return Global_97173.f_8270.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97173.f_8270.f_101++;
			}
			return Global_97173.f_8270.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97173.f_8270.f_102++;
			}
			return Global_97173.f_8270.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_106(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_107(char* sParam0)
{
	if (!func_108(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(sParam0) && func_87(sParam0)) || func_87("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (func_105(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_105(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_105(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_108(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 0;
	}
	if (func_110(0))
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				return 0;
			}
			if (unk_0x70FDA869F3317EA9())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_109()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
}

int func_110(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_111(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x5F9532F3B5CC2551(iParam1))
	{
		func_86(uParam0, 0, 0);
	}
	if (func_114(Param2, 0f, 0f, 0f))
	{
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			iVar0 = unk_0x04A2A40C73395041(iParam1);
			if (!unk_0x997ABD671D25CA0B(iVar0, false))
			{
				if (unk_0x12534C348C6CB68B(iVar0))
				{
					if (!func_112())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6D9F5FAA7488BA46(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x51669F7D1FB53D9F(false);
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
	unk_0x189E955A8313E298(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam1, -1, iVar3, iVar4);
	unk_0x2206BF9A37B7F724("FocusIn", 0, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_112()
{
	return func_113(unk_0x4F8644AF03D0E0D6());
}

int func_113(int iParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_114(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_115(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_118(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_118(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_104(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (!func_119(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_118(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
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
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (!func_119(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_118(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_118(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_119(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (func_117(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_116(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_117(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_104(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_108(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_121();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_116(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_117(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_118(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_119(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_108(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x6AC7003FA6E5575E(iParam0))
		{
			if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam0), false))
			{
				return 1;
			}
		}
		else if (unk_0x524AC5ECEA15343E(iParam0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_121()
{
	unk_0x933D6A9EEC1BACD0(&Global_2264, 4);
}

void func_122()
{
	if (unk_0x7239B21A38F536BA(iLocal_90))
	{
		if (unk_0x84A2DD9AC37C35C1(iLocal_90))
		{
			func_138();
			func_206();
		}
		else if (func_133())
		{
			if (func_9() == 0)
			{
				func_132(&uLocal_133, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
				sLocal_300 = "REBTH_RESPM";
			}
			else if (func_9() == 1)
			{
				func_132(&uLocal_133, 0, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
				sLocal_300 = "REBTH_RESPF";
			}
			else if (func_9() == 2)
			{
				func_132(&uLocal_133, 0, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
				sLocal_300 = "REBTH_RESPT";
			}
			if (unk_0x4C241E39B23DF959(iLocal_92, false) && !unk_0x84A2DD9AC37C35C1(iLocal_90))
			{
				if (iLocal_316 == 2)
				{
					unk_0xC20E50AA46D09CA8(iLocal_90, iLocal_92, 20000, -1, 2f, 1, 0);
				}
				else
				{
					unk_0xE8854A4326B9E12B(&iLocal_94);
					unk_0xC20E50AA46D09CA8(0, iLocal_92, 20000, -1, 2f, 1, 0);
					unk_0x9454528DF15D657A(0, iLocal_92, unk_0xD80958FC74E988A6(), 8, fLocal_113, 786468, 10f, 1f, false);
					unk_0x39E72BC99E6360CB(iLocal_94);
					unk_0x5ABA3986D90D8A3B(iLocal_90, iLocal_94);
					unk_0x3841422E9C488D8C(&iLocal_94);
					unk_0x971D38760FBC02EF(iLocal_90, true);
				}
			}
			func_58(&iLocal_132);
			iLocal_130 = func_54(iLocal_90, 1, 145);
			unk_0x75A16C3DA34F1245(iLocal_130, bLocal_325);
			unk_0xC5F0A8EBD3F361CE(2);
			if (iLocal_316 == 1)
			{
				unk_0x1A5AA1208AF5DB59(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, false, false, true);
			}
			iLocal_88 = 2;
			func_123(1);
		}
	}
}

int func_123(int iParam0)
{
	if (func_126())
	{
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_34(Global_97162))
		{
			func_124(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_34(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_106(func_125(iParam0), -1);
					Global_97173.f_28117.f_2++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xA921AA820C25702F(Global_97169, 1))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_106(func_125(iParam0), -1);
					Global_97173.f_28117.f_3++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xA921AA820C25702F(Global_97169, 2))
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_106(func_125(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
				}
			}
			break;
	}
}

char* func_125(int iParam0)
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

int func_126()
{
	switch (func_127(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_127(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_131(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x239528EACDC3E7DE(unk_0xA5EDC40EF369B48D(), false);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBC8983F38F78ED51(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_129(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_128(uParam0, iParam4);
		}
	}
	return 2;
}

void func_128(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_129(int iParam0)
{
	return func_130(iParam0, Global_34909);
}

int func_130(int iParam0, int iParam1)
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

int func_131(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_129(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_132(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

int func_133()
{
	switch (iLocal_316)
	{
		case 1:
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 365.9538f, -1971.716f, 18.34454f, 526.409f, -1861.941f, 34.52906f, 100f, false, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 886.1401f, -229.9373f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, false, true, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1969.382f, 382.1331f, 68.15017f, -1878.152f, 158.4052f, 104.8504f, 100f, false, true, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_134()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 16f, 16f, 6f };
	Var3 = { -16f, -16f, -6f };
	if (func_51(iLocal_90))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_90, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_60(iLocal_92))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_92, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_51(iLocal_91))
	{
		if (unk_0x3F2023999AD51C1F(unk_0x17C07FC640E86B4E(iLocal_91, 31086, 0f, 0f, 0f), 3f, true))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0x17C07FC640E86B4E(iLocal_91, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + unk_0x17C07FC640E86B4E(iLocal_91, 31086, 0f, 0f, 0f) };
		if ((unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("weapon_smokegrenade"), true) || unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("weapon_grenade"), true)) || unk_0x2E0DC353342C4A6D(Var3, Var0, joaat("weapon_stickybomb"), true))
		{
			return 1;
		}
		if (unk_0x2F09F7976C512404(unk_0x17C07FC640E86B4E(iLocal_91, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0xAB0F816885B0E483(-1, unk_0x17C07FC640E86B4E(iLocal_91, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0xBBCCE00B381F8482(iLocal_91))
		{
			return 1;
		}
		if (unk_0xC86D67D52A707CF8(iLocal_91, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
	}
	return 0;
}

void func_135()
{
	if (iLocal_117 == 0)
	{
		switch (iLocal_316)
		{
			case 1:
				Local_101 = { 433.57f, -1916.68f, 24.04f };
				fLocal_111 = 248.5f;
				Local_104 = { 439.054f, -1920.145f, 23.5581f };
				Local_107 = { 434.31f, -1908.87f, 25.92f };
				fLocal_112 = -163.17f;
				Local_98 = { 435.18f, -1915.18f, 24.68f };
				fLocal_110 = 226.13f;
				fLocal_114 = 10f;
				fLocal_115 = 20f;
				iLocal_89 = joaat("scorcher");
				fLocal_116 = 250f;
				sLocal_304 = "REBTH_THX2";
				sLocal_305 = "REBTH_THX3";
				sLocal_306 = "REBTH_GONE";
				break;
			
			case 2:
				Local_101 = { 774.06f, -155.63f, 73.44f };
				fLocal_111 = 144.3932f;
				Local_104 = { 769.8723f, -156.9548f, 73.5144f };
				Local_107 = { 773.632f, -150.3134f, 74.6217f };
				fLocal_112 = 151.6004f;
				Local_98 = { 771.41f, -154.29f, 74.09f };
				fLocal_110 = 150.54f;
				fLocal_114 = 10f;
				fLocal_115 = 20f;
				iLocal_89 = joaat("scorcher");
				fLocal_116 = 250f;
				sLocal_304 = "REBTH_THX2";
				sLocal_305 = "REBTH_THX3";
				sLocal_306 = "REBTH_GONE";
				break;
			
			case 3:
				Local_101 = { -1927.94f, 254.7125f, 84.4018f };
				fLocal_111 = 285.0046f;
				Local_104 = { -1934.785f, 253.2105f, 83.8164f };
				Local_107 = { -1931.04f, 252.19f, 84.99f };
				fLocal_112 = 42.33f;
				Local_98 = { -1932.27f, 254.5f, 84.4f };
				fLocal_110 = 96.81f;
				fLocal_114 = 10f;
				fLocal_115 = 35f;
				iLocal_89 = joaat("bati");
				fLocal_116 = 400f;
				sLocal_304 = "REBTH_THX2X";
				sLocal_305 = "REBTH_THX3X";
				sLocal_306 = "REBTH_GONEX";
				break;
		}
		unk_0xC12321827687FE4D(Local_101 - Vector(20f, 20f, 20f), Local_101 + Vector(20f, 20f, 20f), false, true);
		unk_0x46A1E1A299EC4BBA(Local_101 - Vector(20f, 20f, 20f), Local_101 + Vector(20f, 20f, 20f));
		unk_0xA56F01F3765B93A0(Local_101, 20f, true, false, false, false);
		iLocal_117 = 1;
	}
	unk_0x963D27A58DF860AC(joaat("g_m_y_strpunk_01"));
	unk_0x963D27A58DF860AC(joaat("a_m_y_beachvesp_01"));
	unk_0x963D27A58DF860AC(iLocal_89);
	if ((((unk_0x98A4EB5D89A0C952(joaat("g_m_y_strpunk_01")) && unk_0x98A4EB5D89A0C952(joaat("a_m_y_beachvesp_01"))) && unk_0x98A4EB5D89A0C952(iLocal_89)) && func_137()) && func_136())
	{
		iLocal_92 = unk_0xAF35D0D2583051B0(iLocal_89, Local_98, fLocal_110, 1, 1);
		unk_0xE532F5D78798DAAB(iLocal_89);
		unk_0x0FC2D89AC25A5814(iLocal_89, true);
		unk_0x2497C4717C8B881E(iLocal_92, 1, 1);
		unk_0xEB9DC3C7D8596C46(iLocal_92, false);
		unk_0x0AD9E8F87FF7C16F(iLocal_92, false);
		unk_0x92F0CF722BC4202F(iLocal_92, true);
		unk_0x013A80FC08F6E4F2("RE_CAR_STEAL_SCENE");
		unk_0x153973AB99FE8980(iLocal_92, "RE_CAR_STEAL_STOLEN_VEHICLE", 0f);
		fLocal_113 = fLocal_115;
		if (iLocal_316 == 3)
		{
			unk_0x4F1D4BE3A7F24601(iLocal_92, 49, 0);
			unk_0x1F2AA07F00B3217A(iLocal_92, 0);
			unk_0x6AF0636DDEDCB6DD(iLocal_92, 16, 2, false);
			unk_0x6AF0636DDEDCB6DD(iLocal_92, 11, 3, false);
			unk_0x6AF0636DDEDCB6DD(iLocal_92, 12, 2, false);
			unk_0x6AF0636DDEDCB6DD(iLocal_92, 13, 2, false);
			unk_0x6AF0636DDEDCB6DD(iLocal_92, 23, 10, false);
			unk_0x6AF0636DDEDCB6DD(iLocal_92, 24, 10, false);
			unk_0x2A1F4F37F95BAD08(iLocal_92, 22, true);
			unk_0x2A1F4F37F95BAD08(iLocal_92, 17, true);
			unk_0x2A1F4F37F95BAD08(iLocal_92, 21, true);
			unk_0x2A1F4F37F95BAD08(iLocal_92, 20, true);
			unk_0x2A1F4F37F95BAD08(iLocal_92, 19, true);
			unk_0x4F1D4BE3A7F24601(iLocal_92, 89, 89);
			unk_0x2036F561ADD12E33(iLocal_92, 0, 1);
			unk_0x9088EB5A43FFB0A1(iLocal_92, 1);
		}
		unk_0xF372BC22FCB88606("re_bikethief_relGroupVictim", &iLocal_121);
		unk_0xF372BC22FCB88606("re_bikethief_relGroupThief", &iLocal_122);
		unk_0xBF25EB89375A37AD(5, iLocal_122, iLocal_121);
		unk_0xBF25EB89375A37AD(5, iLocal_122, joaat("player"));
		unk_0xBF25EB89375A37AD(1, iLocal_121, joaat("player"));
		iLocal_90 = unk_0xD49F9B0955C367DE(19, joaat("g_m_y_strpunk_01"), Local_107, fLocal_112, true, true);
		unk_0xE532F5D78798DAAB(joaat("g_m_y_strpunk_01"));
		unk_0x9F8AA94D6D97DBF4(iLocal_90, true);
		unk_0x79F020FF9EDC0748(iLocal_90, true);
		unk_0xC80A74AC829DDD92(iLocal_90, iLocal_122);
		unk_0x4D9CA1009AFBD057(iLocal_90, 3);
		unk_0x9F7794730795E019(iLocal_90, 17, true);
		unk_0x9F7794730795E019(iLocal_90, 13, false);
		unk_0x70A2D1137C8ED7C9(iLocal_90, 1, true);
		unk_0x560A43136EB58105(iLocal_90, false);
		unk_0x1913FE4CBF41C463(iLocal_90, 42, true);
		unk_0x1913FE4CBF41C463(iLocal_90, 281, true);
		unk_0x7A6535691B477C48(iLocal_90, 2);
		unk_0x6C8065A3B780185B(iLocal_90, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		unk_0xEA47FE3719165B94(iLocal_90, sLocal_317, "base", 8f, -8f, -1, 1, 0f, false, false, false);
		iLocal_91 = unk_0xD49F9B0955C367DE(19, joaat("a_m_y_beachvesp_01"), Local_101, fLocal_111, true, true);
		unk_0xE532F5D78798DAAB(joaat("a_m_y_beachvesp_01"));
		unk_0x9F8AA94D6D97DBF4(iLocal_91, true);
		unk_0x79F020FF9EDC0748(iLocal_91, true);
		unk_0x70A2D1137C8ED7C9(iLocal_91, 8, true);
		if (iLocal_316 == 3)
		{
			unk_0x560A43136EB58105(iLocal_91, true);
		}
		else
		{
			unk_0x560A43136EB58105(iLocal_91, false);
		}
		unk_0x1913FE4CBF41C463(iLocal_91, 26, true);
		unk_0x1913FE4CBF41C463(iLocal_91, 42, true);
		unk_0x1913FE4CBF41C463(iLocal_91, 167, true);
		unk_0x1913FE4CBF41C463(iLocal_91, 281, true);
		unk_0xC80A74AC829DDD92(iLocal_91, iLocal_121);
		unk_0x63F58F7C80513AAD(iLocal_91, false);
		unk_0x6C8065A3B780185B(iLocal_91, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		unk_0x142A02425FF02BD9(iLocal_91, "WORLD_HUMAN_STAND_MOBILE", 0, true);
		func_132(&uLocal_133, 1, iLocal_90, "BThief", 0, 1);
		func_132(&uLocal_133, 2, iLocal_91, "BThiefVictim", 0, 1);
		if (iLocal_315 == 0)
		{
			if (iLocal_316 == 3)
			{
				sLocal_298 = "REBTH_HELPX";
			}
			else
			{
				sLocal_298 = "REBTH_HELP";
			}
			sLocal_302 = "REBTH_RUNSOF";
			sLocal_303 = "REBTH_TAUNT";
			sLocal_319 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_315 == 1)
		{
			if (iLocal_316 == 3)
			{
				sLocal_298 = "REBTH_HLPBX";
			}
			else
			{
				sLocal_298 = "REBTH_HLPB";
			}
			sLocal_302 = "REBTH_RUNB";
			sLocal_303 = "REBTH_TNTB";
			sLocal_319 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_298 = "REBTH_HLPC";
			sLocal_302 = "REBTH_RUNC";
			sLocal_303 = "REBTH_TNTC";
			sLocal_319 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		unk_0x102E68B2024D536D(false);
		iLocal_88 = 1;
	}
}

int func_136()
{
	if (iLocal_316 == 2)
	{
		unk_0xAF514CABE74CBF15(1, "RE_BikeThief2");
		if (!unk_0x300D614A4C785FC4(1, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_137()
{
	unk_0xD3BD40951412FEF6(sLocal_317);
	unk_0xD3BD40951412FEF6(sLocal_318);
	unk_0xD3BD40951412FEF6(sLocal_320);
	unk_0xD3BD40951412FEF6(sLocal_321);
	unk_0xD3BD40951412FEF6(sLocal_323);
	unk_0xD3BD40951412FEF6(sLocal_322);
	if (((((unk_0xD031A9162D01088C(sLocal_317) && unk_0xD031A9162D01088C(sLocal_318)) && unk_0xD031A9162D01088C(sLocal_320)) && unk_0xD031A9162D01088C(sLocal_321)) && unk_0xD031A9162D01088C(sLocal_323)) && unk_0xD031A9162D01088C(sLocal_322))
	{
		return 1;
	}
	return 0;
}

void func_138()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_91))
	{
		if (func_62(iLocal_91, 993674639))
		{
			unk_0xAAA34F8A7CB32098(iLocal_91);
		}
		else
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_91);
		}
		unk_0x971D38760FBC02EF(iLocal_91, true);
		unk_0x22B0D0E37CCB840D(iLocal_91, unk_0xD80958FC74E988A6(), 100f, -1, false, false);
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_90))
	{
		unk_0x971D38760FBC02EF(iLocal_90, true);
		unk_0x22B0D0E37CCB840D(iLocal_90, unk_0xD80958FC74E988A6(), 100f, -1, false, true);
	}
}

int func_139()
{
	if (iLocal_88 == 0 && func_158())
	{
		return 1;
	}
	if (iLocal_88 == 1 && func_146())
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(iLocal_91))
	{
		if (unk_0x84A2DD9AC37C35C1(iLocal_91))
		{
			return 1;
		}
		else if (unk_0xC86D67D52A707CF8(iLocal_91, unk_0xD80958FC74E988A6(), true))
		{
			func_144();
			func_143(&uLocal_133, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_140(iLocal_91, 170f))
		{
			func_144();
			func_143(&uLocal_133, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0 && iLocal_310 == 1)
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(iLocal_92) && !unk_0x4C241E39B23DF959(iLocal_92, false))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_51(unk_0xD80958FC74E988A6()) && func_51(iParam0))
	{
		if (func_142(iParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iParam0))
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_141(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_141(int iParam0, float fParam1)
{
	return func_68(iParam0, unk_0xD80958FC74E988A6(), fParam1, 1, 250, 7);
}

int func_142(int iParam0)
{
	if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iParam0) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
	{
		return 1;
	}
	return 0;
}

void func_143(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_18(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x933D6A9EEC1BACD0(&Global_14558, 0);
	Global_15695 = iParam3;
	StringCopy(&Global_15682, sParam2, 24);
}

void func_144()
{
	Global_14558 = 0;
	func_145();
}

void func_145()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

int func_146()
{
	if (!func_129(5))
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_153())
		{
			return 0;
		}
	}
	if (func_147(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_147(float fParam0, bool bParam1)
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_11(func_9()))
		{
			iVar36 = func_39();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_148(iVar32, &Var0);
					fVar35 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var0.f_6, true);
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

void func_148(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_149(uParam1, "Abigail1", func_151(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 1:
			func_149(uParam1, "Abigail2", func_151(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 2:
			func_149(uParam1, "Barry1", func_151(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 3:
			func_149(uParam1, "Barry2", func_151(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 4:
			func_149(uParam1, "Barry3", func_151(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 5:
			func_149(uParam1, "Barry3A", func_151(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 6:
			func_149(uParam1, "Barry3C", func_151(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 7:
			func_149(uParam1, "Barry4", func_151(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_150(iParam0), 0, 0);
			break;
		
		case 8:
			func_149(uParam1, "Dreyfuss1", func_151(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 9:
			func_149(uParam1, "Epsilon1", func_151(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 10:
			func_149(uParam1, "Epsilon2", func_151(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 11:
			func_149(uParam1, "Epsilon3", func_151(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 12:
			func_149(uParam1, "Epsilon4", func_151(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 13:
			func_149(uParam1, "Epsilon5", func_151(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 14:
			func_149(uParam1, "Epsilon6", func_151(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 15:
			func_149(uParam1, "Epsilon7", func_151(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 16:
			func_149(uParam1, "Epsilon8", func_151(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 17:
			func_149(uParam1, "Extreme1", func_151(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 18:
			func_149(uParam1, "Extreme2", func_151(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 19:
			func_149(uParam1, "Extreme3", func_151(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 20:
			func_149(uParam1, "Extreme4", func_151(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 21:
			func_149(uParam1, "Fanatic1", func_151(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_150(iParam0), 1, 0);
			break;
		
		case 22:
			func_149(uParam1, "Fanatic2", func_151(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_150(iParam0), 1, 0);
			break;
		
		case 23:
			func_149(uParam1, "Fanatic3", func_151(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_150(iParam0), 0, 1);
			break;
		
		case 24:
			func_149(uParam1, "Hao1", func_151(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_150(iParam0), 0, 1);
			break;
		
		case 25:
			func_149(uParam1, "Hunting1", func_151(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 26:
			func_149(uParam1, "Hunting2", func_151(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 27:
			func_149(uParam1, "Josh1", func_151(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 28:
			func_149(uParam1, "Josh2", func_151(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 29:
			func_149(uParam1, "Josh3", func_151(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 30:
			func_149(uParam1, "Josh4", func_151(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 31:
			func_149(uParam1, "Maude1", func_151(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 32:
			func_149(uParam1, "Minute1", func_151(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 33:
			func_149(uParam1, "Minute2", func_151(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 34:
			func_149(uParam1, "Minute3", func_151(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 35:
			func_149(uParam1, "MrsPhilips1", func_151(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 36:
			func_149(uParam1, "MrsPhilips2", func_151(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 37:
			func_149(uParam1, "Nigel1", func_151(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 38:
			func_149(uParam1, "Nigel1A", func_151(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 39:
			func_149(uParam1, "Nigel1B", func_151(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_150(iParam0), 1, 1);
			break;
		
		case 40:
			func_149(uParam1, "Nigel1C", func_151(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_150(iParam0), 1, 1);
			break;
		
		case 41:
			func_149(uParam1, "Nigel1D", func_151(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_150(iParam0), 1, 1);
			break;
		
		case 42:
			func_149(uParam1, "Nigel2", func_151(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 43:
			func_149(uParam1, "Nigel3", func_151(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 1);
			break;
		
		case 44:
			func_149(uParam1, "Omega1", func_151(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 45:
			func_149(uParam1, "Omega2", func_151(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 46:
			func_149(uParam1, "Paparazzo1", func_151(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 47:
			func_149(uParam1, "Paparazzo2", func_151(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 48:
			func_149(uParam1, "Paparazzo3", func_151(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 49:
			func_149(uParam1, "Paparazzo3A", func_151(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 50:
			func_149(uParam1, "Paparazzo3B", func_151(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 51:
			func_149(uParam1, "Paparazzo4", func_151(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 52:
			func_149(uParam1, "Rampage1", func_151(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 54:
			func_149(uParam1, "Rampage3", func_151(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 55:
			func_149(uParam1, "Rampage4", func_151(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 56:
			func_149(uParam1, "Rampage5", func_151(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_150(iParam0), 0, 0);
			break;
		
		case 53:
			func_149(uParam1, "Rampage2", func_151(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_150(iParam0), 1, 0);
			break;
		
		case 57:
			func_149(uParam1, "TheLastOne", func_151(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 58:
			func_149(uParam1, "Tonya1", func_151(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 59:
			func_149(uParam1, "Tonya2", func_151(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 60:
			func_149(uParam1, "Tonya3", func_151(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 61:
			func_149(uParam1, "Tonya4", func_151(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		case 62:
			func_149(uParam1, "Tonya5", func_151(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_150(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_149(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_150(int iParam0)
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

struct<2> func_151(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_152(iParam0) };
	if (unk_0xCA042B6957743895(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_152(int iParam0)
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

int func_153()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_154()
{
	if (func_157() && !func_153())
	{
		return 1;
	}
	if (func_156() && func_155())
	{
		return 1;
	}
	return 0;
}

bool func_155()
{
	return Global_96891 > 0;
}

int func_156()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_158()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_85) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_153())
		{
			return 0;
		}
	}
	if (func_154())
	{
		return 1;
	}
	if (func_147(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_159()
{
}

int func_160()
{
	int iVar0;
	
	if (func_161(26, 1))
	{
		iVar0++;
	}
	if (func_161(26, 2))
	{
		iVar0++;
	}
	if (func_161(8, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_161(int iParam0, int iParam1)
{
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_164(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_163();
}

void func_163()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			unk_0x0FC2D89AC25A5814(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)), true);
		}
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
	}
}

void func_164(int iParam0)
{
	Global_97162 = iParam0;
}

int func_165(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131165)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_43();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_204())
		{
			return 0;
		}
	}
	Local_85 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_153())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_23(0))
		{
			return 0;
		}
		if (func_154())
		{
			return 0;
		}
		if (func_203())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_11(func_9()))
		{
			if (func_147(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam6)
		{
			if ((Var1.f_2 - Local_85.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_202(iParam3))
		{
			return 0;
		}
		if (func_11(func_9()))
		{
			if (func_201(func_9()) == 4 || func_201(func_9()) == 5)
			{
				return 0;
			}
		}
		if (func_11(func_9()))
		{
			if (!func_200(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_199(Global_97173.f_28117.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9CD27B0045628463() - Global_97164) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_198())
		{
			return 0;
		}
		if (unk_0xA33CDCCDA663159E())
		{
			return 0;
		}
		if (unk_0xD2D57F1D764117B1())
		{
			return 0;
		}
		if (!func_189(4))
		{
			return 0;
		}
		if (!func_129(5))
		{
			return 0;
		}
		if (func_161(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_161(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_202(30) && !func_161(30, 0))
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
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_188(iVar8))
				{
					if (func_166(iVar4))
					{
						if (!func_114(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
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

bool func_166(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_167(iVar0);
}

int func_167(int iParam0)
{
	return func_168(iParam0, 1);
}

int func_168(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_188(iParam0))
	{
		return 0;
	}
	func_169(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_170(func_181(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_170(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_179(iParam1);
		iVar1 = func_177(iParam0);
		iVar2 = (func_177(iParam0) - func_177(iParam1));
		iVar3 = (func_179(iParam0) - func_179(iParam1));
		iVar4 = (func_176(iParam0) - func_176(iParam1));
		iVar5 = (func_175(iParam0) - func_175(iParam1));
		iVar6 = (func_174(iParam0) - func_174(iParam1));
		iVar7 = (func_173(iParam0) - func_173(iParam1));
	}
	else
	{
		iVar0 = func_179(iParam0);
		iVar1 = func_177(iParam1);
		iVar2 = (func_177(iParam1) - func_177(iParam0));
		iVar3 = (func_179(iParam1) - func_179(iParam0));
		iVar4 = (func_176(iParam1) - func_176(iParam0));
		iVar5 = (func_175(iParam1) - func_175(iParam0));
		iVar6 = (func_174(iParam1) - func_174(iParam0));
		iVar7 = (func_173(iParam1) - func_173(iParam0));
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
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_171(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_171(float fParam0, float fParam1, float fParam2)
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

int func_172(int iParam0, int iParam1)
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

int func_173(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_174(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_175(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_176(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_177(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_178(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(int iParam0)
{
	return iParam0 & 15;
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam1) || !func_188(iParam0))
	{
		return 1;
	}
	iVar0 = func_177(iParam0);
	iVar1 = func_177(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0);
	iVar1 = func_179(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_176(iParam0);
	iVar1 = func_176(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0);
	iVar1 = func_174(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	var uVar0;
	
	func_187(&uVar0, unk_0x494E97C2EF27C470());
	func_186(&uVar0, unk_0x13D2B8ADD79640F2());
	func_185(&uVar0, unk_0x25223CA6B4D20B7F());
	func_184(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_183(&uVar0, unk_0xBBC72712E80257A1());
	func_182(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_182(var uParam0, int iParam1)
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

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_186(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_187(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_188(int iParam0)
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
	iVar0 = func_173(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_174(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_175(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_177(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_179(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_176(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
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
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_197()) || Global_96220) || Global_24446) || func_196()) || func_16(8, -1)) || func_195()) || func_194()) || func_193()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_197()) || Global_24446) || func_196()) || func_16(8, -1)) || func_193()) || func_195()) || func_194()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_197()) || Global_96220) || Global_24446) || func_196()) || func_16(8, -1)) || func_193()) || func_195()) || func_194()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_197()) || Global_96220) || Global_24446) || func_196()) || func_16(8, -1)) || func_195()) || func_194()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_197() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_16(8, -1)) || func_192()) || func_191()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_195()) || func_194()) || func_191()) || func_190())
						{
							return 0;
						}
						if ((unk_0xD9D2CFFF49FAB35F() && unk_0xB3C94A90D9FC9E62() != 3) && unk_0x470555300D10B2A5() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
						{
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_197()) || Global_24446) || func_196()) || func_16(8, -1)) || func_194()) || func_193()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_197()) || func_194()) || Global_96220) || Global_24446) || func_196()) || Global_35953) || func_16(8, -1)) || func_193()) || func_191()) || func_192()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_197()) || Global_96220) || Global_24446) || func_196()) || func_16(8, -1)) || func_193()) || func_191()) || func_195()) || func_194()) || func_192())
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

var func_190()
{
	return Global_89823.f_1;
}

int func_191()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_192()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_194()
{
	return Global_89836.f_291 > 0;
}

bool func_195()
{
	return Global_89836.f_290 > 0;
}

var func_196()
{
	return Global_1315898;
}

int func_197()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_198()
{
	func_8();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_199(int iParam0)
{
	return func_180(func_181(), iParam0);
}

int func_200(int iParam0, int iParam1, int iParam2)
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

int func_201(int iParam0)
{
	if (!func_11(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_202(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_204())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_203()
{
	int iVar0;
	
	if (Global_24594)
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xBB40DD2270B65366(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_205(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
}

void func_206()
{
	func_86(&uLocal_329, 0, 0);
	if (unk_0xB65B60556E2A9225("RE_CAR_STEAL_SCENE"))
	{
		if (unk_0x4C241E39B23DF959(iLocal_92, false))
		{
			unk_0x18EB48CFC41F2EA0(iLocal_92, 0f);
		}
		unk_0xDFE8422B3B94E688("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_316 != 3)
	{
		func_209(26);
	}
	else
	{
		func_209(8);
	}
	if (iLocal_316 == 1)
	{
		unk_0x0027501B9F3B407E(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 1);
	}
	unk_0x31D16B74C6E29D66(iLocal_324, false);
	unk_0xC12321827687FE4D(Local_101 - Vector(20f, 20f, 20f), Local_101 + Vector(20f, 20f, 20f), true, true);
	if (unk_0x4C241E39B23DF959(iLocal_92, false))
	{
		unk_0x31B927BBC44156CD(iLocal_92, true);
		if (unk_0x1C8A4C2C19E68EEC(iLocal_92))
		{
			unk_0x54833611C17ABDEA(iLocal_92);
		}
	}
	if (iLocal_316 == 2)
	{
		unk_0xF1160ACCF98A3FC8(1, "RE_BikeThief2");
	}
	func_58(&iLocal_132);
	func_58(&iLocal_130);
	func_59(&uLocal_341);
	func_58(&iLocal_131);
	func_65(0);
	func_208(&uLocal_133, 0);
	func_208(&uLocal_133, 1);
	func_208(&uLocal_133, 2);
	if ((func_51(iLocal_91) && func_51(iLocal_92)) && unk_0xA3EE4A07279BB9DB(iLocal_91, iLocal_92, false))
	{
		unk_0x480142959D337D00(iLocal_91, iLocal_92, fLocal_113, 786485);
		unk_0x971D38760FBC02EF(iLocal_91, true);
	}
	func_80(&iLocal_90, 1, 0, 1);
	func_80(&iLocal_91, 1, 0, 1);
	func_207(&iLocal_92);
	if (func_51(iLocal_93))
	{
		unk_0xACFB2463CC22BED2(iLocal_93);
		func_207(&iLocal_93);
	}
	unk_0xE532F5D78798DAAB(joaat("g_m_y_strpunk_01"));
	unk_0xE532F5D78798DAAB(joaat("a_m_y_beachvesp_01"));
	unk_0xE532F5D78798DAAB(joaat("scorcher"));
	unk_0xE532F5D78798DAAB(joaat("bati"));
	unk_0xF66A602F829E2A06(sLocal_317);
	unk_0xF66A602F829E2A06(sLocal_318);
	unk_0xF66A602F829E2A06(sLocal_320);
	unk_0xF66A602F829E2A06(sLocal_321);
	unk_0xF66A602F829E2A06(sLocal_322);
	unk_0xF66A602F829E2A06(sLocal_323);
	unk_0xC5F0A8EBD3F361CE(0);
	unk_0x1090044AD1DA76FA();
}

void func_207(int* iParam0)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		unk_0x5F9532F3B5CC2551(*iParam0);
		if (unk_0x0A7B270912999B3C(*iParam0) && unk_0xDDE6DF5AE89981D2(*iParam0, true))
		{
			unk_0x629BFA74418D6239(iParam0);
		}
	}
}

void func_208(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_209(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_43();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_220())
	{
		func_213(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_212(30000);
		StringCopy(&cVar0, func_211(Global_97162, 1), 64);
		if (func_42(Global_97162) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97161, 64);
		}
		unk_0x71862B1D855F32E1(&cVar0, Global_97159, (unk_0x9CD27B0045628463() - Global_97160), 0);
	}
	else if (unk_0xA921AA820C25702F(Global_97169, 0) && Global_97173.f_28117.f_2 < 3)
	{
		unk_0xE80492A9AC099A93(&Global_97169, 0);
	}
	func_210(&Global_24503);
	Global_97163 = 0;
	func_164(-1);
}

void func_210(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

char* func_211(int iParam0, bool bParam1)
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

void func_212(int iParam0)
{
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_213(int iParam0)
{
	func_214(iParam0, 0, func_219(iParam0));
}

void func_214(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_181();
	func_217(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_216(iParam0, &uVar0);
	Var1 = { func_215(&uVar0) };
}

struct<16> func_215(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_175(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_174(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_173(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_176(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_179(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_177(*uParam0), 64);
	return Var0;
}

void func_216(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_217(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_177(*uParam0);
	iVar1 = func_179(*uParam0);
	iVar2 = func_176(*uParam0);
	iVar3 = func_175(*uParam0);
	iVar4 = func_174(*uParam0);
	iVar5 = func_173(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_218(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_218(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_187(uParam0, iParam1);
	func_186(uParam0, iParam2);
	func_185(uParam0, iParam3);
	func_184(uParam0, iParam4);
	func_183(uParam0, iParam5);
	func_182(uParam0, iParam6);
}

int func_219(int iParam0)
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

int func_220()
{
	if ((Global_97162 == func_43() && unk_0xD2D57F1D764117B1()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

