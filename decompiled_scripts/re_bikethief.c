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
	var uLocal_94 = 0;
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
	var uLocal_122 = 0;
	float fLocal_123 = 0f;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
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
	var uLocal_324 = 0;
	int iLocal_325 = 0;
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
	if (unk_0xD63E63DFACCEB80E(11))
	{
		func_213();
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
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) != 0)
		{
			unk_0xE60DEFFB2A853900();
		}
		else if (func_212(unk_0x9F92518438215DD0(), Local_95, 1) < 100f)
		{
			unk_0xE60DEFFB2A853900();
		}
	}
	if (iLocal_316 != 3)
	{
		if (func_172(Local_95, 26, iLocal_316, 0, 0))
		{
			func_169(26);
		}
		else
		{
			unk_0xE60DEFFB2A853900();
		}
	}
	else if (func_172(Local_95, 8, 0, 0, 0))
	{
		func_169(8);
	}
	else
	{
		unk_0xE60DEFFB2A853900();
	}
	iLocal_315 = func_167();
	uLocal_324 = unk_0x676E460800A9E1B7(Local_95 - Vector(20f, 20f, 20f), Local_95 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_166();
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xA067756A5A1E98E5(unk_0xCFC72E446B0B3AD7());
			unk_0xD9FB629772F03712(unk_0xCFC72E446B0B3AD7(), 28);
			unk_0xD9FB629772F03712(unk_0xCFC72E446B0B3AD7(), 13);
			unk_0xD9FB629772F03712(unk_0xCFC72E446B0B3AD7(), 35);
		}
		if (unk_0xB819D1DD7DA58F08() || iLocal_88 > 1)
		{
			if (func_146())
			{
				func_145();
				func_213();
			}
			else
			{
				switch (iLocal_88)
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
	if (func_58(unk_0x9F92518438215DD0()) && func_58(iLocal_91))
	{
		if (func_57(unk_0x9F92518438215DD0(), iLocal_91, 1) > 50f)
		{
			func_56(8);
			func_20();
		}
		else if ((unk_0x17103F66FBB44C3C() - iLocal_128) > 10000)
		{
			func_56(8);
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
					unk_0xC318E8D9E0AA1394(0);
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
		if (unk_0xDFF00E8709AA7095())
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
			unk_0xF76EE56D3E7DAF1B(&Global_2263, 20);
			unk_0xF76EE56D3E7DAF1B(&Global_2264, 17);
			unk_0xF76EE56D3E7DAF1B(&Global_2265, 0);
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
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0xF9AED6291438A448(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (func_7())
				{
					return 0;
				}
				if (unk_0x29652A1660936FDB(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0xA75CD3E8519BDC0D(unk_0x9F92518438215DD0()))
				{
					return 0;
				}
				if (unk_0x963737771EA06D79(unk_0x9F92518438215DD0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7()))
					{
						return 0;
					}
					if (unk_0x5EE181A2C8679F09(unk_0x9F92518438215DD0()))
					{
						return 0;
					}
					if (unk_0x2AD403FEE60639F3(unk_0xCFC72E446B0B3AD7()))
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
				if (unk_0x94E72F17611BCD3C(Global_2263, 9))
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
	unk_0xC318E8D9E0AA1394(0);
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
	unk_0xF76EE56D3E7DAF1B(&Global_2264, 16);
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
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0x9DA0F3A686A566A6(unk_0x9F92518438215DD0(), &iVar1, 1);
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5CC26ADF98AA54C9() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0xD1C0C220414EB327(unk_0x9F92518438215DD0(), 78, 1))
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
		if (!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()) == Global_97358.f_29774[2 /*29*/])
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

int func_9()
{
	func_10();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_10()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_13(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_12(unk_0x9F92518438215DD0());
			if (func_11(iVar0) && (!func_14(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_11(Global_97358.f_1729.f_539.f_3213))
				{
					Global_97358.f_1729.f_539.f_3214 = Global_97358.f_1729.f_539.f_3213;
				}
				Global_97358.f_1729.f_539.f_3215 = iVar0;
				Global_97358.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97358.f_1729.f_539.f_3213 != 145)
			{
				Global_97358.f_1729.f_539.f_3215 = Global_97358.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97358.f_1729.f_539.f_3213 = 145;
}

bool func_11(int iParam0)
{
	return iParam0 < 3;
}

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_14(int iParam0)
{
	return Global_34913 == iParam0;
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
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x94E72F17611BCD3C(Global_1327593.f_949, iParam0);
}

void func_17()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if ((unk_0x71F866C9C77F9B9F() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(1);
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
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
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
		func_52(func_12(unk_0x9F92518438215DD0()), 4, 5);
	}
	else
	{
		func_52(func_12(unk_0x9F92518438215DD0()), 1, 3);
	}
	if (iLocal_316 != 3)
	{
		func_33(26, iLocal_316);
	}
	else
	{
		func_33(8, 0);
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

bool func_23(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
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
		if (unk_0x94E72F17611BCD3C(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_97358.f_5944.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_32(iParam1);
		Var0.f_4 = (unk_0x17103F66FBB44C3C() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		unk_0xF76EE56D3E7DAF1B(&(Var0.f_1), 0);
		Global_97358.f_5944.f_765[Global_97358.f_5944.f_866 /*10*/] = { Var0 };
		Global_97358.f_5944.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_31(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_30(&iVar20);
		iVar21 = func_29(Var10, Global_97358.f_5944.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_27(Global_97358.f_5944.f_765[iVar20 /*10*/]);
			Global_97358.f_5944.f_765[iVar20 /*10*/] = { Var10 };
			func_26(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_25(Var10))
			{
				func_27(Global_97358.f_5944.f_765[iVar20 /*10*/]);
				Global_97358.f_5944.f_765[iVar20 /*10*/] = { Var10 };
				func_26(&Var10);
				return 1;
			}
			else
			{
				if (!func_25(Global_97358.f_5944.f_765[iVar20 /*10*/]))
				{
					Global_97358.f_5944.f_765[iVar20 /*10*/] = { Var10 };
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
	Global_97358.f_6869[iParam0] = 1;
	Global_97358.f_6869.f_236[iParam0] = (unk_0x17103F66FBB44C3C() + iParam1);
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
	while (iVar0 < Global_97358.f_5944.f_866)
	{
		if (func_29(Global_97358.f_5944.f_765[iVar0 /*10*/], Global_97358.f_5944.f_765[*iParam0 /*10*/]) == 0)
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
	Var0.f_4 = (unk_0x17103F66FBB44C3C() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	unk_0xF76EE56D3E7DAF1B(&(Var0.f_1), 0);
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
			Global_97358.f_28192.f_2 = 3;
		}
		if (func_40(iParam0, iParam1) != 322)
		{
			func_34(func_40(iParam0, iParam1), Local_85.f_0, Local_85.f_1);
		}
		Global_97346 = iParam1;
		if (Global_97344 == 0)
		{
			if (((Global_97347 == 1 || Global_97347 == 5) || Global_97347 == 11) || Global_97347 == 25)
			{
				func_56(2);
			}
			else if ((Global_97347 == 26 || Global_97347 == 8) || Global_97347 == 17)
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
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_37(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_36() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_22();
				}
			}
		}
	}
}

int func_36()
{
	return Global_24444;
}

int func_37(int iParam0, int iParam1)
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
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_39();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		uVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		uVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_39()
{
	return Global_1312737;
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
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_44(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6B08EC9A88700FBB(sParam0, ""))
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
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97358.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_8 = (unk_0x17103F66FBB44C3C() + iParam3);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = ((unk_0x17103F66FBB44C3C() + iParam3) + iParam4);
		}
		else
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97358.f_23635.f_145++;
		func_45();
	}
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[0])
			{
				Global_97358.f_23635.f_146[0] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[1])
			{
				Global_97358.f_23635.f_146[1] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[2])
			{
				Global_97358.f_23635.f_146[2] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_46()
{
	func_10();
	switch (Global_97358.f_1729.f_539.f_3213)
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
		return unk_0x94E72F17611BCD3C(Global_97358.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_48(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28192.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0xC2E9075570B5D2B9(), 64);
	uVar16 = func_51(Var0);
	return uVar16;
}

int func_51(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x398F092142D37E17(&cParam0))
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
			Global_97358.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97358.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3015;
			switch (iParam1)
			{
				case 1:
					iVar1 = 75;
					break;
				
				case 3:
					iVar1 = 77;
					break;
				
				case 2:
					iVar1 = 76;
					break;
				
				case 4:
					iVar1 = 78;
					break;
				
				case 5:
					iVar1 = 79;
					break;
				
				case 6:
					iVar1 = 80;
					break;
				
				case 7:
					iVar1 = 81;
					break;
			}
			if (iVar1 != 3015)
			{
				iVar0 = func_55(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_53(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
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
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_54(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_56(int iParam0)
{
	Global_97344 = iParam0;
}

float func_57(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(iParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(iParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
}

int func_58(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_59()
{
	if (func_58(iLocal_91) && func_67(iLocal_92))
	{
		if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_92, 0))
		{
			func_66(&uLocal_341);
			func_65(&uLocal_131);
			if (iLocal_129 == 0 && !unk_0x2E6E8D325977B3EC(uLocal_130))
			{
				uLocal_130 = func_64(iLocal_92, 0, 0);
			}
		}
		else
		{
			func_65(&uLocal_130);
			if (!unk_0x2E6E8D325977B3EC(uLocal_131))
			{
				uLocal_131 = func_61(iLocal_91, 0, 145);
				if (iLocal_342 == 0)
				{
					func_60(&uLocal_341);
					iLocal_342 = 1;
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
	if ((iParam2 != 145 && unk_0x2E6E8D325977B3EC(uVar0)) && unk_0x75426D5397CE9E5D(&(Global_97358.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x2A8C2BEEA4F7041F(uVar0, &(Global_97358.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_63(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_63(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_63(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
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
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0xD8EEE815F0120FCE(*uParam0, 0);
		unk_0x0451B5D93A4BDAA0(uParam0);
	}
}

void func_66(var uParam0)
{
	*uParam0 = (unk_0x17103F66FBB44C3C() - 5000);
}

int func_67(int iParam0)
{
	if (func_58(iParam0))
	{
		if (unk_0xFC38B241541883D3(iParam0, 0))
		{
			if (!unk_0x0FC809E10EF0EAC3(iParam0))
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
	
	if (func_58(iLocal_91) && func_67(iLocal_92))
	{
		func_85(uLocal_131, &uLocal_341);
		if (fLocal_123 > 0f)
		{
			fVar0 = func_57(unk_0x9F92518438215DD0(), iLocal_91, 1);
			if (fVar0 > (fLocal_123 + fLocal_116))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_92, 0))
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
			fLocal_123 = func_57(unk_0x9F92518438215DD0(), iLocal_91, 1);
			if (unk_0x370603716EC2D420("RE_CAR_STEAL_SCENE"))
			{
				unk_0xC932874B6133A2D2(iLocal_92, 0);
				unk_0x6041FBFC1EE8196A("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_307 == 0)
		{
			if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_91, 40f, 40f, 40f, 0, 1, 0))
			{
				func_84();
				if (iLocal_310 == 0)
				{
					if (!unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_91, 25f, 25f, 25f, 0, 1, 0))
					{
						if (((((unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_92, 0) && unk_0x53C8F92CF78772BF(iLocal_91, unk_0x9F92518438215DD0(), 30f)) && func_75(iLocal_91, unk_0x9F92518438215DD0(), 1126825984, 1, 250, 7)) && !unk_0xBD280C076BC69C97(iLocal_91)) && !unk_0x11579615465D25B4(iLocal_91)) && func_2(&uLocal_133, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							unk_0x7CF15DD8B3815A0D(iLocal_91, sLocal_322, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x6EAEC8403384110F(unk_0xCFC72E446B0B3AD7(), 0, 0);
							unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
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
		else if (((!unk_0x5093D6F9140AD109(iLocal_92, iLocal_91, 35f, 35f, 35f, 0, 1, 0) && unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_92, 0)) && !func_74()) && func_2(&uLocal_133, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_72(0);
			unk_0x4A1AC49BA4A747F7(iLocal_91, 0);
			unk_0xF2061C15946C53A2(5, uLocal_121, joaat("player"));
			unk_0x0CFE85F88BE373C8(iLocal_91, 1);
			unk_0xF78316EFCA911012(iLocal_91, unk_0x9F92518438215DD0(), 0, 16);
			unk_0xE8105B7E3908547D(iLocal_91, 1);
			unk_0x4EDE34FBADD967A6(0);
			func_56(7);
			func_20();
		}
		if (unk_0x44E080690DA76A2A(iLocal_91, iLocal_92, 0))
		{
			if (!func_19() && func_2(&uLocal_133, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_128 = unk_0x17103F66FBB44C3C();
			iLocal_88 = 4;
		}
		else if (unk_0x5093D6F9140AD109(iLocal_92, iLocal_91, 20f, 20f, 20f, 0, 1, 0))
		{
			if (func_71())
			{
				if (!func_69(iLocal_91, 242628503))
				{
					iLocal_129 = 1;
					func_72(0);
					func_66(&uLocal_341);
					func_65(&uLocal_131);
					func_65(&uLocal_130);
					unk_0x4E4495A4D2C1856B(iLocal_92, 0);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_94);
					if (iLocal_307 == 0)
					{
						unk_0x4073360CA020BB84(0, iLocal_92, 20000, -1, 2f, 8, 0);
					}
					else
					{
						unk_0x4073360CA020BB84(0, iLocal_92, 20000, -1, 2f, 262152, 0);
					}
					unk_0xAFFE01EF7078CAD9(0, iLocal_92, fLocal_113, 786485);
					unk_0x3179CCC77CBAB31F(uLocal_94);
					unk_0xC7EBE3C9AC83FAAA(iLocal_91, uLocal_94);
					unk_0xCD02E3C29B8253A6(&uLocal_94);
					unk_0xE8105B7E3908547D(iLocal_91, 1);
				}
			}
			else
			{
				switch (iLocal_307)
				{
					case 0:
						if ((((iLocal_310 == 1 && !func_69(iLocal_91, -2017877118)) && !unk_0xBD280C076BC69C97(iLocal_91)) && !unk_0x11579615465D25B4(iLocal_91)) && func_2(&uLocal_133, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (unk_0x53C8F92CF78772BF(iLocal_91, unk_0x9F92518438215DD0(), 30f) && unk_0xE962BD784DD0E442(iLocal_91, -875674219) == 7)
							{
								unk_0x7CF15DD8B3815A0D(iLocal_91, sLocal_322, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_308 = unk_0x17103F66FBB44C3C();
							iLocal_307++;
						}
						else
						{
							func_84();
						}
						break;
					
					case 1:
						if (((((unk_0x17103F66FBB44C3C() - iLocal_308) > 10000 && !func_69(iLocal_91, -2017877118)) && !unk_0xBD280C076BC69C97(iLocal_91)) && !unk_0x11579615465D25B4(iLocal_91)) && func_2(&uLocal_133, "REBTHAU", sLocal_304, 4, 0, 0, 0))
						{
							if (unk_0x53C8F92CF78772BF(iLocal_91, unk_0x9F92518438215DD0(), 30f))
							{
								func_72(0);
								unk_0x7CF15DD8B3815A0D(iLocal_91, sLocal_323, "THANKS_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_308 = unk_0x17103F66FBB44C3C();
							iLocal_307++;
						}
						else
						{
							func_72(1);
						}
						break;
					
					case 2:
						if (((((unk_0x17103F66FBB44C3C() - iLocal_308) > 10000 && !func_69(iLocal_91, -2017877118)) && !unk_0xBD280C076BC69C97(iLocal_91)) && !unk_0x11579615465D25B4(iLocal_91)) && func_2(&uLocal_133, "REBTHAU", sLocal_305, 4, 0, 0, 0))
						{
							if (unk_0x53C8F92CF78772BF(iLocal_91, unk_0x9F92518438215DD0(), 30f))
							{
								func_72(0);
								unk_0x7CF15DD8B3815A0D(iLocal_91, sLocal_321, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
							}
							iLocal_307++;
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
		if (unk_0xE962BD784DD0E442(iParam0, iParam1) == 1 || unk_0xE962BD784DD0E442(iParam0, iParam1) == 0)
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
		if (!unk_0x3E0478C40AB5B38D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_71()
{
	if (iLocal_129 == 1)
	{
		return 1;
	}
	if ((unk_0x17103F66FBB44C3C() - iLocal_127) < 4000)
	{
		return 0;
	}
	if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_92, 1))
	{
		return 0;
	}
	if (func_58(iLocal_90) && unk_0xBCBBB7902DEFA79B(iLocal_90))
	{
		return 0;
	}
	if (!unk_0x4A33023BC86AAA7F(iLocal_92, -1))
	{
		return 0;
	}
	return 1;
}

void func_72(int iParam0)
{
	if (func_58(iLocal_91))
	{
		if (iParam0 == 1)
		{
			if (!unk_0x6AAACE62C58880BC(iLocal_91) && func_58(unk_0x9F92518438215DD0()))
			{
				unk_0x78267FAB4E1661CE(iLocal_91, unk_0x227F44298C6D51AB(unk_0x9F92518438215DD0()));
				unk_0x305D5B0653A9C181(iLocal_91, 1);
				unk_0x94FBF3A0016C142A(func_73(), 2f, -1082130432, -1082130432);
				unk_0x402A96371F34E6D8(iLocal_91, unk_0x9F92518438215DD0(), -1, 0, 2);
			}
		}
		else if (unk_0x6AAACE62C58880BC(iLocal_91))
		{
			unk_0x1FA92C26AB9467D3(iLocal_91);
		}
	}
}

var func_73()
{
	return unk_0x0CD9BC7F312ED395(unk_0x2563F6EECD8726D3());
}

int func_74()
{
	if (iLocal_316 == 3)
	{
		if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -1875.858f, 262.3736f, 82.96029f, -1927.379f, 234.7951f, 90.71558f, 50.25f, 0, 1, 0))
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
			func_82(&(Local_43[iVar4 /*4*/]));
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
		Local_43[iVar4 /*4*/].f_1 = iParam0;
		Local_43[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_76(&(Local_43[iVar4 /*4*/]), Var1, iParam1, &(Local_43[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x17103F66FBB44C3C() - Local_43[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0xA14FCCC1B46CB913(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xD200D7E3AEDD340D(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x4E178F5D4155391A(iVar7))
	{
		func_58(iVar7);
		if (unk_0x240654B57CFFBFB3(iVar7) == iParam4)
		{
			if (bLocal_84)
			{
				unk_0x616891521BAA3559(Param1, unk_0x77009B1C011405A9(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x17103F66FBB44C3C();
			return 1;
		}
		return 0;
	}
	if (unk_0x2B1914308D0376C8(iVar7))
	{
		func_58(iVar7);
		if (unk_0x827151D7B70CB853(iParam4, 0))
		{
			if (unk_0x40A2BB73421EA79A(iVar7) == unk_0x1161215F69587BDA(iParam4, 0))
			{
				if (bLocal_84)
				{
					unk_0x616891521BAA3559(Param1, unk_0x77009B1C011405A9(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x17103F66FBB44C3C();
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
		iVar0 = unk_0x073B65E051D2F03E(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x77009B1C011405A9(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xAA04EEFB14FDE2E9(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x77009B1C011405A9(iParam0, 1);
}

int func_78()
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

int func_79(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_81(unk_0x77009B1C011405A9(iParam1, 1) - unk_0x77009B1C011405A9(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x83A30AB34278DD93(iParam0) };
	}
	else
	{
		Var3 = { func_81(unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 5f, 0f) - unk_0xAA04EEFB14FDE2E9(iParam0, 31086, 0f, 0f, 0f)) };
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

void func_84()
{
	if (iLocal_129 == 0 && func_58(iLocal_91))
	{
		if (func_69(iLocal_91, 242628503))
		{
			unk_0x32D18ECD9E6F9BE2(iLocal_91);
		}
		if ((((!func_69(iLocal_91, -2017877118) && !unk_0x53C8F92CF78772BF(iLocal_91, unk_0x9F92518438215DD0(), 20f)) && unk_0xE962BD784DD0E442(iLocal_91, -875674219) == 7) && !unk_0xBD280C076BC69C97(iLocal_91)) && !unk_0x11579615465D25B4(iLocal_91))
		{
			unk_0x23F243BF5B07DA90(iLocal_91, unk_0x9F92518438215DD0(), 0);
			unk_0x402A96371F34E6D8(iLocal_91, unk_0x9F92518438215DD0(), -1, 0, 2);
		}
	}
}

void func_85(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = unk_0x17103F66FBB44C3C();
	}
	if (unk_0x2E6E8D325977B3EC(uParam0))
	{
		iVar0 = (unk_0x17103F66FBB44C3C() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = unk_0x11E019C8F43ACC8A((unk_0xBBDA792448DB5A89(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (unk_0xDA8AC653AAD36D4F(uParam0) != 255)
				{
					unk_0xFBF7E9E330FE936E(uParam0, 255);
				}
			}
			else if (unk_0xDA8AC653AAD36D4F(uParam0) != 0)
			{
				unk_0xFBF7E9E330FE936E(uParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (unk_0xDA8AC653AAD36D4F(uParam0) != 255)
			{
				unk_0xFBF7E9E330FE936E(uParam0, 255);
			}
		}
	}
}

void func_86()
{
	if (func_58(iLocal_90))
	{
		if (iLocal_119 == 0)
		{
			unk_0xA334EDA2335A13CA(iLocal_90, 2, 0);
			unk_0x32D18ECD9E6F9BE2(iLocal_90);
			if (func_67(iLocal_92))
			{
				if (iLocal_316 == 2)
				{
					if (unk_0x1B277BFA27CD5A9F(iLocal_92))
					{
						unk_0x0DC4413F65975A4C(iLocal_92);
					}
					unk_0x6AC537DA214AB66E(1, "RE_BikeThief2");
				}
				if (unk_0x44E080690DA76A2A(iLocal_90, iLocal_92, 1))
				{
					unk_0xC5A4CF74578DF578(iLocal_90);
				}
			}
			unk_0xE8105B7E3908547D(iLocal_90, 1);
			unk_0x722E6B3A5162A6BB(iLocal_90, unk_0x9F92518438215DD0(), 200f, -1, 0, 0);
			iLocal_119 = 1;
		}
		else
		{
			if (((((iLocal_120 == 0 && func_57(iLocal_90, unk_0x9F92518438215DD0(), 1) < 30f) && !unk_0xBD280C076BC69C97(iLocal_90)) && func_69(iLocal_90, 1805844857)) && !func_19()) && func_2(&uLocal_133, "REBTHAU", sLocal_302, 4, 0, 0, 0))
			{
				iLocal_120 = 1;
			}
			if (func_57(iLocal_90, unk_0x9F92518438215DD0(), 1) > 50f)
			{
				func_87(&iLocal_90, 1, 0, 1);
			}
		}
	}
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x746960881FB19A89(*iParam0))
	{
		if (!unk_0x3E0478C40AB5B38D(*iParam0))
		{
			unk_0x512E0C109ACECCA1(*iParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x5B1A1DA8A0D20935(*iParam0);
			}
			unk_0xE8105B7E3908547D(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x4A1AC49BA4A747F7(*iParam0, 0);
			}
		}
		unk_0x995B3705D02B0401(iParam0);
	}
}

void func_88()
{
	if ((func_58(iLocal_90) && func_58(iLocal_91)) && func_67(iLocal_92))
	{
		if (func_95())
		{
			func_93(&uLocal_329, 0, 0);
			func_92(&iLocal_90);
			func_91(&iLocal_92);
			if (unk_0x5093D6F9140AD109(iLocal_91, unk_0x9F92518438215DD0(), 25f, 25f, 25f, 0, 1, 0) && func_2(&uLocal_133, "REBTHAU", sLocal_306, 4, 0, 0, 0))
			{
			}
			unk_0x18CA21B07F636243(iLocal_91, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
			func_90();
		}
		else
		{
			func_89(uLocal_130, iLocal_92, fLocal_116, 1061158912, 0);
		}
	}
}

void func_89(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x2E6E8D325977B3EC(uParam0))
	{
		if ((unk_0x746960881FB19A89(iParam1) && unk_0x746960881FB19A89(unk_0x9F92518438215DD0())) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x2B1914308D0376C8(iParam1))
			{
				if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam1), 0))
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam1, 1), 1);
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
						unk_0xA0BFA3F6C43DF44B(uParam0, 1);
						unk_0xFBF7E9E330FE936E(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA0BFA3F6C43DF44B(uParam0, 0);
						unk_0xFBF7E9E330FE936E(uParam0, 255);
					}
				}
			}
			else if (unk_0x4E178F5D4155391A(iParam1))
			{
				if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam1)))
				{
					fVar1 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(iParam1, 1), 1);
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
						unk_0xA0BFA3F6C43DF44B(uParam0, 1);
						unk_0xFBF7E9E330FE936E(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xA0BFA3F6C43DF44B(uParam0, 0);
						unk_0xFBF7E9E330FE936E(uParam0, 255);
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
	if (unk_0x746960881FB19A89(*iParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(*iParam0))
		{
			unk_0x336AE92FD68DEF98(*iParam0, 1, 0);
		}
		if (func_67(*iParam0))
		{
			if (unk_0x34E74FF8690AA4B1(*iParam0) && unk_0xAD2C236C4A4B83C9(*iParam0, 1))
			{
				if (func_58(unk_0x9F92518438215DD0()))
				{
					if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), *iParam0, 0))
					{
						unk_0x9187463EB4918A4D(iParam0);
						return;
					}
				}
				unk_0xCD3EBB4EAE50293F(iParam0);
			}
		}
		else
		{
			if (func_58(unk_0x9F92518438215DD0()))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), *iParam0, 0))
				{
					unk_0x9187463EB4918A4D(iParam0);
					return;
				}
			}
			unk_0xCD3EBB4EAE50293F(iParam0);
		}
	}
}

void func_92(int iParam0)
{
	if (unk_0x746960881FB19A89(*iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(*iParam0))
		{
			unk_0x512E0C109ACECCA1(*iParam0, 0);
		}
		if (!unk_0x34E74FF8690AA4B1(*iParam0))
		{
			unk_0x336AE92FD68DEF98(*iParam0, 1, 0);
		}
		unk_0x7763EDCBED8A5840(iParam0);
	}
}

void func_93(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_2446533.f_4399, 25))
		{
			return;
		}
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0xF457518D39569180(iParam2);
		unk_0x075BBF37597121A7("FocusIn");
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x3229F8D82C561641(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x471A7F8C908126F0(sVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x471A7F8C908126F0(uParam0->f_3))
	{
		if (func_94(uParam0->f_3))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	if (!unk_0x471A7F8C908126F0(sVar0))
	{
		if (func_94(sVar0))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
}

bool func_94(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

int func_95()
{
	if (func_57(iLocal_92, unk_0x9F92518438215DD0(), 1) > (fLocal_116 + 100f))
	{
		return 1;
	}
	if (func_57(iLocal_92, unk_0x9F92518438215DD0(), 1) > fLocal_116)
	{
		if (((unk_0x3C17D9ED0E5F3FCA(iLocal_91, sLocal_320, "IDLE_A", 3) && unk_0xD17241758B91AAED(iLocal_91, sLocal_320, "IDLE_A") > 0.99f) || (unk_0x3C17D9ED0E5F3FCA(iLocal_91, sLocal_320, "IDLE_B", 3) && unk_0xD17241758B91AAED(iLocal_91, sLocal_320, "IDLE_B") > 0.99f)) || (unk_0x3C17D9ED0E5F3FCA(iLocal_91, sLocal_320, "IDLE_C", 3) && unk_0xD17241758B91AAED(iLocal_91, sLocal_320, "IDLE_C") > 0.99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_96()
{
	if ((((((((((iLocal_126 > -1 && (unk_0x17103F66FBB44C3C() - iLocal_126) > 5000) && !func_19()) && func_58(iLocal_90)) && func_58(iLocal_91)) && func_67(iLocal_92)) && !unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_90, 13f, 13f, 13f, 0, 1, 0)) && !unk_0x5093D6F9140AD109(iLocal_91, iLocal_90, 13f, 13f, 13f, 0, 1, 0)) && unk_0x44E080690DA76A2A(iLocal_90, iLocal_92, 0)) && unk_0x5093D6F9140AD109(iLocal_91, unk_0x9F92518438215DD0(), 8f, 8f, 8f, 0, 1, 0)) && func_2(&uLocal_133, "REBTHAU", sLocal_301, 4, 0, 0, 0))
	{
		iLocal_126 = -1;
	}
}

void func_97()
{
	if (func_98())
	{
		iLocal_127 = unk_0x17103F66FBB44C3C();
		func_65(&uLocal_130);
		func_93(&uLocal_329, 0, 0);
		unk_0xA65F8C84413BA46B(0);
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
		{
			iLocal_93 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 1);
			unk_0x336AE92FD68DEF98(iLocal_93, 1, 1);
		}
		if (func_58(iLocal_91))
		{
			unk_0xD2062A6AC314B85E(iLocal_91);
		}
		if ((func_58(iLocal_90) && !func_19()) && func_2(&uLocal_133, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_88 = 3;
	}
	else
	{
		if (((iLocal_325 == 0 && unk_0x2E6E8D325977B3EC(uLocal_130)) && func_58(unk_0x9F92518438215DD0())) && func_58(iLocal_90))
		{
			if (func_57(unk_0x9F92518438215DD0(), iLocal_90, 1) < 30f || unk_0xD18D82BE9A1A5E43(unk_0x77009B1C011405A9(iLocal_90, 1), 10f, 1))
			{
				iLocal_325 = 1;
				unk_0x49101D6A0E39441B(uLocal_130, iLocal_325);
			}
		}
		if (((iLocal_316 == 2 && func_58(iLocal_90)) && func_67(iLocal_92)) && unk_0x44E080690DA76A2A(iLocal_90, iLocal_92, 0))
		{
			if (iLocal_311 == 0)
			{
				unk_0x0716CDE1D91312EC(iLocal_92, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_311 = 1;
				Local_312 = { unk_0xB42389F9C2CB1A1D(unk_0x18D55FD90C071812(1, "RE_BikeThief2"), unk_0x17EA06204E43734A(1, "RE_BikeThief2")) };
			}
			else if (!unk_0x1B277BFA27CD5A9F(iLocal_92) || func_212(iLocal_92, Local_312, 1) < 5f)
			{
				if (unk_0x1B277BFA27CD5A9F(iLocal_92))
				{
					unk_0x0DC4413F65975A4C(iLocal_92);
				}
				unk_0x7FC0EEAECC1615C3(iLocal_90, iLocal_92, unk_0x9F92518438215DD0(), 8, fLocal_113, 786468, 10f, 1f, 0);
			}
		}
	}
}

int func_98()
{
	if (!func_58(iLocal_90))
	{
		return 1;
	}
	else if (func_58(iLocal_92))
	{
		if (iLocal_343 == 0)
		{
			if (unk_0x44E080690DA76A2A(iLocal_90, iLocal_92, 0))
			{
				iLocal_343 = 1;
			}
		}
		else if (!unk_0x44E080690DA76A2A(iLocal_90, iLocal_92, 0))
		{
			return 1;
		}
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_90, unk_0x9F92518438215DD0(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()
{
	if ((func_58(iLocal_90) && func_67(iLocal_92)) && unk_0x44E080690DA76A2A(iLocal_90, iLocal_92, 0))
	{
		if (iLocal_118)
		{
			if (!unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_90, 40f, 40f, 40f, 0, 1, 0))
			{
				fLocal_113 = fLocal_115;
				unk_0xB7E3E890C2B1B305(iLocal_90, fLocal_113);
				unk_0x402A96371F34E6D8(iLocal_90, unk_0x9F92518438215DD0(), 20000, 16, 2);
				iLocal_118 = 0;
			}
		}
		else if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_90, 40f, 40f, 40f, 0, 1, 0))
		{
			fLocal_113 = fLocal_114;
			unk_0xB7E3E890C2B1B305(iLocal_90, fLocal_113);
			unk_0x402A96371F34E6D8(iLocal_90, unk_0x9F92518438215DD0(), 20000, 16, 2);
			iLocal_118 = 1;
		}
	}
}

void func_100()
{
	if (((((((((iLocal_124 < 5 && !func_19()) && func_58(iLocal_90)) && func_58(iLocal_91)) && func_67(iLocal_92)) && unk_0x44E080690DA76A2A(iLocal_90, iLocal_92, 0)) && unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_90, 13f, 13f, 13f, 0, 1, 0)) && !unk_0x5093D6F9140AD109(iLocal_91, iLocal_90, 13f, 13f, 13f, 0, 1, 0)) && (unk_0x17103F66FBB44C3C() - iLocal_125) > 15000) && func_2(&uLocal_133, "REBTHAU", sLocal_303, 4, 0, 0, 0))
	{
		if (unk_0xE962BD784DD0E442(iLocal_90, -1273030092) == 1 && !unk_0x797BD5F6F457D2D9(iLocal_90))
		{
			unk_0x46374ECB1C118DE5(iLocal_90, unk_0x9F92518438215DD0(), 0, 0f, 0f, 0f, 15f, 50, 1, -753768974);
		}
		iLocal_125 = unk_0x17103F66FBB44C3C();
		iLocal_124++;
	}
}

void func_101()
{
	if ((((iLocal_309 == 0 && func_58(iLocal_91)) && func_58(iLocal_90)) && func_67(iLocal_92)) && unk_0x44E080690DA76A2A(iLocal_90, iLocal_92, 0))
	{
		if (iLocal_326 == 0)
		{
			if (func_2(&uLocal_133, "REBTHAU", sLocal_298, 4, func_104(), 0, 0))
			{
				unk_0x71628E52718BD195(iLocal_91);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_94);
				unk_0x402A96371F34E6D8(0, iLocal_90, -1, 2048, 2);
				unk_0xB64A0ADA3D251EDE(0, Local_104, 2f, 20000, 1193033728, 1056964608);
				unk_0x23F243BF5B07DA90(0, iLocal_92, 1000);
				unk_0x7CF15DD8B3815A0D(0, sLocal_318, sLocal_319, 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, sLocal_320, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, sLocal_320, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, sLocal_320, "IDLE_C", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, sLocal_320, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, sLocal_320, "IDLE_A", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, sLocal_320, "IDLE_B", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x7CF15DD8B3815A0D(0, sLocal_320, "IDLE_C", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x3179CCC77CBAB31F(uLocal_94);
				unk_0xC7EBE3C9AC83FAAA(iLocal_91, uLocal_94);
				unk_0xCD02E3C29B8253A6(&uLocal_94);
				iLocal_125 = unk_0x17103F66FBB44C3C();
				iLocal_126 = unk_0x17103F66FBB44C3C();
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
		else if (func_58(unk_0x9F92518438215DD0()))
		{
			if (func_57(unk_0x9F92518438215DD0(), iLocal_91, 1) < 30f)
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
					func_102();
					iLocal_327 = 1;
				}
			}
		}
	}
}

void func_102()
{
	Global_14558 = 0;
	func_103();
}

void func_103()
{
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xAD3949CD5FADCA61();
		Global_16703 = 0;
		unk_0xC318E8D9E0AA1394(1);
		Global_15692 = 6;
		return;
	}
}

int func_104()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 100f, 100f, 20f };
	if (!unk_0x3E0478C40AB5B38D(iLocal_91))
	{
		if (unk_0x5093D6F9140AD109(iLocal_91, unk_0x9F92518438215DD0(), Var1, 0, 1, 0))
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
	if ((func_58(iLocal_90) && func_67(iLocal_92)) && unk_0x44E080690DA76A2A(iLocal_90, iLocal_92, 0))
	{
		func_106(&uLocal_329, iLocal_92, 0, 0, 1, 1, 1);
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
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
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
	
	if (uParam0->f_1 && unk_0x66ABEB57BE23A1E8())
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x471A7F8C908126F0(iVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
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
	if (func_127(iParam1) && unk_0xB3CC729BBAA21637(iParam1))
	{
		iVar1 = 0;
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			unk_0x77AD4F1EB5E9941E(unk_0x240654B57CFFBFB3(iParam1));
			unk_0x86240DC80CA03EAA(unk_0x240654B57CFFBFB3(iParam1), 1);
			if (unk_0x279B7F77009BB4FE(unk_0x240654B57CFFBFB3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2B1914308D0376C8(iParam1))
		{
			unk_0x13DE0701DBD9B873(unk_0x40A2BB73421EA79A(iParam1));
			if (unk_0x89E19A8E46D632B8(unk_0x40A2BB73421EA79A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam1))
		{
			unk_0x0468D4FE2D4E06D1(unk_0xBF367154777CAECE(iParam1));
			if (unk_0x2EF3D938DF2094F2(unk_0xBF367154777CAECE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x66ABEB57BE23A1E8())
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
					if ((unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0)) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if ((iVar1 && !unk_0xC9EED58014EF1F40()) && uParam8)
						{
							if (!func_94(iVar0))
							{
								func_113(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
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
				if (unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0))
				{
					if (((unk_0x0FF9FE2CB115CFB9(iParam1) && iVar1) && !unk_0xC9EED58014EF1F40()) && uParam8)
					{
						if (!func_94(iVar0))
						{
							func_113(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
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
			if (!unk_0x471A7F8C908126F0(sParam5))
			{
				if (func_94(sParam5))
				{
					unk_0x35611EEE7A1FFEDB(1);
				}
			}
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
			{
				if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
					{
						func_93(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
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
	if (func_127(unk_0x9F92518438215DD0()))
	{
		unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0x3229F8D82C561641(1);
		unk_0xF457518D39569180(0);
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		unk_0x075BBF37597121A7("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x17103F66FBB44C3C()
		{
			return 1;
		}
	}
	return 0;
}

int func_112(bool bParam0)
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97358.f_8303.f_100++;
			}
			return Global_97358.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97358.f_8303.f_101++;
			}
			return Global_97358.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97358.f_8303.f_102++;
			}
			return Global_97358.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_113(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

int func_114(char* sParam0)
{
	if (!func_115(1, 1, 0))
	{
		if ((!unk_0x9E9AFDBF482248F6(sParam0) && func_94(sParam0)) || func_94("CMN_HINT"))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		return 0;
	}
	switch (Global_34913)
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
		if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x2D8FCFBC4E01FF7C())
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
	if (unk_0xB693DB1187BBD585())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
		{
			if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
			{
				return 0;
			}
			if (unk_0x9DA0D8B7E5367D16())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_116()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

int func_117(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
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
	
	if (unk_0x0BA451447C3B1A8D(iParam1))
	{
		func_93(uParam0, 0, 0);
	}
	if (func_121(Param2, 0f, 0f, 0f))
	{
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			iVar0 = unk_0x240654B57CFFBFB3(iParam1);
			if (!unk_0x827151D7B70CB853(iVar0, 0))
			{
				if (unk_0x2FCB242469087013(iVar0))
				{
					if (!func_119())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA880B447140A3E0D(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x3229F8D82C561641(0);
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
	unk_0x7762AD97EBCE06D8(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iParam1, -1, iVar3, iVar4);
	unk_0x20BCECAA3CCE96D0("FocusIn", 0, 0);
	unk_0x9B517A4FE28A719F("HINT_CAM_SCENE");
	unk_0x86F4B3D6FF8F65DE(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x17103F66FBB44C3C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_119()
{
	return func_120(unk_0xCFC72E446B0B3AD7());
}

int func_120(var uParam0)
{
	if (unk_0xB6A50C909A8FABC3(unk_0x4E6043D225B9C75F(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_121(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
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
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x17103F66FBB44C3C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
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
				if (!func_125(bParam1, bParam2, bParam3) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
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
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
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
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
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
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x52F1618353272A82(0, 80))
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
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x52F1618353272A82(0, 80))
			{
				unk_0x3229F8D82C561641(0);
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
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
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
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (unk_0x2B1914308D0376C8(iParam0))
		{
			if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4E178F5D4155391A(iParam0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_128()
{
	unk_0xEDB9A377CD8B7F03(&Global_2264, 4);
}

void func_129()
{
	if (unk_0x746960881FB19A89(iLocal_90))
	{
		if (unk_0x3E0478C40AB5B38D(iLocal_90))
		{
			func_145();
			func_213();
		}
		else if (func_140())
		{
			if (func_9() == 0)
			{
				func_139(&uLocal_133, 0, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
				sLocal_300 = "REBTH_RESPM";
			}
			else if (func_9() == 1)
			{
				func_139(&uLocal_133, 0, unk_0x9F92518438215DD0(), "FRANKLIN", 0, 1);
				sLocal_300 = "REBTH_RESPF";
			}
			else if (func_9() == 2)
			{
				func_139(&uLocal_133, 0, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
				sLocal_300 = "REBTH_RESPT";
			}
			if (unk_0xFC38B241541883D3(iLocal_92, 0) && !unk_0x3E0478C40AB5B38D(iLocal_90))
			{
				if (iLocal_316 == 2)
				{
					unk_0x4073360CA020BB84(iLocal_90, iLocal_92, 20000, -1, 1073741824, 1, 0);
				}
				else
				{
					unk_0xF87DA7F5BA8C7D0F(&uLocal_94);
					unk_0x4073360CA020BB84(0, iLocal_92, 20000, -1, 1073741824, 1, 0);
					unk_0x7FC0EEAECC1615C3(0, iLocal_92, unk_0x9F92518438215DD0(), 8, fLocal_113, 786468, 10f, 1f, 0);
					unk_0x3179CCC77CBAB31F(uLocal_94);
					unk_0xC7EBE3C9AC83FAAA(iLocal_90, uLocal_94);
					unk_0xCD02E3C29B8253A6(&uLocal_94);
					unk_0xE8105B7E3908547D(iLocal_90, 1);
				}
			}
			func_65(&uLocal_132);
			uLocal_130 = func_61(iLocal_90, 1, 145);
			unk_0x49101D6A0E39441B(uLocal_130, iLocal_325);
			unk_0xA65F8C84413BA46B(2);
			if (iLocal_316 == 1)
			{
				unk_0x0843F97559A8728B(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 0, 0, 1);
			}
			iLocal_88 = 2;
			func_130(1);
		}
	}
}

int func_130(int iParam0)
{
	if (func_133())
	{
		Global_97348 = 1;
		Global_97345 = unk_0x17103F66FBB44C3C();
		if (func_41(Global_97347))
		{
			func_131(0);
		}
		unk_0x50809CE263545545(1, "RE_TITLE");
		if (iParam0 && func_41(Global_97347))
		{
			unk_0x951B29B8E6D6CC38();
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
			if (Global_97358.f_28192.f_2 < 3)
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_113(func_132(iParam0), -1);
					Global_97358.f_28192.f_2++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 1))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_113(func_132(iParam0), -1);
					Global_97358.f_28192.f_3++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x94E72F17611BCD3C(Global_97354, 2))
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_113(func_132(iParam0), -1);
					Global_97358.f_28192.f_4++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 2);
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
	switch (func_134(&Global_24503, 0, 5, 0, unk_0x81ACA1EEF1E4410D()))
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
		if (Global_87845.f_44 == 1)
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
		Global_34877++;
		*uParam0 = Global_34877;
		unk_0xC243E2F8392527C0(unk_0x2563F6EECD8726D3(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x160853D5D71EE3FE(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
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
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
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
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_136(int iParam0)
{
	return func_137(iParam0, Global_34913);
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
	if (Global_34913 == 15)
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
	if (!Global_68245)
	{
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF25BFC104A163677(iParam2, 0);
			}
			else
			{
				unk_0xF25BFC104A163677(iParam2, 1);
			}
		}
		if (!unk_0x3E0478C40AB5B38D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x12977F077B942364(iParam2, 0);
			}
			else
			{
				unk_0x12977F077B942364(iParam2, 1);
			}
		}
	}
}

int func_140()
{
	switch (iLocal_316)
	{
		case 1:
			if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 365.9538f, -1971.716f, 18.34454f, 526.409f, -1861.941f, 34.52906f, 100f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 886.1401f, -229.9373f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -1969.382f, 382.1331f, 68.15017f, -1878.152f, 158.4052f, 104.8504f, 100f, 0, 1, 0))
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
	if (func_58(iLocal_90))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_90, unk_0x9F92518438215DD0(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_67(iLocal_92))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_92, unk_0x9F92518438215DD0(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_58(iLocal_91))
	{
		if (unk_0xD18D82BE9A1A5E43(unk_0xAA04EEFB14FDE2E9(iLocal_91, 31086, 0f, 0f, 0f), 3f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + unk_0xAA04EEFB14FDE2E9(iLocal_91, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + unk_0xAA04EEFB14FDE2E9(iLocal_91, 31086, 0f, 0f, 0f) };
		if ((unk_0x34B6D387C9A70A16(Var3, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x34B6D387C9A70A16(Var3, Var0, joaat("weapon_grenade"), 1)) || unk_0x34B6D387C9A70A16(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (unk_0x2EF36063171DEEDD(unk_0xAA04EEFB14FDE2E9(iLocal_91, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0x24E7720869956FA9(-1, unk_0xAA04EEFB14FDE2E9(iLocal_91, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (unk_0x7E4B3ADE683EE23B(iLocal_91))
		{
			return 1;
		}
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_91, unk_0x9F92518438215DD0(), 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_142()
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
		unk_0xCF023D488D3EAE4D(Local_101 - Vector(20f, 20f, 20f), Local_101 + Vector(20f, 20f, 20f), 0, 1);
		unk_0x03B100B01B4CC779(Local_101 - Vector(20f, 20f, 20f), Local_101 + Vector(20f, 20f, 20f));
		unk_0xFC90BEDEE248C76D(Local_101, 20f, 1, 0, 0, 0);
		iLocal_117 = 1;
	}
	unk_0x3BC6D217451D6BB7(joaat("g_m_y_strpunk_01"));
	unk_0x3BC6D217451D6BB7(joaat("a_m_y_beachvesp_01"));
	unk_0x3BC6D217451D6BB7(iLocal_89);
	if ((((unk_0x149162179DBAEDB0(joaat("g_m_y_strpunk_01")) && unk_0x149162179DBAEDB0(joaat("a_m_y_beachvesp_01"))) && unk_0x149162179DBAEDB0(iLocal_89)) && func_144()) && func_143())
	{
		iLocal_92 = unk_0xB0694AD0A3BB8936(iLocal_89, Local_98, fLocal_110, 1, 1);
		unk_0x0880E86251A44B7F(iLocal_89);
		unk_0x60DAE84D0B296FD2(iLocal_89, 1);
		unk_0x6FD45FA39DD18625(iLocal_92, 1, 1);
		unk_0x5C7436C87A3920CE(iLocal_92, 0);
		unk_0x5B69218A32C0CFED(iLocal_92, 0);
		unk_0xA27F610688163CA9(iLocal_92, 1);
		unk_0x9B517A4FE28A719F("RE_CAR_STEAL_SCENE");
		unk_0x060D3260330D112D(iLocal_92, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		fLocal_113 = fLocal_115;
		if (iLocal_316 == 3)
		{
			unk_0x0F8D3599CAFC9EEE(iLocal_92, 49, 0);
			unk_0xCC6111FBD13C5A22(iLocal_92, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_92, 16, 2, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_92, 11, 3, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_92, 12, 2, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_92, 13, 2, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_92, 23, 10, 0);
			unk_0x3E9FFBB0E33D344F(iLocal_92, 24, 10, 0);
			unk_0x88B205B70CF73BF1(iLocal_92, 22, 1);
			unk_0x88B205B70CF73BF1(iLocal_92, 17, 1);
			unk_0x88B205B70CF73BF1(iLocal_92, 21, 1);
			unk_0x88B205B70CF73BF1(iLocal_92, 20, 1);
			unk_0x88B205B70CF73BF1(iLocal_92, 19, 1);
			unk_0x0F8D3599CAFC9EEE(iLocal_92, 89, 89);
			unk_0x32C2810FAE38E8CD(iLocal_92, 0, 1);
			unk_0xD221FDA71C0FB50F(iLocal_92, 1);
		}
		unk_0x4B38C66919CC2E48("re_bikethief_relGroupVictim", &uLocal_121);
		unk_0x4B38C66919CC2E48("re_bikethief_relGroupThief", &uLocal_122);
		unk_0xF2061C15946C53A2(5, uLocal_122, uLocal_121);
		unk_0xF2061C15946C53A2(5, uLocal_122, joaat("player"));
		unk_0xF2061C15946C53A2(1, iLocal_121, joaat("player"));
		iLocal_90 = unk_0xA00B5D954AD320BF(19, joaat("g_m_y_strpunk_01"), Local_107, fLocal_112, 1, 1);
		unk_0x0880E86251A44B7F(joaat("g_m_y_strpunk_01"));
		unk_0x4A1AC49BA4A747F7(iLocal_90, 1);
		unk_0x69C5E202565B9651(iLocal_90, 1);
		unk_0xA50AD6983D49A772(iLocal_90, uLocal_122);
		unk_0x9A43E575C1997EF8(iLocal_90, 3);
		unk_0x64277E0EB39C1162(iLocal_90, 17, 1);
		unk_0x64277E0EB39C1162(iLocal_90, 13, 0);
		unk_0xA334EDA2335A13CA(iLocal_90, 1, 1);
		unk_0x9C718295C759454B(iLocal_90, 0);
		unk_0x9001FCB58244C11D(iLocal_90, 42, 1);
		unk_0x9001FCB58244C11D(iLocal_90, 281, 1);
		unk_0x5204CFB0BCA6456D(iLocal_90, 2);
		unk_0x1B0EED08D8CF2596(iLocal_90, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		unk_0x7CF15DD8B3815A0D(iLocal_90, sLocal_317, "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
		iLocal_91 = unk_0xA00B5D954AD320BF(19, joaat("a_m_y_beachvesp_01"), Local_101, fLocal_111, 1, 1);
		unk_0x0880E86251A44B7F(joaat("a_m_y_beachvesp_01"));
		unk_0x4A1AC49BA4A747F7(iLocal_91, 1);
		unk_0x69C5E202565B9651(iLocal_91, 1);
		unk_0xA334EDA2335A13CA(iLocal_91, 8, 1);
		if (iLocal_316 == 3)
		{
			unk_0x9C718295C759454B(iLocal_91, 1);
		}
		else
		{
			unk_0x9C718295C759454B(iLocal_91, 0);
		}
		unk_0x9001FCB58244C11D(iLocal_91, 26, 1);
		unk_0x9001FCB58244C11D(iLocal_91, 42, 1);
		unk_0x9001FCB58244C11D(iLocal_91, 167, 1);
		unk_0x9001FCB58244C11D(iLocal_91, 281, 1);
		unk_0xA50AD6983D49A772(iLocal_91, iLocal_121);
		unk_0x0CFE85F88BE373C8(iLocal_91, 0);
		unk_0x1B0EED08D8CF2596(iLocal_91, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		unk_0x18CA21B07F636243(iLocal_91, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
		func_139(&uLocal_133, 1, iLocal_90, "BThief", 0, 1);
		func_139(&uLocal_133, 2, iLocal_91, "BThiefVictim", 0, 1);
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
		unk_0xDF569D00AB746851(0);
		iLocal_88 = 1;
	}
}

int func_143()
{
	if (iLocal_316 == 2)
	{
		unk_0x8E6E37300A0A2B22(1, "RE_BikeThief2");
		if (!unk_0x381FCADDEA0C040B(1, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_144()
{
	unk_0xDA293E5084610B09(sLocal_317);
	unk_0xDA293E5084610B09(sLocal_318);
	unk_0xDA293E5084610B09(sLocal_320);
	unk_0xDA293E5084610B09(sLocal_321);
	unk_0xDA293E5084610B09(sLocal_323);
	unk_0xDA293E5084610B09(sLocal_322);
	if (((((unk_0x3DA2EED4204CE591(sLocal_317) && unk_0x3DA2EED4204CE591(sLocal_318)) && unk_0x3DA2EED4204CE591(sLocal_320)) && unk_0x3DA2EED4204CE591(sLocal_321)) && unk_0x3DA2EED4204CE591(sLocal_323)) && unk_0x3DA2EED4204CE591(sLocal_322))
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_91))
	{
		if (func_69(iLocal_91, 993674639))
		{
			unk_0x71628E52718BD195(iLocal_91);
		}
		else
		{
			unk_0x32D18ECD9E6F9BE2(iLocal_91);
		}
		unk_0xE8105B7E3908547D(iLocal_91, 1);
		unk_0x722E6B3A5162A6BB(iLocal_91, unk_0x9F92518438215DD0(), 100f, -1, 0, 0);
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_90))
	{
		unk_0xE8105B7E3908547D(iLocal_90, 1);
		unk_0x722E6B3A5162A6BB(iLocal_90, unk_0x9F92518438215DD0(), 100f, -1, 0, 1);
	}
}

int func_146()
{
	if (iLocal_88 == 0 && func_165())
	{
		return 1;
	}
	if (iLocal_88 == 1 && func_153())
	{
		return 1;
	}
	if (unk_0x746960881FB19A89(iLocal_91))
	{
		if (unk_0x3E0478C40AB5B38D(iLocal_91))
		{
			return 1;
		}
		else if (unk_0xE99AF5B1B3F0BB7C(iLocal_91, unk_0x9F92518438215DD0(), 1))
		{
			func_151();
			func_150(&uLocal_133, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_147(iLocal_91, 170f))
		{
			func_151();
			func_150(&uLocal_133, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0 && iLocal_310 == 1)
	{
		return 1;
	}
	if (unk_0x746960881FB19A89(iLocal_92) && !unk_0xFC38B241541883D3(iLocal_92, 0))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_58(unk_0x9F92518438215DD0()) && func_58(iParam0))
	{
		if (func_149(iParam0) || unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iParam0))
		{
			if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_75(iParam0, unk_0x9F92518438215DD0(), fParam1, 1, 250, 7);
}

int func_149(var uParam0)
{
	if (unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), uParam0) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
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
	unk_0xEDB9A377CD8B7F03(&Global_14558, 0);
	Global_15695 = iParam3;
	StringCopy(&Global_15682, sParam2, 24);
}

void func_151()
{
	Global_14558 = 0;
	func_152();
}

void func_152()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
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
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_160())
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
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (func_11(func_9()))
		{
			iVar36 = func_46();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 2) && !unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 3))
				{
					func_155(iVar32, &Var0);
					fVar35 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var0.f_6, 1);
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
	if (unk_0x9E9AFDBF482248F6(&cVar2))
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
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xC981EEB259E36845() == 1f)
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
	return Global_97076 > 0;
}

int func_163()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_165()
{
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_85) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_160())
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
	if (unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_8[iParam0], iParam1))
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
	unk_0xEDE0414F2E7294E3(0);
	unk_0xA81D632371FE58C9(1);
	Global_97344 = 0;
	func_170();
}

void func_170()
{
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			unk_0x60DAE84D0B296FD2(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)), 1);
		}
		unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
	}
}

void func_171(int iParam0)
{
	Global_97347 = iParam0;
}

int func_172(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131425)
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
	Local_85 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			Var1 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_160())
			{
				return 0;
			}
		}
		if (!Global_97358.f_7341)
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
		if (Global_97347 != -1)
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
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !bParam6)
		{
			if ((Var1.f_2 - Local_85.f_2) > 50f)
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
		if (!func_206(Global_97358.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x17103F66FBB44C3C() - Global_97349) < 150000)
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
		if (unk_0xDC8D2FA0A650F78B())
		{
			return 0;
		}
		if (unk_0x5B668B6112C83376())
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
		if (unk_0xF67FA89DDC5D0BDC(unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0())))
		{
			if ((unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(377.153f, -717.567f, 10.0536f) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(320.9934f, 265.2515f, 82.1221f)) || unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x8AE51093FA7FBE3F(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_168(0, 0))
		{
			return 0;
		}
		if (Global_24590)
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
				Var5 = { Global_97358.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97358.f_1729.f_539.f_1524[iVar4];
				if (func_195(iVar8))
				{
					if (func_173(iVar4))
					{
						if (!func_121(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_97358.f_1729.f_539.f_1524[iParam0];
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_185(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
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
	
	func_194(&uVar0, unk_0xD9940DF735CED1D5());
	func_193(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_192(&uVar0, unk_0x3E15607264E063C3());
	func_191(&uVar0, unk_0xA2C54D866C588926());
	func_190(&uVar0, unk_0x35E06151CD8A2DD1());
	func_189(&uVar0, unk_0x4C625096668FC49E());
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
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
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
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_204()) || Global_96405) || Global_24446) || func_203()) || func_16(8, -1)) || func_202()) || func_201()) || func_200()) || func_199()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_204()) || Global_24446) || func_203()) || func_16(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_204()) || Global_96405) || Global_24446) || func_203()) || func_16(8, -1)) || func_200()) || func_202()) || func_201()) || func_199()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_204()) || Global_96405) || Global_24446) || func_203()) || func_16(8, -1)) || func_202()) || func_201()) || func_199()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_204() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_16(8, -1)) || func_199()) || func_198()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_16(8, -1) || func_202()) || func_201()) || func_198()) || func_197())
						{
							return 0;
						}
						if ((unk_0x2D8FCFBC4E01FF7C() && unk_0x07A396B1A4E45F2E() != 3) && unk_0x3EFE2A7CA77DFD27() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
						{
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_204()) || Global_24446) || func_203()) || func_16(8, -1)) || func_201()) || func_200()) || func_199()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_204()) || func_201()) || Global_96405) || Global_24446) || func_203()) || Global_35957) || func_16(8, -1)) || func_200()) || func_198()) || func_199()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_204()) || Global_96405) || Global_24446) || func_203()) || func_16(8, -1)) || func_200()) || func_198()) || func_202()) || func_201()) || func_199())
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
	return Global_90001.f_1;
}

int func_198()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_199()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_200()
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

bool func_201()
{
	return Global_90014.f_291 > 0;
}

bool func_202()
{
	return Global_90014.f_290 > 0;
}

var func_203()
{
	return Global_1315900;
}

int func_204()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_205()
{
	func_8();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_97358.f_5944.f_919[iParam0];
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
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_210()
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (unk_0xFC38B241541883D3(uVar0, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0xB5BBEB12C77EE430(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_211()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_212(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(iParam0, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Param1, iParam4);
}

void func_213()
{
	func_93(&uLocal_329, 0, 0);
	if (unk_0x370603716EC2D420("RE_CAR_STEAL_SCENE"))
	{
		if (unk_0xFC38B241541883D3(iLocal_92, 0))
		{
			unk_0xC932874B6133A2D2(iLocal_92, 0);
		}
		unk_0x6041FBFC1EE8196A("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_316 != 3)
	{
		func_216(26);
	}
	else
	{
		func_216(8);
	}
	if (iLocal_316 == 1)
	{
		unk_0x973CDBEE91574C6A(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 1);
	}
	unk_0xD643E324F7E6A17B(uLocal_324, 0);
	unk_0xCF023D488D3EAE4D(Local_101 - Vector(20f, 20f, 20f), Local_101 + Vector(20f, 20f, 20f), 1, 1);
	if (unk_0xFC38B241541883D3(iLocal_92, 0))
	{
		unk_0x4E4495A4D2C1856B(iLocal_92, 1);
		if (unk_0x1B277BFA27CD5A9F(iLocal_92))
		{
			unk_0x0DC4413F65975A4C(iLocal_92);
		}
	}
	if (iLocal_316 == 2)
	{
		unk_0x6AC537DA214AB66E(1, "RE_BikeThief2");
	}
	func_65(&uLocal_132);
	func_65(&uLocal_130);
	func_66(&uLocal_341);
	func_65(&uLocal_131);
	func_72(0);
	func_215(&uLocal_133, 0);
	func_215(&uLocal_133, 1);
	func_215(&uLocal_133, 2);
	if ((func_58(iLocal_91) && func_58(iLocal_92)) && unk_0x44E080690DA76A2A(iLocal_91, iLocal_92, 0))
	{
		unk_0xAFFE01EF7078CAD9(iLocal_91, iLocal_92, fLocal_113, 786485);
		unk_0xE8105B7E3908547D(iLocal_91, 1);
	}
	func_87(&iLocal_90, 1, 0, 1);
	func_87(&iLocal_91, 1, 0, 1);
	func_214(&iLocal_92);
	if (func_58(iLocal_93))
	{
		unk_0x41B7FD9CF0751A0F(iLocal_93);
		func_214(&iLocal_93);
	}
	unk_0x0880E86251A44B7F(joaat("g_m_y_strpunk_01"));
	unk_0x0880E86251A44B7F(joaat("a_m_y_beachvesp_01"));
	unk_0x0880E86251A44B7F(joaat("scorcher"));
	unk_0x0880E86251A44B7F(joaat("bati"));
	unk_0xE29F0AC6C728DD9C(sLocal_317);
	unk_0xE29F0AC6C728DD9C(sLocal_318);
	unk_0xE29F0AC6C728DD9C(sLocal_320);
	unk_0xE29F0AC6C728DD9C(sLocal_321);
	unk_0xE29F0AC6C728DD9C(sLocal_322);
	unk_0xE29F0AC6C728DD9C(sLocal_323);
	unk_0xA65F8C84413BA46B(0);
	unk_0xE60DEFFB2A853900();
}

void func_214(int iParam0)
{
	if (unk_0x746960881FB19A89(*uParam0))
	{
		unk_0x0BA451447C3B1A8D(*uParam0);
		if (unk_0x34E74FF8690AA4B1(*uParam0) && unk_0xAD2C236C4A4B83C9(*uParam0, 1))
		{
			unk_0x9187463EB4918A4D(uParam0);
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
		unk_0x50809CE263545545(0, 0);
		Global_97349 = unk_0x17103F66FBB44C3C();
		func_219(30000);
		StringCopy(&cVar0, func_218(Global_97347, 1), 64);
		if (func_49(Global_97347) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97346, 64);
		}
		unk_0xB87D4A9CC02132A5(&cVar0, Global_97344, (unk_0x17103F66FBB44C3C() - Global_97345), 0);
	}
	else if (unk_0x94E72F17611BCD3C(Global_97354, 0) && Global_97358.f_28192.f_2 < 3)
	{
		unk_0xF76EE56D3E7DAF1B(&Global_97354, 0);
	}
	func_217(&Global_24503);
	Global_97348 = 0;
	func_171(-1);
}

void func_217(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
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
	Global_35464 = (unk_0x17103F66FBB44C3C() + iParam0);
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
	Global_97358.f_28192.f_43[iParam0] = *uParam1;
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
	func_191(uParam0, iParam4);
	func_190(uParam0, iParam5);
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
	if ((Global_97347 == func_50() && unk_0x5B668B6112C83376()) && Global_97348)
	{
		return 1;
	}
	return 0;
}

