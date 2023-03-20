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
	if (unk_0x2EC83C7ACA23E8A4(11))
	{
		func_213();
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
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) != 0)
		{
			unk_0x78C587487CD40B92();
		}
		else if (func_212(unk_0xA0081090911D13E5(), Local_96, 1) < 100f)
		{
			unk_0x78C587487CD40B92();
		}
	}
	if (iLocal_317 != 3)
	{
		if (func_172(Local_96, 26, iLocal_317, 0, 0))
		{
			func_169(26);
		}
		else
		{
			unk_0x78C587487CD40B92();
		}
	}
	else if (func_172(Local_96, 8, 0, 0, 0))
	{
		func_169(8);
	}
	else
	{
		unk_0x78C587487CD40B92();
	}
	iLocal_316 = func_167();
	uLocal_325 = unk_0x6A173E5A316F6DE8(Local_96 - Vector(20f, 20f, 20f), Local_96 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_166();
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			unk_0xF0B830D304A5232C(unk_0x0C1D3C552325765B());
			unk_0x2907F140DB08C232(unk_0x0C1D3C552325765B(), 28);
			unk_0x2907F140DB08C232(unk_0x0C1D3C552325765B(), 13);
			unk_0x2907F140DB08C232(unk_0x0C1D3C552325765B(), 35);
		}
		if (unk_0x43045253AC4C7FF5() || iLocal_89 > 1)
		{
			if (func_146())
			{
				func_145();
				func_213();
			}
			else
			{
				switch (iLocal_89)
				{
					case 0:
						func_142();
						break;
					
					case 1:
						if (func_141())
						{
							func_145();
							func_213();
						}
						else
						{
							func_129();
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
			func_213();
		}
	}
}

void func_1()
{
	if (func_58(unk_0xA0081090911D13E5()) && func_58(iLocal_92))
	{
		if (func_57(unk_0xA0081090911D13E5(), iLocal_92, 1) > 50f)
		{
			func_56(8);
			func_20();
		}
		else if ((unk_0xDF658EB6CA91DFBC() - iLocal_129) > 10000)
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
					unk_0x588D9B1F6CF36C3C(0);
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
		if (unk_0xE80581DE0ACF1F8A())
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_7())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
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
	unk_0x588D9B1F6CF36C3C(0);
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
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
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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
		Global_14443 = func_9();
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

int func_9()
{
	func_10();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_10()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_13(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_12(unk_0xA0081090911D13E5());
			if (func_11(iVar0) && (!func_14(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_11(Global_101553.f_1991.f_539.f_3549))
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

bool func_11(int iParam0)
{
	return iParam0 < 3;
}

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_14(int iParam0)
{
	return Global_35775 == iParam0;
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
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_17()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
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
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
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
		func_52(func_12(unk_0xA0081090911D13E5()), 4, 5);
	}
	else
	{
		func_52(func_12(unk_0xA0081090911D13E5()), 1, 3);
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
	func_213();
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
	if (Global_91445.f_8)
	{
		if (Global_91445.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91445.f_10 > 1)
	{
		return 0;
	}
	Global_91445.f_10++;
	return 1;
}

bool func_23(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
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
		if (unk_0x08BA6DD398CA197C(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_101553.f_6543.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_32(iParam1);
		Var0.f_4 = (unk_0xDF658EB6CA91DFBC() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0x09C86C0C5CA26B1E(&(Var0.f_1), 0);
		Global_101553.f_6543.f_765[Global_101553.f_6543.f_866 /*10*/] = { Var0 };
		Global_101553.f_6543.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_31(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_30(&iVar20);
		iVar21 = func_29(Var10, Global_101553.f_6543.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_27(Global_101553.f_6543.f_765[iVar20 /*10*/]);
			Global_101553.f_6543.f_765[iVar20 /*10*/] = { Var10 };
			func_26(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_25(Var10))
			{
				func_27(Global_101553.f_6543.f_765[iVar20 /*10*/]);
				Global_101553.f_6543.f_765[iVar20 /*10*/] = { Var10 };
				func_26(&Var10);
				return 1;
			}
			else
			{
				if (!func_25(Global_101553.f_6543.f_765[iVar20 /*10*/]))
				{
					Global_101553.f_6543.f_765[iVar20 /*10*/] = { Var10 };
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
	Global_101553.f_7468[iParam0] = 1;
	Global_101553.f_7468.f_236[iParam0] = (unk_0xDF658EB6CA91DFBC() + iParam1);
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
	while (iVar0 < Global_101553.f_6543.f_866)
	{
		if (func_29(Global_101553.f_6543.f_765[iVar0 /*10*/], Global_101553.f_6543.f_765[*iParam0 /*10*/]) == 0)
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
	Var0.f_4 = (unk_0xDF658EB6CA91DFBC() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0x09C86C0C5CA26B1E(&(Var0.f_1), 0);
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
			Global_101553.f_29685.f_2 = 3;
		}
		if (func_40(iParam0, iParam1) != 322)
		{
			func_34(func_40(iParam0, iParam1), Local_86.f_0, Local_86.f_1);
		}
		Global_101541 = iParam1;
		if (Global_101539 == 0)
		{
			if (((Global_101542 == 1 || Global_101542 == 5) || Global_101542 == 11) || Global_101542 == 25)
			{
				func_56(2);
			}
			else if ((Global_101542 == 26 || Global_101542 == 8) || Global_101542 == 17)
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
	if (Global_101553.f_9049[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101553.f_9049[iParam0 /*12*/].f_6 == 11 || Global_101553.f_9049[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101553.f_9049[iParam0 /*12*/].f_5 = 1;
		Global_101553.f_9049[iParam0 /*12*/].f_10 = uParam1;
		Global_101553.f_9049[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_101289 = 0;
	Global_101290 = 0;
	Global_101291 = 0;
	Global_101292 = 0;
	Global_101293 = 0;
	Global_101294 = 0;
	Global_101295 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101553.f_9049.f_3853;
	Global_101553.f_9049.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101553.f_9049[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101553.f_9049[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101289++;
					fVar1 = (fVar1 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101290++;
					fVar2 = (fVar2 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101291++;
					fVar3 = (fVar3 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101292++;
					fVar4 = (fVar4 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101293++;
					fVar5 = (fVar5 + (Global_101553.f_9049[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101294++;
					fVar6 = (fVar6 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101295++;
					fVar7 = (fVar7 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101272 > 0)
	{
		if (Global_101289 == Global_101272)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101273 > 0)
	{
		if (Global_101290 == Global_101273)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101274 > 0)
	{
		if (Global_101291 == Global_101274)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101275 > 0)
	{
		if (Global_101292 == Global_101275)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101276 > 0)
	{
		if (((Global_101293 == Global_101276 || (Global_101276 * 10 / Global_101293) < 41) || Global_101293 > Global_101279) || Global_101293 == Global_101279)
		{
			if (!unk_0x08BA6DD398CA197C(Global_101553.f_9049.f_3856, 14))
			{
				if (Global_101293 == Global_101276)
				{
					unk_0xE8AB1AD861EA93C1(joaat("num_rndevents_completed"), Global_101276, 0);
					unk_0x88B0F0DC270164B7(&(Global_101553.f_9049.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101277 > 0)
	{
		if (Global_101294 == Global_101277)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101278 > 0)
	{
		if (Global_101295 == Global_101278)
		{
			fVar7 = 5f;
		}
	}
	Global_101553.f_9049.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101293 > Global_101279 || Global_101293 == Global_101279)
	{
		iVar9 = Global_101279;
	}
	else
	{
		iVar9 = Global_101293;
	}
	unk_0x10CE8769EE2626C7(joaat("num_missions_completed"), Global_101289, 1);
	unk_0x10CE8769EE2626C7(joaat("num_missions_available"), Global_101272, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_completed"), Global_101290, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_available"), Global_101273, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_completed"), Global_101291, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_available"), Global_101274, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_completed"), Global_101292, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_available"), Global_101275, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_available"), Global_101279, 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_completed"), (Global_101295 + Global_101294), 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_available"), (Global_101278 + Global_101277), 1);
	Global_101296 = (Global_101289 * 100 / Global_101272);
	Global_101298 = ((Global_101291 + Global_101290) * 100 / (Global_101274 + Global_101273));
	Global_101297 = ((Global_101292 + iVar9) * 100 / (Global_101275 + Global_101279));
	Global_101299 = ((Global_101294 + Global_101295) * 100 / (Global_101277 + Global_101278));
	unk_0xA88E0F84F0E0949F(joaat("total_progress_made"), Global_101553.f_9049.f_3853, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_story_missions"), Global_101296, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_ambient_missions"), Global_101297, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_oddjobs"), Global_101298, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853))
	{
		func_37(13, unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853));
	}
	if (!unk_0x426131BF5A0B35D2())
	{
		if (!Global_69617)
		{
			if (func_36() == 2 == 0 && !unk_0xA86CA03D9749EEB3())
			{
				if (unk_0x187CC7D5F9B002AA())
				{
					Global_101287 = 0;
				}
				if (!Global_55816)
				{
					func_22();
				}
			}
		}
	}
}

int func_36()
{
	return Global_25185;
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
	iVar0 = unk_0xC7B7B86D55D4C17E(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC77B359C84812EFE(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_39();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		uVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_39()
{
	return Global_1312731;
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
		unk_0x88B0F0DC270164B7(&(Global_101553.f_25100.f_150[iVar1]), iVar0);
	}
}

void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_44(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x28C1B9853548BD8E(sParam0, ""))
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
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x28C1B9853548BD8E(&(Global_101553.f_25100[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101553.f_25100.f_145 < 9)
	{
		StringCopy(&(Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_4), sParam1, 16);
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_8 = (unk_0xDF658EB6CA91DFBC() + iParam3);
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_9 = iParam5;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_11 = iParam6;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_12 = uParam2;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_13 = iParam7;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_14 = iParam8;
		Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_10 = ((unk_0xDF658EB6CA91DFBC() + iParam3) + iParam4);
		}
		else
		{
			Global_101553.f_25100[Global_101553.f_25100.f_145 /*16*/].f_10 = -1;
		}
		Global_101553.f_25100.f_145++;
		func_45();
	}
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101553.f_25100.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101553.f_25100.f_145)
	{
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[0])
			{
				Global_101553.f_25100.f_146[0] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[1])
			{
				Global_101553.f_25100.f_146[1] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x08BA6DD398CA197C(Global_101553.f_25100[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101553.f_25100[iVar0 /*16*/].f_12 > Global_101553.f_25100.f_146[2])
			{
				Global_101553.f_25100.f_146[2] = Global_101553.f_25100[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_46()
{
	func_10();
	switch (Global_101553.f_1991.f_539.f_3549)
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
		return unk_0x08BA6DD398CA197C(Global_101553.f_25100.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_48(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_101553.f_29685.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x367152330DB70D69(), 64);
	uVar16 = func_51(Var0);
	return uVar16;
}

int func_51(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x3BB8D1C5FAAB25B3(&cParam0))
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
			Global_101553.f_1991.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_101553.f_1991.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 4617;
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
			if (iVar1 != 4617)
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
	iVar0 = Global_2491469[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
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

int func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0x8A3351ECF43DB941(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_56(int iParam0)
{
	Global_101539 = iParam0;
}

float func_57(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	if (!unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC59DF10B4FC39DF8(iParam1, 0) };
	}
	return unk_0x999A157665D69393(Var0, Var3, iParam2);
}

int func_58(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (!unk_0x912AD5A10E7633F0(iParam0, 0))
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
		if (!unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_93, 0))
		{
			func_66(&uLocal_342);
			func_65(&uLocal_132);
			if (iLocal_130 == 0 && !unk_0x16833EFAA58E63DB(uLocal_131))
			{
				uLocal_131 = func_64(iLocal_93, 0, 0);
			}
		}
		else
		{
			func_65(&uLocal_131);
			if (!unk_0x16833EFAA58E63DB(uLocal_132))
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
	if ((iParam2 != 145 && unk_0x16833EFAA58E63DB(uVar0)) && unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_32740[iParam2 /*29*/].f_3)))
	{
		unk_0x6F18BFEFE84565FF(uVar0, &(Global_101553.f_32740[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x91B4D18C6AFDC14C(iParam0);
	if (unk_0x264883409423C6C3(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_63(unk_0xA86CA03D9749EEB3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
		}
		else
		{
			unk_0x77804F3DCBA01DB5(uVar0, 2);
		}
	}
	else if (unk_0x60F161681C368C4E(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_63(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
		unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
	}
	else if (unk_0x1FFA71644D1C7C16(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_63(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
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
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		unk_0x71E206F83114C3D2(*uParam0, 0);
		unk_0x0B57C567D698C373(uParam0);
	}
}

void func_66(var uParam0)
{
	*uParam0 = (unk_0xDF658EB6CA91DFBC() - 5000);
}

int func_67(int iParam0)
{
	if (func_58(iParam0))
	{
		if (unk_0x1F1B2B6E500380C5(iParam0, 0))
		{
			if (!unk_0x601CCD1205C6523F(iParam0))
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
			fVar0 = func_57(unk_0xA0081090911D13E5(), iLocal_92, 1);
			if (fVar0 > (fLocal_124 + fLocal_117))
			{
				if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_93, 0))
				{
					func_56(7);
					func_20();
				}
				else
				{
					func_213();
				}
			}
		}
		else
		{
			fLocal_124 = func_57(unk_0xA0081090911D13E5(), iLocal_92, 1);
			if (unk_0x6DEB8F88FFE09057("RE_CAR_STEAL_SCENE"))
			{
				unk_0x14F2413A60FF70C3(iLocal_93, 0);
				unk_0x7C1793252FA472B6("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_308 == 0)
		{
			if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_92, 40f, 40f, 40f, 0, 1, 0))
			{
				func_84();
				if (iLocal_311 == 0)
				{
					if (!unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_92, 25f, 25f, 25f, 0, 1, 0))
					{
						if (((((unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_93, 0) && unk_0x85F24E93D5789C43(iLocal_92, unk_0xA0081090911D13E5(), 30f)) && func_75(iLocal_92, unk_0xA0081090911D13E5(), 1126825984, 1, 250, 7)) && !unk_0xFFE4F37124DBE6D9(iLocal_92)) && !unk_0x5AE21A1C30DF235D(iLocal_92)) && func_2(&uLocal_134, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							unk_0xC9567EA69F3CC4C2(iLocal_92, sLocal_323, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
							unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
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
		else if (((!unk_0x7298BA0C4D4A4C9E(iLocal_93, iLocal_92, 35f, 35f, 35f, 0, 1, 0) && unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_93, 0)) && !func_74()) && func_2(&uLocal_134, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_72(0);
			unk_0xFF5CE2ECB4FBD4A8(iLocal_92, 0);
			unk_0xFDDE2C1A05E64390(5, uLocal_122, joaat("player"));
			unk_0xB43604F27F1EAE5F(iLocal_92, 1);
			unk_0x0756233E85C362F2(iLocal_92, unk_0xA0081090911D13E5(), 0, 16);
			unk_0x77637031DE326F70(iLocal_92, 1);
			unk_0x4EDE34FBADD967A6(0);
			func_56(7);
			func_20();
		}
		if (unk_0x1FD87E888EB4FC00(iLocal_92, iLocal_93, 0))
		{
			if (!func_19() && func_2(&uLocal_134, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_129 = unk_0xDF658EB6CA91DFBC();
			iLocal_89 = 4;
		}
		else if (unk_0x7298BA0C4D4A4C9E(iLocal_93, iLocal_92, 20f, 20f, 20f, 0, 1, 0))
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
					unk_0x325A2C5B8927293C(iLocal_93, 0);
					unk_0x95C55738CAE00A20(&uLocal_95);
					if (iLocal_308 == 0)
					{
						unk_0xA4FE049E1F729261(0, iLocal_93, 20000, -1, 2f, 8, 0);
					}
					else
					{
						unk_0xA4FE049E1F729261(0, iLocal_93, 20000, -1, 2f, 262152, 0);
					}
					unk_0x1F1428EF73399830(0, iLocal_93, fLocal_114, 786485);
					unk_0x70B222EEA46C37FA(uLocal_95);
					unk_0x3998B29E786DFD96(iLocal_92, uLocal_95);
					unk_0x7DFD14B8B873D6B5(&uLocal_95);
					unk_0x77637031DE326F70(iLocal_92, 1);
				}
			}
			else
			{
				switch (iLocal_308)
				{
					case 0:
						if ((((iLocal_311 == 1 && !func_69(iLocal_92, -2017877118)) && !unk_0xFFE4F37124DBE6D9(iLocal_92)) && !unk_0x5AE21A1C30DF235D(iLocal_92)) && func_2(&uLocal_134, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (unk_0x85F24E93D5789C43(iLocal_92, unk_0xA0081090911D13E5(), 30f) && unk_0x21178DF77817BF39(iLocal_92, -875674219) == 7)
							{
								unk_0xC9567EA69F3CC4C2(iLocal_92, sLocal_323, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_309 = unk_0xDF658EB6CA91DFBC();
							iLocal_308++;
						}
						else
						{
							func_84();
						}
						break;
					
					case 1:
						if (((((unk_0xDF658EB6CA91DFBC() - iLocal_309) > 10000 && !func_69(iLocal_92, -2017877118)) && !unk_0xFFE4F37124DBE6D9(iLocal_92)) && !unk_0x5AE21A1C30DF235D(iLocal_92)) && func_2(&uLocal_134, "REBTHAU", sLocal_305, 4, 0, 0, 0))
						{
							if (unk_0x85F24E93D5789C43(iLocal_92, unk_0xA0081090911D13E5(), 30f))
							{
								func_72(0);
								unk_0xC9567EA69F3CC4C2(iLocal_92, sLocal_324, "THANKS_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_309 = unk_0xDF658EB6CA91DFBC();
							iLocal_308++;
						}
						else
						{
							func_72(1);
						}
						break;
					
					case 2:
						if (((((unk_0xDF658EB6CA91DFBC() - iLocal_309) > 10000 && !func_69(iLocal_92, -2017877118)) && !unk_0xFFE4F37124DBE6D9(iLocal_92)) && !unk_0x5AE21A1C30DF235D(iLocal_92)) && func_2(&uLocal_134, "REBTHAU", sLocal_306, 4, 0, 0, 0))
						{
							if (unk_0x85F24E93D5789C43(iLocal_92, unk_0xA0081090911D13E5(), 30f))
							{
								func_72(0);
								unk_0xC9567EA69F3CC4C2(iLocal_92, sLocal_322, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
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
		if (unk_0x21178DF77817BF39(iParam0, iParam1) == 1 || unk_0x21178DF77817BF39(iParam0, iParam1) == 0)
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
		if (!unk_0xEB361B4BD195A4D3(iParam0))
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
	if ((unk_0xDF658EB6CA91DFBC() - iLocal_128) < 4000)
	{
		return 0;
	}
	if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_93, 1))
	{
		return 0;
	}
	if (func_58(iLocal_91) && unk_0x12AE3D700F6A2545(iLocal_91))
	{
		return 0;
	}
	if (!unk_0x6315EBE95A97CADF(iLocal_93, -1, 0))
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
			if (!unk_0x5D586EFF7D308A80(iLocal_92) && func_58(unk_0xA0081090911D13E5()))
			{
				unk_0xF6C043D83EDAD90F(iLocal_92, unk_0x65333878E8C653BC(unk_0xA0081090911D13E5()));
				unk_0x41E82193D5A8597A(iLocal_92, 1);
				unk_0xF75E59310C395505(func_73(), 2f, -1082130432, -1082130432);
				unk_0xD5DC2873808A9CB5(iLocal_92, unk_0xA0081090911D13E5(), -1, 0, 2);
			}
		}
		else if (unk_0x5D586EFF7D308A80(iLocal_92))
		{
			unk_0x988206841442D7CE(iLocal_92);
		}
	}
}

var func_73()
{
	return unk_0x67D12A4DCB18DE93(unk_0x4A0FB18E33FE5805());
}

int func_74()
{
	if (iLocal_317 == 3)
	{
		if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), -1875.858f, 262.3736f, 82.96029f, -1927.379f, 234.7951f, 90.71558f, 50.25f, 0, 1, 0))
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
	Var1 = { unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_76(&(Local_44[iVar4 /*4*/]), Var1, iParam1, &(Local_44[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xDF658EB6CA91DFBC() - Local_44[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0x985511F0122BF34F(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x41C19A4A352B09E1(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x60F161681C368C4E(iVar7))
	{
		func_58(iVar7);
		if (unk_0x90897FA118314142(iVar7) == iParam4)
		{
			if (bLocal_85)
			{
				unk_0x952173F2EA797FE5(Param1, unk_0xC59DF10B4FC39DF8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0xDF658EB6CA91DFBC();
			return 1;
		}
		return 0;
	}
	if (unk_0x264883409423C6C3(iVar7))
	{
		func_58(iVar7);
		if (unk_0x39FEE545B315414E(iParam4, 0))
		{
			if (unk_0x5293F3C38E4842B3(iVar7) == unk_0xF8DB47D339B8B953(iParam4, 0))
			{
				if (bLocal_85)
				{
					unk_0x952173F2EA797FE5(Param1, unk_0xC59DF10B4FC39DF8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0xDF658EB6CA91DFBC();
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
		iVar0 = unk_0xB5BF1B58C833F7A9(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xC59DF10B4FC39DF8(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x7560B9B6FB83879C(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xC59DF10B4FC39DF8(iParam0, 1);
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
	
	Var0 = { func_81(unk_0xC59DF10B4FC39DF8(iParam1, 1) - unk_0xC59DF10B4FC39DF8(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xB86A69343E7FBB9A(iParam0) };
	}
	else
	{
		Var3 = { func_81(unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 5f, 0f) - unk_0x7560B9B6FB83879C(iParam0, 31086, 0f, 0f, 0f)) };
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
			unk_0xD3032BAC1ECE011F(iLocal_92);
		}
		if ((((!func_69(iLocal_92, -2017877118) && !unk_0x85F24E93D5789C43(iLocal_92, unk_0xA0081090911D13E5(), 20f)) && unk_0x21178DF77817BF39(iLocal_92, -875674219) == 7) && !unk_0xFFE4F37124DBE6D9(iLocal_92)) && !unk_0x5AE21A1C30DF235D(iLocal_92))
		{
			unk_0xCD49DDA254A161AF(iLocal_92, unk_0xA0081090911D13E5(), 0);
			unk_0xD5DC2873808A9CB5(iLocal_92, unk_0xA0081090911D13E5(), -1, 0, 2);
		}
	}
}

void func_85(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0xDF658EB6CA91DFBC();
	}
	if (unk_0x16833EFAA58E63DB(uParam0))
	{
		iVar0 = (unk_0xDF658EB6CA91DFBC() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0x122D9C2B75D6BD65(uParam0) != 255)
				{
					unk_0x9F80CD84AD2B3DA4(uParam0, 255);
				}
			}
			else if (unk_0x122D9C2B75D6BD65(uParam0) != 0)
			{
				unk_0x9F80CD84AD2B3DA4(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0x122D9C2B75D6BD65(uParam0) != 255)
			{
				unk_0x9F80CD84AD2B3DA4(uParam0, 255);
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
			unk_0x797AA7825A5A2D95(iLocal_91, 2, 0);
			unk_0xD3032BAC1ECE011F(iLocal_91);
			if (func_67(iLocal_93))
			{
				if (iLocal_317 == 2)
				{
					if (unk_0xC8FF9EAEF62B118C(iLocal_93))
					{
						unk_0x26B9AD2BE477CF10(iLocal_93);
					}
					unk_0x11DDC8BDE5CBDCB5(1, "RE_BikeThief2");
				}
				if (unk_0x1FD87E888EB4FC00(iLocal_91, iLocal_93, 1))
				{
					unk_0x41322B2D7C88AFF1(iLocal_91);
				}
			}
			unk_0x77637031DE326F70(iLocal_91, 1);
			unk_0x69E46DC398F0B2BD(iLocal_91, unk_0xA0081090911D13E5(), 200f, -1, 0, 0);
			iLocal_120 = 1;
		}
		else
		{
			if (((((iLocal_121 == 0 && func_57(iLocal_91, unk_0xA0081090911D13E5(), 1) < 30f) && !unk_0xFFE4F37124DBE6D9(iLocal_91)) && func_69(iLocal_91, 1805844857)) && !func_19()) && func_2(&uLocal_134, "REBTHAU", sLocal_303, 4, 0, 0, 0))
			{
				iLocal_121 = 1;
			}
			if (func_57(iLocal_91, unk_0xA0081090911D13E5(), 1) > 50f)
			{
				func_87(&iLocal_91, 1, 0, 1);
			}
		}
	}
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD3FACCDA4D66AEAD(*iParam0))
	{
		if (!unk_0xEB361B4BD195A4D3(*iParam0))
		{
			unk_0xEDA527A4943E849D(*iParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEB6B0D85F7D79F78(*iParam0);
			}
			unk_0x77637031DE326F70(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xFF5CE2ECB4FBD4A8(*iParam0, 0);
			}
		}
		unk_0x0689C659BF2D3BF7(iParam0);
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
			if (unk_0x7298BA0C4D4A4C9E(iLocal_92, unk_0xA0081090911D13E5(), 25f, 25f, 25f, 0, 1, 0) && func_2(&uLocal_134, "REBTHAU", sLocal_307, 4, 0, 0, 0))
			{
			}
			unk_0x6CD01BB6BE485005(iLocal_92, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
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
	if (unk_0x16833EFAA58E63DB(uParam0))
	{
		if ((unk_0xD3FACCDA4D66AEAD(iParam1) && unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5())) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (unk_0x264883409423C6C3(iParam1))
			{
				if (unk_0x1F1B2B6E500380C5(unk_0x5293F3C38E4842B3(iParam1), 0))
				{
					fVar1 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(iParam1, 1), 1);
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
						unk_0x3AE9C8E8575D2576(uParam0, 1);
						unk_0x9F80CD84AD2B3DA4(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x3AE9C8E8575D2576(uParam0, 0);
						unk_0x9F80CD84AD2B3DA4(uParam0, 255);
					}
				}
			}
			else if (unk_0x60F161681C368C4E(iParam1))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0x90897FA118314142(iParam1)))
				{
					fVar1 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(iParam1, 1), 1);
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
						unk_0x3AE9C8E8575D2576(uParam0, 1);
						unk_0x9F80CD84AD2B3DA4(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x3AE9C8E8575D2576(uParam0, 0);
						unk_0x9F80CD84AD2B3DA4(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_90()
{
	func_213();
}

void func_91(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*iParam0))
	{
		if (!unk_0x18C670321BC98FDA(*iParam0))
		{
			unk_0x7B17650F15A8876D(*iParam0, 1, 0);
		}
		if (func_67(*iParam0))
		{
			if (unk_0x18C670321BC98FDA(*iParam0) && unk_0x687CB62D355FD7FD(*iParam0, 1))
			{
				if (func_58(unk_0xA0081090911D13E5()))
				{
					if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), *iParam0, 0))
					{
						unk_0x615DE34FC732CF11(iParam0);
						return;
					}
				}
				unk_0xEFA1F34A28EE763C(iParam0);
			}
		}
		else
		{
			if (func_58(unk_0xA0081090911D13E5()))
			{
				if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), *iParam0, 0))
				{
					unk_0x615DE34FC732CF11(iParam0);
					return;
				}
			}
			unk_0xEFA1F34A28EE763C(iParam0);
		}
	}
}

void func_92(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*iParam0))
	{
		if (!unk_0x912AD5A10E7633F0(*iParam0, 0))
		{
			unk_0xEDA527A4943E849D(*iParam0, 0);
		}
		if (!unk_0x18C670321BC98FDA(*iParam0))
		{
			unk_0x7B17650F15A8876D(*iParam0, 1, 0);
		}
		unk_0x4E82D83B086B5C93(iParam0);
	}
}

void func_93(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
		{
			return;
		}
	}
	if (unk_0xFA597181B01136F0())
	{
		unk_0xB3FF3FBDAFD0ADCF(iParam2);
		unk_0x33F96CD17F6BA7BD("FocusIn");
		unk_0x7C1793252FA472B6("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xFF4920BAFCB15F65("FocusOut", 0, 0);
			unk_0xAB16AADE80707D47(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x841EA440AD1F0294(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD28EDDD3F7264249(sVar0))
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD28EDDD3F7264249(uParam0->f_3))
	{
		if (func_94(uParam0->f_3))
		{
			unk_0x94724F7C938EBE34(1);
		}
	}
	if (!unk_0xD28EDDD3F7264249(sVar0))
	{
		if (func_94(sVar0))
		{
			unk_0x94724F7C938EBE34(1);
		}
	}
}

bool func_94(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

int func_95()
{
	if (func_57(iLocal_93, unk_0xA0081090911D13E5(), 1) > (fLocal_117 + 100f))
	{
		return 1;
	}
	if (func_57(iLocal_93, unk_0xA0081090911D13E5(), 1) > fLocal_117)
	{
		if (((unk_0x2FB5C9A04733E5EF(iLocal_92, sLocal_321, "IDLE_A", 3) && unk_0xAC6AEF29F754B011(iLocal_92, sLocal_321, "IDLE_A") > 0.99f) || (unk_0x2FB5C9A04733E5EF(iLocal_92, sLocal_321, "IDLE_B", 3) && unk_0xAC6AEF29F754B011(iLocal_92, sLocal_321, "IDLE_B") > 0.99f)) || (unk_0x2FB5C9A04733E5EF(iLocal_92, sLocal_321, "IDLE_C", 3) && unk_0xAC6AEF29F754B011(iLocal_92, sLocal_321, "IDLE_C") > 0.99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_96()
{
	if ((((((((((iLocal_127 > -1 && (unk_0xDF658EB6CA91DFBC() - iLocal_127) > 5000) && !func_19()) && func_58(iLocal_91)) && func_58(iLocal_92)) && func_67(iLocal_93)) && !unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_91, 13f, 13f, 13f, 0, 1, 0)) && !unk_0x7298BA0C4D4A4C9E(iLocal_92, iLocal_91, 13f, 13f, 13f, 0, 1, 0)) && unk_0x1FD87E888EB4FC00(iLocal_91, iLocal_93, 0)) && unk_0x7298BA0C4D4A4C9E(iLocal_92, unk_0xA0081090911D13E5(), 8f, 8f, 8f, 0, 1, 0)) && func_2(&uLocal_134, "REBTHAU", sLocal_302, 4, 0, 0, 0))
	{
		iLocal_127 = -1;
	}
}

void func_97()
{
	if (func_98())
	{
		iLocal_128 = unk_0xDF658EB6CA91DFBC();
		func_65(&uLocal_131);
		func_93(&uLocal_330, 0, 0);
		unk_0xF25FB6A7A13A935D(0);
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
		{
			iLocal_94 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 1);
			unk_0x7B17650F15A8876D(iLocal_94, 1, 1);
		}
		if (func_58(iLocal_92))
		{
			unk_0x5CEE5F34DA93AE97(iLocal_92);
		}
		if ((func_58(iLocal_91) && !func_19()) && func_2(&uLocal_134, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_89 = 3;
	}
	else
	{
		if (((iLocal_326 == 0 && unk_0x16833EFAA58E63DB(uLocal_131)) && func_58(unk_0xA0081090911D13E5())) && func_58(iLocal_91))
		{
			if (func_57(unk_0xA0081090911D13E5(), iLocal_91, 1) < 30f || unk_0xB53CC268A7051C62(unk_0xC59DF10B4FC39DF8(iLocal_91, 1), 10f, 1))
			{
				iLocal_326 = 1;
				unk_0x2FE9515E72A14285(uLocal_131, iLocal_326);
			}
		}
		if (((iLocal_317 == 2 && func_58(iLocal_91)) && func_67(iLocal_93)) && unk_0x1FD87E888EB4FC00(iLocal_91, iLocal_93, 0))
		{
			if (iLocal_312 == 0)
			{
				unk_0x2316DD642966B659(iLocal_93, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_312 = 1;
				Local_313 = { unk_0xC1BCCA8FE6DF9F3F(unk_0xC47221AEE3FE706F(1, "RE_BikeThief2"), unk_0xEF96201841DA11AF(1, "RE_BikeThief2")) };
			}
			else if (!unk_0xC8FF9EAEF62B118C(iLocal_93) || func_212(iLocal_93, Local_313, 1) < 5f)
			{
				if (unk_0xC8FF9EAEF62B118C(iLocal_93))
				{
					unk_0x26B9AD2BE477CF10(iLocal_93);
				}
				unk_0x96F7890AEA06DDAE(iLocal_91, iLocal_93, unk_0xA0081090911D13E5(), 8, fLocal_114, 786468, 10f, 1f, 0);
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
			if (unk_0x1FD87E888EB4FC00(iLocal_91, iLocal_93, 0))
			{
				iLocal_344 = 1;
			}
		}
		else if (!unk_0x1FD87E888EB4FC00(iLocal_91, iLocal_93, 0))
		{
			return 1;
		}
		if (unk_0x4AEC0F4FC7FE62C7(iLocal_91, unk_0xA0081090911D13E5(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()
{
	if ((func_58(iLocal_91) && func_67(iLocal_93)) && unk_0x1FD87E888EB4FC00(iLocal_91, iLocal_93, 0))
	{
		if (iLocal_119)
		{
			if (!unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_91, 40f, 40f, 40f, 0, 1, 0))
			{
				fLocal_114 = fLocal_116;
				unk_0x3CAD3CEB48DD58A0(iLocal_91, fLocal_114);
				unk_0xD5DC2873808A9CB5(iLocal_91, unk_0xA0081090911D13E5(), 20000, 16, 2);
				iLocal_119 = 0;
			}
		}
		else if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_91, 40f, 40f, 40f, 0, 1, 0))
		{
			fLocal_114 = fLocal_115;
			unk_0x3CAD3CEB48DD58A0(iLocal_91, fLocal_114);
			unk_0xD5DC2873808A9CB5(iLocal_91, unk_0xA0081090911D13E5(), 20000, 16, 2);
			iLocal_119 = 1;
		}
	}
}

void func_100()
{
	if (((((((((iLocal_125 < 5 && !func_19()) && func_58(iLocal_91)) && func_58(iLocal_92)) && func_67(iLocal_93)) && unk_0x1FD87E888EB4FC00(iLocal_91, iLocal_93, 0)) && unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_91, 13f, 13f, 13f, 0, 1, 0)) && !unk_0x7298BA0C4D4A4C9E(iLocal_92, iLocal_91, 13f, 13f, 13f, 0, 1, 0)) && (unk_0xDF658EB6CA91DFBC() - iLocal_126) > 15000) && func_2(&uLocal_134, "REBTHAU", sLocal_304, 4, 0, 0, 0))
	{
		if (unk_0x21178DF77817BF39(iLocal_91, -1273030092) == 1 && !unk_0xCE5B5C7B05F480D2(iLocal_91))
		{
			unk_0x04EAFCCD1700249A(iLocal_91, unk_0xA0081090911D13E5(), 0, 0f, 0f, 0f, 15f, 50, 1, -753768974);
		}
		iLocal_126 = unk_0xDF658EB6CA91DFBC();
		iLocal_125++;
	}
}

void func_101()
{
	if ((((iLocal_310 == 0 && func_58(iLocal_92)) && func_58(iLocal_91)) && func_67(iLocal_93)) && unk_0x1FD87E888EB4FC00(iLocal_91, iLocal_93, 0))
	{
		if (iLocal_327 == 0)
		{
			if (func_2(&uLocal_134, "REBTHAU", sLocal_299, 4, func_104(), 0, 0))
			{
				unk_0xB0993C95A7DBF879(iLocal_92);
				unk_0x95C55738CAE00A20(&uLocal_95);
				unk_0xD5DC2873808A9CB5(0, iLocal_91, -1, 2048, 2);
				unk_0xF58CA5EA1A5B2762(0, Local_105, 2f, 20000, 1193033728, 1056964608);
				unk_0xCD49DDA254A161AF(0, iLocal_93, 1000);
				unk_0xC9567EA69F3CC4C2(0, sLocal_319, sLocal_320, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC9567EA69F3CC4C2(0, sLocal_321, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC9567EA69F3CC4C2(0, sLocal_321, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC9567EA69F3CC4C2(0, sLocal_321, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC9567EA69F3CC4C2(0, sLocal_321, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC9567EA69F3CC4C2(0, sLocal_321, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC9567EA69F3CC4C2(0, sLocal_321, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xC9567EA69F3CC4C2(0, sLocal_321, "IDLE_C", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x70B222EEA46C37FA(uLocal_95);
				unk_0x3998B29E786DFD96(iLocal_92, uLocal_95);
				unk_0x7DFD14B8B873D6B5(&uLocal_95);
				iLocal_126 = unk_0xDF658EB6CA91DFBC();
				iLocal_127 = unk_0xDF658EB6CA91DFBC();
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
		else if (func_58(unk_0xA0081090911D13E5()))
		{
			if (func_57(unk_0xA0081090911D13E5(), iLocal_92, 1) < 30f)
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
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x8C620099CBB45602();
		Global_16756 = 0;
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

int func_104()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 100f, 100f, 20f };
	if (!unk_0xEB361B4BD195A4D3(iLocal_92))
	{
		if (unk_0x7298BA0C4D4A4C9E(iLocal_92, unk_0xA0081090911D13E5(), Var1, 0, 1, 0))
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
	if ((func_58(iLocal_91) && func_67(iLocal_93)) && unk_0x1FD87E888EB4FC00(iLocal_91, iLocal_93, 0))
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
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
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
	
	if (uParam0->f_1 && unk_0xFA597181B01136F0())
	{
		if (unk_0xDF658EB6CA91DFBC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD28EDDD3F7264249(iVar0))
	{
		if (!unk_0xA86CA03D9749EEB3())
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
		func_128();
	}
	if (func_127(iParam1) && unk_0x374C36A4A2089997(iParam1))
	{
		iVar1 = 0;
		if (unk_0x60F161681C368C4E(iParam1))
		{
			unk_0xE0E48FD2AE97A676(unk_0x90897FA118314142(iParam1));
			unk_0x8596E031C10DA22B(unk_0x90897FA118314142(iParam1), 1);
			if (unk_0x79C6BB40BB05BB73(unk_0x90897FA118314142(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x264883409423C6C3(iParam1))
		{
			unk_0x6DF8E06AA9365A4A(unk_0x5293F3C38E4842B3(iParam1));
			if (unk_0xC848DCB38697A02D(unk_0x5293F3C38E4842B3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1FFA71644D1C7C16(iParam1))
		{
			unk_0x7A68038203474D14(unk_0xD6F8F75E3496EEF6(iParam1));
			if (unk_0x18E8AE05B615030F(unk_0xD6F8F75E3496EEF6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xFA597181B01136F0())
		{
			if (func_122(uParam0, bParam7, bParam9, 0))
			{
				func_118(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_114(iVar0))
				{
					if ((unk_0xD28EDDD3F7264249(uParam0->f_3) && !unk_0xD28EDDD3F7264249(iVar0)) && unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						if ((iVar1 && !unk_0x598A9E990F05F82C()) && uParam8)
						{
							if (!func_94(iVar0))
							{
								func_113(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x28C1B9853548BD8E("CMN_HINT", iVar0))
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
				if (unk_0xD28EDDD3F7264249(uParam0->f_3) && !unk_0xD28EDDD3F7264249(iVar0))
				{
					if (((unk_0x7DB334F5F834726A(iParam1) && iVar1) && !unk_0x598A9E990F05F82C()) && uParam8)
					{
						if (!func_94(iVar0))
						{
							func_113(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x28C1B9853548BD8E("CMN_HINT", iVar0))
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
			if (!unk_0xD28EDDD3F7264249(sParam5))
			{
				if (func_94(sParam5))
				{
					unk_0x94724F7C938EBE34(1);
				}
			}
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
			{
				if (unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(3) == 3 || unk_0x819C3E64C255229B(3) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(6) == 3 || unk_0x819C3E64C255229B(6) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(4) == 3 || unk_0x819C3E64C255229B(4) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA8023042566B2548(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(5) == 3 || unk_0x819C3E64C255229B(5) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(2) == 3 || unk_0x819C3E64C255229B(2) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9A86F9EDFD899454() == 3 || unk_0x9A86F9EDFD899454() == 4)
				{
					func_93(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam7, bParam9, 0))
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
	if (func_127(unk_0xA0081090911D13E5()))
	{
		unk_0x5CEE5F34DA93AE97(unk_0xA0081090911D13E5());
	}
	if (unk_0xFA597181B01136F0())
	{
		unk_0x841EA440AD1F0294(1);
		unk_0xB3FF3FBDAFD0ADCF(0);
		unk_0x7C1793252FA472B6("HINT_CAM_SCENE");
		unk_0x33F96CD17F6BA7BD("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xFF4920BAFCB15F65("FocusOut", 0, 0);
			unk_0xAB16AADE80707D47(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0xDF658EB6CA91DFBC()
		{
			return 1;
		}
	}
	return 0;
}

int func_112(bool bParam0)
{
	switch (Global_35775)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101553.f_8904.f_100++;
			}
			return Global_101553.f_8904.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101553.f_8904.f_101++;
			}
			return Global_101553.f_8904.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101553.f_8904.f_102++;
			}
			return Global_101553.f_8904.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_113(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

int func_114(char* sParam0)
{
	if (!func_115(1, 1, 0))
	{
		if ((!unk_0x509383441597090D(sParam0) && func_94(sParam0)) || func_94("CMN_HINT"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return 0;
	}
	switch (Global_35775)
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
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xC740F8182E7E9681())
	{
		return 0;
	}
	if (func_117(0))
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (unk_0x04781D6F82022E77())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (unk_0xA96867DD0A63C62C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52997)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
		{
			if (unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(3) == 3 || unk_0x819C3E64C255229B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(6) == 3 || unk_0x819C3E64C255229B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(4) == 3 || unk_0x819C3E64C255229B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA8023042566B2548(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(5) == 3 || unk_0x819C3E64C255229B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(2) == 3 || unk_0x819C3E64C255229B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9A86F9EDFD899454() == 3 || unk_0x9A86F9EDFD899454() == 4)
			{
				return 0;
			}
			if (unk_0x1D8A198427AB65AD())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_116()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_117(int iParam0)
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

void func_118(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x912AD5A10E7633F0(iParam1, 0))
	{
		func_93(uParam0, 0, 0);
	}
	if (func_121(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x60F161681C368C4E(iParam1))
		{
			iVar0 = unk_0x90897FA118314142(iParam1);
			if (!unk_0x39FEE545B315414E(iVar0, 0))
			{
				if (unk_0x54F0AEFB11EA090A(iVar0))
				{
					if (!func_119())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x1F1602FD864AA4C1(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x841EA440AD1F0294(0);
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
	unk_0x7F06EF9578636ADC(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xD5DC2873808A9CB5(unk_0xA0081090911D13E5(), iParam1, -1, iVar3, iVar4);
	unk_0xFF4920BAFCB15F65("FocusIn", 0, 0);
	unk_0xC94C39C53546E775("HINT_CAM_SCENE");
	unk_0xAB16AADE80707D47(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_119()
{
	return func_120(unk_0x0C1D3C552325765B());
}

int func_120(var uParam0)
{
	if (unk_0x705BC1BB91F530B5(unk_0x21F191D9AFF98B5E(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_121(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xDF658EB6CA91DFBC() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
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
			if ((unk_0xDF658EB6CA91DFBC() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
					{
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
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
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || unk_0x77B21D2C209C7D47(unk_0xA0081090911D13E5(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0xDF658EB6CA91DFBC() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
					{
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || unk_0x77B21D2C209C7D47(unk_0xA0081090911D13E5(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_124(bParam1, bParam2, bParam3))
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
		func_128();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B()))
		{
			unk_0xABC36CFE4F3421A0(0, 140, 1);
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			if (unk_0x7682E36A3D0D896F(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xABC36CFE4F3421A0(0, 80, 1);
		if (unk_0x16FD96008A4787C8())
		{
			if (unk_0x7682E36A3D0D896F(0, 80))
			{
				unk_0x841EA440AD1F0294(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B()))
		{
			unk_0xABC36CFE4F3421A0(0, 140, 1);
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			if (unk_0xFEB2816B7220E998(0, 80) && unk_0xDF658EB6CA91DFBC() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_115(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xABC36CFE4F3421A0(0, 80, 1);
		if (unk_0x16FD96008A4787C8())
		{
			if (unk_0xFEB2816B7220E998(0, 80) && unk_0xDF658EB6CA91DFBC() > Global_116)
			{
				unk_0x841EA440AD1F0294(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		if (unk_0x264883409423C6C3(iParam0))
		{
			if (unk_0x1F1B2B6E500380C5(unk_0x5293F3C38E4842B3(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x60F161681C368C4E(iParam0))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0x90897FA118314142(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x1FFA71644D1C7C16(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_128()
{
	unk_0x88B0F0DC270164B7(&Global_2314, 4);
}

void func_129()
{
	if (unk_0xD3FACCDA4D66AEAD(iLocal_91))
	{
		if (unk_0xEB361B4BD195A4D3(iLocal_91))
		{
			func_145();
			func_213();
		}
		else if (func_140())
		{
			if (func_9() == 0)
			{
				func_139(&uLocal_134, 0, unk_0xA0081090911D13E5(), "MICHAEL", 0, 1);
				sLocal_301 = "REBTH_RESPM";
			}
			else if (func_9() == 1)
			{
				func_139(&uLocal_134, 0, unk_0xA0081090911D13E5(), "FRANKLIN", 0, 1);
				sLocal_301 = "REBTH_RESPF";
			}
			else if (func_9() == 2)
			{
				func_139(&uLocal_134, 0, unk_0xA0081090911D13E5(), "TREVOR", 0, 1);
				sLocal_301 = "REBTH_RESPT";
			}
			if (unk_0x1F1B2B6E500380C5(iLocal_93, 0) && !unk_0xEB361B4BD195A4D3(iLocal_91))
			{
				if (iLocal_317 == 2)
				{
					unk_0xA4FE049E1F729261(iLocal_91, iLocal_93, 20000, -1, 1073741824, 1, 0);
				}
				else
				{
					unk_0x95C55738CAE00A20(&uLocal_95);
					unk_0xA4FE049E1F729261(0, iLocal_93, 20000, -1, 1073741824, 1, 0);
					unk_0x96F7890AEA06DDAE(0, iLocal_93, unk_0xA0081090911D13E5(), 8, fLocal_114, 786468, 10f, 1f, 0);
					unk_0x70B222EEA46C37FA(uLocal_95);
					unk_0x3998B29E786DFD96(iLocal_91, uLocal_95);
					unk_0x7DFD14B8B873D6B5(&uLocal_95);
					unk_0x77637031DE326F70(iLocal_91, 1);
				}
			}
			func_65(&uLocal_133);
			uLocal_131 = func_61(iLocal_91, 1, 145);
			unk_0x2FE9515E72A14285(uLocal_131, iLocal_326);
			unk_0xF25FB6A7A13A935D(2);
			if (iLocal_317 == 1)
			{
				unk_0xC4B3EC24D2EFC927(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 0, 0, 1);
			}
			iLocal_89 = 2;
			func_130(1);
		}
	}
}

int func_130(int iParam0)
{
	if (func_133())
	{
		Global_101543 = 1;
		Global_101540 = unk_0xDF658EB6CA91DFBC();
		if (func_41(Global_101542))
		{
			func_131(0);
		}
		unk_0xA57E42D9C41110A9(1, "RE_TITLE");
		if (iParam0 && func_41(Global_101542))
		{
			unk_0x07FD940F5798C7D3();
		}
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101553.f_29685.f_2 < 3)
			{
				if (!unk_0x38716BDBCC755DD9())
				{
					func_113(func_132(iParam0), -1);
					Global_101553.f_29685.f_2++;
					unk_0x88B0F0DC270164B7(&Global_101549, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x08BA6DD398CA197C(Global_101549, 1))
			{
				if (!unk_0x38716BDBCC755DD9())
				{
					func_113(func_132(iParam0), -1);
					Global_101553.f_29685.f_3++;
					unk_0x88B0F0DC270164B7(&Global_101549, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x08BA6DD398CA197C(Global_101549, 2))
			{
				if (!unk_0x38716BDBCC755DD9())
				{
					func_113(func_132(iParam0), -1);
					Global_101553.f_29685.f_4++;
					unk_0x88B0F0DC270164B7(&Global_101549, 2);
				}
			}
			break;
	}
}

char* func_132(int iParam0)
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

int func_133()
{
	switch (func_134(&Global_25244, 0, 5, 0, unk_0xEAE20F1125B83888()))
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

int func_134(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89217.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_138(0))
		{
			return 0;
		}
		Global_35739++;
		*uParam0 = Global_35739;
		unk_0x8F2CF88C37D4A413(unk_0x4A0FB18E33FE5805(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xD74A648A7073D681(8);
		}
		Global_35775 = iParam2;
		Global_35737 = *uParam0;
		Global_35738 = iParam4;
		Global_35736 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35736 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35736)
			{
				if (Global_35742[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35737 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_136(iParam2))
		{
			return 0;
		}
		if (Global_35736 == 8)
		{
			return 0;
		}
		Global_35739++;
		*uParam0 = Global_35739;
		Global_35742[Global_35736 /*4*/] = Global_35739;
		Global_35742[Global_35736 /*4*/].f_1 = iParam1;
		Global_35742[Global_35736 /*4*/].f_2 = iParam2;
		Global_35742[Global_35736 /*4*/].f_3 = 0;
		Global_35736++;
		if (iParam4 != 0)
		{
			func_135(uParam0, iParam4);
		}
	}
	return 2;
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35736 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35736)
	{
		if (Global_35742[iVar0 /*4*/] == *uParam0)
		{
			Global_35742[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_136(int iParam0)
{
	return func_137(iParam0, Global_35775);
}

int func_137(int iParam0, int iParam1)
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

int func_138(int iParam0)
{
	if (Global_35775 == 15)
	{
		return 0;
	}
	if (func_136(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_139(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

int func_140()
{
	switch (iLocal_317)
	{
		case 1:
			if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), 365.9538f, -1971.716f, 18.34454f, 526.409f, -1861.941f, 34.52906f, 100f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), 886.1401f, -229.9373f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), -1969.382f, 382.1331f, 68.15017f, -1878.152f, 158.4052f, 104.8504f, 100f, 0, 1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_141()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 16f, 16f, 6f };
	Var3 = { -16f, -16f, -6f };
	if (func_58(iLocal_91))
	{
		if (unk_0x4AEC0F4FC7FE62C7(iLocal_91, unk_0xA0081090911D13E5(), 1))
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
		if (unk_0x4AEC0F4FC7FE62C7(iLocal_93, unk_0xA0081090911D13E5(), 1))
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
		if (unk_0xB53CC268A7051C62(unk_0x7560B9B6FB83879C(iLocal_92, 31086, 0f, 0f, 0f), 3f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0x7560B9B6FB83879C(iLocal_92, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + unk_0x7560B9B6FB83879C(iLocal_92, 31086, 0f, 0f, 0f) };
		if ((unk_0x933D5519D19639FF(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x933D5519D19639FF(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0x933D5519D19639FF(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x2A2F75DC44E632BC(unk_0x7560B9B6FB83879C(iLocal_92, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0xA0BE515094F295FB(-1, unk_0x7560B9B6FB83879C(iLocal_92, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0x9337892D1C5EA0F0(iLocal_92))
		{
			return 1;
		}
		if (unk_0x4AEC0F4FC7FE62C7(iLocal_92, unk_0xA0081090911D13E5(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_142()
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
		unk_0xE4EC3FD6A99953E8(Local_102 - Vector(20f, 20f, 20f), Local_102 + Vector(20f, 20f, 20f), 0, 1);
		unk_0xF5E9CA2257E6786D(Local_102 - Vector(20f, 20f, 20f), Local_102 + Vector(20f, 20f, 20f), 0);
		unk_0x0B17BC5D018E224B(Local_102, 20f, 1, 0, 0, 0);
		iLocal_118 = 1;
	}
	unk_0x491067A8E906F22D(joaat("g_m_y_strpunk_01"));
	unk_0x491067A8E906F22D(joaat("a_m_y_beachvesp_01"));
	unk_0x491067A8E906F22D(iLocal_90);
	if ((((unk_0x2C1B5A0D3E233FC3(joaat("g_m_y_strpunk_01")) && unk_0x2C1B5A0D3E233FC3(joaat("a_m_y_beachvesp_01"))) && unk_0x2C1B5A0D3E233FC3(iLocal_90)) && func_144()) && func_143())
	{
		iLocal_93 = unk_0xE044C77D0FC9DB66(iLocal_90, Local_99, fLocal_111, 1, 1);
		unk_0x2C07692AA3545079(iLocal_90);
		unk_0x3607936F13065720(iLocal_90, 1);
		unk_0x6F40E1EE32FE6A5E(iLocal_93, 1, 1, 0);
		unk_0x0DD72E0CB1FCF511(iLocal_93, 0);
		unk_0xCF3E72E81E9E1684(iLocal_93, 0);
		unk_0x6783F2971949E5C2(iLocal_93, 1);
		unk_0xC94C39C53546E775("RE_CAR_STEAL_SCENE");
		unk_0x70C2DBAE2904E1EA(iLocal_93, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		fLocal_114 = fLocal_116;
		if (iLocal_317 == 3)
		{
			unk_0x728045E0733945FD(iLocal_93, 49, 0);
			unk_0xE1A095B0BA3A0EA3(iLocal_93, 0);
			unk_0xF55EA971ECC0BCE5(iLocal_93, 16, 2, 0);
			unk_0xF55EA971ECC0BCE5(iLocal_93, 11, 3, 0);
			unk_0xF55EA971ECC0BCE5(iLocal_93, 12, 2, 0);
			unk_0xF55EA971ECC0BCE5(iLocal_93, 13, 2, 0);
			unk_0xF55EA971ECC0BCE5(iLocal_93, 23, 10, 0);
			unk_0xF55EA971ECC0BCE5(iLocal_93, 24, 10, 0);
			unk_0x6D0141CBE6B3B145(iLocal_93, 22, 1);
			unk_0x6D0141CBE6B3B145(iLocal_93, 17, 1);
			unk_0x6D0141CBE6B3B145(iLocal_93, 21, 1);
			unk_0x6D0141CBE6B3B145(iLocal_93, 20, 1);
			unk_0x6D0141CBE6B3B145(iLocal_93, 19, 1);
			unk_0x728045E0733945FD(iLocal_93, 89, 89);
			unk_0xE491F8C2C2A96483(iLocal_93, 0, 1);
			unk_0xC3F98B670A143BDD(iLocal_93, 1);
		}
		unk_0xD8C3303D0A49D05B("re_bikethief_relGroupVictim", &uLocal_122);
		unk_0xD8C3303D0A49D05B("re_bikethief_relGroupThief", &uLocal_123);
		unk_0xFDDE2C1A05E64390(5, uLocal_123, uLocal_122);
		unk_0xFDDE2C1A05E64390(5, uLocal_123, joaat("player"));
		unk_0xFDDE2C1A05E64390(1, iLocal_122, joaat("player"));
		iLocal_91 = unk_0xF8418B3B87CFCCBF(19, joaat("g_m_y_strpunk_01"), Local_108, fLocal_113, 1, 1);
		unk_0x2C07692AA3545079(joaat("g_m_y_strpunk_01"));
		unk_0xFF5CE2ECB4FBD4A8(iLocal_91, 1);
		unk_0xC5EFC3500CF4BE6F(iLocal_91, 1);
		unk_0x65889F26F311FC55(iLocal_91, uLocal_123);
		unk_0xECD905C06E682B6D(iLocal_91, 3);
		unk_0x87BBAE0EE5DD7680(iLocal_91, 17, 1);
		unk_0x87BBAE0EE5DD7680(iLocal_91, 13, 0);
		unk_0x797AA7825A5A2D95(iLocal_91, 1, 1);
		unk_0x4519324BAE580305(iLocal_91, 0);
		unk_0x705E4255B39314A7(iLocal_91, 42, 1);
		unk_0x705E4255B39314A7(iLocal_91, 281, 1);
		unk_0xB77EBFE57674ED21(iLocal_91, 2);
		unk_0xD97F9F0D7231AC43(iLocal_91, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		unk_0xC9567EA69F3CC4C2(iLocal_91, sLocal_318, "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
		iLocal_92 = unk_0xF8418B3B87CFCCBF(19, joaat("a_m_y_beachvesp_01"), Local_102, fLocal_112, 1, 1);
		unk_0x2C07692AA3545079(joaat("a_m_y_beachvesp_01"));
		unk_0xFF5CE2ECB4FBD4A8(iLocal_92, 1);
		unk_0xC5EFC3500CF4BE6F(iLocal_92, 1);
		unk_0x797AA7825A5A2D95(iLocal_92, 8, 1);
		if (iLocal_317 == 3)
		{
			unk_0x4519324BAE580305(iLocal_92, 1);
		}
		else
		{
			unk_0x4519324BAE580305(iLocal_92, 0);
		}
		unk_0x705E4255B39314A7(iLocal_92, 26, 1);
		unk_0x705E4255B39314A7(iLocal_92, 42, 1);
		unk_0x705E4255B39314A7(iLocal_92, 167, 1);
		unk_0x705E4255B39314A7(iLocal_92, 281, 1);
		unk_0x65889F26F311FC55(iLocal_92, iLocal_122);
		unk_0xB43604F27F1EAE5F(iLocal_92, 0);
		unk_0xD97F9F0D7231AC43(iLocal_92, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		unk_0x6CD01BB6BE485005(iLocal_92, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
		func_139(&uLocal_134, 1, iLocal_91, "BThief", 0, 1);
		func_139(&uLocal_134, 2, iLocal_92, "BThiefVictim", 0, 1);
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
		unk_0xE4C0529BFE536707(0);
		iLocal_89 = 1;
	}
}

int func_143()
{
	if (iLocal_317 == 2)
	{
		unk_0x77051FBD916D3170(1, "RE_BikeThief2");
		if (!unk_0x48B13379A3313D29(1, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_144()
{
	unk_0xA9DC3948106CC3E4(sLocal_318);
	unk_0xA9DC3948106CC3E4(sLocal_319);
	unk_0xA9DC3948106CC3E4(sLocal_321);
	unk_0xA9DC3948106CC3E4(sLocal_322);
	unk_0xA9DC3948106CC3E4(sLocal_324);
	unk_0xA9DC3948106CC3E4(sLocal_323);
	if (((((unk_0xAD21C77209FD2024(sLocal_318) && unk_0xAD21C77209FD2024(sLocal_319)) && unk_0xAD21C77209FD2024(sLocal_321)) && unk_0xAD21C77209FD2024(sLocal_322)) && unk_0xAD21C77209FD2024(sLocal_324)) && unk_0xAD21C77209FD2024(sLocal_323))
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	if (!unk_0xEB361B4BD195A4D3(iLocal_92))
	{
		if (func_69(iLocal_92, 993674639))
		{
			unk_0xB0993C95A7DBF879(iLocal_92);
		}
		else
		{
			unk_0xD3032BAC1ECE011F(iLocal_92);
		}
		unk_0x77637031DE326F70(iLocal_92, 1);
		unk_0x69E46DC398F0B2BD(iLocal_92, unk_0xA0081090911D13E5(), 100f, -1, 0, 0);
	}
	if (!unk_0xEB361B4BD195A4D3(iLocal_91))
	{
		unk_0x77637031DE326F70(iLocal_91, 1);
		unk_0x69E46DC398F0B2BD(iLocal_91, unk_0xA0081090911D13E5(), 100f, -1, 0, 1);
	}
}

int func_146()
{
	if (iLocal_89 == 0 && func_165())
	{
		return 1;
	}
	if (iLocal_89 == 1 && func_153())
	{
		return 1;
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_92))
	{
		if (unk_0xEB361B4BD195A4D3(iLocal_92))
		{
			return 1;
		}
		else if (unk_0x4AEC0F4FC7FE62C7(iLocal_92, unk_0xA0081090911D13E5(), 1))
		{
			func_151();
			func_150(&uLocal_134, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_147(iLocal_92, 170f))
		{
			func_151();
			func_150(&uLocal_134, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0 && iLocal_311 == 1)
	{
		return 1;
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_93) && !unk_0x1F1B2B6E500380C5(iLocal_93, 0))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_58(unk_0xA0081090911D13E5()) && func_58(iParam0))
	{
		if (func_149(iParam0) || unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), iParam0))
		{
			if (unk_0xD791ED8E9ADE270C(unk_0xA0081090911D13E5(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_148(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_148(int iParam0, float fParam1)
{
	return func_75(iParam0, unk_0xA0081090911D13E5(), fParam1, 1, 250, 7);
}

int func_149(var uParam0)
{
	if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), uParam0) && unk_0xD791ED8E9ADE270C(unk_0xA0081090911D13E5(), 6))
	{
		return 1;
	}
	return 0;
}

void func_150(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_18(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x88B0F0DC270164B7(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

void func_151()
{
	Global_14611 = 0;
	func_152();
}

void func_152()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
	}
}

int func_153()
{
	if (!func_136(5))
	{
		return 1;
	}
	if (func_161())
	{
		return 1;
	}
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x24D47569A04F80A8(unk_0xA0081090911D13E5())) > 1369f && !func_160())
		{
			return 0;
		}
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_154(float fParam0, bool bParam1)
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
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (func_11(func_9()))
		{
			iVar36 = func_46();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x08BA6DD398CA197C(Global_101553.f_17429[iVar32 /*6*/], 2) && !unk_0x08BA6DD398CA197C(Global_101553.f_17429[iVar32 /*6*/], 3))
				{
					func_155(iVar32, &Var0);
					fVar35 = unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var0.f_6, 1);
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

void func_155(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
		
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
		
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
		
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
		
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
		
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
		
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
		
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
		
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_156(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_157(int iParam0)
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

struct<2> func_158(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_159(iParam0) };
	if (unk_0x509383441597090D(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_159(int iParam0)
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

int func_160()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xA5F0EF35323210B5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_161()
{
	if (func_164() && !func_160())
	{
		return 1;
	}
	if (func_163() && func_162())
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return Global_101271 > 0;
}

int func_163()
{
	if (Global_88661 != -1)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_88661 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_82527[Global_88661 /*34*/].f_15, 20);
	}
	return 0;
}

int func_165()
{
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Local_86) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x24D47569A04F80A8(unk_0xA0081090911D13E5())) > 1369f && !func_160())
		{
			return 0;
		}
	}
	if (func_161())
	{
		return 1;
	}
	if (func_154(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_166()
{
}

int func_167()
{
	int iVar0;
	
	if (func_168(26, 1))
	{
		iVar0++;
	}
	if (func_168(26, 2))
	{
		iVar0++;
	}
	if (func_168(8, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_168(int iParam0, int iParam1)
{
	if (unk_0x08BA6DD398CA197C(Global_101553.f_29685.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_171(iParam0);
	unk_0x0CE863A8DDA6EA24(0);
	unk_0x457423E7871A26C1(1);
	Global_101539 = 0;
	func_170();
}

void func_170()
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			unk_0x3607936F13065720(unk_0x705BC1BB91F530B5(unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0)), 1);
		}
		unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 32, 0);
	}
}

void func_171(int iParam0)
{
	Global_101542 = iParam0;
}

int func_172(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138673)
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
		if (!func_211())
		{
			return 0;
		}
	}
	Local_86 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) && !unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			Var1 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x24D47569A04F80A8(unk_0xA0081090911D13E5())) > 1369f && !func_160())
			{
				return 0;
			}
		}
		if (!Global_101553.f_7940)
		{
			return 0;
		}
		if (func_23(0))
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (func_210())
		{
			return 0;
		}
		if (Global_101542 != -1)
		{
			return 0;
		}
		if (func_11(func_9()))
		{
			if (func_154(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()) && !bParam6)
		{
			if ((Var1.f_2 - Local_86.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_209(iParam3))
		{
			return 0;
		}
		if (func_11(func_9()))
		{
			if (func_208(func_9()) == 4 || func_208(func_9()) == 5)
			{
				return 0;
			}
		}
		if (func_11(func_9()))
		{
			if (!func_207(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_206(Global_101553.f_29685.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xDF658EB6CA91DFBC() - Global_101544) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_205())
		{
			return 0;
		}
		if (unk_0x914490E7407A12A1())
		{
			return 0;
		}
		if (unk_0x0D9CC5C2000C6EA4())
		{
			return 0;
		}
		if (!func_196(4))
		{
			return 0;
		}
		if (!func_136(5))
		{
			return 0;
		}
		if (func_168(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x72C176FA688CE74D(unk_0x16A396814EC162D8(unk_0xA0081090911D13E5())))
		{
			if ((unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == unk_0xDACF94AE8FA53F42(377.153f, -717.567f, 10.0536f) || unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == unk_0xDACF94AE8FA53F42(320.9934f, 265.2515f, 82.1221f)) || unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()) == unk_0xDACF94AE8FA53F42(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_168(0, 0))
		{
			return 0;
		}
		if (Global_25331)
		{
			return 0;
		}
		if (func_209(30) && !func_168(30, 0))
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
				Var5 = { Global_101553.f_1991.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101553.f_1991.f_539.f_1524[iVar4];
				if (func_195(iVar8))
				{
					if (func_173(iVar4))
					{
						if (!func_121(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var5) < (210f * 210f))
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

bool func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101553.f_1991.f_539.f_1524[iParam0];
	return func_174(iVar0);
}

int func_174(int iParam0)
{
	return func_175(iParam0, 1);
}

int func_175(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_195(iParam0))
	{
		return 0;
	}
	func_176(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_177(func_188(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_177(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_187(iParam0, iParam1))
	{
		iVar0 = func_186(iParam1);
		iVar1 = func_184(iParam0);
		iVar2 = (func_184(iParam0) - func_184(iParam1));
		iVar3 = (func_186(iParam0) - func_186(iParam1));
		iVar4 = (func_183(iParam0) - func_183(iParam1));
		iVar5 = (func_182(iParam0) - func_182(iParam1));
		iVar6 = (func_181(iParam0) - func_181(iParam1));
		iVar7 = (func_180(iParam0) - func_180(iParam1));
	}
	else
	{
		iVar0 = func_186(iParam0);
		iVar1 = func_184(iParam1);
		iVar2 = (func_184(iParam1) - func_184(iParam0));
		iVar3 = (func_186(iParam1) - func_186(iParam0));
		iVar4 = (func_183(iParam1) - func_183(iParam0));
		iVar5 = (func_182(iParam1) - func_182(iParam0));
		iVar6 = (func_181(iParam1) - func_181(iParam0));
		iVar7 = (func_180(iParam1) - func_180(iParam0));
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
		iVar4 = (iVar4 + func_179(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_178(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_178(float fParam0, float fParam1, float fParam2)
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

int func_179(int iParam0, int iParam1)
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

int func_180(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_181(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_182(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_183(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_184(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_185(unk_0x08BA6DD398CA197C(iParam0, 31), -1, 1)) + 2011;
}

int func_185(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_186(int iParam0)
{
	return iParam0 & 15;
}

int func_187(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_195(iParam1) || !func_195(iParam0))
	{
		return 1;
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
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_182(iParam0);
	iVar1 = func_182(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_181(iParam0);
	iVar1 = func_181(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_180(iParam0);
	iVar1 = func_180(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_188()
{
	var uVar0;
	
	func_194(&uVar0, unk_0x8A1006B6887A61DE());
	func_193(&uVar0, unk_0x4A29A51562AC24A5());
	func_192(&uVar0, unk_0x7C42343912622BB6());
	func_191(&uVar0, unk_0x5EE1E0D1EBF5F7F6());
	func_190(&uVar0, unk_0x55ED786EB10EA740());
	func_189(&uVar0, unk_0x3258DF33389FB224());
	return uVar0;
}

void func_189(var uParam0, int iParam1)
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

void func_190(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_191(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_186(*uParam0);
	iVar1 = func_184(*uParam0);
	if (iParam1 < 1 || iParam1 > func_179(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_192(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_194(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_195(int iParam0)
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
	iVar0 = func_180(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_181(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_182(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_184(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_186(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_183(iParam0);
	if (iVar5 < 1 || iVar5 > func_179(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_196(int iParam0)
{
	int iVar0;
	
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
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
						if (((((((((((((((((!unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B()) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || func_204()) || Global_100600) || Global_25187) || func_203()) || func_16(8, -1)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1) || func_204()) || Global_25187) || func_203()) || func_16(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B()) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0x69FEFE28E1352842(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || func_204()) || Global_100600) || Global_25187) || func_203()) || func_16(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_101553.f_6543.f_919[iVar0] == 5) || Global_36322 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0)) || func_204()) || Global_100600) || Global_25187) || func_203()) || func_16(8, -1)) || func_202()) || func_201()) || func_199()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_204() || unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0) || func_16(8, -1)) || func_199()) || func_198()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_202()) || func_201()) || func_198()) || func_197())
						{
							return 0;
						}
						if ((unk_0xC740F8182E7E9681() && unk_0x4067637E264DB8F1() != 3) && unk_0x3FC82179CAE1D56D() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
						{
							if ((((((((((((((unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0) || unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || func_204()) || Global_25187) || func_203()) || func_16(8, -1)) || func_201()) || func_200()) || func_199()) || Global_101553.f_6543.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0) || !unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) || !unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B())) || !unk_0xB20CA7A3EE29687A()) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || func_204()) || func_201()) || Global_100600) || Global_25187) || func_203()) || Global_36906) || func_16(8, -1)) || func_200()) || func_198()) || func_199()) || Global_101553.f_6543.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x019E78F3A1071807(unk_0xA0081090911D13E5(), 0) || !unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B())) || !unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B())) || !unk_0xB20CA7A3EE29687A()) || unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0)) || unk_0x630BD2AFB0686BBA(unk_0xA0081090911D13E5())) || unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1)) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) || unk_0x96E535A40E0E0B83(unk_0xA0081090911D13E5())) || unk_0x019057DADA219C94(unk_0xA0081090911D13E5())) || unk_0xE7B06BF48958E63C(unk_0x0C1D3C552325765B(), 1)) || unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B())) || func_204()) || Global_100600) || Global_25187) || func_203()) || func_16(8, -1)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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

var func_197()
{
	return Global_91445.f_1;
}

int func_198()
{
	if (Global_88661 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_82527[Global_88661 /*34*/].f_15, 13);
	}
	return 0;
}

int func_199()
{
	if (unk_0xA96867DD0A63C62C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
{
	if (Global_69877)
	{
		return 1;
	}
	else if (Global_55810 && !Global_55816)
	{
		return 1;
	}
	return 0;
}

bool func_201()
{
	return Global_91458.f_304 > 0;
}

bool func_202()
{
	return Global_91458.f_303 > 0;
}

var func_203()
{
	return Global_1315229;
}

int func_204()
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		return Global_89217.f_44 == 1;
	}
	return 0;
}

int func_205()
{
	func_8();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_206(int iParam0)
{
	return func_187(func_188(), iParam0);
}

int func_207(int iParam0, int iParam1, int iParam2)
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

int func_208(int iParam0)
{
	if (!func_11(iParam0))
	{
		return 7;
	}
	return Global_101553.f_6543.f_919[iParam0];
}

bool func_209(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_211())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x08BA6DD398CA197C(Global_101553.f_29685, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x08BA6DD398CA197C(Global_101553.f_29685.f_1, iVar0);
	}
	return bVar1;
}

int func_210()
{
	var uVar0;
	
	if (Global_25335)
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
		{
			uVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if (unk_0x1F1B2B6E500380C5(uVar0, 0))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0x8FD32443A080784B(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_211()
{
	var uVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		if (unk_0x941A660B39C95F30())
		{
			if (unk_0x6FC368894467C692())
			{
				unk_0x8A3351ECF43DB941(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x88B0F0DC270164B7(&uVar0, 2);
				unk_0x88B0F0DC270164B7(&uVar0, 4);
				unk_0x88B0F0DC270164B7(&uVar0, 6);
				unk_0x88B0F0DC270164B7(&Global_25, 2);
				unk_0x88B0F0DC270164B7(&Global_25, 4);
				unk_0x88B0F0DC270164B7(&Global_25, 6);
				unk_0x10CE8769EE2626C7(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x3F59EA61B56AFBC2())
				{
					iVar0 = unk_0x680A5FBB1F20F775(866);
					unk_0x88B0F0DC270164B7(&iVar0, 0);
					unk_0xDA842F3F06329D8C(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138925 == 2)
	{
		return 1;
	}
	else if (Global_138925 == 3)
	{
		return 0;
	}
	if (unk_0x3F59EA61B56AFBC2())
	{
		if (unk_0x08BA6DD398CA197C(unk_0x680A5FBB1F20F775(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

float func_212(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	return unk_0x999A157665D69393(Var0, Param1, iParam4);
}

void func_213()
{
	func_93(&uLocal_330, 0, 0);
	if (unk_0x6DEB8F88FFE09057("RE_CAR_STEAL_SCENE"))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_93, 0))
		{
			unk_0x14F2413A60FF70C3(iLocal_93, 0);
		}
		unk_0x7C1793252FA472B6("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_317 != 3)
	{
		func_216(26);
	}
	else
	{
		func_216(8);
	}
	if (iLocal_317 == 1)
	{
		unk_0x1757D2CC022D31AD(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 1);
	}
	unk_0x322323456FCFAB4D(uLocal_325, 0);
	unk_0xE4EC3FD6A99953E8(Local_102 - Vector(20f, 20f, 20f), Local_102 + Vector(20f, 20f, 20f), 1, 1);
	if (unk_0x1F1B2B6E500380C5(iLocal_93, 0))
	{
		unk_0x325A2C5B8927293C(iLocal_93, 1);
		if (unk_0xC8FF9EAEF62B118C(iLocal_93))
		{
			unk_0x26B9AD2BE477CF10(iLocal_93);
		}
	}
	if (iLocal_317 == 2)
	{
		unk_0x11DDC8BDE5CBDCB5(1, "RE_BikeThief2");
	}
	func_65(&uLocal_133);
	func_65(&uLocal_131);
	func_66(&uLocal_342);
	func_65(&uLocal_132);
	func_72(0);
	func_215(&uLocal_134, 0);
	func_215(&uLocal_134, 1);
	func_215(&uLocal_134, 2);
	if ((func_58(iLocal_92) && func_58(iLocal_93)) && unk_0x1FD87E888EB4FC00(iLocal_92, iLocal_93, 0))
	{
		unk_0x1F1428EF73399830(iLocal_92, iLocal_93, fLocal_114, 786485);
		unk_0x77637031DE326F70(iLocal_92, 1);
	}
	func_87(&iLocal_91, 1, 0, 1);
	func_87(&iLocal_92, 1, 0, 1);
	func_214(&iLocal_93);
	if (func_58(iLocal_94))
	{
		unk_0x1024616B94124EB5(iLocal_94);
		func_214(&iLocal_94);
	}
	unk_0x2C07692AA3545079(joaat("g_m_y_strpunk_01"));
	unk_0x2C07692AA3545079(joaat("a_m_y_beachvesp_01"));
	unk_0x2C07692AA3545079(joaat("scorcher"));
	unk_0x2C07692AA3545079(joaat("bati"));
	unk_0x04269E768DDAF940(sLocal_318);
	unk_0x04269E768DDAF940(sLocal_319);
	unk_0x04269E768DDAF940(sLocal_321);
	unk_0x04269E768DDAF940(sLocal_322);
	unk_0x04269E768DDAF940(sLocal_323);
	unk_0x04269E768DDAF940(sLocal_324);
	unk_0xF25FB6A7A13A935D(0);
	unk_0x78C587487CD40B92();
}

void func_214(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(*uParam0))
	{
		unk_0x912AD5A10E7633F0(*uParam0, 0);
		if (unk_0x18C670321BC98FDA(*uParam0) && unk_0x687CB62D355FD7FD(*uParam0, 1))
		{
			unk_0x615DE34FC732CF11(uParam0);
		}
	}
}

void func_215(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_216(int iParam0)
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
	if (func_227())
	{
		func_220(iParam0);
		unk_0xA57E42D9C41110A9(0, 0);
		Global_101544 = unk_0xDF658EB6CA91DFBC();
		func_219(30000);
		StringCopy(&cVar0, func_218(Global_101542, 1), 64);
		if (func_49(Global_101542) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101541, 64);
		}
		unk_0x6C6B822764300FD2(&cVar0, Global_101539, (unk_0xDF658EB6CA91DFBC() - Global_101540), 0);
	}
	else if (unk_0x08BA6DD398CA197C(Global_101549, 0) && Global_101553.f_29685.f_2 < 3)
	{
		unk_0x09C86C0C5CA26B1E(&Global_101549, 0);
	}
	func_217(&Global_25244);
	Global_101543 = 0;
	func_171(-1);
}

void func_217(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35737)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35736 = 0;
	Global_35738 = 0;
	Global_35775 = 15;
	Global_55813 = 0;
	Global_55814 = 0;
}

char* func_218(int iParam0, bool bParam1)
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

void func_219(int iParam0)
{
	Global_36326 = (unk_0xDF658EB6CA91DFBC() + iParam0);
}

void func_220(int iParam0)
{
	func_221(iParam0, 0, func_226(iParam0));
}

void func_221(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_188();
	func_224(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_223(iParam0, &uVar0);
	Var1 = { func_222(&uVar0) };
}

struct<16> func_222(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_182(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_181(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_180(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_183(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_184(*uParam0), 64);
	return Var0;
}

void func_223(int iParam0, var uParam1)
{
	Global_101553.f_29685.f_43[iParam0] = *uParam1;
}

void func_224(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_184(*uParam0);
	iVar1 = func_186(*uParam0);
	iVar2 = func_183(*uParam0);
	iVar3 = func_182(*uParam0);
	iVar4 = func_181(*uParam0);
	iVar5 = func_180(*uParam0);
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
	iVar6 = func_179(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_179(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_225(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_225(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_194(uParam0, iParam1);
	func_193(uParam0, iParam2);
	func_192(uParam0, iParam3);
	func_190(uParam0, iParam5);
	func_191(uParam0, iParam4);
	func_189(uParam0, iParam6);
}

int func_226(int iParam0)
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

int func_227()
{
	if ((Global_101542 == func_50() && unk_0x0D9CC5C2000C6EA4()) && Global_101543)
	{
		return 1;
	}
	return 0;
}

