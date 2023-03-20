#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	struct<3> Local_96 = { 0, 0, 0 } ;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	bool bLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	struct<6> Local_127 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_133 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
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
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	char[] cLocal_177[8] = 0;
	char* sLocal_178 = NULL;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	float fLocal_183 = 0f;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	struct<3> Local_189 = { 0, 0, 0 } ;
	var uLocal_192 = 0;
	int iLocal_193 = 0;
	var uLocal_194 = 16;
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
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
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
	fLocal_46 = -1f;
	uLocal_54 = unk_0x1B46069E4C762829();
	uLocal_55 = unk_0xE2B564EB49C711B1();
	Local_69 = { -3092.82f, 749.8f, 21.48f };
	Local_72 = { 181.8977f, 4415.152f, 73.463f };
	Local_75 = { 2743.461f, 4385.51f, 47.7521f };
	Local_78 = { -382.1346f, 2817.971f, 44.0671f };
	Local_96 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_127, "", 24);
	Local_62 = { ScriptParam_0.f_1[0 /*3*/] };
	func_262();
	if (unk_0x2C897F101BA20806(11))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_84))
		{
			if (unk_0x9A132E8DFAE1F524(iLocal_84))
			{
				unk_0xA7130AF256ED96A1(iLocal_84);
			}
		}
		func_241();
	}
	if (func_212(Local_62, 13, iLocal_81, 0, 0))
	{
		func_209(-1);
	}
	else
	{
		unk_0x82706E6C897B0FA1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFEC6476AFCF2033F() || iLocal_110)
		{
			if (!func_208())
			{
				if (func_207())
				{
					func_241();
				}
			}
			unk_0x0022A74B21F0C0B9("RE_HL", 0);
			switch (iLocal_56)
			{
				case 0:
					if (func_195())
					{
						func_241();
					}
					if (!iLocal_61)
					{
						func_194();
					}
					else
					{
						func_193();
					}
					if (bLocal_60)
					{
						iLocal_142 = 1;
						iLocal_56 = 1;
					}
					break;
				
				case 1:
					if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
					{
						switch (iLocal_57)
						{
							case 0:
								if ((func_192() && iLocal_58 != 8) && iLocal_58 != 10)
								{
									if (!func_208())
									{
										func_183(1);
									}
									iLocal_57 = 1;
								}
								switch (iLocal_58)
								{
									case 0:
										func_176();
										break;
									
									case 1:
										func_174();
										break;
									
									case 2:
										if (func_173())
										{
										}
										iLocal_157 = unk_0x09560C7DE2A384BD();
										if (iLocal_139 < 1 && !iLocal_140)
										{
											func_172();
										}
										if (iLocal_59 == 1)
										{
											func_171();
										}
										else if (iLocal_59 == 2)
										{
											func_170();
										}
										else if (iLocal_59 == 3)
										{
											func_169();
										}
										else if (iLocal_59 == 5)
										{
											func_166();
										}
										break;
									
									case 3:
										func_163();
										break;
									
									case 4:
										if (iLocal_59 == 1)
										{
											func_146();
											func_145();
										}
										else if (iLocal_59 == 3)
										{
											func_140();
											func_139();
										}
										else if (iLocal_59 == 5)
										{
											func_140();
											func_130();
										}
										if (!bLocal_113)
										{
											func_126();
											func_125();
											func_122();
											func_121();
											func_118();
											func_116();
											func_115();
											func_114();
										}
										func_106();
										break;
									
									case 6:
										func_62();
										if (iLocal_59 == 3)
										{
											func_139();
										}
										break;
									
									case 7:
										func_61();
										if (iLocal_59 == 3)
										{
											func_139();
										}
										break;
									
									case 8:
										if (iLocal_59 == 3)
										{
											func_57();
											func_139();
										}
										break;
									
									case 9:
										if (!unk_0x2DE0B96E966FD817(iLocal_84))
										{
											if (unk_0x965556ACF6A83973(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
											{
												unk_0x353F4B963593F141(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
											}
											else
											{
												unk_0xAC9F22F89987627B(iLocal_84, 1193033728, 0);
											}
											unk_0x2686393074E14730(iLocal_84, 1);
											unk_0x4EDE34FBADD967A6(5000);
										}
										func_53();
										break;
									
									case 10:
										break;
								}
								if ((func_52() && !func_51()) && iLocal_58 != 10)
								{
									if (!unk_0x2DE0B96E966FD817(iLocal_84))
									{
										if (unk_0x965556ACF6A83973(iLocal_84, Local_96, 5f, 5f, 5f, 0, 1, 0))
										{
											func_50(0);
											unk_0x4EDE34FBADD967A6(0);
											func_48();
											iLocal_58 = 10;
										}
									}
								}
								if (func_47())
								{
									if (unk_0x538DF9E5B1DF01EB(iLocal_84))
									{
										unk_0x51A89CCC8A5317D0(&iLocal_84);
									}
									func_18();
								}
								break;
							
							case 1:
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								if (iLocal_59 == 1)
								{
									func_1(&uLocal_194, cLocal_177, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_59 == 2)
								{
									func_1(&uLocal_194, cLocal_177, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_59 == 3)
								{
									func_1(&uLocal_194, cLocal_177, "REHH3_AGG", 4, 0, 0, 0);
									if (!unk_0x2DE0B96E966FD817(iLocal_85))
									{
										unk_0x937785D9C1929236(iLocal_85);
										unk_0xEA36CC2E7750344B(iLocal_85, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
										unk_0x2686393074E14730(iLocal_85, 1);
									}
								}
								else if (iLocal_59 == 5)
								{
									func_1(&uLocal_194, cLocal_177, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!unk_0x2DE0B96E966FD817(iLocal_84))
								{
									unk_0x937785D9C1929236(iLocal_84);
									unk_0xEA36CC2E7750344B(iLocal_84, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
									unk_0x2686393074E14730(iLocal_84, 1);
									func_53();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_241();
		}
		if (iLocal_58 > 2)
		{
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x538DF9E5B1DF01EB(iLocal_84))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_84))
					{
						if (!unk_0x14F9932776F21CC2(iLocal_84, unk_0xA16EC202D9D35357(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_53();
						}
					}
				}
			}
		}
		if (iLocal_58 > 0 && iLocal_58 < 8)
		{
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x2DE0B96E966FD817(iLocal_84))
				{
					if (!func_208())
					{
						func_183(1);
					}
					func_53();
				}
				else if (!unk_0xEAABEAE1DB589285(iLocal_84))
				{
					if (unk_0xBF8ADDCADFC4691E(iLocal_84, unk_0xA16EC202D9D35357(), 0))
					{
						unk_0x937785D9C1929236(iLocal_84);
						unk_0xEA36CC2E7750344B(iLocal_84, unk_0xA16EC202D9D35357(), 250f, -1, 0, 0);
						func_53();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_16();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_15(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_14();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_7();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_6())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_5())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_4();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_3();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_16();
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_4()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_5()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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

void func_7()
{
	if (func_13(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_8();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

int func_8()
{
	func_9();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_9()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_12(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_11(unk_0xA16EC202D9D35357());
			if (func_10(iVar0) && (!func_13(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_10(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_13(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_16()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_17(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

void func_18()
{
	while (!func_46())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_42(func_8(), 4, 5);
	func_22(13, iLocal_81);
	func_19();
	func_241();
}

void func_19()
{
	func_20();
}

int func_20()
{
	if (func_21(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

bool func_21(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_22(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
		if (!func_37(51))
		{
			func_33("RE_REWARD", 1, 0, 4000, 10000, func_36(), 0, 138, 0);
			func_32(51);
		}
		if (func_31(iParam0))
		{
			Global_97439.f_28192.f_2 = 3;
		}
		if (func_30(iParam0, iParam1) != 322)
		{
			func_24(func_30(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97427 = iParam1;
		if (Global_97425 == 0)
		{
			if (((Global_97428 == 1 || Global_97428 == 5) || Global_97428 == 11) || Global_97428 == 25)
			{
				func_23(2);
			}
			else if ((Global_97428 == 26 || Global_97428 == 8) || Global_97428 == 17)
			{
				func_23(7);
			}
			else
			{
				func_23(1);
			}
		}
	}
}

void func_23(int iParam0)
{
	Global_97425 = iParam0;
}

void func_24(int iParam0, var uParam1, var uParam2)
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
		func_28((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_25();
	}
}

void func_25()
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
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_27(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_26() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_20();
				}
			}
		}
	}
}

int func_26()
{
	return Global_24446;
}

int func_27(int iParam0, int iParam1)
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

int func_28(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_29()
{
	return Global_1312729;
}

int func_30(int iParam0, int iParam1)
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

int func_31(int iParam0)
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

void func_32(int iParam0)
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
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_35();
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_36()
{
	func_9();
	switch (Global_97439.f_1729.f_539.f_3213)
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

int func_37(int iParam0)
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
		return unk_0x889D01384B54BCE3(Global_97439.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_28192.f_8[iParam0]), iParam1);
}

int func_39(int iParam0)
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

int func_40()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x7E5A426328F6E635(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xB793F1A0B6CC4AE1(&cParam0))
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

void func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_97439.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97439.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3025;
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
			if (iVar1 != 3025)
			{
				iVar0 = func_45(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_43(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_44(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_46()
{
	return 1;
}

int func_47()
{
	if (Global_24681)
	{
		func_23(4);
		return 1;
	}
	return 0;
}

void func_48()
{
	Global_14559 = 0;
	func_49();
}

void func_49()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

void func_50(int iParam0)
{
	Global_16704 = iParam0;
}

int func_51()
{
	if (Global_97439.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return Global_24680;
}

void func_53()
{
	func_55();
	while (func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_241();
}

int func_54()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

void func_55()
{
	Global_14559 = 0;
	func_56();
}

void func_56()
{
	if (unk_0xD47B332729054512())
	{
		unk_0xD01024485E7AB68C();
		Global_16704 = 0;
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_57()
{
	struct<6> Var0;
	
	if (!unk_0x2DE0B96E966FD817(iLocal_85) && !unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if (!unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_85, 25f, 25f, 25f, 0, 1, 0) && !unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_84, 40f, 40f, 40f, 0, 1, 0))
		{
			unk_0x937785D9C1929236(iLocal_85);
			unk_0x353F4B963593F141(iLocal_85, Local_92, 1f, -1, 0.25f, 0, 1193033728);
			func_18();
		}
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_85))
	{
		if (unk_0xBF8ADDCADFC4691E(iLocal_85, unk_0xA16EC202D9D35357(), 1))
		{
			if (func_54())
			{
				Var0 = { func_60() };
				if ((unk_0x9BA82E09A986BA4B(&Var0, "REHH3_JB_2") || unk_0x9BA82E09A986BA4B(&Var0, "REHH3_JB_4")) || unk_0x9BA82E09A986BA4B(&Var0, "REHH3_JB_6"))
				{
					func_48();
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > 5000)
		{
			if (unk_0x0E9F33AA2B8E5EB6(iLocal_85, unk_0xA16EC202D9D35357()))
			{
				iLocal_158 = 4;
			}
		}
	}
	if (!iLocal_112)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_84))
		{
			if (unk_0xBF8ADDCADFC4691E(iLocal_84, unk_0xA16EC202D9D35357(), 1))
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_85))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					func_1(&uLocal_194, cLocal_177, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_112 = 1;
				}
			}
		}
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if (unk_0xEAABEAE1DB589285(iLocal_84))
		{
			unk_0x2A6FA367FED380C2(iLocal_84);
		}
		if (unk_0x2DE0B96E966FD817(iLocal_85) && unk_0x965556ACF6A83973(iLocal_84, unk_0xBF8499F46AD9093A(iLocal_85, 0), 1f, 1f, 5f, 0, 1, 0))
		{
			iLocal_158 = 5;
		}
	}
	else if (!unk_0x2DE0B96E966FD817(iLocal_85))
	{
		unk_0x85A1016DBBC5E64B(iLocal_85, unk_0xA16EC202D9D35357(), 0, 16);
		func_53();
	}
	else
	{
		func_53();
	}
	if (!iLocal_167)
	{
		if (unk_0x2DE0B96E966FD817(iLocal_85))
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_121))
			{
				unk_0xB6FB9702660D84F6(&uLocal_121);
			}
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				iLocal_158 = 3;
			}
		}
	}
	if (!iLocal_169)
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_84) && !unk_0x2DE0B96E966FD817(iLocal_85))
		{
			if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
			{
				if (unk_0xC121BFE894DB4BDB(unk_0x1788E93557766241()))
				{
					iLocal_158 = 2;
				}
			}
		}
		if (unk_0x2DE0B96E966FD817(iLocal_85))
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_121))
			{
				unk_0xB6FB9702660D84F6(&uLocal_121);
			}
			func_59(&uLocal_194, 4);
			if (unk_0xBF8ADDCADFC4691E(iLocal_85, unk_0xA16EC202D9D35357(), 1) && unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 6))
			{
				iLocal_158 = 2;
			}
		}
		else if (!unk_0xE44A580B551C3645(iLocal_84))
		{
			if (unk_0xBF8ADDCADFC4691E(iLocal_84, iLocal_85, 1))
			{
				iLocal_158 = 2;
			}
		}
	}
	switch (iLocal_158)
	{
		case 0:
			if (!iLocal_167)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_84) && !unk_0x2DE0B96E966FD817(iLocal_85))
				{
					if (!unk_0x202EF5D8203705EF(iLocal_84, 0) && unk_0x15383F5EDB73B6BB(iLocal_85))
					{
						if (!iLocal_168)
						{
							unk_0x6D98AA46076A68BE(&uLocal_88);
							unk_0x4745F9C50C63A48C(0, iLocal_85, -1, 2052, 2);
							unk_0x5B5659C49032B96C(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x1CAB36EC4E43E586(0, iLocal_85, -1);
							unk_0x963BB7C99350D827(uLocal_88);
							unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
							unk_0x2AF68ED52DC74B7D(&uLocal_88);
							iLocal_168 = 1;
						}
					}
				}
			}
			else
			{
				func_18();
			}
			break;
		
		case 1:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				unk_0xBB5AA994E06B28E2(iLocal_84, 0, 0);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_158 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_169)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_84))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 4))
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!unk_0x2DE0B96E966FD817(iLocal_84))
					{
						unk_0x937785D9C1929236(iLocal_84);
						unk_0xEA36CC2E7750344B(iLocal_84, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
						if (!unk_0x2DE0B96E966FD817(iLocal_85))
						{
							unk_0x758C7961D94C4EB0(iLocal_85, 6, 0, 0);
							unk_0xEA36CC2E7750344B(iLocal_85, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
						}
					}
					func_18();
					iLocal_169 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x2DE0B96E966FD817(iLocal_84))
				{
					unk_0x758C7961D94C4EB0(iLocal_84, 7, 0, 0);
				}
				func_1(&uLocal_194, cLocal_177, "REHH3_BAS", 4, 0, 0, 0);
				if (!unk_0x2DE0B96E966FD817(iLocal_84) && unk_0x538DF9E5B1DF01EB(iLocal_85))
				{
					unk_0x937785D9C1929236(iLocal_84);
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x574CC08ACCB0F5FC(0);
					unk_0x5B5659C49032B96C(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0x4745F9C50C63A48C(0, iLocal_85, -1, 2052, 4);
					unk_0x353F4B963593F141(0, unk_0xBF8499F46AD9093A(iLocal_85, 0), 1f, -1, 3f, 0, 1193033728);
					unk_0x1CAB36EC4E43E586(0, iLocal_85, -1);
					unk_0x5B5659C49032B96C(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x5B5659C49032B96C(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0xAC9F22F89987627B(0, 1193033728, 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					unk_0x2686393074E14730(iLocal_84, 1);
					unk_0x2C4E82CF88213975(iLocal_84, 0);
					unk_0x4EDE34FBADD967A6(10000);
					iLocal_167 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 4:
			if (func_58())
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_84))
				{
					if (unk_0x14F9932776F21CC2(iLocal_84, unk_0xA16EC202D9D35357(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH3_NOO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_158 = 0;
						}
					}
				}
			}
			else if (!unk_0x2DE0B96E966FD817(iLocal_85))
			{
				if (func_1(&uLocal_194, cLocal_177, "REHH3_FHT", 4, 0, 0, 0))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_158 = 0;
				}
			}
			break;
		
		case 5:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				func_55();
				unk_0x4EDE34FBADD967A6(0);
				if (func_1(&uLocal_194, cLocal_177, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_158 = 0;
				}
			}
			break;
	}
}

int func_58()
{
	if (unk_0x889D01384B54BCE3(unk_0x444ECD635D5FD45F(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_60()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		iVar6 = unk_0x8E904BB26E98BDB0();
		iVar6 = (iVar6 + Global_16703);
		if (iVar6 > -1)
		{
			return Global_14561[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_61()
{
	if (iLocal_59 == 3)
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_84))
		{
			if (unk_0x9A132E8DFAE1F524(iLocal_84))
			{
				unk_0xA7130AF256ED96A1(iLocal_84);
			}
			iLocal_58 = 8;
		}
	}
}

void func_62()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_82))
	{
		unk_0xB6FB9702660D84F6(&uLocal_82);
	}
	if (unk_0x5660C8AFDD9C1721(uLocal_83))
	{
		unk_0xB6FB9702660D84F6(&uLocal_83);
	}
	if (iLocal_59 == 1)
	{
		unk_0x7CB5477E93D6A302(uLocal_176);
		unk_0x124843CE93F39C27("TIMER_SCENE");
		if (!iLocal_123)
		{
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_194, cLocal_177, "REHH1_TKA", 4, 0, 0, 0);
			unk_0x54CD1E147EB50625(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				func_81(func_8(), 1, 100, 0, 1);
				func_80(198, 0);
				unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iLocal_84, 8000, 2052, 4);
				unk_0x6D98AA46076A68BE(&uLocal_88);
				unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
				unk_0xBB5AA994E06B28E2(0, 3000, 4194369);
				unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 1000);
				unk_0x353F4B963593F141(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x047BDE74F5ADA7D9(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 1193033728, 1056964608);
				unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x963BB7C99350D827(uLocal_88);
				unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
				unk_0x2AF68ED52DC74B7D(&uLocal_88);
				unk_0x2686393074E14730(iLocal_84, 1);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_123 = 1;
			}
		}
		if (unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0x4B404C739A9AFC7A(0, 75, 1);
			unk_0x4B404C739A9AFC7A(0, 80, 1);
			unk_0x4B404C739A9AFC7A(0, 79, 1);
			unk_0x4B404C739A9AFC7A(0, 286, 1);
			unk_0x4B404C739A9AFC7A(0, 287, 1);
			unk_0x4B404C739A9AFC7A(0, 26, 1);
			unk_0x4B404C739A9AFC7A(0, 273, 1);
			unk_0x4B404C739A9AFC7A(0, 4, 1);
			unk_0x4B404C739A9AFC7A(0, 270, 1);
			unk_0x4B404C739A9AFC7A(0, 5, 1);
			unk_0x4B404C739A9AFC7A(0, 1, 1);
			unk_0x4B404C739A9AFC7A(0, 271, 1);
			unk_0x4B404C739A9AFC7A(0, 6, 1);
			unk_0x4B404C739A9AFC7A(0, 2, 1);
			unk_0x4B404C739A9AFC7A(0, 272, 1);
			unk_0x4B404C739A9AFC7A(0, 3, 1);
		}
		if (unk_0xC9D9444186B5A374() > 3000 && unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
		}
		else if (unk_0xC9D9444186B5A374() > 7000)
		{
			unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			unk_0x1CCF3860AEBA07CC(0);
			if (unk_0xC9D9444186B5A374() > 8500 && !iLocal_125)
			{
				if ((unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()) && unk_0xB9B1005BA7733220() == 4) || (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0xC89B7DD8E2CD22E5() == 4))
				{
					unk_0xDF3B1A0343547226("CamPushInNeutral", 0, 0);
					unk_0xC2E1777941B4536E(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_125 = 1;
				}
			}
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_84) || unk_0xC9D9444186B5A374() > 15000)
		{
			if (unk_0x965556ACF6A83973(iLocal_84, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, 0, 1, 0) || unk_0xC9D9444186B5A374() > 15000)
			{
				unk_0x51A89CCC8A5317D0(&iLocal_84);
				func_18();
			}
		}
	}
	else if (iLocal_59 == 2)
	{
		if (!iLocal_123)
		{
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_194, cLocal_177, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_123 = 1;
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_84))
		{
			if (!unk_0xEAABEAE1DB589285(iLocal_84))
			{
				unk_0x6D98AA46076A68BE(&uLocal_88);
				unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
				unk_0x976B05703BFD8E48(0, 4500);
				unk_0xBB5AA994E06B28E2(0, 0, 4194369);
				unk_0x353F4B963593F141(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x353F4B963593F141(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x353F4B963593F141(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x963BB7C99350D827(uLocal_88);
				unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
				unk_0x2AF68ED52DC74B7D(&uLocal_88);
				unk_0x2686393074E14730(iLocal_84, 1);
				unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iLocal_84, 5000, 2052, 2);
				unk_0xA7130AF256ED96A1(iLocal_84);
				unk_0x4EDE34FBADD967A6(1000);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				if (func_8() == 0)
				{
					func_66(9, 1, 0);
				}
				else if (func_8() == 1)
				{
					func_66(9, 1, 1);
				}
				else if (func_8() == 2)
				{
					func_66(9, 1, 2);
				}
				unk_0x4EDE34FBADD967A6(8000);
				func_18();
			}
		}
	}
	else if (iLocal_59 == 3)
	{
		if (unk_0x83666F9FB8FEBD4B() > 1000)
		{
			if (func_1(&uLocal_194, cLocal_177, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_85))
				{
					unk_0x7DE35612E73BDCD0(iLocal_85, 1);
					if (!unk_0x5660C8AFDD9C1721(uLocal_120))
					{
						unk_0xB6FB9702660D84F6(&uLocal_120);
					}
					if (!unk_0x5660C8AFDD9C1721(uLocal_121))
					{
						uLocal_121 = func_63(iLocal_85, 1, 145);
					}
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, 17f, 1f, 1073741824, 0);
					unk_0x85A1016DBBC5E64B(0, unk_0xA16EC202D9D35357(), 0, 16);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_85, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					unk_0x2686393074E14730(iLocal_85, 1);
					unk_0x2C4E82CF88213975(iLocal_85, 0);
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
					unk_0x0B29CE7F19BFE6C0("rghBoyfriend", &iLocal_193);
					unk_0xA9465591B42213AE(iLocal_85, iLocal_193);
					unk_0x2966D41514EAE84B(4, joaat("COP"), iLocal_193);
					unk_0x2966D41514EAE84B(1, -183807561, iLocal_193);
					unk_0x2966D41514EAE84B(1, iLocal_193, -183807561);
					unk_0xC1B1E9A034A63A62(0);
					iLocal_58 = 7;
				}
			}
		}
	}
	else if (iLocal_59 == 5)
	{
		if (!iLocal_123)
		{
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_194, cLocal_177, "REHH5_THX", 4, 0, 0, 0);
			iLocal_123 = 1;
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_84))
		{
			unk_0x6D98AA46076A68BE(&uLocal_88);
			unk_0xBB5AA994E06B28E2(0, 0, 4194369);
			unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), 3000, 2052, 2);
			unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 3000);
			unk_0x353F4B963593F141(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x353F4B963593F141(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x353F4B963593F141(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x353F4B963593F141(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x353F4B963593F141(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x353F4B963593F141(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x1DCF0D2934DBC782(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0x976B05703BFD8E48(0, -1);
			unk_0x963BB7C99350D827(uLocal_88);
			unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
			unk_0x2AF68ED52DC74B7D(&uLocal_88);
			unk_0x2686393074E14730(iLocal_84, 1);
			unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iLocal_84, 5000, 2052, 2);
			unk_0xA7130AF256ED96A1(iLocal_84);
		}
		unk_0x4EDE34FBADD967A6(2000);
		unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
		unk_0x4EDE34FBADD967A6(3000);
		func_18();
	}
}

var func_63(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_64(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_65(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(uVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_65(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_65(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_65(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_66(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_79();
	}
	if (func_78(iParam2) == 4)
	{
	}
	bVar0 = Global_97439.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	Global_97439.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_77(iParam0, 0);
			func_74(func_76(iParam0), func_78(iParam2), 1);
			iVar1 = unk_0x444ECD635D5FD45F(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0xD0E2BFCE93AE3ABD(&(Global_2097152[func_73() /*8064*/].f_5756.f_650), iParam0);
					func_70(15, 0);
					break;
			}
			func_69(iVar1);
			func_68(iParam0, iVar1);
			Global_96433.f_15[iParam0] = unk_0x09560C7DE2A384BD();
		}
	}
	else if (bVar0)
	{
		func_67(func_76(iParam0), func_78(iParam2));
	}
}

void func_67(int iParam0, int iParam1)
{
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_68(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_96433.f_4[iParam0] = (unk_0x09560C7DE2A384BD() + iParam1);
	}
	else
	{
		Global_96433.f_4[iParam0] = (unk_0x09560C7DE2A384BD() + unk_0x444ECD635D5FD45F(1200000, 2100000));
	}
}

void func_69(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_96433.f_3 = (unk_0x09560C7DE2A384BD() + iParam0);
	}
	else
	{
		Global_96433.f_3 = (unk_0x09560C7DE2A384BD() + unk_0x444ECD635D5FD45F(21600000, 25200000));
	}
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_72(iParam0, iParam1))
	{
		iVar0 = func_71();
		Global_2435463[iVar0] = iParam0;
	}
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435463[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_72(int iParam0, var uParam1)
{
	if (Global_1315879)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315891) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_73()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_74(int iParam0, int iParam1, bool bParam2)
{
	Global_2950 = iParam0;
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		func_7();
		if (iParam1 == 4)
		{
			Global_97439.f_29795[iParam0 /*29*/].f_12[0] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_12[1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_12[2] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[0] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68325)
			{
				if (iParam1 != 4)
				{
					if (Global_14394 != iParam1)
					{
						Global_2923[iParam1 /*4*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
						Global_2940[iParam1] = 1;
						Global_2945[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14394)
					{
					}
					else
					{
						Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
						Global_2874[1 /*6*/].f_5 = iParam1;
						func_75();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_75();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_97439.f_29795[iParam0 /*29*/].f_3 };
				Global_2874[1 /*6*/].f_5 = iParam1;
				func_75();
			}
		}
	}
}

void func_75()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x69C910B9EE514763(&(Global_97439.f_29795[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0xA6CE1BB0BF7AE715("");
		StringCopy(&cVar16, unk_0x69C910B9EE514763(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x69C910B9EE514763("CELL_253");
		unk_0xB2BB3F163B7B2B4C(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xA6CE1BB0BF7AE715("CELL_255");
		unk_0x4498E0CBD76B2D72(&(Global_2874[1 /*6*/]));
		unk_0xB2BB3F163B7B2B4C(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x29DB79DD4D939B38(&Global_2264, 0);
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

void func_77(int iParam0, int iParam1)
{
	Global_97439.f_243[func_79() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_79()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_44(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_80(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_97439.f_6869[iParam0] = 1;
	Global_97439.f_6869.f_236[iParam0] = (unk_0x09560C7DE2A384BD() + iParam1);
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_82(Global_97439.f_29795[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x3ED04C9A60CBD249(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x680350124CC21957(iVar1, iVar0, 1);
	}
}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_105();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_104(99, 1);
					func_103(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_103(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_103(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_89(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_88(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_103(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_103(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_103(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_103(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_103(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_103(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_103(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_103(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_103(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_103(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_103(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_103(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x9C2B33434756C8A2())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_103(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_103(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_103(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_103(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_103(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_103(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_103(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_103(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_103(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_103(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_103(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_103(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_104(95, iParam3);
					break;
				
				case 1:
					func_104(97, iParam3);
					break;
				
				case 2:
					func_104(96, iParam3);
					break;
			}
			func_104(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_85(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_85(iVar1);
	}
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_103(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_103(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_103(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_84(iParam0);
	if (Global_34915 == 15)
	{
		func_83(0);
	}
	return 1;
}

void func_83(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_85(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_73() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_73() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_86(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

void func_87(int iParam0)
{
	func_104(93, iParam0);
	func_104(29, iParam0);
	func_104(30, iParam0);
}

bool func_88(int iParam0)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_73() /*8064*/].f_5756.f_10, iParam0);
}

int func_89(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
		func_27(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_90(27, 1);
	return 1;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_91(iParam0, iParam1);
}

int func_91(int iParam0, int iParam1)
{
	if (func_13(14) && !func_102(iParam0))
	{
		return 0;
	}
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_101(&Global_2542838))
	{
		if (func_99(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_92(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_92(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_102(iParam1))
	{
		return 0;
	}
	if (func_99(uParam0, iParam1))
	{
		return 0;
	}
	if (func_98(uParam0) < 0f)
	{
		func_97(uParam0, 0);
	}
	func_95(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_93(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_93(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xA7311613D452D616(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_102(iParam1))
	{
		return 0;
	}
	if (func_99(uParam0, iParam1))
	{
		return 0;
	}
	if (func_98(uParam0) < 0f)
	{
		func_97(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_94(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_94(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_95(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_96(uParam0, iVar0);
		iVar0++;
	}
	func_97(uParam0, (Global_2542837 - 0.5f));
}

void func_96(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_97(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_98(var uParam0)
{
	return uParam0->f_72;
}

bool func_99(var uParam0, int iParam1)
{
	return func_100(uParam0, iParam1) != -1;
}

int func_100(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_101(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_105()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

void func_106()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
		{
			if (!func_113())
			{
				if (unk_0x9A132E8DFAE1F524(iLocal_84))
				{
					unk_0xA7130AF256ED96A1(iLocal_84);
				}
				if (unk_0x221AC1EF116F6053(iLocal_84, 1227113341) != 1 && unk_0x221AC1EF116F6053(iLocal_84, 1227113341) != 0)
				{
					unk_0xF3B924DCFDECDB4B(iLocal_84, unk_0xA16EC202D9D35357(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x202EF5D8203705EF(iLocal_84, 0))
				{
					unk_0xBB5AA994E06B28E2(iLocal_84, 0, 0);
				}
				if (!iLocal_141)
				{
					func_108(0);
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_54())
					{
						if (iLocal_59 == 1)
						{
							if (!func_173())
							{
								func_1(&uLocal_194, cLocal_177, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_194, cLocal_177, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_59 == 2)
						{
							if (!func_173())
							{
								func_1(&uLocal_194, cLocal_177, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_194, cLocal_177, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_59 == 3)
						{
							if (!func_173())
							{
								func_1(&uLocal_194, cLocal_177, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_194, cLocal_177, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_59 == 5)
						{
							if (!func_173())
							{
								func_1(&uLocal_194, cLocal_177, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_194, cLocal_177, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_141 = 1;
					}
				}
			}
			else
			{
				iLocal_141 = 0;
				if (unk_0x221AC1EF116F6053(iLocal_84, 1227113341) == 1 && unk_0x221AC1EF116F6053(iLocal_84, 1227113341) == 0)
				{
					unk_0x937785D9C1929236(iLocal_84);
				}
			}
		}
		else if (!unk_0x9A132E8DFAE1F524(iLocal_84))
		{
			unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
			unk_0x59DFDC536FDF0000(iLocal_84, 1);
			unk_0x5129CFBCCCCA8250(iLocal_84, 0);
		}
	}
}

var func_107()
{
	return unk_0xF8BF19C18CE5C2B2(unk_0xA495B6AB6F2BF8C7());
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_126)
		{
			if (func_112(&uLocal_194, cLocal_177, &Local_133, &Local_127, 8, 0, 0))
			{
				iLocal_126 = 0;
			}
		}
	}
	else if ((!iLocal_126 && unk_0xD47B332729054512()) && !func_110())
	{
		Local_133 = { func_109() };
		Local_127 = { func_60() };
		func_55();
		iLocal_126 = 1;
	}
}

struct<6> func_109()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

int func_110()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_111("REHH1_VEH") || func_111("REHH2_VEH")) || func_111("REHH3_VEH")) || func_111("REHH4_VEH")) || func_111("REHH5_VEH")) || func_111("REHH1_VEH2")) || func_111("REHH2_VEH2")) || func_111("REHH3_VEH2")) || func_111("REHH4_VEH2")) || func_111("REHH5_VEH2")) || func_111("REHH1_WLK")) || func_111("REHH2_WLK")) || func_111("REHH3_WLK")) || func_111("REHH4_WLK")) || func_111("REHH5_WLK")) || func_111("REHH1_SLR")) || func_111("REHH4_SLR")) || func_111("REHH1_SLW")) || func_111("REHH2_SLW")) || func_111("REHH3_SLW")) || func_111("REHH4_SLW")) || func_111("REHH5_SLW")) || func_111("REHH1_OUT")) || func_111("REHH2_GETOUT")) || func_111("REHH3_GETOUT")) || func_111("REHH5_GETOUT")) || func_111("REHH1_JACK")) || func_111("REHH2_JACK")) || func_111("REHH3_JACK")) || func_111("REHH5_JACK")) || func_111("REHH1_GUN")) || func_111("REHH2_SHOOT")) || func_111("REHH3_SHOOT")) || func_111("REHH5_SHOO")) || func_111("REHH1_1HOUR")) || func_111("REHH2_1HOUR")) || func_111("REHH1_HHOUR")) || func_111("REHH2_HHOUR")) || func_111("REHH1_CRASH")) || func_111("REHH1_WAY")) || func_111("REHH2_NEAR")) || func_111("REHH3_NEAR")) || func_111("REHH5_NEAR")) || func_111("REHH2_CULT")) || func_111("REHH3_CULT")) || func_111("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_111(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_109()}, 4);
		if (unk_0x9BA82E09A986BA4B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_112(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 1;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_2(sParam2, iParam4, 0);
}

int func_113()
{
	if (iLocal_59 == 5)
	{
		if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
		{
			if ((((!unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()) && !unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357())) && !unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357())) && !unk_0xEB0CE6F99664BF31(unk_0xA16EC202D9D35357())) && !unk_0x51E5BE292F56EC84(unk_0xA16EC202D9D35357(), joaat("rhino")))
			{
				if (unk_0xE3C88401E17BFBB2(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357()), 0))
		{
			if (((!unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357()))) && !unk_0xEE41D6C2DA208994(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && !unk_0xEEE07492AE30B7BC(unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())))) && unk_0xA609E58449080951(unk_0x253ECF5D5234E153(unk_0xA16EC202D9D35357())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_114()
{
	if (unk_0x37906EF4D599CEFA(unk_0xA16EC202D9D35357()))
	{
		if (!iLocal_149)
		{
			iLocal_151 = unk_0x09560C7DE2A384BD();
			iLocal_149 = 1;
		}
		else
		{
			iLocal_153 = unk_0x09560C7DE2A384BD();
		}
	}
	else
	{
		iLocal_153 = 0;
		iLocal_152 = 0;
		iLocal_149 = 0;
		iLocal_150 = 0;
	}
	if ((iLocal_153 - iLocal_151) > 3000 && (iLocal_153 - iLocal_152) > 6000)
	{
		if (!func_54())
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_152 = iLocal_153;
		}
	}
	if ((iLocal_153 - iLocal_151) > 50000 && !iLocal_150)
	{
		func_108(0);
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		if (!func_54())
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_59 == 2)
			{
				func_1(&uLocal_194, cLocal_177, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_59 == 3)
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_84))
				{
					if (!unk_0xEFDD5F3C780DA371(iLocal_84))
					{
						unk_0x2A6FA367FED380C2(iLocal_84);
					}
				}
				func_1(&uLocal_194, cLocal_177, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_59 == 5)
			{
				func_1(&uLocal_194, cLocal_177, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_150 = 1;
		}
	}
	if ((iLocal_153 - iLocal_151) > 60000 && iLocal_150)
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_84))
		{
			unk_0x7DE35612E73BDCD0(iLocal_84, 1);
			if (unk_0x9A132E8DFAE1F524(iLocal_84))
			{
				if (unk_0x202EF5D8203705EF(iLocal_84, 0))
				{
					if (unk_0x965556ACF6A83973(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
					{
						unk_0x353F4B963593F141(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
					}
					else
					{
						unk_0xAC9F22F89987627B(iLocal_84, 1193033728, 0);
					}
					if (iLocal_59 == 1)
					{
						unk_0xEA36CC2E7750344B(iLocal_84, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
					}
					unk_0x2686393074E14730(iLocal_84, 1);
					unk_0xA7130AF256ED96A1(iLocal_84);
					func_53();
				}
			}
		}
	}
}

void func_115()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if (unk_0xB4AD7D9D08986FF5(iLocal_84))
		{
			if (!iLocal_146)
			{
				iLocal_147 = unk_0x09560C7DE2A384BD();
				iLocal_146 = 1;
			}
			else
			{
				iLocal_148 = unk_0x09560C7DE2A384BD();
			}
		}
		else
		{
			iLocal_146 = 0;
		}
	}
	if ((iLocal_148 - iLocal_147) > 90000)
	{
		func_108(0);
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_59 == 1)
		{
			func_1(&uLocal_194, cLocal_177, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 2)
		{
			func_1(&uLocal_194, cLocal_177, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 3)
		{
			func_1(&uLocal_194, cLocal_177, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 5)
		{
			func_1(&uLocal_194, cLocal_177, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_84))
		{
			unk_0x7DE35612E73BDCD0(iLocal_84, 1);
			if (unk_0x965556ACF6A83973(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0x353F4B963593F141(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0xAC9F22F89987627B(iLocal_84, 1193033728, 0);
			}
			if (iLocal_59 == 1)
			{
				unk_0xEA36CC2E7750344B(iLocal_84, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
			}
			unk_0x2686393074E14730(iLocal_84, 1);
			if (unk_0x9A132E8DFAE1F524(iLocal_84))
			{
				unk_0xA7130AF256ED96A1(iLocal_84);
			}
			func_53();
		}
	}
}

void func_116()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && !unk_0xAD203DB71ADF6E57(iLocal_84, unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_120))
				{
					uLocal_120 = func_63(iLocal_84, 0, 145);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_82))
				{
					unk_0xB6FB9702660D84F6(&uLocal_82);
				}
			}
			else
			{
				if (!unk_0x5660C8AFDD9C1721(uLocal_82))
				{
					uLocal_82 = func_117(Local_92, 1);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_120))
				{
					unk_0xB6FB9702660D84F6(&uLocal_120);
				}
			}
		}
		else if (!unk_0x5660C8AFDD9C1721(uLocal_120))
		{
			uLocal_120 = func_63(iLocal_84, 0, 145);
		}
		if (((unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0x202EF5D8203705EF(iLocal_84, 0)) || unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_92, 50f, 50f, 50f, 0, 1, 0)) || unk_0xF710D4C60EF5425F(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x5660C8AFDD9C1721(uLocal_82))
			{
				uLocal_82 = func_117(Local_92, 1);
			}
		}
		else if (!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_92, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0x5660C8AFDD9C1721(uLocal_82))
			{
				unk_0xB6FB9702660D84F6(&uLocal_82);
			}
		}
	}
}

var func_117(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x64F646E6A974BF18(Param0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_65(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
	unk_0xF1D09F0F8B016765(uVar0, iParam3);
	return uVar0;
}

void func_118()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if ((unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) && unk_0x202EF5D8203705EF(iLocal_84, 1)) || unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_84, 5f, 5f, 5f, 0, 1, 0))
		{
			if (func_120())
			{
				func_50(0);
				iLocal_124 = 0;
			}
		}
		else if (!unk_0xEFDD5F3C780DA371(iLocal_84))
		{
			if (func_54() && !iLocal_124)
			{
				func_50(1);
				iLocal_124 = 1;
			}
		}
		if (unk_0xEFDD5F3C780DA371(iLocal_84))
		{
			unk_0xD1C1F71849D7B59A(iLocal_84, 0);
		}
		if (func_119("REHH3_CHT3_7"))
		{
			unk_0xCAD0280A6E9FC35C(iLocal_84, 1, 1);
		}
		if (func_119("REHH3_CHT6_5"))
		{
			unk_0xCAD0280A6E9FC35C(iLocal_84, 0, 1);
		}
		if (func_119("REHH3_CHT8_3"))
		{
			unk_0xCAD0280A6E9FC35C(iLocal_84, 1, 1);
		}
		if ((func_111("REHH3_CHT8M") || func_111("REHH3_CHT8F")) || func_111("REHH3_CHT8T"))
		{
			unk_0xCAD0280A6E9FC35C(iLocal_84, 0, 1);
		}
	}
}

int func_119(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x9BA82E09A986BA4B(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_120()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

void func_121()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if (iLocal_59 == 1)
		{
			if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
			{
				if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0xB49BA83A5C224F40(), 0) && unk_0xAD203DB71ADF6E57(iLocal_84, unk_0xB49BA83A5C224F40(), 0))
				{
					if (unk_0xC406F7EDB827A6CF(unk_0xB49BA83A5C224F40()))
					{
						if (!func_111("REHH1_CRASH"))
						{
							func_108(0);
							func_48();
							unk_0x4EDE34FBADD967A6(0);
							func_1(&uLocal_194, cLocal_177, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_143)
		{
			if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0xB49BA83A5C224F40(), 1) && unk_0xAD203DB71ADF6E57(iLocal_84, unk_0xB49BA83A5C224F40(), 0))
				{
					func_108(0);
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_54())
					{
						if (iLocal_59 == 1)
						{
							func_1(&uLocal_194, cLocal_177, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_59 == 2)
						{
							func_1(&uLocal_194, cLocal_177, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_59 == 3)
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_84))
							{
								if (!unk_0xEFDD5F3C780DA371(iLocal_84))
								{
									unk_0x2A6FA367FED380C2(iLocal_84);
								}
							}
							func_1(&uLocal_194, cLocal_177, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_59 == 5)
						{
							func_1(&uLocal_194, cLocal_177, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_143 = 1;
					}
				}
			}
		}
		else if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
		{
			if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0xB49BA83A5C224F40(), 0) && unk_0xAD203DB71ADF6E57(iLocal_84, unk_0xB49BA83A5C224F40(), 0))
			{
				iLocal_143 = 0;
			}
		}
		if (!iLocal_144)
		{
			if (unk_0xB4F503FB5A0F6CB5(unk_0xA16EC202D9D35357()))
			{
				func_108(0);
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_54())
				{
					if (iLocal_59 == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 3)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 5)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_144 = 1;
				}
			}
		}
		else if (!unk_0xB4F503FB5A0F6CB5(unk_0xA16EC202D9D35357()))
		{
			iLocal_144 = 0;
		}
		if (!iLocal_145)
		{
			if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
			{
				func_108(0);
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_54())
				{
					if (iLocal_59 == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 3)
					{
						if (!unk_0x2DE0B96E966FD817(iLocal_84))
						{
							if (!unk_0xEFDD5F3C780DA371(iLocal_84))
							{
								unk_0x2A6FA367FED380C2(iLocal_84);
							}
						}
						func_1(&uLocal_194, cLocal_177, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 5)
					{
					}
					iLocal_145 = 1;
				}
			}
		}
		else if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
		{
			iLocal_145 = 0;
		}
	}
}

void func_122()
{
	if (func_124(Local_92))
	{
		func_108(0);
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_59 == 1)
		{
			func_1(&uLocal_194, cLocal_177, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 2)
		{
			func_1(&uLocal_194, cLocal_177, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 3)
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (!unk_0xEFDD5F3C780DA371(iLocal_84))
				{
					unk_0x2A6FA367FED380C2(iLocal_84);
				}
			}
			func_1(&uLocal_194, cLocal_177, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 5)
		{
			func_1(&uLocal_194, cLocal_177, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_123())
	{
		func_108(0);
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_59 == 1)
		{
		}
		else if (iLocal_59 == 2)
		{
			func_1(&uLocal_194, cLocal_177, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 3)
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (!unk_0xEFDD5F3C780DA371(iLocal_84))
				{
					unk_0x2A6FA367FED380C2(iLocal_84);
				}
			}
			func_1(&uLocal_194, cLocal_177, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 5)
		{
			func_1(&uLocal_194, cLocal_177, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

int func_123()
{
	if (func_8() == 2)
	{
		if (func_52())
		{
			if (unk_0x4970185D4CC64616(-1014.154f, 4881.411f, 245.0001f, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 0), 1) < 400f)
			{
				if (!Global_24685)
				{
					unk_0x495459882382D113("AC_EN_ROUTE_CULT");
					Global_24685 = 1;
					if (!Global_24684)
					{
						Global_24684 = 1;
						return 1;
					}
				}
			}
			else if (Global_24685)
			{
				unk_0x495459882382D113("AC_LEFT_AREA");
				Global_24685 = 0;
			}
		}
	}
	return 0;
}

int func_124(struct<3> Param0)
{
	if (func_8() == 2)
	{
		if (func_52() && !Global_24683)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Param0) > (fLocal_46 + 200f) || unk_0x4970185D4CC64616(-1014.154f, 4881.411f, 245.0001f, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(unk_0xA495B6AB6F2BF8C7()), 0), 1) < 400f)
			{
				Global_24683 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_125()
{
	if (!func_110())
	{
		func_108(1);
	}
	if (!func_54())
	{
		switch (iLocal_107)
		{
			case 0:
				if (iLocal_59 == 1)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD() + 2000;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD();
				}
				iLocal_107++;
				break;
			
			case 1:
				if (iLocal_109 < unk_0x09560C7DE2A384BD())
				{
					if (iLocal_59 == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 3)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_59 == 5)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_107++;
				}
				break;
			
			case 2:
				if (iLocal_109 < unk_0x09560C7DE2A384BD())
				{
					if (iLocal_59 == 1)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_194, cLocal_177, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_194, cLocal_177, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_194, cLocal_177, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_59 == 2)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_194, cLocal_177, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_194, cLocal_177, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_194, cLocal_177, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_59 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_194, cLocal_177, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_194, cLocal_177, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_194, cLocal_177, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_59 == 5)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_194, cLocal_177, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_194, cLocal_177, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							if (!bLocal_111)
							{
								func_1(&uLocal_194, cLocal_177, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_107++;
				}
				break;
			
			case 3:
				if (iLocal_59 == 1)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD() + 500;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD();
				}
				iLocal_107++;
				break;
			
			case 4:
				if (iLocal_109 < unk_0x09560C7DE2A384BD())
				{
					if (iLocal_59 == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_107++;
					}
					else if (iLocal_59 == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_107++;
					}
					else if (iLocal_59 == 3)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_107++;
					}
					else if (iLocal_59 == 5)
					{
						if (bLocal_111 && !bLocal_113)
						{
							if (func_8() == 0)
							{
								func_1(&uLocal_194, cLocal_177, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_8() == 1)
							{
								func_1(&uLocal_194, cLocal_177, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_8() == 2)
							{
								func_1(&uLocal_194, cLocal_177, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_107++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_59 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 6:
				if (iLocal_59 == 1)
				{
					func_1(&uLocal_194, cLocal_177, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 2)
				{
					func_1(&uLocal_194, cLocal_177, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					func_1(&uLocal_194, cLocal_177, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 7:
				if (iLocal_59 == 1)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 8:
				if (iLocal_59 == 1)
				{
					func_1(&uLocal_194, cLocal_177, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 2)
				{
					func_1(&uLocal_194, cLocal_177, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					func_1(&uLocal_194, cLocal_177, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 9:
				if (iLocal_59 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 10:
				if (iLocal_59 == 2)
				{
					func_1(&uLocal_194, cLocal_177, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					func_1(&uLocal_194, cLocal_177, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 11:
				if (iLocal_59 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 12:
				if (iLocal_59 == 2)
				{
					func_1(&uLocal_194, cLocal_177, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					func_1(&uLocal_194, cLocal_177, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 13:
				if (iLocal_59 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 14:
				if (iLocal_59 == 2)
				{
					func_1(&uLocal_194, cLocal_177, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					func_1(&uLocal_194, cLocal_177, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 5)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 15:
				if (iLocal_59 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 5)
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 16:
				if (iLocal_59 == 2)
				{
					func_1(&uLocal_194, cLocal_177, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					func_1(&uLocal_194, cLocal_177, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 17:
				if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD() + 700;
				}
				iLocal_107++;
				break;
			
			case 18:
				if (iLocal_59 == 2)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_59 == 3)
				{
					if (func_8() == 0)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_8() == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_8() == 2)
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_107++;
				break;
			
			case 19:
				if (iLocal_59 == 2)
				{
					func_1(&uLocal_194, cLocal_177, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_59 == 3)
				{
					func_1(&uLocal_194, cLocal_177, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_107++;
				break;
			
			case 20:
				if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x09560C7DE2A384BD() + 300;
				}
				iLocal_107++;
				break;
			
			case 21:
				if (iLocal_109 < unk_0x09560C7DE2A384BD())
				{
					if (iLocal_59 == 3)
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_194, cLocal_177, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_194, cLocal_177, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_194, cLocal_177, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_107++;
				}
				break;
			
			case 22:
				if (!unk_0x2DE0B96E966FD817(iLocal_84))
				{
					unk_0x5B5659C49032B96C(iLocal_84, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, 0, 0, 0);
				}
				iLocal_107++;
				break;
			}
	}
}

void func_126()
{
	if (iLocal_59 != 3)
	{
		if (func_129())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_92, 3f, 3f, 2f, 1, 1, 0) && unk_0x965556ACF6A83973(iLocal_84, Local_92, Global_19, 0, 1, 0))
				{
					if (func_128(1, 0, 1))
					{
						func_127();
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							unk_0x7DDC5160036EE766(unk_0xB49BA83A5C224F40(), (10.5f + 2f), 3, 0);
						}
						unk_0x2A6FA367FED380C2(iLocal_84);
						iLocal_58 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_111)
	{
		if (unk_0x2DE0B96E966FD817(iLocal_85))
		{
			iLocal_58 = 7;
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_84))
		{
			if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, 0, 1, 0) || (unk_0x965556ACF6A83973(iLocal_84, 824.8886f, 1275.671f, 359.4312f, Global_19, 1, 1, 0) && unk_0x14F9932776F21CC2(iLocal_84, unk_0xA16EC202D9D35357(), 8f, 8f, 8f, 0, 1, 0)))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_194, cLocal_177, "REHH3_CHT10", 4, 0, 0, 0);
				if (!unk_0x2DE0B96E966FD817(iLocal_84) && !unk_0x2DE0B96E966FD817(iLocal_85))
				{
					if (unk_0x202EF5D8203705EF(iLocal_84, 0))
					{
						unk_0x2A6FA367FED380C2(iLocal_84);
						unk_0x6D98AA46076A68BE(&uLocal_88);
						unk_0x574CC08ACCB0F5FC(0);
						unk_0x4745F9C50C63A48C(0, iLocal_85, -1, 2052, 4);
						unk_0xBB5AA994E06B28E2(0, 500, 0);
						unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, 5f, 1f, 1073741824, 0);
						unk_0x5B5659C49032B96C(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, 0, 0, 0);
						unk_0x1CAB36EC4E43E586(0, iLocal_85, -1);
						unk_0x963BB7C99350D827(uLocal_88);
						unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
						unk_0x2AF68ED52DC74B7D(&uLocal_88);
					}
				}
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
					{
						unk_0x7DDC5160036EE766(unk_0xB49BA83A5C224F40(), (10.5f + 2f), 2, 0);
					}
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_58 = 6;
			}
		}
	}
}

void func_127()
{
	Global_14559 = 0;
	func_16();
}

int func_128(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x1F5CEBCEE5E9FAE9())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
		{
			return 0;
		}
		iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (bParam0)
		{
			if (unk_0xE44A580B551C3645(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xE44A580B551C3645(iVar0))
			{
				if (unk_0xD8A521688BDBE867(iVar0, -1) != unk_0xA16EC202D9D35357())
				{
					return 0;
				}
			}
		}
		if (!unk_0xE44A580B551C3645(iVar0))
		{
			if (unk_0x70C5C50D16D2D8AB(iVar0) < 0.95f || unk_0x70C5C50D16D2D8AB(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (!unk_0xFF1960471DB3382B(unk_0x1788E93557766241()))
	{
		return 0;
	}
	return 1;
}

int func_129()
{
	if (unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0xD9275EB8FA656B5C(iLocal_84, unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_92, 50f, 50f, 50f, 0, 1, 0) && !unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if (!unk_0x202EF5D8203705EF(iLocal_84, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_130()
{
	if (bLocal_113)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_85))
		{
			if ((((unk_0x2DE0B96E966FD817(iLocal_85) || !unk_0x14F9932776F21CC2(iLocal_85, unk_0xA16EC202D9D35357(), 150f, 150f, 150f, 0, 1, 0)) || unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_92) < 250f) || unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_96) < 250f) || iLocal_115)
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_121))
				{
					unk_0xB6FB9702660D84F6(&uLocal_121);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_122))
				{
					unk_0xB6FB9702660D84F6(&uLocal_122);
				}
				if (!unk_0x2DE0B96E966FD817(iLocal_85))
				{
					unk_0x758C7961D94C4EB0(iLocal_85, 6, 0, 0);
					unk_0xEA36CC2E7750344B(iLocal_85, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 0);
					unk_0x6B3DDEE91652BE59(&iLocal_85);
				}
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_194, cLocal_177, "REHH5_CHT2", 4, 0, 0, 0);
				unk_0x6B3DDEE91652BE59(&iLocal_85);
				if (unk_0x538DF9E5B1DF01EB(iLocal_170))
				{
					unk_0x3A3C5A6572B3C611(&iLocal_170);
				}
				bLocal_113 = false;
			}
			else
			{
				if (!iLocal_116)
				{
					if (!func_54())
					{
						if (func_8() == 0)
						{
							func_1(&uLocal_194, cLocal_177, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_8() == 1)
						{
							func_1(&uLocal_194, cLocal_177, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_8() == 2)
						{
							func_1(&uLocal_194, cLocal_177, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_116 = 1;
					}
				}
				if (!unk_0x2DE0B96E966FD817(iLocal_85))
				{
					func_138(&iLocal_85, &uLocal_121, &iLocal_170, &uLocal_122);
					func_137(&iLocal_85, &uLocal_121, &iLocal_170, &uLocal_122);
					func_131(iLocal_170, unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), &uLocal_184, &uLocal_187, &Local_189, &uLocal_188, &uLocal_192, 0f, 0f, 0f, 1500, 0f);
					if (unk_0x14F9932776F21CC2(iLocal_85, unk_0xA16EC202D9D35357(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_108 < unk_0x09560C7DE2A384BD())
						{
							if (!func_54())
							{
								if (func_58())
								{
									func_1(&uLocal_194, cLocal_177, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_194, cLocal_177, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_108 = unk_0x09560C7DE2A384BD() + 8000;
							}
						}
						if (unk_0x7D0624057C8895A0(unk_0xA16EC202D9D35357()))
						{
							if (!func_111("REHH5_SHO"))
							{
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								func_1(&uLocal_194, cLocal_177, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()) && !unk_0x2DE0B96E966FD817(iLocal_85))
						{
							if ((unk_0xB4AD7D9D08986FF5(iLocal_85) && unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 4)) && unk_0xC121BFE894DB4BDB(unk_0x1788E93557766241()))
							{
								iLocal_115 = 1;
							}
						}
					}
					if (!iLocal_114 && !unk_0x2DE0B96E966FD817(iLocal_85))
					{
						if (unk_0x37906EF4D599CEFA(unk_0xA16EC202D9D35357()) && unk_0x14F9932776F21CC2(iLocal_85, unk_0xA16EC202D9D35357(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x85A1016DBBC5E64B(iLocal_85, unk_0xA16EC202D9D35357(), 0, 16);
							func_48();
							unk_0x4EDE34FBADD967A6(0);
							func_1(&uLocal_194, cLocal_177, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_114 = 1;
						}
					}
				}
			}
		}
	}
}

void func_131(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		if (((((((unk_0x538DF9E5B1DF01EB(iParam1) && iParam0 != iParam1) && !unk_0xD18BE100522E5F15(unk_0xA609E58449080951(iParam1))) && !unk_0xEE41D6C2DA208994(unk_0xA609E58449080951(iParam1))) && !unk_0x38B61EB14C5FBA9E(unk_0xA609E58449080951(iParam1))) && !unk_0xEEE07492AE30B7BC(unk_0xA609E58449080951(iParam1))) && unk_0x66679628FFE34E84(iParam1)) && func_136(iParam0))
		{
			if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0xCC6B7A025E72F529(*uParam2, *uParam3, Param7) };
				*uParam3 = func_135(unk_0xBF8499F46AD9093A(iParam0, 1), unk_0xBF8499F46AD9093A(iParam1, 1));
				func_134(iParam1, uParam4, uParam5);
			}
			if (!unk_0x0E7E162F5A49FAAA(iParam0))
			{
				*uParam6 = unk_0x09560C7DE2A384BD();
			}
			else if ((unk_0x09560C7DE2A384BD() - *uParam6) > iParam10)
			{
				if (func_133(iParam0, iParam1, 1) > fParam11 && unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_132(*uParam2))
					{
						if (!unk_0x7A98E0DD2E6FAB7A(*uParam2, 3f))
						{
							unk_0x11E84835ED616A25(*uParam2, 1.5f, 0);
							unk_0x597CB55BA0825820(*uParam2, 3f, 0, 0, 0, 0, 0);
							unk_0x6C43BF7625967266(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x34639238667C4381(iParam0, *uParam3);
							unk_0xAC894C93914464C2(iParam0);
							unk_0x213AEEC6A495123F(iParam0, 10f);
							unk_0x6EBB9B0E214CCF0F(iParam0, 1, 1);
							*uParam6 = unk_0x09560C7DE2A384BD();
						}
						else
						{
							Var0 = { unk_0xCC6B7A025E72F529(Local_189, uLocal_188, Param7) };
							if (!func_132(Var0))
							{
								if (!unk_0x7A98E0DD2E6FAB7A(Var0, 2f))
								{
									unk_0x11E84835ED616A25(Var0, 1.5f, 0);
									unk_0x597CB55BA0825820(Var0, 3f, 0, 0, 0, 0, 0);
									unk_0x6C43BF7625967266(iParam0, Var0, 1, 0, 0, 1);
									unk_0x34639238667C4381(iParam0, uLocal_188);
									unk_0xAC894C93914464C2(iParam0);
									unk_0x213AEEC6A495123F(iParam0, 10f);
									unk_0x6EBB9B0E214CCF0F(iParam0, 1, 1);
									*uParam6 = unk_0x09560C7DE2A384BD();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = unk_0x09560C7DE2A384BD();
		}
	}
}

int func_132(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_133(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	if (!unk_0xE44A580B551C3645(iParam1))
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF8499F46AD9093A(iParam1, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Var3, iParam2);
}

void func_134(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			*uParam1 = { unk_0xBF8499F46AD9093A(iParam0, 1) };
			*uParam2 = unk_0xD1613577C809E98B(iParam0);
		}
	}
}

var func_135(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x3C616B96B92181C5((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_136(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		if (!unk_0xE44A580B551C3645(iParam0))
		{
			if (!unk_0x557C6E696286C67A(iParam0, -1))
			{
				iVar0 = unk_0xD8A521688BDBE867(iParam0, -1);
				if (unk_0x538DF9E5B1DF01EB(iVar0))
				{
					if (!unk_0xE44A580B551C3645(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_137(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0x538DF9E5B1DF01EB(*iParam2))
	{
		if (unk_0xECFECDAD51A6184F(*iParam2, 0))
		{
			if (!unk_0x2DE0B96E966FD817(*iParam0))
			{
				if (unk_0xAD203DB71ADF6E57(*iParam0, *iParam2, 0))
				{
					if (unk_0x5660C8AFDD9C1721(*uParam1))
					{
						unk_0xB6FB9702660D84F6(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0x5660C8AFDD9C1721(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
			if (!unk_0x5660C8AFDD9C1721(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_117(unk_0xBF8499F46AD9093A(*iParam2, 1), 0);
					unk_0x1AD45E3CF020D50D(*uParam3, 1);
					unk_0x85C00B9AEF9CC0BE(*uParam3, 9);
					unk_0xFDA1FE98ECD75505(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0x19E074E292E9B9F6(*uParam3) };
				Var4 = { unk_0xBF8499F46AD9093A(*iParam2, 1) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0xEF247769E001D314(*uParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0xB6FB9702660D84F6(uParam3);
				}
			}
		}
		else
		{
			if (unk_0x5660C8AFDD9C1721(*uParam3))
			{
				unk_0xB6FB9702660D84F6(uParam3);
			}
			if (!unk_0x2DE0B96E966FD817(*iParam0))
			{
				if (!unk_0x5660C8AFDD9C1721(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_138(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(*iParam0))
	{
		if (unk_0x2DE0B96E966FD817(*iParam0))
		{
			if (unk_0x5660C8AFDD9C1721(*uParam1))
			{
				unk_0xB6FB9702660D84F6(uParam1);
			}
			unk_0x6B3DDEE91652BE59(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x202EF5D8203705EF(*iParam0, 0))
			{
			}
			else if (unk_0x538DF9E5B1DF01EB(*iParam2))
			{
				if (unk_0xECFECDAD51A6184F(*iParam2, 0))
				{
					if (unk_0xAD203DB71ADF6E57(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(*iParam2))
	{
		if (unk_0xECFECDAD51A6184F(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0xA78F348116859C5F(*iParam2);
				unk_0x8141EAEB97026180(*iParam2);
				unk_0x9122271AF278554B(*iParam2, 0);
				unk_0x3A3C5A6572B3C611(iParam2);
				if (unk_0x5660C8AFDD9C1721(*uParam3))
				{
					unk_0xB6FB9702660D84F6(uParam3);
				}
			}
		}
		else
		{
			unk_0xA78F348116859C5F(*iParam2);
			unk_0x8141EAEB97026180(*iParam2);
			unk_0x9122271AF278554B(*iParam2, 0);
			unk_0x3A3C5A6572B3C611(iParam2);
			if (unk_0x5660C8AFDD9C1721(*uParam3))
			{
				unk_0xB6FB9702660D84F6(uParam3);
			}
		}
	}
}

void func_139()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_85))
	{
		if (unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0) || unk_0x0852C405AF94F670(iLocal_85, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0))
		{
			if (unk_0x868516D11F344453(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x5BDFA3A2180C3CB6(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
			}
			if (unk_0x868516D11F344453(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x5BDFA3A2180C3CB6(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
			}
		}
		else
		{
			if (unk_0x868516D11F344453(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x5BDFA3A2180C3CB6(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
			}
			if (unk_0x868516D11F344453(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x5BDFA3A2180C3CB6(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 1, 0f, 0);
			}
		}
	}
}

void func_140()
{
	if (!bLocal_111)
	{
		if (iLocal_59 == 3)
		{
			if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_103, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0x939DA7EBCC6588FF(iLocal_100);
				unk_0x660D567D3EB18812("move_m@brave");
				if (unk_0x5494F37F35C1D7D7(iLocal_100) && unk_0x307330CEB84DD3AE("move_m@brave"))
				{
					iLocal_85 = unk_0x6F9DE0DE8363ADF1(26, iLocal_100, Local_103, fLocal_106, 1, 1);
					unk_0x42544C0CC4949BD5(iLocal_85, 0, 2, 1, 0);
					unk_0x42544C0CC4949BD5(iLocal_85, 3, 0, 2, 0);
					unk_0x2C4E82CF88213975(iLocal_85, 1);
					unk_0xA1478EBA54DDE31B(iLocal_85, 42, 1);
					unk_0xE80CB641047D2899(iLocal_85, 1);
					unk_0xA956F9A1F0F9C2EC(iLocal_85, "move_m@brave", 1048576000);
					unk_0xA1478EBA54DDE31B(iLocal_85, 137, 1);
					func_144(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
					unk_0x5B5659C49032B96C(iLocal_85, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x4745F9C50C63A48C(iLocal_85, unk_0xA16EC202D9D35357(), -1, 2052, 4);
					unk_0xEA054561294AEC10(iLocal_100);
					bLocal_111 = true;
				}
			}
		}
		else if (iLocal_59 == 5)
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_78, 1) > 320f && unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					if (unk_0xAD203DB71ADF6E57(iLocal_84, unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
					{
						if (unk_0x4555877B8D40F1EF(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0x444ECD635D5FD45F(2, 5), &Local_65, 1, 1077936128, 0))
						{
							if (!unk_0x7A98E0DD2E6FAB7A(Local_65, 7f) && unk_0x2A488C176D52CCA5(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_65) < 110f)
							{
								unk_0x939DA7EBCC6588FF(iLocal_100);
								if (unk_0x5494F37F35C1D7D7(iLocal_100))
								{
									func_55();
									unk_0x4EDE34FBADD967A6(0);
									if (func_143(&uLocal_194, cLocal_177, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !unk_0x2DE0B96E966FD817(iLocal_84))
									{
										iLocal_170 = unk_0x9BB6F54E415071A1(iLocal_101, Local_65, func_141(Local_65, func_142(unk_0x1788E93557766241()), 1), 1, 1);
										unk_0xEEE37CF92B9966DA(iLocal_170, 134, 134);
										unk_0xD826AAC32D2F161D(iLocal_170, 0f);
										iLocal_85 = unk_0x793482A351850A4F(iLocal_170, 26, iLocal_100, -1, 1, 1);
										unk_0x42544C0CC4949BD5(iLocal_85, 0, 1, 1, 0);
										unk_0x42544C0CC4949BD5(iLocal_85, 2, 1, 0, 0);
										unk_0xA1478EBA54DDE31B(iLocal_85, 42, 1);
										unk_0x7DE35612E73BDCD0(iLocal_85, 1);
										func_144(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
										unk_0xAC894C93914464C2(iLocal_170);
										unk_0xD14A21CF793D510E(iLocal_85, iLocal_170, iLocal_84, 6, 60f, 786468, -1f, -1f, 1);
										unk_0x85A1016DBBC5E64B(iLocal_85, unk_0xA16EC202D9D35357(), 0, 16);
										unk_0x2686393074E14730(iLocal_85, 1);
										unk_0xEA054561294AEC10(iLocal_100);
										unk_0xEA054561294AEC10(iLocal_101);
										unk_0x213AEEC6A495123F(iLocal_170, (unk_0x5AF66EDEBFA76B9B(unk_0xA16EC202D9D35357()) + 15f));
										if (unk_0x5660C8AFDD9C1721(uLocal_82))
										{
											unk_0xB6FB9702660D84F6(&uLocal_82);
										}
										func_55();
										while (func_54())
										{
											unk_0x4EDE34FBADD967A6(0);
										}
										func_112(&uLocal_194, cLocal_177, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_113 = true;
										bLocal_111 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_141(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xCE9082F704DCC33A(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

Vector3 func_142(int iParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

int func_143(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 1;
	Global_16686 = 0;
	Global_16690 = 0;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_2(sParam2, iParam4, 0);
}

void func_144(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

void func_145()
{
	if (!iLocal_175 && !func_54())
	{
		if (iLocal_173 == 6 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 6 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 7 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 7 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 8 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 8 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 9 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 9 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 10 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 10 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 11 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 11 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 12 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 12 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 13 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 13 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 14 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 14 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 15 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 15 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 16 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 16 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 17 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 17 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 18 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 18 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 19 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 19 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 20 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 20 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 21 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 21 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 22 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 22 && iLocal_172 == 30)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
		if (iLocal_173 == 23 && iLocal_172 == 0)
		{
			if (iLocal_59 == 1)
			{
				func_1(&uLocal_194, cLocal_177, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_175 = 1;
		}
	}
}

void func_146()
{
	iLocal_154 = func_151(func_152()) * 1000;
	iLocal_154 = (iLocal_154 + func_150(func_152()) * 1000 * 60);
	if (!iLocal_163)
	{
		if ((iLocal_173 >= 24 && iLocal_154 < 150000) || (iLocal_173 >= 24 && iLocal_154 < 150000))
		{
			func_147((((iLocal_173 * 1000 * 60 - func_150(func_152()) * 1000 * 60) + (iLocal_172 * 1000 - func_151(func_152()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
		else
		{
			func_147(((iLocal_173 * 1000 * 60 - func_150(func_152()) * 1000 * 60) + (iLocal_172 * 1000 - func_151(func_152()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((iLocal_173 >= 24 && iLocal_154 < 150000) || (iLocal_173 >= 24 && iLocal_154 < 150000))
	{
		func_147((((iLocal_173 * 1000 * 60 - func_150(func_152()) * 1000 * 60) + (iLocal_172 * 1000 - func_151(func_152()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	else
	{
		func_147(((iLocal_173 * 1000 * 60 - func_150(func_152()) * 1000 * 60) + (iLocal_172 * 1000 - func_151(func_152()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	if ((iLocal_173 == func_150(func_152()) + 1 && iLocal_172 == func_151(func_152())) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_150(func_152()) + 25) && iLocal_172 == func_151(func_152())))
	{
		if (!iLocal_162)
		{
			if (!func_111("REHH1_1HOUR") && !func_111("REHH4_1HOUR"))
			{
				func_108(0);
			}
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			if (!func_54())
			{
				if (iLocal_59 == 1)
				{
					func_1(&uLocal_194, cLocal_177, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_162 = 1;
			}
		}
	}
	if (iLocal_172 == 30)
	{
		if ((iLocal_173 == func_150(func_152()) && iLocal_172 == func_151(func_152()) + 30) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_150(func_152()) + 24) && iLocal_172 == func_151(func_152()) + 30))
		{
			if (!iLocal_163)
			{
				if (!func_111("REHH1_HHOUR") && !func_111("REHH4_HHOUR"))
				{
					func_108(0);
				}
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_54())
				{
					if (iLocal_59 == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_163 = 1;
				}
				if (!iLocal_164)
				{
					uLocal_176 = unk_0x74F076F396F8C361();
					unk_0xC2E1777941B4536E(uLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0x4AE2DA60B696489F(iLocal_176, "countdown_fadein", 35f);
					unk_0x3EF2F05E6EA65602("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == func_150(func_152()) && iLocal_172 == func_151(func_152()) + 5) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_150(func_152()) + 24) && iLocal_172 == func_151(func_152()) + 5))
		{
			if (!iLocal_165)
			{
				unk_0x4AE2DA60B696489F(iLocal_176, "countdown_fast", 1f);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_172 == 0)
	{
		if ((iLocal_173 == func_150(func_152()) + 1 && iLocal_172 == (func_151(func_152()) - 30)) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_150(func_152()) + 25) && iLocal_172 == (func_151(func_152()) - 30)))
		{
			if (!iLocal_163)
			{
				if (!func_111("REHH1_HHOUR") && !func_111("REHH4_HHOUR"))
				{
					func_108(0);
				}
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_54())
				{
					if (iLocal_59 == 1)
					{
						func_1(&uLocal_194, cLocal_177, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_163 = 1;
				}
				if (!iLocal_164)
				{
					iLocal_176 = unk_0x74F076F396F8C361();
					unk_0xC2E1777941B4536E(iLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0x4AE2DA60B696489F(iLocal_176, "countdown_fadein", 35f);
					unk_0x3EF2F05E6EA65602("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == func_150(func_152()) + 1 && iLocal_172 == (func_151(func_152()) - 55)) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_150(func_152()) + 25) && iLocal_172 == (func_151(func_152()) - 55)))
		{
			if (!iLocal_165)
			{
				unk_0x4AE2DA60B696489F(iLocal_176, "countdown_fast", 1f);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_173 >= 24 && iLocal_154 < 150000)
	{
		if (iLocal_173 == func_150(func_152()) + 24 && iLocal_172 == func_151(func_152()))
		{
			bLocal_174 = true;
		}
	}
	else if (iLocal_173 == func_150(func_152()) && iLocal_172 == func_151(func_152()))
	{
		bLocal_174 = true;
	}
	if (bLocal_174)
	{
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		unk_0x7CB5477E93D6A302(iLocal_176);
		unk_0x124843CE93F39C27("TIMER_SCENE");
		if (iLocal_59 == 1)
		{
			func_1(&uLocal_194, cLocal_177, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!unk_0x2DE0B96E966FD817(iLocal_84))
		{
			if (unk_0x202EF5D8203705EF(iLocal_84, 0))
			{
				unk_0x7DDC5160036EE766(unk_0x6ADAC08D70C79DE5(iLocal_84, 0), (10.5f + 2f), 2, 0);
				unk_0xBB5AA994E06B28E2(iLocal_84, 1, 0);
				unk_0xA7130AF256ED96A1(iLocal_84);
				if (unk_0x5660C8AFDD9C1721(uLocal_82))
				{
					unk_0xB6FB9702660D84F6(&uLocal_82);
				}
			}
		}
		iLocal_58 = 9;
	}
}

void func_147(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_149(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328903.f_1 = 1;
		func_148(7, iVar0);
		Global_1328903.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1328903.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1328903.f_3911.f_172[iVar0] = iParam2;
		Global_1328903.f_3911.f_216[iVar0] = iParam3;
		Global_1328903.f_3911.f_183[iVar0] = iParam4;
		Global_1328903.f_3911.f_194[iVar0] = iParam5;
		Global_1328903.f_3911.f_249[iVar0] = iParam6;
		Global_1328903.f_3911.f_260[iVar0] = iParam7;
		Global_1328903.f_3911.f_205[iVar0] = iParam8;
		Global_1328903.f_3911.f_314[iVar0] = iParam9;
		Global_1328903.f_3911.f_325[iVar0] = iParam10;
		Global_1328903.f_3911.f_357[iVar0] = iParam11;
		Global_1328903.f_3911.f_238[iVar0] = iParam12;
		Global_1328903.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_148(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1328903.f_4506[iParam0]), iParam1);
}

bool func_149(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_1328903.f_4506[iParam0], iParam1);
}

int func_150(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_151(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_152()
{
	var uVar0;
	
	func_162(&uVar0, unk_0x4952CA33C6DB5AD4());
	func_161(&uVar0, unk_0x26ADBF0B08315387());
	func_160(&uVar0, unk_0xBE59E3811BD4FDD7());
	func_155(&uVar0, unk_0xA3730885141EEA96());
	func_154(&uVar0, unk_0x1EFE4ED658D22AF3());
	func_153(&uVar0, unk_0x4C29EAF01B84254C());
	return uVar0;
}

void func_153(var uParam0, int iParam1)
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

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_155(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_159(*uParam0);
	iVar1 = func_157(*uParam0);
	if (iParam1 < 1 || iParam1 > func_156(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_156(int iParam0, int iParam1)
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

int func_157(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_158(unk_0x889D01384B54BCE3(iParam0, 31), -1, 1)) + 2011;
}

int func_158(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_159(int iParam0)
{
	return iParam0 & 15;
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_163()
{
	if (!unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if (unk_0xECFECDAD51A6184F(unk_0xB49BA83A5C224F40(), 0))
		{
			if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), unk_0xB49BA83A5C224F40(), 0) && unk_0xAD203DB71ADF6E57(iLocal_84, unk_0xB49BA83A5C224F40(), 0))
			{
				if (unk_0x5660C8AFDD9C1721(uLocal_120))
				{
					unk_0xB6FB9702660D84F6(&uLocal_120);
				}
				if (!unk_0x9A132E8DFAE1F524(iLocal_84))
				{
					unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
					unk_0x59DFDC536FDF0000(iLocal_84, 1);
					unk_0x5129CFBCCCCA8250(iLocal_84, 0);
				}
				if (!unk_0x5660C8AFDD9C1721(uLocal_82))
				{
					uLocal_82 = func_117(Local_92, 1);
				}
				if (((func_8() == 2 && !func_51()) && iLocal_59 != 1) && iLocal_59 != 4)
				{
					if (!unk_0x5660C8AFDD9C1721(uLocal_83))
					{
						uLocal_83 = func_117(Local_96, 0);
						unk_0x2025496D9184D312(uLocal_83, 269);
						func_164();
					}
				}
				if (iLocal_59 == 1)
				{
					if (!func_54())
					{
						if (iLocal_59 == 1)
						{
							func_1(&uLocal_194, cLocal_177, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_173 = func_150(func_152()) + 2;
						if (func_151(func_152()) >= 30)
						{
							iLocal_172 = 0;
							iLocal_173++;
						}
						else
						{
							iLocal_172 = 30;
						}
						iLocal_110 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_58 = 4;
					}
				}
				else if (iLocal_59 == 2)
				{
					if (func_1(&uLocal_194, cLocal_177, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_110 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_58 = 4;
					}
				}
				else if (iLocal_59 == 3)
				{
					if (func_1(&uLocal_194, cLocal_177, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_110 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_58 = 4;
					}
				}
				else if (iLocal_59 == 5)
				{
					if (func_1(&uLocal_194, cLocal_177, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_110 = 1;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_58 = 4;
					}
				}
			}
		}
	}
}

void func_164()
{
	if (func_8() == 2)
	{
		if (!Global_24682)
		{
			func_165("CULT_BLIP_HELP", -1);
			Global_24682 = 1;
		}
	}
}

void func_165(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

void func_166()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (iLocal_109 < unk_0x09560C7DE2A384BD())
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0);
					iLocal_109 = (unk_0x09560C7DE2A384BD() + unk_0x444ECD635D5FD45F(4500, 6500));
				}
				if (unk_0x68E6C2D89A534992(iLocal_84, unk_0xA16EC202D9D35357(), 90f))
				{
					if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 24f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
					{
						fLocal_183 = func_133(iLocal_84, unk_0xA16EC202D9D35357(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0x6D98AA46076A68BE(&uLocal_88);
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
						unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, fLocal_183, 2f, 1073741824, 0);
						unk_0x963BB7C99350D827(uLocal_88);
						unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
						unk_0x2AF68ED52DC74B7D(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 12f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
				{
					fLocal_183 = func_133(iLocal_84, unk_0xA16EC202D9D35357(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, fLocal_183, 2f, 1073741824, 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0x5660C8AFDD9C1721(uLocal_120))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_120, 1);
			}
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iLocal_84, 5000, 2052, 2);
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0xECFECDAD51A6184F(iLocal_86, 0))
					{
						if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 25f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
						{
							if (unk_0x68E6C2D89A534992(iLocal_84, unk_0xA16EC202D9D35357(), 150f))
							{
								unk_0x2A6FA367FED380C2(iLocal_84);
								unk_0x6D98AA46076A68BE(&uLocal_88);
								unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 4);
								if (unk_0x557C6E696286C67A(iLocal_86, 0))
								{
									unk_0xBA8824CBF8D0910F(0, iLocal_86, -1, 0, 2f);
								}
								unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
								unk_0x963BB7C99350D827(uLocal_88);
								unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
								unk_0x2AF68ED52DC74B7D(&uLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				if (!unk_0x2DE0B96E966FD817(iLocal_84) && unk_0xECFECDAD51A6184F(iLocal_86, 0))
				{
					if (func_133(iLocal_84, iLocal_86, 1) < 25f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
					{
						if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 2.5f)
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_84))
							{
								if (func_1(&uLocal_194, cLocal_177, "REHH5_ASK", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x14F9932776F21CC2(iLocal_84, unk_0xA16EC202D9D35357(), 3f, 3f, 3f, 0, 1, 0))
				{
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
				}
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0xECFECDAD51A6184F(iLocal_86, 0))
					{
						if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 2.5f && func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 25f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_194, cLocal_177, "REHH5_RPA", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_194, cLocal_177, "REHH5_RPB", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_194, cLocal_177, "REHH5_RPC", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 25f)
				{
					if (func_113())
					{
						if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
						{
							if (unk_0x557C6E696286C67A(unk_0xB49BA83A5C224F40(), 0))
							{
								unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
								unk_0x59DFDC536FDF0000(iLocal_84, 1);
								unk_0x5129CFBCCCCA8250(iLocal_84, 0);
								unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
								unk_0xA34C986DDC3D92F1(iLocal_84, unk_0xB49BA83A5C224F40(), -1, 0, 2f, 1, 0);
								func_167();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xD8A521688BDBE867(unk_0xB49BA83A5C224F40(), 0);
								if (unk_0x2DE0B96E966FD817(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x937785D9C1929236(iLocal_84);
									unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
									unk_0x59DFDC536FDF0000(iLocal_84, 1);
									unk_0x5129CFBCCCCA8250(iLocal_84, 1);
									unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!func_54())
						{
							if (!func_173())
							{
								func_1(&uLocal_194, cLocal_177, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_194, cLocal_177, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (func_113())
				{
					if (unk_0x202EF5D8203705EF(iLocal_84, 0))
					{
						unk_0x574CC08ACCB0F5FC(iLocal_84);
						iLocal_110 = 1;
						iLocal_58 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0xA7130AF256ED96A1(iLocal_84);
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					iLocal_139 = 4;
				}
			}
			break;
	}
}

void func_167()
{
	if (!func_51())
	{
		if (func_8() == 2)
		{
			Global_24680 = 1;
		}
	}
}

float func_168(int iParam0, int iParam1)
{
	return func_133(iParam0, iParam1, 1);
}

void func_169()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x68E6C2D89A534992(iLocal_84, unk_0xA16EC202D9D35357(), 90f))
				{
					if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 12f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
					{
						fLocal_183 = func_133(iLocal_84, unk_0xA16EC202D9D35357(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0x2A6FA367FED380C2(iLocal_84);
						unk_0x6D98AA46076A68BE(&uLocal_88);
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
						unk_0x99C7091782A79B14(0, unk_0xA16EC202D9D35357(), 2.5f, 0f, 0f, 1f, 5000, 1036831949, 1);
						unk_0x963BB7C99350D827(uLocal_88);
						unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
						unk_0x2AF68ED52DC74B7D(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 8f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
				{
					fLocal_183 = func_133(iLocal_84, unk_0xA16EC202D9D35357(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, fLocal_183, 1f, 1073741824, 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0x5660C8AFDD9C1721(uLocal_120))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_120, 1);
			}
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iLocal_84, 5000, 2052, 2);
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0xECFECDAD51A6184F(iLocal_86, 0))
					{
						if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 10f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
						{
							if (unk_0x68E6C2D89A534992(iLocal_84, unk_0xA16EC202D9D35357(), 150f))
							{
								unk_0x2A6FA367FED380C2(iLocal_84);
								unk_0x6D98AA46076A68BE(&uLocal_88);
								unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 4);
								if (unk_0x557C6E696286C67A(iLocal_86, 0))
								{
									unk_0xBA8824CBF8D0910F(0, iLocal_86, -1, 0, 1f);
								}
								unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
								unk_0x963BB7C99350D827(uLocal_88);
								unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
								unk_0x2AF68ED52DC74B7D(&uLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				if (!unk_0x2DE0B96E966FD817(iLocal_84) && unk_0xECFECDAD51A6184F(iLocal_86, 0))
				{
					if (func_133(iLocal_84, iLocal_86, 1) < 13f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
					{
						if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 2.5f)
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_84))
							{
								if (func_1(&uLocal_194, cLocal_177, "REHH3_ASK", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x5E01840EE8DA8D5B(iLocal_84))
				{
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
				}
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0xECFECDAD51A6184F(iLocal_86, 0))
					{
						if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 2.5f && func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_194, cLocal_177, "REHH3_RPA", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_194, cLocal_177, "REHH3_RPB", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_194, cLocal_177, "REHH3_RPC", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 15f)
				{
					if (func_113())
					{
						if (unk_0xECFECDAD51A6184F(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0), 0))
						{
							if (unk_0x557C6E696286C67A(unk_0xB49BA83A5C224F40(), 0))
							{
								unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
								unk_0x59DFDC536FDF0000(iLocal_84, 1);
								unk_0x5129CFBCCCCA8250(iLocal_84, 0);
								unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
								unk_0xA34C986DDC3D92F1(iLocal_84, unk_0xB49BA83A5C224F40(), -1, 0, 1f, 1, 0);
								func_167();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xD8A521688BDBE867(unk_0xB49BA83A5C224F40(), 0);
								if (unk_0x2DE0B96E966FD817(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x937785D9C1929236(iLocal_84);
									unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
									unk_0x59DFDC536FDF0000(iLocal_84, 1);
									unk_0x5129CFBCCCCA8250(iLocal_84, 1);
									unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!func_54())
						{
							if (!func_173())
							{
								func_1(&uLocal_194, cLocal_177, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_194, cLocal_177, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (func_113())
				{
					unk_0x00CFDDE7ACCA68D1(iLocal_84, 1f);
					if (unk_0x202EF5D8203705EF(iLocal_84, 0))
					{
						unk_0x574CC08ACCB0F5FC(iLocal_84);
						iLocal_110 = 1;
						iLocal_58 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
					if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0xA7130AF256ED96A1(iLocal_84);
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					iLocal_139 = 4;
				}
			}
			break;
	}
}

void func_170()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x68E6C2D89A534992(iLocal_84, unk_0xA16EC202D9D35357(), 90f))
				{
					if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 12f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
					{
						fLocal_183 = func_133(iLocal_84, unk_0xA16EC202D9D35357(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0x6D98AA46076A68BE(&uLocal_88);
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
						unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, fLocal_183, 1f, 1073741824, 0);
						unk_0x963BB7C99350D827(uLocal_88);
						unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
						unk_0x2AF68ED52DC74B7D(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 8f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
				{
					fLocal_183 = func_133(iLocal_84, unk_0xA16EC202D9D35357(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0xF3B924DCFDECDB4B(0, unk_0xA16EC202D9D35357(), -1, fLocal_183, 1f, 1073741824, 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0x5660C8AFDD9C1721(uLocal_120))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_120, 1);
			}
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iLocal_84, 5000, 2052, 2);
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0xECFECDAD51A6184F(iLocal_86, 0))
					{
						if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 10f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
						{
							if (unk_0x68E6C2D89A534992(iLocal_84, unk_0xA16EC202D9D35357(), 150f))
							{
								unk_0x2A6FA367FED380C2(iLocal_84);
								unk_0x6D98AA46076A68BE(&uLocal_88);
								unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
								if (unk_0x557C6E696286C67A(iLocal_86, 0))
								{
									unk_0xBA8824CBF8D0910F(0, iLocal_86, -1, 0, 1f);
								}
								unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
								unk_0x963BB7C99350D827(uLocal_88);
								unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
								unk_0x2AF68ED52DC74B7D(&uLocal_88);
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0x937785D9C1929236(iLocal_84);
					unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				if (!unk_0x2DE0B96E966FD817(iLocal_84) && unk_0xECFECDAD51A6184F(iLocal_86, 0))
				{
					if (func_133(iLocal_84, iLocal_86, 1) < 13f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
					{
						if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 2.5f)
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_84))
							{
								if (func_1(&uLocal_194, cLocal_177, "REHH2_ASK", 4, 0, 0, 0))
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x5E01840EE8DA8D5B(iLocal_84))
				{
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
				}
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0xECFECDAD51A6184F(iLocal_86, 0))
					{
						if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 2.5f && func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 15f)
						{
							if (!func_54())
							{
								if (func_8() == 0)
								{
									func_1(&uLocal_194, cLocal_177, "REHH2_RPA", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
								else if (func_8() == 1)
								{
									func_1(&uLocal_194, cLocal_177, "REHH2_RPB", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
								else if (func_8() == 2)
								{
									func_1(&uLocal_194, cLocal_177, "REHH2_RPC", 4, 0, 0, 0);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_139++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 15f)
				{
					if (func_113())
					{
						iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
						if (unk_0xECFECDAD51A6184F(iLocal_86, 0))
						{
							if (unk_0x557C6E696286C67A(unk_0xB49BA83A5C224F40(), 0))
							{
								unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
								unk_0x59DFDC536FDF0000(iLocal_84, 1);
								unk_0x5129CFBCCCCA8250(iLocal_84, 0);
								unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
								unk_0xA34C986DDC3D92F1(iLocal_84, unk_0xB49BA83A5C224F40(), -1, 0, 1f, 1, 0);
								func_167();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xD8A521688BDBE867(unk_0xB49BA83A5C224F40(), 0);
								if (unk_0x2DE0B96E966FD817(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x937785D9C1929236(iLocal_84);
									unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
									unk_0x59DFDC536FDF0000(iLocal_84, 1);
									unk_0x5129CFBCCCCA8250(iLocal_84, 1);
									unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!func_54())
						{
							if (!func_173())
							{
								func_1(&uLocal_194, cLocal_177, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_194, cLocal_177, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_141 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (!iLocal_102)
				{
					if (unk_0x14F9932776F21CC2(iLocal_84, unk_0xA16EC202D9D35357(), 3f, 3f, 3f, 0, 1, 0))
					{
						if (!func_54())
						{
							if (func_1(&uLocal_194, cLocal_177, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_102 = 1;
							}
						}
					}
				}
				if (func_113())
				{
					unk_0x00CFDDE7ACCA68D1(iLocal_84, 1f);
					if (unk_0x202EF5D8203705EF(iLocal_84, 0))
					{
						unk_0x574CC08ACCB0F5FC(iLocal_84);
						iLocal_110 = 1;
						iLocal_58 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					unk_0xA7130AF256ED96A1(iLocal_84);
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					iLocal_139 = 4;
				}
				if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_171()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 12f || (unk_0xF9B25E181FF6237B(unk_0x1788E93557766241()) && func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 30f))
				{
					unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iLocal_84, 5000, 2052, 2);
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
						if (unk_0xECFECDAD51A6184F(iLocal_86, 0))
						{
							unk_0x6D98AA46076A68BE(&uLocal_88);
							unk_0x4745F9C50C63A48C(0, iLocal_86, 30000, 2054, 2);
							unk_0x5B5659C49032B96C(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x963BB7C99350D827(uLocal_88);
							unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
							unk_0x2AF68ED52DC74B7D(&uLocal_88);
						}
						iLocal_139++;
					}
					else if (!iLocal_140)
					{
						unk_0x937785D9C1929236(iLocal_84);
						unk_0x6D98AA46076A68BE(&uLocal_88);
						unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2054, 2);
						unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), -1);
						unk_0x963BB7C99350D827(uLocal_88);
						unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
						unk_0x2AF68ED52DC74B7D(&uLocal_88);
						if (func_1(&uLocal_194, cLocal_177, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x5660C8AFDD9C1721(uLocal_120))
			{
				unk_0xAF9E05E1AFA9F45F(uLocal_120, 1);
			}
			if (func_113())
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
					if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 10f)
					{
						if (!unk_0x2DE0B96E966FD817(iLocal_84))
						{
							if (unk_0x68E6C2D89A534992(iLocal_84, unk_0xA16EC202D9D35357(), 150f))
							{
								fLocal_183 = func_133(iLocal_84, unk_0xA16EC202D9D35357(), 1);
								if (fLocal_183 > 5f)
								{
									fLocal_183 = (fLocal_183 - 0.5f);
								}
								else
								{
									fLocal_183 = (fLocal_183 - 0.25f);
								}
								unk_0x6D98AA46076A68BE(&uLocal_88);
								unk_0x4745F9C50C63A48C(0, iLocal_86, 10000, 2054, 2);
								if (unk_0x557C6E696286C67A(iLocal_86, 0))
								{
									unk_0xBA8824CBF8D0910F(0, iLocal_86, -1, 0, 1f);
								}
								unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), -1);
								unk_0x963BB7C99350D827(uLocal_88);
								unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
								unk_0x2AF68ED52DC74B7D(&uLocal_88);
								iLocal_139++;
							}
							else
							{
								unk_0x4745F9C50C63A48C(iLocal_84, iLocal_86, 10000, 2054, 2);
								iLocal_139++;
							}
						}
					}
				}
			}
			else if (!iLocal_140)
			{
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					unk_0x937785D9C1929236(iLocal_84);
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2054, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), -1);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					if (!func_54())
					{
						if (!func_173())
						{
							func_1(&uLocal_194, cLocal_177, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_194, cLocal_177, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x2DE0B96E966FD817(iLocal_84) && unk_0xECFECDAD51A6184F(iLocal_86, 0))
			{
				if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 2.5f)
				{
					func_127();
					iLocal_139++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x2DE0B96E966FD817(iLocal_84) && unk_0xECFECDAD51A6184F(iLocal_86, 0))
			{
				if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 2.5f)
				{
					if (func_1(&uLocal_194, cLocal_177, "REHH1_ASK", 4, 0, 0, 0))
					{
						unk_0x2A6FA367FED380C2(iLocal_84);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_139++;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (unk_0x5E01840EE8DA8D5B(iLocal_84))
				{
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
				}
				if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 15f)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						iLocal_86 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
						if (unk_0xECFECDAD51A6184F(iLocal_86, 0))
						{
							if (unk_0x5AF66EDEBFA76B9B(iLocal_86) < 2.5f)
							{
								if (!func_54())
								{
									if (func_8() == 0)
									{
										func_1(&uLocal_194, cLocal_177, "REHH1_RPA", 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										iLocal_139++;
									}
									else if (func_8() == 1)
									{
										func_1(&uLocal_194, cLocal_177, "REHH1_RPB", 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										iLocal_139++;
									}
									else if (func_8() == 2)
									{
										func_1(&uLocal_194, cLocal_177, "REHH1_RPC", 4, 0, 0, 0);
										unk_0xC1B1E9A034A63A62(0);
										iLocal_139++;
									}
								}
							}
						}
					}
					else if (!iLocal_140)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) < 15f)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if (func_113())
						{
							if (unk_0x557C6E696286C67A(unk_0xB49BA83A5C224F40(), 0))
							{
								unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
								unk_0x59DFDC536FDF0000(iLocal_84, 1);
								unk_0x5129CFBCCCCA8250(iLocal_84, 0);
								unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
								unk_0xA34C986DDC3D92F1(iLocal_84, unk_0xB49BA83A5C224F40(), -1, 0, 1f, 1, 0);
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xD8A521688BDBE867(unk_0xB49BA83A5C224F40(), 0);
								if (unk_0x2DE0B96E966FD817(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x937785D9C1929236(iLocal_84);
									unk_0xE4C80CFABEAEED8F(iLocal_84, func_107());
									unk_0x59DFDC536FDF0000(iLocal_84, 1);
									unk_0x5129CFBCCCCA8250(iLocal_84, 1);
									unk_0x4745F9C50C63A48C(iLocal_84, unk_0xA16EC202D9D35357(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
						else if (!iLocal_141)
						{
							if (!func_54())
							{
								if (!func_173())
								{
									func_1(&uLocal_194, cLocal_177, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_194, cLocal_177, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_141 = 1;
							}
						}
					}
					else if (!iLocal_140)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				if (func_113())
				{
					unk_0x00CFDDE7ACCA68D1(iLocal_84, 1f);
					if (unk_0x202EF5D8203705EF(iLocal_84, 0))
					{
						unk_0x574CC08ACCB0F5FC(iLocal_84);
						iLocal_110 = 1;
						iLocal_58 = 3;
					}
					else if (unk_0x83666F9FB8FEBD4B() > 60000)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_53();
						}
					}
				}
				else
				{
					unk_0xA7130AF256ED96A1(iLocal_84);
					unk_0x6D98AA46076A68BE(&uLocal_88);
					unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 2);
					unk_0x1CAB36EC4E43E586(0, unk_0xA16EC202D9D35357(), 0);
					unk_0x963BB7C99350D827(uLocal_88);
					unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
					unk_0x2AF68ED52DC74B7D(&uLocal_88);
					iLocal_139 = 5;
				}
				if (func_168(iLocal_84, unk_0xA16EC202D9D35357()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_172()
{
	int iVar0;
	
	if ((iLocal_157 - iLocal_156) > 1000)
	{
		iLocal_171 = unk_0xEA638C4417ABC6D0(unk_0xBF8499F46AD9093A(iLocal_84, 0), 18f, 0, 4);
	}
	if (iLocal_171 != 0)
	{
		iLocal_155++;
		iLocal_156 = unk_0x09560C7DE2A384BD();
		if (unk_0x444ECD635D5FD45F(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_155 > iVar0)
		{
			unk_0x7B9576B4E099FB1F(iLocal_171, 1, 0);
			if (unk_0xECFECDAD51A6184F(iLocal_171, 0))
			{
				if (!unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_171, 0))
				{
					if (iLocal_59 == 1)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_84))
							{
								unk_0x4745F9C50C63A48C(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x09560C7DE2A384BD();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 2)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_84))
							{
								unk_0x4745F9C50C63A48C(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x09560C7DE2A384BD();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 3)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_84))
							{
								unk_0x4745F9C50C63A48C(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x09560C7DE2A384BD();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 5)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!unk_0x2DE0B96E966FD817(iLocal_84))
							{
								unk_0x4745F9C50C63A48C(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x09560C7DE2A384BD();
						iLocal_155 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_182 = unk_0x09560C7DE2A384BD();
			if ((iLocal_182 - iLocal_181) > 3500)
			{
				unk_0x3A3C5A6572B3C611(&iLocal_171);
			}
			iLocal_171 = 0;
		}
	}
}

int func_173()
{
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
	{
		if (unk_0xECFECDAD51A6184F(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), 1))
		{
			if ((unk_0x271F7EEEF6BC4943(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 1))) || unk_0x2FDD93A1F5E63663(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 1)))) || unk_0x74FBEA30BE72F22B(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_174()
{
	if (iLocal_59 == 1)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_84))
		{
			if (!unk_0xE44A580B551C3645(iLocal_84))
			{
				if ((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0, 1, 0) && !unk_0x0E7E162F5A49FAAA(iLocal_84)) || func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 12f)
				{
					func_175();
					iLocal_58 = 2;
				}
			}
		}
	}
	else if (iLocal_59 == 2)
	{
		if (!iLocal_166)
		{
			if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_89, 100f, 100f, 100f, 0, 1, 0) && !unk_0x2DE0B96E966FD817(iLocal_84))
			{
				unk_0x6D98AA46076A68BE(&uLocal_88);
				unk_0x353F4B963593F141(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x353F4B963593F141(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x353F4B963593F141(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x963BB7C99350D827(uLocal_88);
				unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
				unk_0x2AF68ED52DC74B7D(&uLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	else if (iLocal_59 == 5)
	{
		if (!iLocal_166)
		{
			if (unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_89, 200f, 200f, 200f, 0, 1, 0) && !unk_0x2DE0B96E966FD817(iLocal_84))
			{
				unk_0x6D98AA46076A68BE(&uLocal_88);
				unk_0x4745F9C50C63A48C(0, unk_0xA16EC202D9D35357(), -1, 2052, 3);
				unk_0x5B5659C49032B96C(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0x353F4B963593F141(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x353F4B963593F141(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x353F4B963593F141(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x353F4B963593F141(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x353F4B963593F141(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x353F4B963593F141(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x5B5659C49032B96C(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, 0, 0, 0);
				unk_0x963BB7C99350D827(uLocal_88);
				unk_0x0891776D0327B77A(iLocal_84, uLocal_88);
				unk_0x2AF68ED52DC74B7D(&uLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_59 != 1)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_84))
		{
			if (!unk_0xE44A580B551C3645(iLocal_84))
			{
				if ((unk_0x14F9932776F21CC2(unk_0xA16EC202D9D35357(), iLocal_84, 95f, 95f, 50f, 0, 1, 0) && !unk_0x0E7E162F5A49FAAA(iLocal_84)) || func_168(unk_0xA16EC202D9D35357(), iLocal_84) < 12f)
				{
					func_175();
					iLocal_58 = 2;
				}
			}
		}
	}
}

void func_175()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_119))
	{
		unk_0xB6FB9702660D84F6(&uLocal_119);
	}
	if (!unk_0x2DE0B96E966FD817(iLocal_84))
	{
		if (!unk_0x5660C8AFDD9C1721(uLocal_120))
		{
			if (!unk_0xE44A580B551C3645(iLocal_84))
			{
				uLocal_120 = func_63(iLocal_84, 0, 145);
				unk_0xAF9E05E1AFA9F45F(uLocal_120, 0);
			}
		}
		if (!func_208())
		{
			func_183(1);
		}
		func_144(&uLocal_194, 3, iLocal_84, sLocal_178, 0, 1);
	}
	if (func_8() == 0)
	{
		func_144(&uLocal_194, 0, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
	}
	else if (func_8() == 1)
	{
		func_144(&uLocal_194, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
	}
	else if (func_8() == 2)
	{
		func_144(&uLocal_194, 2, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
	}
}

void func_176()
{
	func_178(39, 1);
	func_178(40, 1);
	func_178(41, 1);
	func_178(42, 1);
	func_178(43, 1);
	iLocal_84 = unk_0x6F9DE0DE8363ADF1(26, iLocal_99, Local_89, fLocal_95, 1, 1);
	unk_0xEA054561294AEC10(iLocal_99);
	unk_0x2C4E82CF88213975(iLocal_84, 1);
	unk_0xA8BC819B54F5B824(iLocal_84, 0);
	unk_0x3E99D575EE07FDB3(iLocal_84, sLocal_180);
	unk_0xA1478EBA54DDE31B(iLocal_84, 137, 1);
	unk_0xA1478EBA54DDE31B(iLocal_84, 206, 1);
	unk_0xDEB0A02F25120B62(iLocal_84, 1024, 1);
	unk_0xDEB0A02F25120B62(iLocal_84, 65536, 1);
	unk_0xDEB0A02F25120B62(iLocal_84, 2, 0);
	unk_0x15EBFEEB77BF84B7(iLocal_84, 17, 1);
	unk_0xF73BEEE895099BCB(iLocal_84, 60f);
	unk_0x87D52CC1ADD6BC16(iLocal_84, 5f);
	if (iLocal_59 == 1)
	{
		unk_0x42544C0CC4949BD5(iLocal_84, 0, 0, 1, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 2, 1, 2, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 3, 0, 2, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 4, 0, 2, 0);
		unk_0x32DC163A33A4AB6D(iLocal_101, 1);
		iLocal_170 = unk_0x9BB6F54E415071A1(iLocal_101, -3088.068f, 730.4819f, 20.3028f, 332.2996f, 1, 1);
		unk_0xBCA53A1278653F4C(iLocal_170, 150f);
		unk_0x38A205E419E42642(iLocal_170, 4, 0, 0);
		unk_0xF819510E1E1025C4(iLocal_170, 0);
		unk_0xEA054561294AEC10(iLocal_101);
		unk_0x5B5659C49032B96C(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
	}
	else if (iLocal_59 == 2)
	{
		unk_0x42544C0CC4949BD5(iLocal_84, 0, 0, 1, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 2, 0, 1, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 3, 0, 0, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 4, 0, 1, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 8, 1, 0, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 10, 0, 0, 0);
		unk_0x5B5659C49032B96C(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x4210B2DCFC2838AC(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		func_177(1);
	}
	else if (iLocal_59 == 3)
	{
		unk_0x42544C0CC4949BD5(iLocal_84, 0, 0, 0, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 2, 1, 0, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 3, 0, 0, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 4, 1, 0, 0);
		unk_0x42544C0CC4949BD5(iLocal_84, 8, 0, 0, 0);
		unk_0x5B5659C49032B96C(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x4210B2DCFC2838AC(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_59 == 5)
	{
	}
	iLocal_58 = 1;
}

void func_177(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96495, unk_0x7E5A426328F6E635(), 24);
		Global_96489 = 1;
	}
	else
	{
		StringCopy(&Global_96495, "NULL", 24);
		Global_96489 = 0;
	}
}

void func_178(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_182(iParam0, 2, 1))
		{
			func_181(iParam0, 2, 1);
		}
	}
	else if (func_182(iParam0, 2, 1))
	{
		func_179(iParam0, 2, 1);
	}
}

void func_179(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x29DB79DD4D939B38(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_180(iParam0), -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, iParam1);
			func_43(func_180(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		default:
			break;
	}
	return 3025;
}

void func_181(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_90094.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_180(iParam0), -1, 0);
			unk_0xD0E2BFCE93AE3ABD(&uVar0, iParam1);
			func_43(func_180(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_668[iParam0]), iParam1);
	}
}

int func_182(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x889D01384B54BCE3(Global_90094.f_1272[iParam0], iParam1);
	}
	else if (unk_0x1DAD7CE53BEE7710())
	{
		if (func_26() == 0)
		{
			return unk_0x889D01384B54BCE3(func_45(func_180(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_183(int iParam0)
{
	if (func_186())
	{
		Global_97429 = 1;
		Global_97426 = unk_0x09560C7DE2A384BD();
		if (func_31(Global_97428))
		{
			func_184(0);
		}
		unk_0xBE9A45C5385D0AB1(1, "RE_TITLE");
		if (iParam0 && func_31(Global_97428))
		{
			unk_0x94BF9C1CAC4541F9();
		}
		return 1;
	}
	return 0;
}

void func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97439.f_28192.f_2 < 3)
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_165(func_185(iParam0), -1);
					Global_97439.f_28192.f_2++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x889D01384B54BCE3(Global_97435, 1))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_165(func_185(iParam0), -1);
					Global_97439.f_28192.f_3++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x889D01384B54BCE3(Global_97435, 2))
			{
				if (!unk_0xDFB4F36E24D3B10B())
				{
					func_165(func_185(iParam0), -1);
					Global_97439.f_28192.f_4++;
					unk_0xD0E2BFCE93AE3ABD(&Global_97435, 2);
				}
			}
			break;
	}
}

char* func_185(int iParam0)
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

int func_186()
{
	switch (func_187(&Global_24505, 0, 5, 0, unk_0x60C807BBCBE66CC7()))
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

int func_187(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87925.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_191(0))
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *uParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_189(iParam2))
		{
			return 0;
		}
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*uParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
		if (iParam4 != 0)
		{
			func_188(uParam0, iParam4);
		}
	}
	return 2;
}

void func_188(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_189(int iParam0)
{
	return func_190(iParam0, Global_34915);
}

int func_190(int iParam0, int iParam1)
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

int func_191(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_189(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_192()
{
	if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
	{
		return 1;
	}
	if (!unk_0xE44A580B551C3645(iLocal_84))
	{
		if (unk_0xBF8ADDCADFC4691E(iLocal_84, unk_0xA16EC202D9D35357(), 1))
		{
			return 1;
		}
		if (!unk_0xE44A580B551C3645(unk_0xB49BA83A5C224F40()))
		{
			if (unk_0xBF8ADDCADFC4691E(iLocal_84, unk_0xB49BA83A5C224F40(), 1))
			{
				return 1;
			}
		}
		if (!bLocal_113)
		{
			if (unk_0xF6BC67E137183D3F(unk_0xBF8499F46AD9093A(iLocal_84, 1), 10f, 1) || unk_0x98B0F512CA1C2670(unk_0xBF8499F46AD9093A(iLocal_84, 1) - Vector(10f, 10f, 10f), unk_0xBF8499F46AD9093A(iLocal_84, 1) + Vector(10f, 10f, 10f), 0))
			{
				return 1;
			}
		}
		else if (unk_0x2DE0B96E966FD817(iLocal_85) && unk_0x538DF9E5B1DF01EB(iLocal_85))
		{
			if (unk_0xBF8ADDCADFC4691E(iLocal_85, unk_0xA16EC202D9D35357(), 1) && unk_0x14766EFE923CD38F(unk_0xA16EC202D9D35357(), 7))
			{
				if (!unk_0x2DE0B96E966FD817(iLocal_84))
				{
					unk_0x758C7961D94C4EB0(iLocal_84, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!unk_0x9A132E8DFAE1F524(iLocal_84) && unk_0x68E6C2D89A534992(iLocal_84, unk_0xA16EC202D9D35357(), 90f)) && unk_0x14F9932776F21CC2(iLocal_84, unk_0xA16EC202D9D35357(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0xCE95EFC08A74C6D8(unk_0x1788E93557766241(), iLocal_84) || unk_0xD6F1CA758B2B1733(unk_0x1788E93557766241(), iLocal_84))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_193()
{
	unk_0x939DA7EBCC6588FF(iLocal_99);
	unk_0x3D28909AF30D70F4("random@hitch_lift");
	if (iLocal_59 == 1 || iLocal_59 == 5)
	{
		unk_0x939DA7EBCC6588FF(iLocal_101);
	}
	if (iLocal_59 == 1)
	{
		unk_0x6D073A8BCDE701F6(0);
		unk_0x45B7DFCE888B2A02("timer", 0);
	}
	else if (iLocal_59 == 3)
	{
		unk_0x3D28909AF30D70F4("facials@gen_female@base");
	}
	if (unk_0x5494F37F35C1D7D7(iLocal_99) && unk_0x6C47E32491756A1A("random@hitch_lift"))
	{
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			if (unk_0x5494F37F35C1D7D7(iLocal_101))
			{
				bLocal_60 = true;
			}
		}
		else if (iLocal_59 == 3)
		{
			if (unk_0x6C47E32491756A1A("facials@gen_female@base"))
			{
				bLocal_60 = true;
			}
		}
		else
		{
			bLocal_60 = true;
		}
	}
	else
	{
		unk_0x939DA7EBCC6588FF(iLocal_99);
		unk_0x3D28909AF30D70F4("random@hitch_lift");
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			unk_0x939DA7EBCC6588FF(iLocal_101);
		}
		else if (iLocal_59 == 3)
		{
			unk_0x3D28909AF30D70F4("facials@gen_female@base");
		}
	}
}

void func_194()
{
	if (iLocal_59 == 1)
	{
		Local_89 = { -3086.052f, 735.5091f, 20.4883f };
		fLocal_95 = 17.9234f;
		Local_92 = { -1053.344f, -2539.327f, 19.0394f };
		iLocal_99 = joaat("a_m_m_business_01");
		cLocal_177 = "REHH1AU";
		sLocal_178 = "BUSINESSMAN";
		sLocal_180 = "BUSINESSMAN";
		iLocal_101 = joaat("schafter2");
	}
	else if (iLocal_59 == 2)
	{
		Local_89 = { 196.7701f, 4427.757f, 72.2673f };
		fLocal_95 = 75.9173f;
		Local_92 = { 3328.828f, 5154.456f, 17.2894f };
		iLocal_99 = joaat("a_f_y_hiker_01");
		cLocal_177 = "REHH2AU";
		sLocal_178 = "REHH2Hiker";
		sLocal_180 = "REHH2Hiker";
	}
	else if (iLocal_59 == 3)
	{
		Local_89 = { 2745.026f, 4386.827f, 47.8636f };
		fLocal_95 = 19.4143f;
		Local_92 = { 814.455f, 1274.797f, 359.5112f };
		Local_103 = { 804.2382f, 1269.589f, 359.3557f };
		fLocal_106 = 340.7372f;
		iLocal_99 = joaat("a_f_y_hipster_03");
		iLocal_100 = joaat("s_m_m_security_01");
		cLocal_177 = "REHH3AU";
		sLocal_178 = "REHH3Hipster";
		sLocal_180 = "REHH3Hipster";
		sLocal_179 = "REHH3Security";
	}
	else if (iLocal_59 == 5)
	{
		Local_89 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_95 = 56.5422f;
		Local_92 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_99 = joaat("ig_bride");
		iLocal_100 = joaat("a_m_y_business_01");
		cLocal_177 = "REHH5AU";
		sLocal_178 = "REHH5Bride";
		sLocal_180 = "REHH5Bride";
		sLocal_179 = "REHH5Groom";
		iLocal_101 = joaat("patriot");
	}
	iLocal_61 = 1;
}

int func_195()
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_206())
		{
			return 0;
		}
	}
	if (func_202())
	{
		return 1;
	}
	if (func_196(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_196(float fParam0, bool bParam1)
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
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (func_10(func_8()))
		{
			iVar36 = func_36();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 2) && !unk_0x889D01384B54BCE3(Global_97439.f_16828[iVar32 /*6*/], 3))
				{
					func_197(iVar32, &Var0);
					fVar35 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var0.f_6, 1);
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

void func_197(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_198(uParam1, "Abigail1", func_200(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 1:
			func_198(uParam1, "Abigail2", func_200(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 2:
			func_198(uParam1, "Barry1", func_200(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 3:
			func_198(uParam1, "Barry2", func_200(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 4:
			func_198(uParam1, "Barry3", func_200(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 5:
			func_198(uParam1, "Barry3A", func_200(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 6:
			func_198(uParam1, "Barry3C", func_200(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 7:
			func_198(uParam1, "Barry4", func_200(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_199(iParam0), 0, 0);
			break;
		
		case 8:
			func_198(uParam1, "Dreyfuss1", func_200(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 9:
			func_198(uParam1, "Epsilon1", func_200(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 10:
			func_198(uParam1, "Epsilon2", func_200(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 11:
			func_198(uParam1, "Epsilon3", func_200(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 12:
			func_198(uParam1, "Epsilon4", func_200(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 13:
			func_198(uParam1, "Epsilon5", func_200(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 14:
			func_198(uParam1, "Epsilon6", func_200(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 15:
			func_198(uParam1, "Epsilon7", func_200(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 16:
			func_198(uParam1, "Epsilon8", func_200(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 17:
			func_198(uParam1, "Extreme1", func_200(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 18:
			func_198(uParam1, "Extreme2", func_200(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 19:
			func_198(uParam1, "Extreme3", func_200(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 20:
			func_198(uParam1, "Extreme4", func_200(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 21:
			func_198(uParam1, "Fanatic1", func_200(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_199(iParam0), 1, 0);
			break;
		
		case 22:
			func_198(uParam1, "Fanatic2", func_200(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_199(iParam0), 1, 0);
			break;
		
		case 23:
			func_198(uParam1, "Fanatic3", func_200(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_199(iParam0), 0, 1);
			break;
		
		case 24:
			func_198(uParam1, "Hao1", func_200(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_199(iParam0), 0, 1);
			break;
		
		case 25:
			func_198(uParam1, "Hunting1", func_200(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 26:
			func_198(uParam1, "Hunting2", func_200(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 27:
			func_198(uParam1, "Josh1", func_200(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 28:
			func_198(uParam1, "Josh2", func_200(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 29:
			func_198(uParam1, "Josh3", func_200(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 30:
			func_198(uParam1, "Josh4", func_200(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 31:
			func_198(uParam1, "Maude1", func_200(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 32:
			func_198(uParam1, "Minute1", func_200(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 33:
			func_198(uParam1, "Minute2", func_200(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 34:
			func_198(uParam1, "Minute3", func_200(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 35:
			func_198(uParam1, "MrsPhilips1", func_200(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 36:
			func_198(uParam1, "MrsPhilips2", func_200(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 37:
			func_198(uParam1, "Nigel1", func_200(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 38:
			func_198(uParam1, "Nigel1A", func_200(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 39:
			func_198(uParam1, "Nigel1B", func_200(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_199(iParam0), 1, 1);
			break;
		
		case 40:
			func_198(uParam1, "Nigel1C", func_200(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_199(iParam0), 1, 1);
			break;
		
		case 41:
			func_198(uParam1, "Nigel1D", func_200(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_199(iParam0), 1, 1);
			break;
		
		case 42:
			func_198(uParam1, "Nigel2", func_200(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 43:
			func_198(uParam1, "Nigel3", func_200(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 1);
			break;
		
		case 44:
			func_198(uParam1, "Omega1", func_200(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 45:
			func_198(uParam1, "Omega2", func_200(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 46:
			func_198(uParam1, "Paparazzo1", func_200(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 47:
			func_198(uParam1, "Paparazzo2", func_200(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 48:
			func_198(uParam1, "Paparazzo3", func_200(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 49:
			func_198(uParam1, "Paparazzo3A", func_200(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 50:
			func_198(uParam1, "Paparazzo3B", func_200(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 51:
			func_198(uParam1, "Paparazzo4", func_200(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 52:
			func_198(uParam1, "Rampage1", func_200(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 54:
			func_198(uParam1, "Rampage3", func_200(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 55:
			func_198(uParam1, "Rampage4", func_200(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 56:
			func_198(uParam1, "Rampage5", func_200(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_199(iParam0), 0, 0);
			break;
		
		case 53:
			func_198(uParam1, "Rampage2", func_200(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_199(iParam0), 1, 0);
			break;
		
		case 57:
			func_198(uParam1, "TheLastOne", func_200(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 58:
			func_198(uParam1, "Tonya1", func_200(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 59:
			func_198(uParam1, "Tonya2", func_200(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 60:
			func_198(uParam1, "Tonya3", func_200(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 61:
			func_198(uParam1, "Tonya4", func_200(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		case 62:
			func_198(uParam1, "Tonya5", func_200(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_199(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_198(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_199(int iParam0)
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

struct<2> func_200(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_201(iParam0) };
	if (unk_0x06771AF7795B3ECF(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_201(int iParam0)
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

int func_202()
{
	if (func_205() && !func_206())
	{
		return 1;
	}
	if (func_204() && func_203())
	{
		return 1;
	}
	return 0;
}

bool func_203()
{
	return Global_97157 > 0;
}

int func_204()
{
	if (Global_87369 != -1)
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

int func_206()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xC24CFE5409745AF5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_207()
{
	if (!func_189(5))
	{
		return 1;
	}
	if (func_202())
	{
		return 1;
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_206())
		{
			return 0;
		}
	}
	if (func_196(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if ((Global_97428 == func_40() && unk_0x03FD20E179B3FCF4()) && Global_97429)
	{
		return 1;
	}
	return 0;
}

void func_209(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_211(iParam0);
	unk_0xAF49C3B252CD2D4A(0);
	unk_0x612AE23D2DD952F2(1);
	Global_97425 = 0;
	func_210();
}

void func_210()
{
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			unk_0x32DC163A33A4AB6D(unk_0xA609E58449080951(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)), 1);
		}
		unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 32, 0);
	}
}

void func_211(int iParam0)
{
	Global_97428 = iParam0;
}

int func_212(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131527)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_40();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_240())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC91C6BF96160A40B(unk_0xA16EC202D9D35357())) > 1369f && !func_206())
			{
				return 0;
			}
		}
		if (!Global_97439.f_7341)
		{
			return 0;
		}
		if (func_21(0))
		{
			return 0;
		}
		if (func_202())
		{
			return 0;
		}
		if (func_239())
		{
			return 0;
		}
		if (Global_97428 != -1)
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_196(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_238(iParam3))
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_237(func_8()) == 4 || func_237(func_8()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_8()))
		{
			if (!func_236(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_235(Global_97439.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x09560C7DE2A384BD() - Global_97430) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_234())
		{
			return 0;
		}
		if (unk_0x57928D9CA949E471())
		{
			return 0;
		}
		if (unk_0x03FD20E179B3FCF4())
		{
			return 0;
		}
		if (!func_225(4))
		{
			return 0;
		}
		if (!func_189(5))
		{
			return 0;
		}
		if (func_224(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0xF7037F2CC07D58B0(unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357())))
		{
			if ((unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(377.153f, -717.567f, 10.0536f) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(320.9934f, 265.2515f, 82.1221f)) || unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0xE60DDD7D0864392E(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_224(0, 0))
		{
			return 0;
		}
		if (Global_24592)
		{
			return 0;
		}
		if (func_238(30) && !func_224(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_8()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97439.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97439.f_1729.f_539.f_1524[iVar4];
				if (func_223(iVar8))
				{
					if (func_214(iVar4))
					{
						if (!func_213(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0), Var5) < (210f * 210f))
							{
								if (func_8() != iVar4)
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

bool func_213(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97439.f_1729.f_539.f_1524[iParam0];
	return func_215(iVar0);
}

int func_215(int iParam0)
{
	return func_216(iParam0, 1);
}

int func_216(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_223(iParam0))
	{
		return 0;
	}
	func_217(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_217(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_218(func_152(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_218(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_222(iParam0, iParam1))
	{
		iVar0 = func_159(iParam1);
		iVar1 = func_157(iParam0);
		iVar2 = (func_157(iParam0) - func_157(iParam1));
		iVar3 = (func_159(iParam0) - func_159(iParam1));
		iVar4 = (func_221(iParam0) - func_221(iParam1));
		iVar5 = (func_150(iParam0) - func_150(iParam1));
		iVar6 = (func_151(iParam0) - func_151(iParam1));
		iVar7 = (func_220(iParam0) - func_220(iParam1));
	}
	else
	{
		iVar0 = func_159(iParam0);
		iVar1 = func_157(iParam1);
		iVar2 = (func_157(iParam1) - func_157(iParam0));
		iVar3 = (func_159(iParam1) - func_159(iParam0));
		iVar4 = (func_221(iParam1) - func_221(iParam0));
		iVar5 = (func_150(iParam1) - func_150(iParam0));
		iVar6 = (func_151(iParam1) - func_151(iParam0));
		iVar7 = (func_220(iParam1) - func_220(iParam0));
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
		iVar4 = (iVar4 + func_156(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_219(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_219(float fParam0, float fParam1, float fParam2)
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

int func_220(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_221(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_222(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_223(iParam1) || !func_223(iParam0))
	{
		return 1;
	}
	iVar0 = func_157(iParam0);
	iVar1 = func_157(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_159(iParam0);
	iVar1 = func_159(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_150(iParam0);
	iVar1 = func_150(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)
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
	iVar0 = func_220(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_151(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_150(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_157(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_159(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_221(iParam0);
	if (iVar5 < 1 || iVar5 > func_156(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_224(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_97439.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	int iVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				iVar0 = func_8();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_233()) || Global_96486) || Global_24448) || func_232()) || func_15(8, -1)) || func_231()) || func_230()) || func_229()) || func_228()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1) || func_233()) || Global_24448) || func_232()) || func_15(8, -1)) || func_229()) || func_231()) || func_230()) || func_228()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_233()) || Global_96486) || Global_24448) || func_232()) || func_15(8, -1)) || func_229()) || func_231()) || func_230()) || func_228()) || Global_97439.f_5944.f_919[iVar0] == 5) || Global_35462 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0)) || func_233()) || Global_96486) || Global_24448) || func_232()) || func_15(8, -1)) || func_231()) || func_230()) || func_228()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_233() || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || func_15(8, -1)) || func_228()) || func_227()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_15(8, -1) || func_231()) || func_230()) || func_227()) || func_226())
						{
							return 0;
						}
						if ((unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() != 3) && unk_0x449E31B77C93FF23() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
						{
							if ((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || unk_0xD25129559B94E910(unk_0x1788E93557766241()) > 0) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_233()) || Global_24448) || func_232()) || func_15(8, -1)) || func_230()) || func_229()) || func_228()) || Global_97439.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || func_233()) || func_230()) || Global_96486) || Global_24448) || func_232()) || Global_35965) || func_15(8, -1)) || func_229()) || func_227()) || func_228()) || Global_97439.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0E9F33AA2B8E5EB6(unk_0xA16EC202D9D35357(), 0) || !unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241())) || !unk_0xB6ABC1F54599FF7E(unk_0x1788E93557766241())) || !unk_0x83B393DE31BAC8F0()) || unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0)) || unk_0x7F40BDE5E3EA9E62(unk_0xA16EC202D9D35357())) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) || unk_0xF37CB9C5A6D3EE40(unk_0xA16EC202D9D35357())) || unk_0xBC784BECB25AE24A(unk_0xA16EC202D9D35357())) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 1)) || unk_0x6CA3764368FA4573(unk_0x1788E93557766241())) || func_233()) || Global_96486) || Global_24448) || func_232()) || func_15(8, -1)) || func_229()) || func_227()) || func_231()) || func_230()) || func_228())
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

var func_226()
{
	return Global_90081.f_1;
}

int func_227()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 13);
	}
	return 0;
}

int func_228()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_229()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
	{
		return 1;
	}
	return 0;
}

bool func_230()
{
	return Global_90094.f_291 > 0;
}

bool func_231()
{
	return Global_90094.f_290 > 0;
}

var func_232()
{
	return Global_1315891;
}

int func_233()
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
	}
	return 0;
}

int func_234()
{
	func_7();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_235(int iParam0)
{
	return func_222(func_152(), iParam0);
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_8();
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

int func_237(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_97439.f_5944.f_919[iParam0];
}

bool func_238(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_240())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x889D01384B54BCE3(Global_97439.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_239()
{
	var uVar0;
	
	if (Global_24596)
	{
		uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
		if (unk_0xECFECDAD51A6184F(uVar0, 0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xD8A521688BDBE867(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_240()
{
	var uVar0;
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_241()
{
	if (iLocal_142)
	{
		func_261(0);
		if (Global_24684)
		{
			unk_0x495459882382D113("AC_STOP");
		}
		func_260();
		unk_0x8C4265EEC0D6FD1A();
		func_177(0);
		if (unk_0x99483D9B7795CE90())
		{
			unk_0x1CCF3860AEBA07CC(0);
		}
		if (unk_0xAA4978304E6EA867())
		{
			unk_0x157F27082895A35C(0);
		}
		Global_24711[0 /*7*/].f_6 = 0;
		func_253(0, 1, 1, 0);
		func_55();
		if (unk_0x538DF9E5B1DF01EB(iLocal_84))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_84))
			{
				unk_0xA1478EBA54DDE31B(iLocal_84, 317, 1);
				if (!unk_0x202EF5D8203705EF(iLocal_84, 0))
				{
					unk_0x6336B4069B9B25B4(iLocal_84);
				}
				if (iLocal_59 != 2)
				{
					unk_0x2A6FA367FED380C2(iLocal_84);
				}
				if (unk_0x221AC1EF116F6053(iLocal_84, 1805844857) != 1 && unk_0x221AC1EF116F6053(iLocal_84, 1805844857) != 0)
				{
					unk_0x2C4E82CF88213975(iLocal_84, 0);
				}
				unk_0xA8BC819B54F5B824(iLocal_84, 1);
				if (unk_0x9A132E8DFAE1F524(iLocal_84))
				{
					unk_0xA7130AF256ED96A1(iLocal_84);
				}
			}
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_85))
		{
			if (!unk_0x2DE0B96E966FD817(iLocal_85))
			{
				if (!unk_0x81060B34CE9997E9(iLocal_85))
				{
					unk_0x2C4E82CF88213975(iLocal_85, 0);
				}
			}
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
			{
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
			}
		}
	}
	unk_0x0C2EDF73A2AD1F31();
	if (func_208())
	{
		if (unk_0x868516D11F344453(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0x5BDFA3A2180C3CB6(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
		}
		if (unk_0x868516D11F344453(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0x5BDFA3A2180C3CB6(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
		}
	}
	func_242(-1);
	unk_0x82706E6C897B0FA1();
}

void func_242(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_208())
	{
		func_246(iParam0);
		unk_0xBE9A45C5385D0AB1(0, 0);
		Global_97430 = unk_0x09560C7DE2A384BD();
		func_245(30000);
		StringCopy(&cVar0, func_244(Global_97428, 1), 64);
		if (func_39(Global_97428) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97427, 64);
		}
		unk_0x10DE09595D95978F(&cVar0, Global_97425, (unk_0x09560C7DE2A384BD() - Global_97426), 0);
	}
	else if (unk_0x889D01384B54BCE3(Global_97435, 0) && Global_97439.f_28192.f_2 < 3)
	{
		unk_0x29DB79DD4D939B38(&Global_97435, 0);
	}
	func_243(&Global_24505);
	Global_97429 = 0;
	func_211(-1);
}

void func_243(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34877)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
}

char* func_244(int iParam0, bool bParam1)
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

void func_245(int iParam0)
{
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
}

void func_246(int iParam0)
{
	func_247(iParam0, 0, func_252(iParam0));
}

void func_247(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_152();
	func_250(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_249(iParam0, &uVar0);
	Var1 = { func_248(&uVar0) };
}

struct<16> func_248(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_150(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_151(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_220(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_221(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_159(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_157(*uParam0), 64);
	return Var0;
}

void func_249(int iParam0, var uParam1)
{
	Global_97439.f_28192.f_43[iParam0] = *uParam1;
}

void func_250(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_157(*uParam0);
	iVar1 = func_159(*uParam0);
	iVar2 = func_221(*uParam0);
	iVar3 = func_150(*uParam0);
	iVar4 = func_151(*uParam0);
	iVar5 = func_220(*uParam0);
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
	iVar6 = func_156(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_156(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_251(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_251(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_162(uParam0, iParam1);
	func_161(uParam0, iParam2);
	func_160(uParam0, iParam3);
	func_155(uParam0, iParam4);
	func_154(uParam0, iParam5);
	func_153(uParam0, iParam6);
}

int func_252(int iParam0)
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

void func_253(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x31F1896E6453B935(unk_0x1788E93557766241());
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
		func_259(1);
		unk_0xB0F2C1CA020DA7DA();
		unk_0xADD1FEC2646B4ECF();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xBE029393332523D7())
			{
				unk_0x0D68C13151B68364(0);
			}
			if (!func_5())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_258(1, iParam3, iParam2);
		Global_54764 = 1;
		Global_67069 = 1;
		Global_68323 = 1;
	}
	else
	{
		func_259(0);
		unk_0x5C6ECA43D8ACED5D();
		Global_54764 = 0;
		if (bParam1)
		{
			unk_0xAB5770BCC9EDAC2C();
		}
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 0);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
		func_258(0, iParam3, iParam2);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_254(unk_0x1788E93557766241()))
		{
			unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		}
		Global_68323 = 0;
	}
}

int func_254(int iParam0)
{
	if (func_256(iParam0, 0))
	{
		return 1;
	}
	if (func_255())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_255()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

bool func_256(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_257(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_257(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
	}
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_258(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && uParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_259(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 13);
	}
}

void func_260()
{
	Global_24680 = 0;
	Global_24681 = 0;
	Global_24683 = 0;
	Global_24684 = 0;
	Global_24685 = 0;
}

void func_261(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_178(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_262()
{
	float fVar0;
	
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		fVar0 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_69, 1);
		iLocal_68 = 1;
		if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_72, 1) < fVar0)
		{
			fVar0 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_72, 1);
			iLocal_68 = 2;
		}
		if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_75, 1) < fVar0)
		{
			fVar0 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_75, 1);
			iLocal_68 = 3;
		}
		if (unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_78, 1) < fVar0)
		{
			fVar0 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_78, 1);
			iLocal_68 = 5;
		}
		if (iLocal_68 == 1)
		{
			iLocal_81 = 1;
			iLocal_59 = 1;
			return Local_69;
		}
		else if (iLocal_68 == 2)
		{
			iLocal_81 = 2;
			iLocal_59 = 2;
			return Local_72;
		}
		else if (iLocal_68 == 3)
		{
			iLocal_81 = 3;
			iLocal_59 = 3;
			return Local_75;
		}
		else if (iLocal_68 == 5)
		{
			iLocal_81 = 4;
			iLocal_59 = 5;
			return Local_78;
		}
	}
	return 0f, 0f, 0f;
}

