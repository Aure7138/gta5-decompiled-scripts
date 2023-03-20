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
	uLocal_54 = unk_0x386A330DA3CBD6A0();
	uLocal_55 = unk_0xDEE2BB2717E7BE07();
	Local_69 = { -3092.82f, 749.8f, 21.48f };
	Local_72 = { 181.8977f, 4415.152f, 73.463f };
	Local_75 = { 2743.461f, 4385.51f, 47.7521f };
	Local_78 = { -382.1346f, 2817.971f, 44.0671f };
	Local_96 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_127, "", 24);
	Local_62 = { ScriptParam_0.f_1[0 /*3*/] };
	func_261();
	if (unk_0xD63E63DFACCEB80E(11))
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_84))
		{
			if (unk_0x6AAACE62C58880BC(iLocal_84))
			{
				unk_0x1FA92C26AB9467D3(iLocal_84);
			}
		}
		func_240();
	}
	if (func_211(Local_62, 13, iLocal_81, 0, 0))
	{
		func_208(-1);
	}
	else
	{
		unk_0xE60DEFFB2A853900();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xB819D1DD7DA58F08() || iLocal_110)
		{
			if (!func_207())
			{
				if (func_206())
				{
					func_240();
				}
			}
			unk_0x2F626F4BEC43C4F6("RE_HL", 0);
			switch (iLocal_56)
			{
				case 0:
					if (func_194())
					{
						func_240();
					}
					if (!iLocal_61)
					{
						func_193();
					}
					else
					{
						func_192();
					}
					if (bLocal_60)
					{
						iLocal_142 = 1;
						iLocal_56 = 1;
					}
					break;
				
				case 1:
					if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
					{
						switch (iLocal_57)
						{
							case 0:
								if ((func_191() && iLocal_58 != 8) && iLocal_58 != 10)
								{
									if (!func_207())
									{
										func_182(1);
									}
									iLocal_57 = 1;
								}
								switch (iLocal_58)
								{
									case 0:
										func_175();
										break;
									
									case 1:
										func_173();
										break;
									
									case 2:
										if (func_172())
										{
										}
										iLocal_157 = unk_0x17103F66FBB44C3C();
										if (iLocal_139 < 1 && !iLocal_140)
										{
											func_171();
										}
										if (iLocal_59 == 1)
										{
											func_170();
										}
										else if (iLocal_59 == 2)
										{
											func_169();
										}
										else if (iLocal_59 == 3)
										{
											func_168();
										}
										else if (iLocal_59 == 5)
										{
											func_165();
										}
										break;
									
									case 3:
										func_162();
										break;
									
									case 4:
										if (iLocal_59 == 1)
										{
											func_145();
											func_144();
										}
										else if (iLocal_59 == 3)
										{
											func_139();
											func_138();
										}
										else if (iLocal_59 == 5)
										{
											func_139();
											func_129();
										}
										if (!bLocal_113)
										{
											func_125();
											func_124();
											func_121();
											func_120();
											func_117();
											func_115();
											func_114();
											func_113();
										}
										func_105();
										break;
									
									case 6:
										func_62();
										if (iLocal_59 == 3)
										{
											func_138();
										}
										break;
									
									case 7:
										func_61();
										if (iLocal_59 == 3)
										{
											func_138();
										}
										break;
									
									case 8:
										if (iLocal_59 == 3)
										{
											func_57();
											func_138();
										}
										break;
									
									case 9:
										if (!unk_0x3E0478C40AB5B38D(iLocal_84))
										{
											if (unk_0x41EEB10CCC2497A8(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
											{
												unk_0x27DF0A5AA993D7B6(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
											}
											else
											{
												unk_0x6A678E26A585E3C6(iLocal_84, 1193033728, 0);
											}
											unk_0xE8105B7E3908547D(iLocal_84, 1);
											unk_0x4EDE34FBADD967A6(5000);
										}
										func_53();
										break;
									
									case 10:
										break;
								}
								if ((func_52() && !func_51()) && iLocal_58 != 10)
								{
									if (!unk_0x3E0478C40AB5B38D(iLocal_84))
									{
										if (unk_0x41EEB10CCC2497A8(iLocal_84, Local_96, 5f, 5f, 5f, 0, 1, 0))
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
									if (unk_0x746960881FB19A89(iLocal_84))
									{
										unk_0x7763EDCBED8A5840(&iLocal_84);
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
									if (!unk_0x3E0478C40AB5B38D(iLocal_85))
									{
										unk_0x32D18ECD9E6F9BE2(iLocal_85);
										unk_0x722E6B3A5162A6BB(iLocal_85, unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
										unk_0xE8105B7E3908547D(iLocal_85, 1);
									}
								}
								else if (iLocal_59 == 5)
								{
									func_1(&uLocal_194, cLocal_177, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!unk_0x3E0478C40AB5B38D(iLocal_84))
								{
									unk_0x32D18ECD9E6F9BE2(iLocal_84);
									unk_0x722E6B3A5162A6BB(iLocal_84, unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
									unk_0xE8105B7E3908547D(iLocal_84, 1);
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
			func_240();
		}
		if (iLocal_58 > 2)
		{
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0x746960881FB19A89(iLocal_84))
				{
					if (!unk_0x3E0478C40AB5B38D(iLocal_84))
					{
						if (!unk_0x5093D6F9140AD109(iLocal_84, unk_0x9F92518438215DD0(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_53();
						}
					}
				}
			}
		}
		if (iLocal_58 > 0 && iLocal_58 < 8)
		{
			if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
			{
				if (unk_0x3E0478C40AB5B38D(iLocal_84))
				{
					if (!func_207())
					{
						func_182(1);
					}
					func_53();
				}
				else if (!unk_0xBD280C076BC69C97(iLocal_84))
				{
					if (unk_0xE99AF5B1B3F0BB7C(iLocal_84, unk_0x9F92518438215DD0(), 0))
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_84);
						unk_0x722E6B3A5162A6BB(iLocal_84, unk_0x9F92518438215DD0(), 250f, -1, 0, 0);
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
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)
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
					func_16();
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
		if (func_15(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_14();
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
				func_7();
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
				if (func_6())
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
			if (func_5())
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
			func_4();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_3();
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC318E8D9E0AA1394(0);
	Global_15692 = 1;
}

void func_4()
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

int func_5()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_6()
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

void func_7()
{
	if (func_13(14))
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
		Global_14393 = func_8();
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

int func_8()
{
	func_9();
	return Global_97358.f_1729.f_539.f_3213;
}

void func_9()
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
	{
		if (func_12(Global_97358.f_1729.f_539.f_3213) != unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0()))
		{
			iVar0 = func_11(unk_0x9F92518438215DD0());
			if (func_10(iVar0) && (!func_13(14) || Global_96311))
			{
				if (Global_97358.f_1729.f_539.f_3213 != iVar0 && func_10(Global_97358.f_1729.f_539.f_3213))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(uParam0))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(iParam0);
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
		return Global_97358.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_13(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_14()
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

bool func_15(int iParam0, int iParam1)
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

void func_16()
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

void func_17(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_18()
{
	while (!func_46())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_42(func_8(), 4, 5);
	func_22(13, iLocal_81);
	func_19();
	func_240();
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

bool func_21(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
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
			Global_97358.f_28192.f_2 = 3;
		}
		if (func_30(iParam0, iParam1) != 322)
		{
			func_24(func_30(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97346 = iParam1;
		if (Global_97344 == 0)
		{
			if (((Global_97347 == 1 || Global_97347 == 5) || Global_97347 == 11) || Global_97347 == 25)
			{
				func_23(2);
			}
			else if ((Global_97347 == 26 || Global_97347 == 8) || Global_97347 == 17)
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
	Global_97344 = iParam0;
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
		func_27(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_26() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_20();
				}
			}
		}
	}
}

int func_26()
{
	return Global_24444;
}

int func_27(int iParam0, int iParam1)
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

int func_29()
{
	return Global_1312737;
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
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_35();
	}
}

void func_35()
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

int func_36()
{
	func_9();
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
		return unk_0x94E72F17611BCD3C(Global_97358.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_28192.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0xC2E9075570B5D2B9(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_42(int iParam0, int iParam1, int iParam2)
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
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
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

int func_45(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_44(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
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
	if (Global_24679)
	{
		func_23(4);
		return 1;
	}
	return 0;
}

void func_48()
{
	Global_14558 = 0;
	func_49();
}

void func_49()
{
	unk_0xAD3949CD5FADCA61();
	Global_16703 = 0;
	if (unk_0xDFF00E8709AA7095())
	{
		unk_0xC318E8D9E0AA1394(0);
		Global_15692 = 6;
	}
}

void func_50(int iParam0)
{
	Global_16703 = iParam0;
}

int func_51()
{
	if (Global_97358.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return Global_24678;
}

void func_53()
{
	func_55();
	while (func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_240();
}

int func_54()
{
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

void func_55()
{
	Global_14558 = 0;
	func_56();
}

void func_56()
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

void func_57()
{
	struct<6> Var0;
	
	if (!unk_0x3E0478C40AB5B38D(iLocal_85) && !unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if (!unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_85, 25f, 25f, 25f, 0, 1, 0) && !unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_84, 40f, 40f, 40f, 0, 1, 0))
		{
			unk_0x32D18ECD9E6F9BE2(iLocal_85);
			unk_0x27DF0A5AA993D7B6(iLocal_85, Local_92, 1f, -1, 0.25f, 0, 1193033728);
			func_18();
		}
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_85, unk_0x9F92518438215DD0(), 1))
		{
			if (func_54())
			{
				Var0 = { func_60() };
				if ((unk_0x6B08EC9A88700FBB(&Var0, "REHH3_JB_2") || unk_0x6B08EC9A88700FBB(&Var0, "REHH3_JB_4")) || unk_0x6B08EC9A88700FBB(&Var0, "REHH3_JB_6"))
				{
					func_48();
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > 5000)
		{
			if (unk_0x5D1AEC61B1517F38(iLocal_85, unk_0x9F92518438215DD0()))
			{
				iLocal_158 = 4;
			}
		}
	}
	if (!iLocal_112)
	{
		if (unk_0x746960881FB19A89(iLocal_84))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_84, unk_0x9F92518438215DD0(), 1))
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_85))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					func_1(&uLocal_194, cLocal_177, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_112 = 1;
				}
			}
		}
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if (unk_0xBD280C076BC69C97(iLocal_84))
		{
			unk_0x5B1A1DA8A0D20935(iLocal_84);
		}
		if (unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0x41EEB10CCC2497A8(iLocal_84, unk_0x77009B1C011405A9(iLocal_85, 0), 1f, 1f, 5f, 0, 1, 0))
		{
			iLocal_158 = 5;
		}
	}
	else if (!unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		unk_0xF78316EFCA911012(iLocal_85, unk_0x9F92518438215DD0(), 0, 16);
		func_53();
	}
	else
	{
		func_53();
	}
	if (!iLocal_167)
	{
		if (unk_0x3E0478C40AB5B38D(iLocal_85))
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_121))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_121);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				iLocal_158 = 3;
			}
		}
	}
	if (!iLocal_169)
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_84) && !unk_0x3E0478C40AB5B38D(iLocal_85))
		{
			if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
			{
				if (unk_0xA9526B5F78178A02(unk_0xCFC72E446B0B3AD7()))
				{
					iLocal_158 = 2;
				}
			}
		}
		if (unk_0x3E0478C40AB5B38D(iLocal_85))
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_121))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_121);
			}
			func_59(&uLocal_194, 4);
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_85, unk_0x9F92518438215DD0(), 1) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 6))
			{
				iLocal_158 = 2;
			}
		}
		else if (!unk_0x0BA451447C3B1A8D(iLocal_84))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_84, iLocal_85, 1))
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
				if (!unk_0x3E0478C40AB5B38D(iLocal_84) && !unk_0x3E0478C40AB5B38D(iLocal_85))
				{
					if (!unk_0x827151D7B70CB853(iLocal_84, 0) && unk_0xF9AED6291438A448(iLocal_85))
					{
						if (!iLocal_168)
						{
							unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
							unk_0x402A96371F34E6D8(0, iLocal_85, -1, 2052, 2);
							unk_0x7CF15DD8B3815A0D(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x23F243BF5B07DA90(0, iLocal_85, -1);
							unk_0x3179CCC77CBAB31F(uLocal_88);
							unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
							unk_0xCD02E3C29B8253A6(&uLocal_88);
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				unk_0xF811299AF81DB581(iLocal_84, 0, 0);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_158 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_169)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_84))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 4))
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!unk_0x3E0478C40AB5B38D(iLocal_84))
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_84);
						unk_0x722E6B3A5162A6BB(iLocal_84, unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
						if (!unk_0x3E0478C40AB5B38D(iLocal_85))
						{
							unk_0x5AF9967EE816E12C(iLocal_85, 6, 0, 0);
							unk_0x722E6B3A5162A6BB(iLocal_85, unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
						}
					}
					func_18();
					iLocal_169 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 3:
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x3E0478C40AB5B38D(iLocal_84))
				{
					unk_0x5AF9967EE816E12C(iLocal_84, 7, 0, 0);
				}
				func_1(&uLocal_194, cLocal_177, "REHH3_BAS", 4, 0, 0, 0);
				if (!unk_0x3E0478C40AB5B38D(iLocal_84) && unk_0x746960881FB19A89(iLocal_85))
				{
					unk_0x32D18ECD9E6F9BE2(iLocal_84);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0xD2062A6AC314B85E(0);
					unk_0x7CF15DD8B3815A0D(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0x402A96371F34E6D8(0, iLocal_85, -1, 2052, 4);
					unk_0x27DF0A5AA993D7B6(0, unk_0x77009B1C011405A9(iLocal_85, 0), 1f, -1, 3f, 0, 1193033728);
					unk_0x23F243BF5B07DA90(0, iLocal_85, -1);
					unk_0x7CF15DD8B3815A0D(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x7CF15DD8B3815A0D(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0x6A678E26A585E3C6(0, 1193033728, 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					unk_0xE8105B7E3908547D(iLocal_84, 1);
					unk_0x4A1AC49BA4A747F7(iLocal_84, 0);
					unk_0x4EDE34FBADD967A6(10000);
					iLocal_167 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 4:
			if (func_58())
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_84))
				{
					if (unk_0x5093D6F9140AD109(iLocal_84, unk_0x9F92518438215DD0(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH3_NOO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_158 = 0;
						}
					}
				}
			}
			else if (!unk_0x3E0478C40AB5B38D(iLocal_85))
			{
				if (func_1(&uLocal_194, cLocal_177, "REHH3_FHT", 4, 0, 0, 0))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_158 = 0;
				}
			}
			break;
		
		case 5:
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
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
	if (unk_0x94E72F17611BCD3C(unk_0x073B65E051D2F03E(0, 65535), 0))
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
	if (Global_15692 == 4)
	{
		iVar6 = unk_0x966346019D5E0542();
		iVar6 = (iVar6 + Global_16702);
		if (iVar6 > -1)
		{
			return Global_14560[iVar6 /*6*/];
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
		if (!unk_0x3E0478C40AB5B38D(iLocal_84))
		{
			if (unk_0x6AAACE62C58880BC(iLocal_84))
			{
				unk_0x1FA92C26AB9467D3(iLocal_84);
			}
			iLocal_58 = 8;
		}
	}
}

void func_62()
{
	if (unk_0x2E6E8D325977B3EC(uLocal_82))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_82);
	}
	if (unk_0x2E6E8D325977B3EC(uLocal_83))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_83);
	}
	if (iLocal_59 == 1)
	{
		unk_0xC4370267C511F8E7(uLocal_176);
		unk_0x6041FBFC1EE8196A("TIMER_SCENE");
		if (!iLocal_123)
		{
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_194, cLocal_177, "REHH1_TKA", 4, 0, 0, 0);
			unk_0x80B0B7B44374752B(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				func_81(func_8(), 1, 100, 0, 1);
				func_80(198, 0);
				unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iLocal_84, 8000, 2052, 4);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
				unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), 10000, 2052, 2);
				unk_0xF811299AF81DB581(0, 3000, 4194369);
				unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 1000);
				unk_0x27DF0A5AA993D7B6(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xB64A0ADA3D251EDE(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 1193033728, 1056964608);
				unk_0x18CA21B07F636243(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x3179CCC77CBAB31F(uLocal_88);
				unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
				unk_0xCD02E3C29B8253A6(&uLocal_88);
				unk_0xE8105B7E3908547D(iLocal_84, 1);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_123 = 1;
			}
		}
		if (unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0x6A6A41C66448AD09(0, 75, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			unk_0x6A6A41C66448AD09(0, 79, 1);
			unk_0x6A6A41C66448AD09(0, 286, 1);
			unk_0x6A6A41C66448AD09(0, 287, 1);
			unk_0x6A6A41C66448AD09(0, 26, 1);
			unk_0x6A6A41C66448AD09(0, 273, 1);
			unk_0x6A6A41C66448AD09(0, 4, 1);
			unk_0x6A6A41C66448AD09(0, 270, 1);
			unk_0x6A6A41C66448AD09(0, 5, 1);
			unk_0x6A6A41C66448AD09(0, 1, 1);
			unk_0x6A6A41C66448AD09(0, 271, 1);
			unk_0x6A6A41C66448AD09(0, 6, 1);
			unk_0x6A6A41C66448AD09(0, 2, 1);
			unk_0x6A6A41C66448AD09(0, 272, 1);
			unk_0x6A6A41C66448AD09(0, 3, 1);
		}
		if (unk_0xC9D9444186B5A374() > 3000 && unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 0, 0);
		}
		else if (unk_0xC9D9444186B5A374() > 7000)
		{
			unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
			unk_0xF457518D39569180(0);
			if (unk_0xC9D9444186B5A374() > 8500 && !iLocal_125)
			{
				if ((unk_0x04C9AA01BF03901E(unk_0x9F92518438215DD0()) && unk_0x6AD0A8B1485375C4() == 4) || (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && unk_0xAF8ACF13449C208C() == 4))
				{
					unk_0x20BCECAA3CCE96D0("CamPushInNeutral", 0, 0);
					unk_0x86F4B3D6FF8F65DE(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_125 = 1;
				}
			}
		}
		if (unk_0x746960881FB19A89(iLocal_84) || unk_0xC9D9444186B5A374() > 15000)
		{
			if (unk_0x41EEB10CCC2497A8(iLocal_84, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, 0, 1, 0) || unk_0xC9D9444186B5A374() > 15000)
			{
				unk_0x7763EDCBED8A5840(&iLocal_84);
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
		if (!unk_0x3E0478C40AB5B38D(iLocal_84))
		{
			if (!unk_0xBD280C076BC69C97(iLocal_84))
			{
				unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
				unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), 10000, 2052, 2);
				unk_0x0F1CDD7ECAA6205F(0, 4500);
				unk_0xF811299AF81DB581(0, 0, 4194369);
				unk_0x27DF0A5AA993D7B6(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x27DF0A5AA993D7B6(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x27DF0A5AA993D7B6(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x18CA21B07F636243(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x3179CCC77CBAB31F(uLocal_88);
				unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
				unk_0xCD02E3C29B8253A6(&uLocal_88);
				unk_0xE8105B7E3908547D(iLocal_84, 1);
				unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iLocal_84, 5000, 2052, 2);
				unk_0x1FA92C26AB9467D3(iLocal_84);
				unk_0x4EDE34FBADD967A6(1000);
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
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
				if (!unk_0x3E0478C40AB5B38D(iLocal_85))
				{
					unk_0x5E4D9888EEC3124B(iLocal_85, 1);
					if (!unk_0x2E6E8D325977B3EC(uLocal_120))
					{
						unk_0x0451B5D93A4BDAA0(&uLocal_120);
					}
					if (!unk_0x2E6E8D325977B3EC(uLocal_121))
					{
						uLocal_121 = func_63(iLocal_85, 1, 145);
					}
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x92641D4778270335(0, unk_0x9F92518438215DD0(), -1, 17f, 1f, 1073741824, 0);
					unk_0xF78316EFCA911012(0, unk_0x9F92518438215DD0(), 0, 16);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_85, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					unk_0xE8105B7E3908547D(iLocal_85, 1);
					unk_0x4A1AC49BA4A747F7(iLocal_85, 0);
					unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
					unk_0x4B38C66919CC2E48("rghBoyfriend", &iLocal_193);
					unk_0xA50AD6983D49A772(iLocal_85, iLocal_193);
					unk_0xF2061C15946C53A2(4, joaat("COP"), iLocal_193);
					unk_0xF2061C15946C53A2(1, -183807561, iLocal_193);
					unk_0xF2061C15946C53A2(1, iLocal_193, -183807561);
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
		if (!unk_0x3E0478C40AB5B38D(iLocal_84))
		{
			unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
			unk_0xF811299AF81DB581(0, 0, 4194369);
			unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), 3000, 2052, 2);
			unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 3000);
			unk_0x27DF0A5AA993D7B6(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x27DF0A5AA993D7B6(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x27DF0A5AA993D7B6(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x27DF0A5AA993D7B6(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x27DF0A5AA993D7B6(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x27DF0A5AA993D7B6(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x18CA21B07F636243(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0x0F1CDD7ECAA6205F(0, -1);
			unk_0x3179CCC77CBAB31F(uLocal_88);
			unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
			unk_0xCD02E3C29B8253A6(&uLocal_88);
			unk_0xE8105B7E3908547D(iLocal_84, 1);
			unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iLocal_84, 5000, 2052, 2);
			unk_0x1FA92C26AB9467D3(iLocal_84);
		}
		unk_0x4EDE34FBADD967A6(2000);
		unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
		unk_0x4EDE34FBADD967A6(3000);
		func_18();
	}
}

var func_63(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_64(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2E6E8D325977B3EC(uVar0)) && unk_0x75426D5397CE9E5D(&(Global_97358.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x2A8C2BEEA4F7041F(uVar0, &(Global_97358.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_65(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
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
		unk_0xD4916ED85412C8D9(uVar0, func_65(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_65(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
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
	bVar0 = Global_97358.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	Global_97358.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_77(iParam0, 0);
			func_74(func_76(iParam0), func_78(iParam2), 1);
			iVar1 = unk_0x073B65E051D2F03E(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0xEDB9A377CD8B7F03(&(Global_2097152[func_73() /*8064*/].f_5756.f_650), iParam0);
					func_70(15, 0);
					break;
			}
			func_69(iVar1);
			func_68(iParam0, iVar1);
			Global_96352.f_15[iParam0] = unk_0x17103F66FBB44C3C();
		}
	}
	else if (bVar0)
	{
		func_67(func_76(iParam0), func_78(iParam2));
	}
}

void func_67(int iParam0, int iParam1)
{
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_97358.f_29774[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_97358.f_29774[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_68(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_96352.f_4[iParam0] = (unk_0x17103F66FBB44C3C() + iParam1);
	}
	else
	{
		Global_96352.f_4[iParam0] = (unk_0x17103F66FBB44C3C() + unk_0x073B65E051D2F03E(1200000, 2100000));
	}
}

void func_69(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_96352.f_3 = (unk_0x17103F66FBB44C3C() + iParam0);
	}
	else
	{
		Global_96352.f_3 = (unk_0x17103F66FBB44C3C() + unk_0x073B65E051D2F03E(21600000, 25200000));
	}
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_72(iParam0, iParam1))
	{
		iVar0 = func_71();
		Global_2435039[iVar0] = iParam0;
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
		if (Global_2435039[iVar1] == 0)
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
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_2949 = iParam0;
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		func_7();
		if (iParam1 == 4)
		{
			Global_97358.f_29774[iParam0 /*29*/].f_12[0] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_12[1] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_12[2] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_24[0] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_24[1] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97358.f_29774[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97358.f_29774[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97358.f_29774[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97358.f_29774[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68245)
			{
				if (iParam1 != 4)
				{
					if (Global_14393 != iParam1)
					{
						Global_2922[iParam1 /*4*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
						Global_2939[iParam1] = 1;
						Global_2944[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14393)
					{
					}
					else
					{
						Global_2873[1 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
						Global_2873[1 /*6*/].f_5 = iParam1;
						func_75();
					}
				}
				else
				{
					Global_2873[1 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
					Global_2873[1 /*6*/].f_5 = iParam1;
					func_75();
				}
			}
			else
			{
				Global_2873[1 /*6*/] = { Global_97358.f_29774[iParam0 /*29*/].f_3 };
				Global_2873[1 /*6*/].f_5 = iParam1;
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
	
	StringCopy(&cVar0, unk_0x398E4CFB573BEBB7(&(Global_97358.f_29774[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		unk_0x3BE5C2319988C0DB("");
		StringCopy(&cVar16, unk_0x398E4CFB573BEBB7(&(Global_2873[1 /*6*/])), 64);
		sVar32 = unk_0x398E4CFB573BEBB7("CELL_253");
		unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x3BE5C2319988C0DB("CELL_255");
		unk_0xDB4BC767CEF09274(&(Global_2873[1 /*6*/]));
		unk_0x47BD44C357490C29(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xF76EE56D3E7DAF1B(&Global_2263, 0);
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
	Global_97358.f_243[func_79() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
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
	Global_97358.f_6869[iParam0] = 1;
	Global_97358.f_6869.f_236[iParam0] = (unk_0x17103F66FBB44C3C() + iParam1);
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97358.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_82(Global_97358.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x39496A55977AA312(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xC46BDC34976E9532(iVar1, iVar0, 1);
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
	
	func_104();
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
					func_103(99, 1);
					func_102(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_102(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_102(joaat("sp2_money_total_spent"), iParam3);
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
							func_102(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_102(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_102(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_102(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_102(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_102(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_102(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_102(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_102(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_102(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_102(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_102(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x63D5B7FC98AAD9B7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_102(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_102(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_102(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_102(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_102(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_102(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_102(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_102(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_102(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_102(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_102(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_102(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_103(95, iParam3);
					break;
				
				case 1:
					func_103(97, iParam3);
					break;
				
				case 2:
					func_103(96, iParam3);
					break;
			}
			func_103(98, iParam3);
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
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_102(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_102(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_102(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
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
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_2[Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97358.f_23789.f_233[iVar2 /*69*/]++;
		Global_97358.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97358.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_84(iParam0);
	if (Global_34913 == 15)
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
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97358.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97358.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97358.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97358.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97358.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97358.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97358.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97358.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97358.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97358.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97358.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97358.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97358.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97358.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97358.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97358.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97358.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97358.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97358.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xC46BDC34976E9532(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xC46BDC34976E9532(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xC46BDC34976E9532(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_85(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0) || unk_0x94E72F17611BCD3C(Global_2097152[func_73() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_23789.f_471), iParam0);
		unk_0xF76EE56D3E7DAF1B(&(Global_2097152[func_73() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x3BE5C2319988C0DB("COUP_RED");
		unk_0xDB4BC767CEF09274(func_86(iParam0));
		unk_0x47BD44C357490C29(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_103(93, iParam0);
	func_103(29, iParam0);
	func_103(30, iParam0);
}

bool func_88(int iParam0)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_23789.f_471, iParam0);
	}
	return unk_0x94E72F17611BCD3C(Global_2097152[func_73() /*8064*/].f_5756.f_10, iParam0);
}

int func_89(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x43C8E3C45AFA597C(27))
	{
		return 0;
	}
	if (unk_0x39496A55977AA312(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x39496A55977AA312(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x39496A55977AA312(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xC46BDC34976E9532(joaat("num_cash_spent"), iVar1, 1);
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
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_91(iParam0, iParam1);
}

int func_91(int iParam0, int iParam1)
{
	if (unk_0x43C8E3C45AFA597C(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_101(&Global_2545750))
	{
		if (func_99(&Global_2545750, iParam0))
		{
			return 0;
		}
		if (func_92(&Global_2545750, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x640DBCBD28EEC61A(iParam0))
		{
			return 0;
		}
		if (unk_0x43C8E3C45AFA597C(iParam0))
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
	var uVar1[61];
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
	{
		return 0;
	}
	if (func_99(uParam0, iParam1))
	{
		return 0;
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
	
	if (unk_0x43C8E3C45AFA597C(iParam1))
	{
		return 0;
	}
	if (func_99(uParam0, iParam1))
	{
		return 0;
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
	return (*uParam0)[iParam1] == 61;
}

void func_95(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_98(uParam0, iVar0);
		iVar0++;
	}
	func_96(&(uParam0->f_62), (8f - 0.5f));
}

void func_96(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_97(unk_0x94E72F17611BCD3C(*uParam0, 4)) - fParam1);
	unk_0xEDB9A377CD8B7F03(uParam0, 1);
	unk_0xF76EE56D3E7DAF1B(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_97(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		iVar0 = unk_0x6A8628B6E9F055B3();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x17103F66FBB44C3C()) / 1000f);
}

void func_98(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
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
	return uParam0->f_68 == 1;
}

void func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x39496A55977AA312(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC46BDC34976E9532(iParam0, iVar0, 1);
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x39496A55977AA312(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC46BDC34976E9532(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_104()
{
	int iVar0;
	
	if (unk_0x9183AA5076D2BF07())
	{
		unk_0x39496A55977AA312(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x39496A55977AA312(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

void func_105()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
		{
			if (!func_112())
			{
				if (unk_0x6AAACE62C58880BC(iLocal_84))
				{
					unk_0x1FA92C26AB9467D3(iLocal_84);
				}
				if (unk_0xE962BD784DD0E442(iLocal_84, 1227113341) != 1 && unk_0xE962BD784DD0E442(iLocal_84, 1227113341) != 0)
				{
					unk_0x92641D4778270335(iLocal_84, unk_0x9F92518438215DD0(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0x827151D7B70CB853(iLocal_84, 0))
				{
					unk_0xF811299AF81DB581(iLocal_84, 0, 0);
				}
				if (!iLocal_141)
				{
					func_107(0);
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_54())
					{
						if (iLocal_59 == 1)
						{
							if (!func_172())
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
							if (!func_172())
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
							if (!func_172())
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
							if (!func_172())
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
				if (unk_0xE962BD784DD0E442(iLocal_84, 1227113341) == 1 && unk_0xE962BD784DD0E442(iLocal_84, 1227113341) == 0)
				{
					unk_0x32D18ECD9E6F9BE2(iLocal_84);
				}
			}
		}
		else if (!unk_0x6AAACE62C58880BC(iLocal_84))
		{
			unk_0x78267FAB4E1661CE(iLocal_84, func_106());
			unk_0x305D5B0653A9C181(iLocal_84, 1);
			unk_0xC70FD27B0FCC0545(iLocal_84, 0);
		}
	}
}

var func_106()
{
	return unk_0x0CD9BC7F312ED395(unk_0x2563F6EECD8726D3());
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_126)
		{
			if (func_111(&uLocal_194, cLocal_177, &Local_133, &Local_127, 8, 0, 0))
			{
				iLocal_126 = 0;
			}
		}
	}
	else if ((!iLocal_126 && unk_0xDFF00E8709AA7095()) && !func_109())
	{
		Local_133 = { func_108() };
		Local_127 = { func_60() };
		func_55();
		iLocal_126 = 1;
	}
}

struct<6> func_108()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_109()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_110("REHH1_VEH") || func_110("REHH2_VEH")) || func_110("REHH3_VEH")) || func_110("REHH4_VEH")) || func_110("REHH5_VEH")) || func_110("REHH1_VEH2")) || func_110("REHH2_VEH2")) || func_110("REHH3_VEH2")) || func_110("REHH4_VEH2")) || func_110("REHH5_VEH2")) || func_110("REHH1_WLK")) || func_110("REHH2_WLK")) || func_110("REHH3_WLK")) || func_110("REHH4_WLK")) || func_110("REHH5_WLK")) || func_110("REHH1_SLR")) || func_110("REHH4_SLR")) || func_110("REHH1_SLW")) || func_110("REHH2_SLW")) || func_110("REHH3_SLW")) || func_110("REHH4_SLW")) || func_110("REHH5_SLW")) || func_110("REHH1_OUT")) || func_110("REHH2_GETOUT")) || func_110("REHH3_GETOUT")) || func_110("REHH5_GETOUT")) || func_110("REHH1_JACK")) || func_110("REHH2_JACK")) || func_110("REHH3_JACK")) || func_110("REHH5_JACK")) || func_110("REHH1_GUN")) || func_110("REHH2_SHOOT")) || func_110("REHH3_SHOOT")) || func_110("REHH5_SHOO")) || func_110("REHH1_1HOUR")) || func_110("REHH2_1HOUR")) || func_110("REHH1_HHOUR")) || func_110("REHH2_HHOUR")) || func_110("REHH1_CRASH")) || func_110("REHH1_WAY")) || func_110("REHH2_NEAR")) || func_110("REHH3_NEAR")) || func_110("REHH5_NEAR")) || func_110("REHH2_CULT")) || func_110("REHH3_CULT")) || func_110("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_110(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_108()}, 4);
		if (unk_0x6B08EC9A88700FBB(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_111(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_2(sParam2, iParam4, 0);
}

int func_112()
{
	if (iLocal_59 == 5)
	{
		if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
		{
			if ((((!unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()) && !unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0())) && !unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0())) && !unk_0x8E327DAF12E432F2(unk_0x9F92518438215DD0())) && !unk_0x50118CDA0B25074C(unk_0x9F92518438215DD0(), joaat("rhino")))
			{
				if (unk_0x95A70C0B34435CA8(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		if (unk_0xFC38B241541883D3(unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0()), 0))
		{
			if (((!unk_0xAAF77E03CD60491E(unk_0xB6A50C909A8FABC3(unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0()))) && !unk_0xDB519A4108C6BFB1(unk_0xB6A50C909A8FABC3(unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0())))) && !unk_0x297BD02A9765671B(unk_0xB6A50C909A8FABC3(unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0())))) && unk_0xB6A50C909A8FABC3(unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_113()
{
	if (unk_0x9A0574B8E8749BBD(unk_0x9F92518438215DD0()))
	{
		if (!iLocal_149)
		{
			iLocal_151 = unk_0x17103F66FBB44C3C();
			iLocal_149 = 1;
		}
		else
		{
			iLocal_153 = unk_0x17103F66FBB44C3C();
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
		func_107(0);
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
				if (!unk_0x3E0478C40AB5B38D(iLocal_84))
				{
					if (!unk_0xFBFAB4A44A0232D6(iLocal_84))
					{
						unk_0x5B1A1DA8A0D20935(iLocal_84);
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
		if (!unk_0x3E0478C40AB5B38D(iLocal_84))
		{
			unk_0x5E4D9888EEC3124B(iLocal_84, 1);
			if (unk_0x6AAACE62C58880BC(iLocal_84))
			{
				if (unk_0x827151D7B70CB853(iLocal_84, 0))
				{
					if (unk_0x41EEB10CCC2497A8(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
					{
						unk_0x27DF0A5AA993D7B6(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
					}
					else
					{
						unk_0x6A678E26A585E3C6(iLocal_84, 1193033728, 0);
					}
					if (iLocal_59 == 1)
					{
						unk_0x722E6B3A5162A6BB(iLocal_84, unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
					}
					unk_0xE8105B7E3908547D(iLocal_84, 1);
					unk_0x1FA92C26AB9467D3(iLocal_84);
					func_53();
				}
			}
		}
	}
}

void func_114()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if (unk_0x04C9AA01BF03901E(iLocal_84))
		{
			if (!iLocal_146)
			{
				iLocal_147 = unk_0x17103F66FBB44C3C();
				iLocal_146 = 1;
			}
			else
			{
				iLocal_148 = unk_0x17103F66FBB44C3C();
			}
		}
		else
		{
			iLocal_146 = 0;
		}
	}
	if ((iLocal_148 - iLocal_147) > 90000)
	{
		func_107(0);
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
		if (!unk_0x3E0478C40AB5B38D(iLocal_84))
		{
			unk_0x5E4D9888EEC3124B(iLocal_84, 1);
			if (unk_0x41EEB10CCC2497A8(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0x27DF0A5AA993D7B6(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0x6A678E26A585E3C6(iLocal_84, 1193033728, 0);
			}
			if (iLocal_59 == 1)
			{
				unk_0x722E6B3A5162A6BB(iLocal_84, unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
			}
			unk_0xE8105B7E3908547D(iLocal_84, 1);
			if (unk_0x6AAACE62C58880BC(iLocal_84))
			{
				unk_0x1FA92C26AB9467D3(iLocal_84);
			}
			func_53();
		}
	}
}

void func_115()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && !unk_0x44E080690DA76A2A(iLocal_84, unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_120))
				{
					uLocal_120 = func_63(iLocal_84, 0, 145);
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_82))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_82);
				}
			}
			else
			{
				if (!unk_0x2E6E8D325977B3EC(uLocal_82))
				{
					uLocal_82 = func_116(Local_92, 1);
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_120))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_120);
				}
			}
		}
		else if (!unk_0x2E6E8D325977B3EC(uLocal_120))
		{
			uLocal_120 = func_63(iLocal_84, 0, 145);
		}
		if (((unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && unk_0x827151D7B70CB853(iLocal_84, 0)) || unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_92, 50f, 50f, 50f, 0, 1, 0)) || unk_0xB1E56036259BACA6(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x2E6E8D325977B3EC(uLocal_82))
			{
				uLocal_82 = func_116(Local_92, 1);
			}
		}
		else if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_92, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_82))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_82);
			}
		}
	}
}

var func_116(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x2290D76D0A4ACACA(Param0);
	unk_0xD4916ED85412C8D9(uVar0, func_65(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
	unk_0xD8EEE815F0120FCE(uVar0, iParam3);
	return uVar0;
}

void func_117()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if ((unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) && unk_0x827151D7B70CB853(iLocal_84, 1)) || unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_84, 5f, 5f, 5f, 0, 1, 0))
		{
			if (func_119())
			{
				func_50(0);
				iLocal_124 = 0;
			}
		}
		else if (!unk_0xFBFAB4A44A0232D6(iLocal_84))
		{
			if (func_54() && !iLocal_124)
			{
				func_50(1);
				iLocal_124 = 1;
			}
		}
		if (unk_0xFBFAB4A44A0232D6(iLocal_84))
		{
			unk_0xBF3BAD5CA1914BC0(iLocal_84, 0);
		}
		if (func_118("REHH3_CHT3_7"))
		{
			unk_0xE5A3DAF115E9C2FE(iLocal_84, 1, 1);
		}
		if (func_118("REHH3_CHT6_5"))
		{
			unk_0xE5A3DAF115E9C2FE(iLocal_84, 0, 1);
		}
		if (func_118("REHH3_CHT8_3"))
		{
			unk_0xE5A3DAF115E9C2FE(iLocal_84, 1, 1);
		}
		if ((func_110("REHH3_CHT8M") || func_110("REHH3_CHT8F")) || func_110("REHH3_CHT8T"))
		{
			unk_0xE5A3DAF115E9C2FE(iLocal_84, 0, 1);
		}
	}
}

int func_118(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x6B08EC9A88700FBB(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_120()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if (iLocal_59 == 1)
		{
			if (!unk_0x0BA451447C3B1A8D(unk_0x228A016F863DED95()))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), unk_0x228A016F863DED95(), 0) && unk_0x44E080690DA76A2A(iLocal_84, unk_0x228A016F863DED95(), 0))
				{
					if (unk_0x7F55198EDB8C65EC(unk_0x228A016F863DED95()))
					{
						if (!func_110("REHH1_CRASH"))
						{
							func_107(0);
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
			if (!unk_0x0BA451447C3B1A8D(unk_0x228A016F863DED95()))
			{
				if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), unk_0x228A016F863DED95(), 1) && unk_0x44E080690DA76A2A(iLocal_84, unk_0x228A016F863DED95(), 0))
				{
					func_107(0);
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
							if (!unk_0x3E0478C40AB5B38D(iLocal_84))
							{
								if (!unk_0xFBFAB4A44A0232D6(iLocal_84))
								{
									unk_0x5B1A1DA8A0D20935(iLocal_84);
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
		else if (!unk_0x0BA451447C3B1A8D(unk_0x228A016F863DED95()))
		{
			if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), unk_0x228A016F863DED95(), 0) && unk_0x44E080690DA76A2A(iLocal_84, unk_0x228A016F863DED95(), 0))
			{
				iLocal_143 = 0;
			}
		}
		if (!iLocal_144)
		{
			if (unk_0xAB9B7705A127421C(unk_0x9F92518438215DD0()))
			{
				func_107(0);
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
		else if (!unk_0xAB9B7705A127421C(unk_0x9F92518438215DD0()))
		{
			iLocal_144 = 0;
		}
		if (!iLocal_145)
		{
			if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
			{
				func_107(0);
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
						if (!unk_0x3E0478C40AB5B38D(iLocal_84))
						{
							if (!unk_0xFBFAB4A44A0232D6(iLocal_84))
							{
								unk_0x5B1A1DA8A0D20935(iLocal_84);
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
		else if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
		{
			iLocal_145 = 0;
		}
	}
}

void func_121()
{
	if (func_123(Local_92))
	{
		func_107(0);
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (!unk_0xFBFAB4A44A0232D6(iLocal_84))
				{
					unk_0x5B1A1DA8A0D20935(iLocal_84);
				}
			}
			func_1(&uLocal_194, cLocal_177, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 5)
		{
			func_1(&uLocal_194, cLocal_177, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_122())
	{
		func_107(0);
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (!unk_0xFBFAB4A44A0232D6(iLocal_84))
				{
					unk_0x5B1A1DA8A0D20935(iLocal_84);
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

int func_122()
{
	if (func_8() == 2)
	{
		if (func_52())
		{
			if (unk_0x91EAD4F2F9B5B38A(-1014.154f, 4881.411f, 245.0001f, unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(unk_0x2563F6EECD8726D3()), 0), 1) < 400f)
			{
				if (!Global_24683)
				{
					unk_0xDD74AAB135833BB7("AC_EN_ROUTE_CULT");
					Global_24683 = 1;
					if (!Global_24682)
					{
						Global_24682 = 1;
						return 1;
					}
				}
			}
			else if (Global_24683)
			{
				unk_0xDD74AAB135833BB7("AC_LEFT_AREA");
				Global_24683 = 0;
			}
		}
	}
	return 0;
}

int func_123(struct<3> Param0)
{
	if (func_8() == 2)
	{
		if (func_52() && !Global_24681)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Param0) > (fLocal_46 + 200f) || unk_0x91EAD4F2F9B5B38A(-1014.154f, 4881.411f, 245.0001f, unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(unk_0x2563F6EECD8726D3()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_124()
{
	if (!func_109())
	{
		func_107(1);
	}
	if (!func_54())
	{
		switch (iLocal_107)
		{
			case 0:
				if (iLocal_59 == 1)
				{
					iLocal_109 = unk_0x17103F66FBB44C3C();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = unk_0x17103F66FBB44C3C();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x17103F66FBB44C3C() + 2000;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = unk_0x17103F66FBB44C3C();
				}
				iLocal_107++;
				break;
			
			case 1:
				if (iLocal_109 < unk_0x17103F66FBB44C3C())
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
				if (iLocal_109 < unk_0x17103F66FBB44C3C())
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
					iLocal_109 = unk_0x17103F66FBB44C3C();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = unk_0x17103F66FBB44C3C();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x17103F66FBB44C3C() + 500;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = unk_0x17103F66FBB44C3C();
				}
				iLocal_107++;
				break;
			
			case 4:
				if (iLocal_109 < unk_0x17103F66FBB44C3C())
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
					iLocal_109 = unk_0x17103F66FBB44C3C() + 700;
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
					iLocal_109 = unk_0x17103F66FBB44C3C() + 300;
				}
				iLocal_107++;
				break;
			
			case 21:
				if (iLocal_109 < unk_0x17103F66FBB44C3C())
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
				if (!unk_0x3E0478C40AB5B38D(iLocal_84))
				{
					unk_0x7CF15DD8B3815A0D(iLocal_84, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, 0, 0, 0);
				}
				iLocal_107++;
				break;
			}
	}
}

void func_125()
{
	if (iLocal_59 != 3)
	{
		if (func_128())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_92, 3f, 3f, 2f, 1, 1, 0) && unk_0x41EEB10CCC2497A8(iLocal_84, Local_92, Global_18, 0, 1, 0))
				{
					if (func_127(1, 0, 1))
					{
						func_126();
						if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
						{
							unk_0xEF5DFB41E5585C16(unk_0x228A016F863DED95(), (10.5f + 2f), 3, 0);
						}
						unk_0x5B1A1DA8A0D20935(iLocal_84);
						iLocal_58 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_111)
	{
		if (unk_0x3E0478C40AB5B38D(iLocal_85))
		{
			iLocal_58 = 7;
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_84))
		{
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, 0, 1, 0) || (unk_0x41EEB10CCC2497A8(iLocal_84, 824.8886f, 1275.671f, 359.4312f, Global_18, 1, 1, 0) && unk_0x5093D6F9140AD109(iLocal_84, unk_0x9F92518438215DD0(), 8f, 8f, 8f, 0, 1, 0)))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_194, cLocal_177, "REHH3_CHT10", 4, 0, 0, 0);
				if (!unk_0x3E0478C40AB5B38D(iLocal_84) && !unk_0x3E0478C40AB5B38D(iLocal_85))
				{
					if (unk_0x827151D7B70CB853(iLocal_84, 0))
					{
						unk_0x5B1A1DA8A0D20935(iLocal_84);
						unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
						unk_0xD2062A6AC314B85E(0);
						unk_0x402A96371F34E6D8(0, iLocal_85, -1, 2052, 4);
						unk_0xF811299AF81DB581(0, 500, 0);
						unk_0x92641D4778270335(0, unk_0x9F92518438215DD0(), -1, 5f, 1f, 1073741824, 0);
						unk_0x7CF15DD8B3815A0D(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, 0, 0, 0);
						unk_0x23F243BF5B07DA90(0, iLocal_85, -1);
						unk_0x3179CCC77CBAB31F(uLocal_88);
						unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
						unk_0xCD02E3C29B8253A6(&uLocal_88);
					}
				}
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					if (!unk_0x0BA451447C3B1A8D(unk_0x228A016F863DED95()))
					{
						unk_0xEF5DFB41E5585C16(unk_0x228A016F863DED95(), (10.5f + 2f), 2, 0);
					}
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_58 = 6;
			}
		}
	}
}

void func_126()
{
	Global_14558 = 0;
	func_16();
}

int func_127(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x01F284681531A927())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (bParam0)
		{
			if (unk_0x0BA451447C3B1A8D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0BA451447C3B1A8D(iVar0))
			{
				if (unk_0xB5BBEB12C77EE430(iVar0, -1) != unk_0x9F92518438215DD0())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0xCC4F040D720C3035(iVar0) < 0.95f || unk_0xCC4F040D720C3035(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	if (!unk_0x2439A8FCC113E966(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	return 1;
}

int func_128()
{
	if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
	{
		if (unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x2A2DBEFFFC03A22F(iLocal_84, unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0)))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_92, 50f, 50f, 50f, 0, 1, 0) && !unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if (!unk_0x827151D7B70CB853(iLocal_84, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_129()
{
	if (bLocal_113)
	{
		if (unk_0x746960881FB19A89(iLocal_85))
		{
			if ((((unk_0x3E0478C40AB5B38D(iLocal_85) || !unk_0x5093D6F9140AD109(iLocal_85, unk_0x9F92518438215DD0(), 150f, 150f, 150f, 0, 1, 0)) || unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_92) < 250f) || unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_96) < 250f) || iLocal_115)
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_121))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_121);
				}
				if (unk_0x2E6E8D325977B3EC(uLocal_122))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_122);
				}
				if (!unk_0x3E0478C40AB5B38D(iLocal_85))
				{
					unk_0x5AF9967EE816E12C(iLocal_85, 6, 0, 0);
					unk_0x722E6B3A5162A6BB(iLocal_85, unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
					unk_0x995B3705D02B0401(&iLocal_85);
				}
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_194, cLocal_177, "REHH5_CHT2", 4, 0, 0, 0);
				unk_0x995B3705D02B0401(&iLocal_85);
				if (unk_0x746960881FB19A89(iLocal_170))
				{
					unk_0x9187463EB4918A4D(&iLocal_170);
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
				if (!unk_0x3E0478C40AB5B38D(iLocal_85))
				{
					func_137(&iLocal_85, &uLocal_121, &iLocal_170, &uLocal_122);
					func_136(&iLocal_85, &uLocal_121, &iLocal_170, &uLocal_122);
					func_130(iLocal_170, unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()), &uLocal_184, &uLocal_187, &Local_189, &uLocal_188, &uLocal_192, 0f, 0f, 0f, 1500, 0f);
					if (unk_0x5093D6F9140AD109(iLocal_85, unk_0x9F92518438215DD0(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_108 < unk_0x17103F66FBB44C3C())
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
								iLocal_108 = unk_0x17103F66FBB44C3C() + 8000;
							}
						}
						if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
						{
							if (!func_110("REHH5_SHO"))
							{
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								func_1(&uLocal_194, cLocal_177, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (unk_0x04C9AA01BF03901E(unk_0x9F92518438215DD0()) && !unk_0x3E0478C40AB5B38D(iLocal_85))
						{
							if ((unk_0x04C9AA01BF03901E(iLocal_85) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 4)) && unk_0xA9526B5F78178A02(unk_0xCFC72E446B0B3AD7()))
							{
								iLocal_115 = 1;
							}
						}
					}
					if (!iLocal_114 && !unk_0x3E0478C40AB5B38D(iLocal_85))
					{
						if (unk_0x9A0574B8E8749BBD(unk_0x9F92518438215DD0()) && unk_0x5093D6F9140AD109(iLocal_85, unk_0x9F92518438215DD0(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0xF78316EFCA911012(iLocal_85, unk_0x9F92518438215DD0(), 0, 16);
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

void func_130(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (((((((unk_0x746960881FB19A89(iParam1) && iParam0 != iParam1) && !unk_0x567194A60F82D51A(unk_0xB6A50C909A8FABC3(iParam1))) && !unk_0xDB519A4108C6BFB1(unk_0xB6A50C909A8FABC3(iParam1))) && !unk_0xAAF77E03CD60491E(unk_0xB6A50C909A8FABC3(iParam1))) && !unk_0x297BD02A9765671B(unk_0xB6A50C909A8FABC3(iParam1))) && unk_0xF37F1CECABC7FC33(iParam1)) && func_135(iParam0))
		{
			if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x81D32A4E7E765EA7(*uParam2, *uParam3, Param7) };
				*uParam3 = func_134(unk_0x77009B1C011405A9(iParam0, 1), unk_0x77009B1C011405A9(iParam1, 1));
				func_133(iParam1, uParam4, uParam5);
			}
			if (!unk_0xC7FF9739199F83C9(iParam0))
			{
				*uParam6 = unk_0x17103F66FBB44C3C();
			}
			else if ((unk_0x17103F66FBB44C3C() - *uParam6) > iParam10)
			{
				if (func_132(iParam0, iParam1, 1) > fParam11 && unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_131(*uParam2))
					{
						if (!unk_0xE298336AB6E66F7E(*uParam2, 3f))
						{
							unk_0xA82CB0D67E22220B(*uParam2, 1.5f, 0);
							unk_0x8F9D4AA83F37F6E2(*uParam2, 3f, 0, 0, 0, 0, 0);
							unk_0xFA51DC22F6E34F6E(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0x03D97EDECF2E1859(iParam0, *uParam3);
							unk_0x77C765087051EDD6(iParam0);
							unk_0xBF3459C0ACC7B82F(iParam0, 10f);
							unk_0x6FD45FA39DD18625(iParam0, 1, 1);
							*uParam6 = unk_0x17103F66FBB44C3C();
						}
						else
						{
							Var0 = { unk_0x81D32A4E7E765EA7(Local_189, uLocal_188, Param7) };
							if (!func_131(Var0))
							{
								if (!unk_0xE298336AB6E66F7E(Var0, 2f))
								{
									unk_0xA82CB0D67E22220B(Var0, 1.5f, 0);
									unk_0x8F9D4AA83F37F6E2(Var0, 3f, 0, 0, 0, 0, 0);
									unk_0xFA51DC22F6E34F6E(iParam0, Var0, 1, 0, 0, 1);
									unk_0x03D97EDECF2E1859(iParam0, uLocal_188);
									unk_0x77C765087051EDD6(iParam0);
									unk_0xBF3459C0ACC7B82F(iParam0, 10f);
									unk_0x6FD45FA39DD18625(iParam0, 1, 1);
									*uParam6 = unk_0x17103F66FBB44C3C();
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
			*uParam6 = unk_0x17103F66FBB44C3C();
		}
	}
}

int func_131(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_132(int iParam0, int iParam1, int iParam2)
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

void func_133(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			*uParam1 = { unk_0x77009B1C011405A9(iParam0, 1) };
			*uParam2 = unk_0xE691E4EA6B4440C6(iParam0);
		}
	}
}

var func_134(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x4F034F83AF91EC27((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (unk_0x746960881FB19A89(iParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(iParam0))
		{
			if (!unk_0x4A33023BC86AAA7F(iParam0, -1))
			{
				iVar0 = unk_0xB5BBEB12C77EE430(iParam0, -1);
				if (unk_0x746960881FB19A89(iVar0))
				{
					if (!unk_0x0BA451447C3B1A8D(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_136(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0x746960881FB19A89(*iParam2))
	{
		if (unk_0xFC38B241541883D3(*iParam2, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(*iParam0))
			{
				if (unk_0x44E080690DA76A2A(*iParam0, *iParam2, 0))
				{
					if (unk_0x2E6E8D325977B3EC(*uParam1))
					{
						unk_0x0451B5D93A4BDAA0(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0x2E6E8D325977B3EC(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
			if (!unk_0x2E6E8D325977B3EC(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_116(unk_0x77009B1C011405A9(*iParam2, 1), 0);
					unk_0x016722B6E0559A9A(*uParam3, 1);
					unk_0x15DE80E4F3BF69A9(*uParam3, 9);
					unk_0x2A8C2BEEA4F7041F(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0xF4A29E04CA54F443(*uParam3) };
				Var4 = { unk_0x77009B1C011405A9(*iParam2, 1) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0xAB1A4C1CDE66050B(*uParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0x0451B5D93A4BDAA0(uParam3);
				}
			}
		}
		else
		{
			if (unk_0x2E6E8D325977B3EC(*uParam3))
			{
				unk_0x0451B5D93A4BDAA0(uParam3);
			}
			if (!unk_0x3E0478C40AB5B38D(*iParam0))
			{
				if (!unk_0x2E6E8D325977B3EC(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_137(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x746960881FB19A89(*iParam0))
	{
		if (unk_0x3E0478C40AB5B38D(*iParam0))
		{
			if (unk_0x2E6E8D325977B3EC(*uParam1))
			{
				unk_0x0451B5D93A4BDAA0(uParam1);
			}
			unk_0x995B3705D02B0401(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x827151D7B70CB853(*iParam0, 0))
			{
			}
			else if (unk_0x746960881FB19A89(*iParam2))
			{
				if (unk_0xFC38B241541883D3(*iParam2, 0))
				{
					if (unk_0x44E080690DA76A2A(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x746960881FB19A89(*iParam2))
	{
		if (unk_0xFC38B241541883D3(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x62DAED390EC70145(*iParam2);
				unk_0x147A431959878235(*iParam2);
				unk_0xC932874B6133A2D2(*iParam2, 0);
				unk_0x9187463EB4918A4D(iParam2);
				if (unk_0x2E6E8D325977B3EC(*uParam3))
				{
					unk_0x0451B5D93A4BDAA0(uParam3);
				}
			}
		}
		else
		{
			unk_0x62DAED390EC70145(*iParam2);
			unk_0x147A431959878235(*iParam2);
			unk_0xC932874B6133A2D2(*iParam2, 0);
			unk_0x9187463EB4918A4D(iParam2);
			if (unk_0x2E6E8D325977B3EC(*uParam3))
			{
				unk_0x0451B5D93A4BDAA0(uParam3);
			}
		}
	}
}

void func_138()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_85))
	{
		if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0) || unk_0xFE0FA79BC49EBB07(iLocal_85, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0))
		{
			if (unk_0x6E4DE584BEE4823B(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x3FE56706AE09BC00(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
			}
			if (unk_0x6E4DE584BEE4823B(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x3FE56706AE09BC00(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
			}
		}
		else
		{
			if (unk_0x6E4DE584BEE4823B(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x3FE56706AE09BC00(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
			}
			if (unk_0x6E4DE584BEE4823B(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0x3FE56706AE09BC00(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 1, 0f, 0);
			}
		}
	}
}

void func_139()
{
	if (!bLocal_111)
	{
		if (iLocal_59 == 3)
		{
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_103, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0x3BC6D217451D6BB7(iLocal_100);
				unk_0xF56FC42B9186CE3F("move_m@brave");
				if (unk_0x149162179DBAEDB0(iLocal_100) && unk_0x18E6A43566D33720("move_m@brave"))
				{
					iLocal_85 = unk_0xA00B5D954AD320BF(26, iLocal_100, Local_103, fLocal_106, 1, 1);
					unk_0xB27BF64B02C0107E(iLocal_85, 0, 2, 1, 0);
					unk_0xB27BF64B02C0107E(iLocal_85, 3, 0, 2, 0);
					unk_0x4A1AC49BA4A747F7(iLocal_85, 1);
					unk_0x9001FCB58244C11D(iLocal_85, 42, 1);
					unk_0x1E54CC9454B7C0BE(iLocal_85, 1);
					unk_0xB08BAA85EDA206FD(iLocal_85, "move_m@brave", 1048576000);
					unk_0x9001FCB58244C11D(iLocal_85, 137, 1);
					func_143(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
					unk_0x7CF15DD8B3815A0D(iLocal_85, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x402A96371F34E6D8(iLocal_85, unk_0x9F92518438215DD0(), -1, 2052, 4);
					unk_0x0880E86251A44B7F(iLocal_100);
					bLocal_111 = true;
				}
			}
		}
		else if (iLocal_59 == 5)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_78, 1) > 320f && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					if (unk_0x44E080690DA76A2A(iLocal_84, unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
					{
						if (unk_0xB60134452ED5852A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x073B65E051D2F03E(2, 5), &Local_65, 1, 1077936128, 0))
						{
							if (!unk_0xE298336AB6E66F7E(Local_65, 7f) && unk_0x2A488C176D52CCA5(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_65) < 110f)
							{
								unk_0x3BC6D217451D6BB7(iLocal_100);
								if (unk_0x149162179DBAEDB0(iLocal_100))
								{
									func_55();
									unk_0x4EDE34FBADD967A6(0);
									if (func_142(&uLocal_194, cLocal_177, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !unk_0x3E0478C40AB5B38D(iLocal_84))
									{
										iLocal_170 = unk_0xB0694AD0A3BB8936(iLocal_101, Local_65, func_140(Local_65, func_141(unk_0xCFC72E446B0B3AD7()), 1), 1, 1);
										unk_0x0F8D3599CAFC9EEE(iLocal_170, 134, 134);
										unk_0x4595ADB79DB507B7(iLocal_170, 0f);
										iLocal_85 = unk_0xAD7526C9AA33EE39(iLocal_170, 26, iLocal_100, -1, 1, 1);
										unk_0xB27BF64B02C0107E(iLocal_85, 0, 1, 1, 0);
										unk_0xB27BF64B02C0107E(iLocal_85, 2, 1, 0, 0);
										unk_0x9001FCB58244C11D(iLocal_85, 42, 1);
										unk_0x5E4D9888EEC3124B(iLocal_85, 1);
										func_143(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
										unk_0x77C765087051EDD6(iLocal_170);
										unk_0x7FC0EEAECC1615C3(iLocal_85, iLocal_170, iLocal_84, 6, 60f, 786468, -1f, -1f, 1);
										unk_0xF78316EFCA911012(iLocal_85, unk_0x9F92518438215DD0(), 0, 16);
										unk_0xE8105B7E3908547D(iLocal_85, 1);
										unk_0x0880E86251A44B7F(iLocal_100);
										unk_0x0880E86251A44B7F(iLocal_101);
										unk_0xBF3459C0ACC7B82F(iLocal_170, (unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) + 15f));
										if (unk_0x2E6E8D325977B3EC(uLocal_82))
										{
											unk_0x0451B5D93A4BDAA0(&uLocal_82);
										}
										func_55();
										while (func_54())
										{
											unk_0x4EDE34FBADD967A6(0);
										}
										func_111(&uLocal_194, cLocal_177, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
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

float func_140(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x4E9A83F39209A4F6(fVar1, fVar2);
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

Vector3 func_141(int iParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(iParam0), 0);
}

int func_142(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_17(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 1;
	Global_16685 = 0;
	Global_16689 = 0;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_2(sParam2, iParam4, 0);
}

void func_143(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_144()
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

void func_145()
{
	iLocal_154 = func_150(func_151()) * 1000;
	iLocal_154 = (iLocal_154 + func_149(func_151()) * 1000 * 60);
	if (!iLocal_163)
	{
		if ((iLocal_173 >= 24 && iLocal_154 < 150000) || (iLocal_173 >= 24 && iLocal_154 < 150000))
		{
			func_146((((iLocal_173 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_172 * 1000 - func_150(func_151()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
		else
		{
			func_146(((iLocal_173 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_172 * 1000 - func_150(func_151()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((iLocal_173 >= 24 && iLocal_154 < 150000) || (iLocal_173 >= 24 && iLocal_154 < 150000))
	{
		func_146((((iLocal_173 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_172 * 1000 - func_150(func_151()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	else
	{
		func_146(((iLocal_173 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_172 * 1000 - func_150(func_151()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	if ((iLocal_173 == func_149(func_151()) + 1 && iLocal_172 == func_150(func_151())) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_149(func_151()) + 25) && iLocal_172 == func_150(func_151())))
	{
		if (!iLocal_162)
		{
			if (!func_110("REHH1_1HOUR") && !func_110("REHH4_1HOUR"))
			{
				func_107(0);
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
		if ((iLocal_173 == func_149(func_151()) && iLocal_172 == func_150(func_151()) + 30) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_149(func_151()) + 24) && iLocal_172 == func_150(func_151()) + 30))
		{
			if (!iLocal_163)
			{
				if (!func_110("REHH1_HHOUR") && !func_110("REHH4_HHOUR"))
				{
					func_107(0);
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
					uLocal_176 = unk_0x50798E25F4813F2F();
					unk_0x86F4B3D6FF8F65DE(uLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0x004456A13308186D(iLocal_176, "countdown_fadein", 35f);
					unk_0x9B517A4FE28A719F("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == func_149(func_151()) && iLocal_172 == func_150(func_151()) + 5) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_149(func_151()) + 24) && iLocal_172 == func_150(func_151()) + 5))
		{
			if (!iLocal_165)
			{
				unk_0x004456A13308186D(iLocal_176, "countdown_fast", 1f);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_172 == 0)
	{
		if ((iLocal_173 == func_149(func_151()) + 1 && iLocal_172 == (func_150(func_151()) - 30)) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_149(func_151()) + 25) && iLocal_172 == (func_150(func_151()) - 30)))
		{
			if (!iLocal_163)
			{
				if (!func_110("REHH1_HHOUR") && !func_110("REHH4_HHOUR"))
				{
					func_107(0);
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
					iLocal_176 = unk_0x50798E25F4813F2F();
					unk_0x86F4B3D6FF8F65DE(iLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0x004456A13308186D(iLocal_176, "countdown_fadein", 35f);
					unk_0x9B517A4FE28A719F("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == func_149(func_151()) + 1 && iLocal_172 == (func_150(func_151()) - 55)) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_149(func_151()) + 25) && iLocal_172 == (func_150(func_151()) - 55)))
		{
			if (!iLocal_165)
			{
				unk_0x004456A13308186D(iLocal_176, "countdown_fast", 1f);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_173 >= 24 && iLocal_154 < 150000)
	{
		if (iLocal_173 == func_149(func_151()) + 24 && iLocal_172 == func_150(func_151()))
		{
			bLocal_174 = true;
		}
	}
	else if (iLocal_173 == func_149(func_151()) && iLocal_172 == func_150(func_151()))
	{
		bLocal_174 = true;
	}
	if (bLocal_174)
	{
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		unk_0xC4370267C511F8E7(iLocal_176);
		unk_0x6041FBFC1EE8196A("TIMER_SCENE");
		if (iLocal_59 == 1)
		{
			func_1(&uLocal_194, cLocal_177, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!unk_0x3E0478C40AB5B38D(iLocal_84))
		{
			if (unk_0x827151D7B70CB853(iLocal_84, 0))
			{
				unk_0xEF5DFB41E5585C16(unk_0x1161215F69587BDA(iLocal_84, 0), (10.5f + 2f), 2, 0);
				unk_0xF811299AF81DB581(iLocal_84, 1, 0);
				unk_0x1FA92C26AB9467D3(iLocal_84);
				if (unk_0x2E6E8D325977B3EC(uLocal_82))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_82);
				}
			}
		}
		iLocal_58 = 9;
	}
}

void func_146(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_148(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_147(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_147(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_148(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_1328872.f_3613[iParam0], iParam1);
}

int func_149(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_150(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_151()
{
	var uVar0;
	
	func_161(&uVar0, unk_0xD9940DF735CED1D5());
	func_160(&uVar0, unk_0x00CE62DFC32D8B1E());
	func_159(&uVar0, unk_0x3E15607264E063C3());
	func_154(&uVar0, unk_0xA2C54D866C588926());
	func_153(&uVar0, unk_0x35E06151CD8A2DD1());
	func_152(&uVar0, unk_0x4C625096668FC49E());
	return uVar0;
}

void func_152(var uParam0, int iParam1)
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

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_154(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_158(*uParam0);
	iVar1 = func_156(*uParam0);
	if (iParam1 < 1 || iParam1 > func_155(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_155(int iParam0, int iParam1)
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

int func_156(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_157(unk_0x94E72F17611BCD3C(iParam0, 31), -1, 1)) + 2011;
}

int func_157(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_158(int iParam0)
{
	return iParam0 & 15;
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_162()
{
	if (!unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if (unk_0xFC38B241541883D3(unk_0x228A016F863DED95(), 0))
		{
			if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), unk_0x228A016F863DED95(), 0) && unk_0x44E080690DA76A2A(iLocal_84, unk_0x228A016F863DED95(), 0))
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_120))
				{
					unk_0x0451B5D93A4BDAA0(&uLocal_120);
				}
				if (!unk_0x6AAACE62C58880BC(iLocal_84))
				{
					unk_0x78267FAB4E1661CE(iLocal_84, func_106());
					unk_0x305D5B0653A9C181(iLocal_84, 1);
					unk_0xC70FD27B0FCC0545(iLocal_84, 0);
				}
				if (!unk_0x2E6E8D325977B3EC(uLocal_82))
				{
					uLocal_82 = func_116(Local_92, 1);
				}
				if (((func_8() == 2 && !func_51()) && iLocal_59 != 1) && iLocal_59 != 4)
				{
					if (!unk_0x2E6E8D325977B3EC(uLocal_83))
					{
						uLocal_83 = func_116(Local_96, 0);
						unk_0xAFF0147EA2454485(uLocal_83, 269);
						func_163();
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
						iLocal_173 = func_149(func_151()) + 2;
						if (func_150(func_151()) >= 30)
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

void func_163()
{
	if (func_8() == 2)
	{
		if (!Global_24680)
		{
			func_164("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}

void func_164(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

void func_165()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (iLocal_109 < unk_0x17103F66FBB44C3C())
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0);
					iLocal_109 = (unk_0x17103F66FBB44C3C() + unk_0x073B65E051D2F03E(4500, 6500));
				}
				if (unk_0x53C8F92CF78772BF(iLocal_84, unk_0x9F92518438215DD0(), 90f))
				{
					if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 24f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
					{
						fLocal_183 = func_132(iLocal_84, unk_0x9F92518438215DD0(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
						unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
						unk_0x92641D4778270335(0, unk_0x9F92518438215DD0(), -1, fLocal_183, 2f, 1073741824, 0);
						unk_0x3179CCC77CBAB31F(uLocal_88);
						unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
						unk_0xCD02E3C29B8253A6(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 12f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
				{
					fLocal_183 = func_132(iLocal_84, unk_0x9F92518438215DD0(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x92641D4778270335(0, unk_0x9F92518438215DD0(), -1, fLocal_183, 2f, 1073741824, 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0x2E6E8D325977B3EC(uLocal_120))
			{
				unk_0x49101D6A0E39441B(uLocal_120, 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iLocal_84, 5000, 2052, 2);
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0xFC38B241541883D3(iLocal_86, 0))
					{
						if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 25f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
						{
							if (unk_0x53C8F92CF78772BF(iLocal_84, unk_0x9F92518438215DD0(), 150f))
							{
								unk_0x5B1A1DA8A0D20935(iLocal_84);
								unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
								unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 4);
								if (unk_0x4A33023BC86AAA7F(iLocal_86, 0))
								{
									unk_0x98AEC977173BFF75(0, iLocal_86, -1, 0, 2f);
								}
								unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
								unk_0x3179CCC77CBAB31F(uLocal_88);
								unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
								unk_0xCD02E3C29B8253A6(&uLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (!unk_0x3E0478C40AB5B38D(iLocal_84) && unk_0xFC38B241541883D3(iLocal_86, 0))
				{
					if (func_132(iLocal_84, iLocal_86, 1) < 25f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
					{
						if (unk_0x9EF11DECA38804B6(iLocal_86) < 2.5f)
						{
							if (!unk_0x3E0478C40AB5B38D(iLocal_84))
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x5093D6F9140AD109(iLocal_84, unk_0x9F92518438215DD0(), 3f, 3f, 3f, 0, 1, 0))
				{
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
				}
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0xFC38B241541883D3(iLocal_86, 0))
					{
						if (unk_0x9EF11DECA38804B6(iLocal_86) < 2.5f && func_167(iLocal_84, unk_0x9F92518438215DD0()) < 25f)
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && func_167(iLocal_84, unk_0x9F92518438215DD0()) < 25f)
				{
					if (func_112())
					{
						if (unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
						{
							if (unk_0x4A33023BC86AAA7F(unk_0x228A016F863DED95(), 0))
							{
								unk_0x78267FAB4E1661CE(iLocal_84, func_106());
								unk_0x305D5B0653A9C181(iLocal_84, 1);
								unk_0xC70FD27B0FCC0545(iLocal_84, 0);
								unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 10000, 2052, 2);
								unk_0x4073360CA020BB84(iLocal_84, unk_0x228A016F863DED95(), -1, 0, 2f, 1, 0);
								func_166();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xB5BBEB12C77EE430(unk_0x228A016F863DED95(), 0);
								if (unk_0x3E0478C40AB5B38D(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x32D18ECD9E6F9BE2(iLocal_84);
									unk_0x78267FAB4E1661CE(iLocal_84, func_106());
									unk_0x305D5B0653A9C181(iLocal_84, 1);
									unk_0xC70FD27B0FCC0545(iLocal_84, 1);
									unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!func_54())
						{
							if (!func_172())
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (func_112())
				{
					if (unk_0x827151D7B70CB853(iLocal_84, 0))
					{
						unk_0xD2062A6AC314B85E(iLocal_84);
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
					if (func_167(iLocal_84, unk_0x9F92518438215DD0()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0x1FA92C26AB9467D3(iLocal_84);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					iLocal_139 = 4;
				}
			}
			break;
	}
}

void func_166()
{
	if (!func_51())
	{
		if (func_8() == 2)
		{
			Global_24678 = 1;
		}
	}
}

float func_167(int iParam0, int iParam1)
{
	return func_132(iParam0, iParam1, 1);
}

void func_168()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x53C8F92CF78772BF(iLocal_84, unk_0x9F92518438215DD0(), 90f))
				{
					if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 12f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
					{
						fLocal_183 = func_132(iLocal_84, unk_0x9F92518438215DD0(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0x5B1A1DA8A0D20935(iLocal_84);
						unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
						unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
						unk_0x3EF9F824EB10BF1F(0, unk_0x9F92518438215DD0(), 2.5f, 0f, 0f, 1f, 5000, 1036831949, 1);
						unk_0x3179CCC77CBAB31F(uLocal_88);
						unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
						unk_0xCD02E3C29B8253A6(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 8f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
				{
					fLocal_183 = func_132(iLocal_84, unk_0x9F92518438215DD0(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x92641D4778270335(0, unk_0x9F92518438215DD0(), -1, fLocal_183, 1f, 1073741824, 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0x2E6E8D325977B3EC(uLocal_120))
			{
				unk_0x49101D6A0E39441B(uLocal_120, 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iLocal_84, 5000, 2052, 2);
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0xFC38B241541883D3(iLocal_86, 0))
					{
						if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 10f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
						{
							if (unk_0x53C8F92CF78772BF(iLocal_84, unk_0x9F92518438215DD0(), 150f))
							{
								unk_0x5B1A1DA8A0D20935(iLocal_84);
								unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
								unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 4);
								if (unk_0x4A33023BC86AAA7F(iLocal_86, 0))
								{
									unk_0x98AEC977173BFF75(0, iLocal_86, -1, 0, 1f);
								}
								unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
								unk_0x3179CCC77CBAB31F(uLocal_88);
								unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
								unk_0xCD02E3C29B8253A6(&uLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (!unk_0x3E0478C40AB5B38D(iLocal_84) && unk_0xFC38B241541883D3(iLocal_86, 0))
				{
					if (func_132(iLocal_84, iLocal_86, 1) < 13f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
					{
						if (unk_0x9EF11DECA38804B6(iLocal_86) < 2.5f)
						{
							if (!unk_0x3E0478C40AB5B38D(iLocal_84))
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x11CF47CA7B00BE4F(iLocal_84))
				{
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
				}
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0xFC38B241541883D3(iLocal_86, 0))
					{
						if (unk_0x9EF11DECA38804B6(iLocal_86) < 2.5f && func_167(iLocal_84, unk_0x9F92518438215DD0()) < 15f)
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && func_167(iLocal_84, unk_0x9F92518438215DD0()) < 15f)
				{
					if (func_112())
					{
						if (unk_0xFC38B241541883D3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0), 0))
						{
							if (unk_0x4A33023BC86AAA7F(unk_0x228A016F863DED95(), 0))
							{
								unk_0x78267FAB4E1661CE(iLocal_84, func_106());
								unk_0x305D5B0653A9C181(iLocal_84, 1);
								unk_0xC70FD27B0FCC0545(iLocal_84, 0);
								unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 10000, 2052, 2);
								unk_0x4073360CA020BB84(iLocal_84, unk_0x228A016F863DED95(), -1, 0, 1f, 1, 0);
								func_166();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xB5BBEB12C77EE430(unk_0x228A016F863DED95(), 0);
								if (unk_0x3E0478C40AB5B38D(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x32D18ECD9E6F9BE2(iLocal_84);
									unk_0x78267FAB4E1661CE(iLocal_84, func_106());
									unk_0x305D5B0653A9C181(iLocal_84, 1);
									unk_0xC70FD27B0FCC0545(iLocal_84, 1);
									unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!func_54())
						{
							if (!func_172())
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (func_112())
				{
					unk_0x0365EE015603E149(iLocal_84, 1f);
					if (unk_0x827151D7B70CB853(iLocal_84, 0))
					{
						unk_0xD2062A6AC314B85E(iLocal_84);
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
					if (func_167(iLocal_84, unk_0x9F92518438215DD0()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0x1FA92C26AB9467D3(iLocal_84);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					iLocal_139 = 4;
				}
			}
			break;
	}
}

void func_169()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x53C8F92CF78772BF(iLocal_84, unk_0x9F92518438215DD0(), 90f))
				{
					if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 12f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
					{
						fLocal_183 = func_132(iLocal_84, unk_0x9F92518438215DD0(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
						unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
						unk_0x92641D4778270335(0, unk_0x9F92518438215DD0(), -1, fLocal_183, 1f, 1073741824, 0);
						unk_0x3179CCC77CBAB31F(uLocal_88);
						unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
						unk_0xCD02E3C29B8253A6(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 8f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
				{
					fLocal_183 = func_132(iLocal_84, unk_0x9F92518438215DD0(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x92641D4778270335(0, unk_0x9F92518438215DD0(), -1, fLocal_183, 1f, 1073741824, 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0x2E6E8D325977B3EC(uLocal_120))
			{
				unk_0x49101D6A0E39441B(uLocal_120, 1);
			}
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iLocal_84, 5000, 2052, 2);
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0xFC38B241541883D3(iLocal_86, 0))
					{
						if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 10f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
						{
							if (unk_0x53C8F92CF78772BF(iLocal_84, unk_0x9F92518438215DD0(), 150f))
							{
								unk_0x5B1A1DA8A0D20935(iLocal_84);
								unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
								unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
								if (unk_0x4A33023BC86AAA7F(iLocal_86, 0))
								{
									unk_0x98AEC977173BFF75(0, iLocal_86, -1, 0, 1f);
								}
								unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
								unk_0x3179CCC77CBAB31F(uLocal_88);
								unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
								unk_0xCD02E3C29B8253A6(&uLocal_88);
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0x32D18ECD9E6F9BE2(iLocal_84);
					unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (!unk_0x3E0478C40AB5B38D(iLocal_84) && unk_0xFC38B241541883D3(iLocal_86, 0))
				{
					if (func_132(iLocal_84, iLocal_86, 1) < 13f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
					{
						if (unk_0x9EF11DECA38804B6(iLocal_86) < 2.5f)
						{
							if (!unk_0x3E0478C40AB5B38D(iLocal_84))
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x11CF47CA7B00BE4F(iLocal_84))
				{
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
				}
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0xFC38B241541883D3(iLocal_86, 0))
					{
						if (unk_0x9EF11DECA38804B6(iLocal_86) < 2.5f && func_167(iLocal_84, unk_0x9F92518438215DD0()) < 15f)
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) && func_167(iLocal_84, unk_0x9F92518438215DD0()) < 15f)
				{
					if (func_112())
					{
						iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (unk_0xFC38B241541883D3(iLocal_86, 0))
						{
							if (unk_0x4A33023BC86AAA7F(unk_0x228A016F863DED95(), 0))
							{
								unk_0x78267FAB4E1661CE(iLocal_84, func_106());
								unk_0x305D5B0653A9C181(iLocal_84, 1);
								unk_0xC70FD27B0FCC0545(iLocal_84, 0);
								unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 10000, 2052, 2);
								unk_0x4073360CA020BB84(iLocal_84, unk_0x228A016F863DED95(), -1, 0, 1f, 1, 0);
								func_166();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xB5BBEB12C77EE430(unk_0x228A016F863DED95(), 0);
								if (unk_0x3E0478C40AB5B38D(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x32D18ECD9E6F9BE2(iLocal_84);
									unk_0x78267FAB4E1661CE(iLocal_84, func_106());
									unk_0x305D5B0653A9C181(iLocal_84, 1);
									unk_0xC70FD27B0FCC0545(iLocal_84, 1);
									unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!func_54())
						{
							if (!func_172())
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (!iLocal_102)
				{
					if (unk_0x5093D6F9140AD109(iLocal_84, unk_0x9F92518438215DD0(), 3f, 3f, 3f, 0, 1, 0))
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
				if (func_112())
				{
					unk_0x0365EE015603E149(iLocal_84, 1f);
					if (unk_0x827151D7B70CB853(iLocal_84, 0))
					{
						unk_0xD2062A6AC314B85E(iLocal_84);
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
					unk_0x1FA92C26AB9467D3(iLocal_84);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					iLocal_139 = 4;
				}
				if (func_167(iLocal_84, unk_0x9F92518438215DD0()) > 100f)
				{
					func_53();
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (func_167(unk_0x9F92518438215DD0(), iLocal_84) < 12f || (unk_0xF6AD1DC69145DC4B(unk_0xCFC72E446B0B3AD7()) && func_167(unk_0x9F92518438215DD0(), iLocal_84) < 30f))
				{
					unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iLocal_84, 5000, 2052, 2);
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (unk_0xFC38B241541883D3(iLocal_86, 0))
						{
							unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
							unk_0x402A96371F34E6D8(0, iLocal_86, 30000, 2054, 2);
							unk_0x7CF15DD8B3815A0D(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x3179CCC77CBAB31F(uLocal_88);
							unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
							unk_0xCD02E3C29B8253A6(&uLocal_88);
						}
						iLocal_139++;
					}
					else if (!iLocal_140)
					{
						unk_0x32D18ECD9E6F9BE2(iLocal_84);
						unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
						unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2054, 2);
						unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), -1);
						unk_0x3179CCC77CBAB31F(uLocal_88);
						unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
						unk_0xCD02E3C29B8253A6(&uLocal_88);
						if (func_1(&uLocal_194, cLocal_177, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0x2E6E8D325977B3EC(uLocal_120))
			{
				unk_0x49101D6A0E39441B(uLocal_120, 1);
			}
			if (func_112())
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0x9EF11DECA38804B6(iLocal_86) < 10f)
					{
						if (!unk_0x3E0478C40AB5B38D(iLocal_84))
						{
							if (unk_0x53C8F92CF78772BF(iLocal_84, unk_0x9F92518438215DD0(), 150f))
							{
								fLocal_183 = func_132(iLocal_84, unk_0x9F92518438215DD0(), 1);
								if (fLocal_183 > 5f)
								{
									fLocal_183 = (fLocal_183 - 0.5f);
								}
								else
								{
									fLocal_183 = (fLocal_183 - 0.25f);
								}
								unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
								unk_0x402A96371F34E6D8(0, iLocal_86, 10000, 2054, 2);
								if (unk_0x4A33023BC86AAA7F(iLocal_86, 0))
								{
									unk_0x98AEC977173BFF75(0, iLocal_86, -1, 0, 1f);
								}
								unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), -1);
								unk_0x3179CCC77CBAB31F(uLocal_88);
								unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
								unk_0xCD02E3C29B8253A6(&uLocal_88);
								iLocal_139++;
							}
							else
							{
								unk_0x402A96371F34E6D8(iLocal_84, iLocal_86, 10000, 2054, 2);
								iLocal_139++;
							}
						}
					}
				}
			}
			else if (!iLocal_140)
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					unk_0x32D18ECD9E6F9BE2(iLocal_84);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2054, 2);
					unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), -1);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					if (!func_54())
					{
						if (!func_172())
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84) && unk_0xFC38B241541883D3(iLocal_86, 0))
			{
				if (unk_0x9EF11DECA38804B6(iLocal_86) < 2.5f)
				{
					func_126();
					iLocal_139++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x3E0478C40AB5B38D(iLocal_84) && unk_0xFC38B241541883D3(iLocal_86, 0))
			{
				if (unk_0x9EF11DECA38804B6(iLocal_86) < 2.5f)
				{
					if (func_1(&uLocal_194, cLocal_177, "REHH1_ASK", 4, 0, 0, 0))
					{
						unk_0x5B1A1DA8A0D20935(iLocal_84);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_139++;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (unk_0x11CF47CA7B00BE4F(iLocal_84))
				{
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
				}
				if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 15f)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						iLocal_86 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (unk_0xFC38B241541883D3(iLocal_86, 0))
						{
							if (unk_0x9EF11DECA38804B6(iLocal_86) < 2.5f)
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (func_167(iLocal_84, unk_0x9F92518438215DD0()) < 15f)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if (func_112())
						{
							if (unk_0x4A33023BC86AAA7F(unk_0x228A016F863DED95(), 0))
							{
								unk_0x78267FAB4E1661CE(iLocal_84, func_106());
								unk_0x305D5B0653A9C181(iLocal_84, 1);
								unk_0xC70FD27B0FCC0545(iLocal_84, 0);
								unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 10000, 2052, 2);
								unk_0x4073360CA020BB84(iLocal_84, unk_0x228A016F863DED95(), -1, 0, 1f, 1, 0);
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xB5BBEB12C77EE430(unk_0x228A016F863DED95(), 0);
								if (unk_0x3E0478C40AB5B38D(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x32D18ECD9E6F9BE2(iLocal_84);
									unk_0x78267FAB4E1661CE(iLocal_84, func_106());
									unk_0x305D5B0653A9C181(iLocal_84, 1);
									unk_0xC70FD27B0FCC0545(iLocal_84, 1);
									unk_0x402A96371F34E6D8(iLocal_84, unk_0x9F92518438215DD0(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
						else if (!iLocal_141)
						{
							if (!func_54())
							{
								if (!func_172())
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
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				if (func_112())
				{
					unk_0x0365EE015603E149(iLocal_84, 1f);
					if (unk_0x827151D7B70CB853(iLocal_84, 0))
					{
						unk_0xD2062A6AC314B85E(iLocal_84);
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
					unk_0x1FA92C26AB9467D3(iLocal_84);
					unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
					unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 2);
					unk_0x23F243BF5B07DA90(0, unk_0x9F92518438215DD0(), 0);
					unk_0x3179CCC77CBAB31F(uLocal_88);
					unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
					unk_0xCD02E3C29B8253A6(&uLocal_88);
					iLocal_139 = 5;
				}
				if (func_167(iLocal_84, unk_0x9F92518438215DD0()) > 100f)
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
	
	if ((iLocal_157 - iLocal_156) > 1000)
	{
		iLocal_171 = unk_0x86ED1EA56B0ED915(unk_0x77009B1C011405A9(iLocal_84, 0), 18f, 0, 4);
	}
	if (iLocal_171 != 0)
	{
		iLocal_155++;
		iLocal_156 = unk_0x17103F66FBB44C3C();
		if (unk_0x073B65E051D2F03E(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_155 > iVar0)
		{
			unk_0x336AE92FD68DEF98(iLocal_171, 1, 0);
			if (unk_0xFC38B241541883D3(iLocal_171, 0))
			{
				if (!unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_171, 0))
				{
					if (iLocal_59 == 1)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!unk_0x3E0478C40AB5B38D(iLocal_84))
							{
								unk_0x402A96371F34E6D8(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x17103F66FBB44C3C();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 2)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!unk_0x3E0478C40AB5B38D(iLocal_84))
							{
								unk_0x402A96371F34E6D8(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x17103F66FBB44C3C();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 3)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!unk_0x3E0478C40AB5B38D(iLocal_84))
							{
								unk_0x402A96371F34E6D8(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x17103F66FBB44C3C();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 5)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!unk_0x3E0478C40AB5B38D(iLocal_84))
							{
								unk_0x402A96371F34E6D8(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x17103F66FBB44C3C();
						iLocal_155 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_182 = unk_0x17103F66FBB44C3C();
			if ((iLocal_182 - iLocal_181) > 3500)
			{
				unk_0x9187463EB4918A4D(&iLocal_171);
			}
			iLocal_171 = 0;
		}
	}
}

int func_172()
{
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		if (unk_0xFC38B241541883D3(unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()), 1))
		{
			if ((unk_0x1B3D1C08625F69DF(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 1))) || unk_0x8D759C5DD707B910(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 1)))) || unk_0x0724E81841E756B7(unk_0xB6A50C909A8FABC3(unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_173()
{
	if (iLocal_59 == 1)
	{
		if (unk_0x746960881FB19A89(iLocal_84))
		{
			if (!unk_0x0BA451447C3B1A8D(iLocal_84))
			{
				if ((unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0, 1, 0) && !unk_0xC7FF9739199F83C9(iLocal_84)) || func_167(unk_0x9F92518438215DD0(), iLocal_84) < 12f)
				{
					func_174();
					iLocal_58 = 2;
				}
			}
		}
	}
	else if (iLocal_59 == 2)
	{
		if (!iLocal_166)
		{
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_89, 100f, 100f, 100f, 0, 1, 0) && !unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
				unk_0x27DF0A5AA993D7B6(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x27DF0A5AA993D7B6(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x27DF0A5AA993D7B6(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x3179CCC77CBAB31F(uLocal_88);
				unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
				unk_0xCD02E3C29B8253A6(&uLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	else if (iLocal_59 == 5)
	{
		if (!iLocal_166)
		{
			if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_89, 200f, 200f, 200f, 0, 1, 0) && !unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				unk_0xF87DA7F5BA8C7D0F(&uLocal_88);
				unk_0x402A96371F34E6D8(0, unk_0x9F92518438215DD0(), -1, 2052, 3);
				unk_0x7CF15DD8B3815A0D(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0x27DF0A5AA993D7B6(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x27DF0A5AA993D7B6(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x27DF0A5AA993D7B6(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x27DF0A5AA993D7B6(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x27DF0A5AA993D7B6(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x27DF0A5AA993D7B6(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x7CF15DD8B3815A0D(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, 0, 0, 0);
				unk_0x3179CCC77CBAB31F(uLocal_88);
				unk_0xC7EBE3C9AC83FAAA(iLocal_84, uLocal_88);
				unk_0xCD02E3C29B8253A6(&uLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_59 != 1)
	{
		if (unk_0x746960881FB19A89(iLocal_84))
		{
			if (!unk_0x0BA451447C3B1A8D(iLocal_84))
			{
				if ((unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_84, 95f, 95f, 50f, 0, 1, 0) && !unk_0xC7FF9739199F83C9(iLocal_84)) || func_167(unk_0x9F92518438215DD0(), iLocal_84) < 12f)
				{
					func_174();
					iLocal_58 = 2;
				}
			}
		}
	}
}

void func_174()
{
	if (unk_0x2E6E8D325977B3EC(uLocal_119))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_119);
	}
	if (!unk_0x3E0478C40AB5B38D(iLocal_84))
	{
		if (!unk_0x2E6E8D325977B3EC(uLocal_120))
		{
			if (!unk_0x0BA451447C3B1A8D(iLocal_84))
			{
				uLocal_120 = func_63(iLocal_84, 0, 145);
				unk_0x49101D6A0E39441B(uLocal_120, 0);
			}
		}
		if (!func_207())
		{
			func_182(1);
		}
		func_143(&uLocal_194, 3, iLocal_84, sLocal_178, 0, 1);
	}
	if (func_8() == 0)
	{
		func_143(&uLocal_194, 0, unk_0x9F92518438215DD0(), "MICHAEL", 0, 1);
	}
	else if (func_8() == 1)
	{
		func_143(&uLocal_194, 1, unk_0x9F92518438215DD0(), "FRANKLIN", 0, 1);
	}
	else if (func_8() == 2)
	{
		func_143(&uLocal_194, 2, unk_0x9F92518438215DD0(), "TREVOR", 0, 1);
	}
}

void func_175()
{
	func_177(39, 1);
	func_177(40, 1);
	func_177(41, 1);
	func_177(42, 1);
	func_177(43, 1);
	iLocal_84 = unk_0xA00B5D954AD320BF(26, iLocal_99, Local_89, fLocal_95, 1, 1);
	unk_0x0880E86251A44B7F(iLocal_99);
	unk_0x4A1AC49BA4A747F7(iLocal_84, 1);
	unk_0x0CFE85F88BE373C8(iLocal_84, 0);
	unk_0x1B0EED08D8CF2596(iLocal_84, sLocal_180);
	unk_0x9001FCB58244C11D(iLocal_84, 137, 1);
	unk_0x9001FCB58244C11D(iLocal_84, 206, 1);
	unk_0xA334EDA2335A13CA(iLocal_84, 1024, 1);
	unk_0xA334EDA2335A13CA(iLocal_84, 65536, 1);
	unk_0xA334EDA2335A13CA(iLocal_84, 2, 0);
	unk_0x64277E0EB39C1162(iLocal_84, 17, 1);
	unk_0x452D7DCDB5C80860(iLocal_84, 60f);
	unk_0x5E66F70CFC4EF61D(iLocal_84, 5f);
	if (iLocal_59 == 1)
	{
		unk_0xB27BF64B02C0107E(iLocal_84, 0, 0, 1, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 2, 1, 2, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 3, 0, 2, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 4, 0, 2, 0);
		unk_0x60DAE84D0B296FD2(iLocal_101, 1);
		iLocal_170 = unk_0xB0694AD0A3BB8936(iLocal_101, -3088.068f, 730.4819f, 20.3028f, 332.2996f, 1, 1);
		unk_0x8063FF52148C1749(iLocal_170, 150f);
		unk_0x1FE4B6BC95E3B9AD(iLocal_170, 4, 0, 0);
		unk_0x4E4495A4D2C1856B(iLocal_170, 0);
		unk_0x0880E86251A44B7F(iLocal_101);
		unk_0x7CF15DD8B3815A0D(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
	}
	else if (iLocal_59 == 2)
	{
		unk_0xB27BF64B02C0107E(iLocal_84, 0, 0, 1, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 2, 0, 1, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 3, 0, 0, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 4, 0, 1, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 8, 1, 0, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 10, 0, 0, 0);
		unk_0x7CF15DD8B3815A0D(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x676E460800A9E1B7(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		func_176(1);
	}
	else if (iLocal_59 == 3)
	{
		unk_0xB27BF64B02C0107E(iLocal_84, 0, 0, 0, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 2, 1, 0, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 3, 0, 0, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 4, 1, 0, 0);
		unk_0xB27BF64B02C0107E(iLocal_84, 8, 0, 0, 0);
		unk_0x7CF15DD8B3815A0D(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x676E460800A9E1B7(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_59 == 5)
	{
	}
	iLocal_58 = 1;
}

void func_176(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_96414, unk_0xC2E9075570B5D2B9(), 24);
		Global_96408 = 1;
	}
	else
	{
		StringCopy(&Global_96414, "NULL", 24);
		Global_96408 = 0;
	}
}

void func_177(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_181(iParam0, 2, 1))
		{
			func_180(iParam0, 2, 1);
		}
	}
	else if (func_181(iParam0, 2, 1))
	{
		func_178(iParam0, 2, 1);
	}
}

void func_178(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_179(iParam0), -1, 0);
			unk_0xF76EE56D3E7DAF1B(&uVar0, iParam1);
			func_43(func_179(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 819;
			break;
		
		case 1:
			return 820;
			break;
		
		case 2:
			return 821;
			break;
		
		case 3:
			return 822;
			break;
		
		case 4:
			return 823;
			break;
		
		case 5:
			return 824;
			break;
		
		case 6:
			return 825;
			break;
		
		case 7:
			return 826;
			break;
		
		case 8:
			return 827;
			break;
		
		case 9:
			return 828;
			break;
		
		case 10:
			return 829;
			break;
		
		case 11:
			return 830;
			break;
		
		case 12:
			return 831;
			break;
		
		case 13:
			return 832;
			break;
		
		case 14:
			return 833;
			break;
		
		case 15:
			return 835;
			break;
		
		case 16:
			return 836;
			break;
		
		case 17:
			return 837;
			break;
		
		case 18:
			return 838;
			break;
		
		case 19:
			return 839;
			break;
		
		case 20:
			return 840;
			break;
		
		case 21:
			return 841;
			break;
		
		case 22:
			return 842;
			break;
		
		case 23:
			return 843;
			break;
		
		case 24:
			return 844;
			break;
		
		case 25:
			return 845;
			break;
		
		case 26:
			return 846;
			break;
		
		case 27:
			return 847;
			break;
		
		case 28:
			return 848;
			break;
		
		case 29:
			return 849;
			break;
		
		case 30:
			return 850;
			break;
		
		case 31:
			return 851;
			break;
		
		case 32:
			return 852;
			break;
		
		case 33:
			return 853;
			break;
		
		case 34:
			return 854;
			break;
		
		case 35:
			return 855;
			break;
		
		case 36:
			return 856;
			break;
		
		case 37:
			return 857;
			break;
		
		case 38:
			return 858;
			break;
		
		case 39:
			return 859;
			break;
		
		case 40:
			return 863;
			break;
		
		case 41:
			return 864;
			break;
		
		case 42:
			return 865;
			break;
		
		case 43:
			return 866;
			break;
		
		default:
			break;
	}
	return 3015;
}

void func_180(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_90014.f_1272[iParam0]), iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_179(iParam0), -1, 0);
			unk_0xEDB9A377CD8B7F03(&uVar0, iParam1);
			func_43(func_179(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_668[iParam0]), iParam1);
	}
}

int func_181(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x94E72F17611BCD3C(Global_90014.f_1272[iParam0], iParam1);
	}
	else if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_26() == 0)
		{
			return unk_0x94E72F17611BCD3C(func_45(func_179(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_182(int iParam0)
{
	if (func_185())
	{
		Global_97348 = 1;
		Global_97345 = unk_0x17103F66FBB44C3C();
		if (func_31(Global_97347))
		{
			func_183(0);
		}
		unk_0x50809CE263545545(1, "RE_TITLE");
		if (iParam0 && func_31(Global_97347))
		{
			unk_0x951B29B8E6D6CC38();
		}
		return 1;
	}
	return 0;
}

void func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97358.f_28192.f_2 < 3)
			{
				if (!unk_0xBC4ECC4B5C6B7814())
				{
					func_164(func_184(iParam0), -1);
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
					func_164(func_184(iParam0), -1);
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
					func_164(func_184(iParam0), -1);
					Global_97358.f_28192.f_4++;
					unk_0xEDB9A377CD8B7F03(&Global_97354, 2);
				}
			}
			break;
	}
}

char* func_184(int iParam0)
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

int func_185()
{
	switch (func_186(&Global_24503, 0, 5, 0, unk_0x81ACA1EEF1E4410D()))
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

int func_186(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_190(0))
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
		if (!func_188(iParam2))
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
			func_187(uParam0, iParam4);
		}
	}
	return 2;
}

void func_187(var uParam0, int iParam1)
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

bool func_188(int iParam0)
{
	return func_189(iParam0, Global_34913);
}

int func_189(int iParam0, int iParam1)
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

int func_190(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_188(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_191()
{
	if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
	{
		return 1;
	}
	if (!unk_0x0BA451447C3B1A8D(iLocal_84))
	{
		if (unk_0xE99AF5B1B3F0BB7C(iLocal_84, unk_0x9F92518438215DD0(), 1))
		{
			return 1;
		}
		if (!unk_0x0BA451447C3B1A8D(unk_0x228A016F863DED95()))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_84, unk_0x228A016F863DED95(), 1))
			{
				return 1;
			}
		}
		if (!bLocal_113)
		{
			if (unk_0xD18D82BE9A1A5E43(unk_0x77009B1C011405A9(iLocal_84, 1), 10f, 1) || unk_0xFDD233BBDD8E0FFE(unk_0x77009B1C011405A9(iLocal_84, 1) - Vector(10f, 10f, 10f), unk_0x77009B1C011405A9(iLocal_84, 1) + Vector(10f, 10f, 10f), 0))
			{
				return 1;
			}
		}
		else if (unk_0x3E0478C40AB5B38D(iLocal_85) && unk_0x746960881FB19A89(iLocal_85))
		{
			if (unk_0xE99AF5B1B3F0BB7C(iLocal_85, unk_0x9F92518438215DD0(), 1) && unk_0x860AFAABAECF6379(unk_0x9F92518438215DD0(), 7))
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_84))
				{
					unk_0x5AF9967EE816E12C(iLocal_84, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!unk_0x6AAACE62C58880BC(iLocal_84) && unk_0x53C8F92CF78772BF(iLocal_84, unk_0x9F92518438215DD0(), 90f)) && unk_0x5093D6F9140AD109(iLocal_84, unk_0x9F92518438215DD0(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0xEA02B89C167BF0E3(unk_0xCFC72E446B0B3AD7(), iLocal_84) || unk_0xB7F4FC4B0BBF8285(unk_0xCFC72E446B0B3AD7(), iLocal_84))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_192()
{
	unk_0x3BC6D217451D6BB7(iLocal_99);
	unk_0xDA293E5084610B09("random@hitch_lift");
	if (iLocal_59 == 1 || iLocal_59 == 5)
	{
		unk_0x3BC6D217451D6BB7(iLocal_101);
	}
	if (iLocal_59 == 1)
	{
		unk_0x12988F278DF9017C(0);
		unk_0xEC2376DA57EC68E1("timer", 0);
	}
	else if (iLocal_59 == 3)
	{
		unk_0xDA293E5084610B09("facials@gen_female@base");
	}
	if (unk_0x149162179DBAEDB0(iLocal_99) && unk_0x3DA2EED4204CE591("random@hitch_lift"))
	{
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			if (unk_0x149162179DBAEDB0(iLocal_101))
			{
				bLocal_60 = true;
			}
		}
		else if (iLocal_59 == 3)
		{
			if (unk_0x3DA2EED4204CE591("facials@gen_female@base"))
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
		unk_0x3BC6D217451D6BB7(iLocal_99);
		unk_0xDA293E5084610B09("random@hitch_lift");
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			unk_0x3BC6D217451D6BB7(iLocal_101);
		}
		else if (iLocal_59 == 3)
		{
			unk_0xDA293E5084610B09("facials@gen_female@base");
		}
	}
}

void func_193()
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

int func_194()
{
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_205())
		{
			return 0;
		}
	}
	if (func_201())
	{
		return 1;
	}
	if (func_195(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_195(float fParam0, bool bParam1)
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
		if (func_10(func_8()))
		{
			iVar36 = func_36();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 2) && !unk_0x94E72F17611BCD3C(Global_97358.f_16828[iVar32 /*6*/], 3))
				{
					func_196(iVar32, &Var0);
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

void func_196(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_197(uParam1, "Abigail1", func_199(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 1:
			func_197(uParam1, "Abigail2", func_199(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 2:
			func_197(uParam1, "Barry1", func_199(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 3:
			func_197(uParam1, "Barry2", func_199(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 4:
			func_197(uParam1, "Barry3", func_199(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 5:
			func_197(uParam1, "Barry3A", func_199(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 6:
			func_197(uParam1, "Barry3C", func_199(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 7:
			func_197(uParam1, "Barry4", func_199(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_198(iParam0), 0, 0);
			break;
		
		case 8:
			func_197(uParam1, "Dreyfuss1", func_199(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 9:
			func_197(uParam1, "Epsilon1", func_199(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 10:
			func_197(uParam1, "Epsilon2", func_199(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 11:
			func_197(uParam1, "Epsilon3", func_199(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 12:
			func_197(uParam1, "Epsilon4", func_199(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 13:
			func_197(uParam1, "Epsilon5", func_199(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 14:
			func_197(uParam1, "Epsilon6", func_199(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 15:
			func_197(uParam1, "Epsilon7", func_199(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 16:
			func_197(uParam1, "Epsilon8", func_199(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 17:
			func_197(uParam1, "Extreme1", func_199(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 18:
			func_197(uParam1, "Extreme2", func_199(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 19:
			func_197(uParam1, "Extreme3", func_199(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 20:
			func_197(uParam1, "Extreme4", func_199(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 21:
			func_197(uParam1, "Fanatic1", func_199(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_198(iParam0), 1, 0);
			break;
		
		case 22:
			func_197(uParam1, "Fanatic2", func_199(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_198(iParam0), 1, 0);
			break;
		
		case 23:
			func_197(uParam1, "Fanatic3", func_199(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_198(iParam0), 0, 1);
			break;
		
		case 24:
			func_197(uParam1, "Hao1", func_199(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_198(iParam0), 0, 1);
			break;
		
		case 25:
			func_197(uParam1, "Hunting1", func_199(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 26:
			func_197(uParam1, "Hunting2", func_199(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 27:
			func_197(uParam1, "Josh1", func_199(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 28:
			func_197(uParam1, "Josh2", func_199(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 29:
			func_197(uParam1, "Josh3", func_199(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 30:
			func_197(uParam1, "Josh4", func_199(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 31:
			func_197(uParam1, "Maude1", func_199(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 32:
			func_197(uParam1, "Minute1", func_199(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 33:
			func_197(uParam1, "Minute2", func_199(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 34:
			func_197(uParam1, "Minute3", func_199(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 35:
			func_197(uParam1, "MrsPhilips1", func_199(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 36:
			func_197(uParam1, "MrsPhilips2", func_199(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 37:
			func_197(uParam1, "Nigel1", func_199(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 38:
			func_197(uParam1, "Nigel1A", func_199(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 39:
			func_197(uParam1, "Nigel1B", func_199(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_198(iParam0), 1, 1);
			break;
		
		case 40:
			func_197(uParam1, "Nigel1C", func_199(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_198(iParam0), 1, 1);
			break;
		
		case 41:
			func_197(uParam1, "Nigel1D", func_199(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_198(iParam0), 1, 1);
			break;
		
		case 42:
			func_197(uParam1, "Nigel2", func_199(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 43:
			func_197(uParam1, "Nigel3", func_199(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 1, 1);
			break;
		
		case 44:
			func_197(uParam1, "Omega1", func_199(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 45:
			func_197(uParam1, "Omega2", func_199(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 46:
			func_197(uParam1, "Paparazzo1", func_199(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 47:
			func_197(uParam1, "Paparazzo2", func_199(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 48:
			func_197(uParam1, "Paparazzo3", func_199(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 49:
			func_197(uParam1, "Paparazzo3A", func_199(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 50:
			func_197(uParam1, "Paparazzo3B", func_199(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 51:
			func_197(uParam1, "Paparazzo4", func_199(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 52:
			func_197(uParam1, "Rampage1", func_199(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 54:
			func_197(uParam1, "Rampage3", func_199(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 55:
			func_197(uParam1, "Rampage4", func_199(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 56:
			func_197(uParam1, "Rampage5", func_199(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_198(iParam0), 0, 0);
			break;
		
		case 53:
			func_197(uParam1, "Rampage2", func_199(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_198(iParam0), 1, 0);
			break;
		
		case 57:
			func_197(uParam1, "TheLastOne", func_199(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 58:
			func_197(uParam1, "Tonya1", func_199(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 59:
			func_197(uParam1, "Tonya2", func_199(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 60:
			func_197(uParam1, "Tonya3", func_199(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 61:
			func_197(uParam1, "Tonya4", func_199(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		case 62:
			func_197(uParam1, "Tonya5", func_199(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_198(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_197(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_198(int iParam0)
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

struct<2> func_199(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_200(iParam0) };
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

struct<2> func_200(int iParam0)
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

int func_201()
{
	if (func_204() && !func_205())
	{
		return 1;
	}
	if (func_203() && func_202())
	{
		return 1;
	}
	return 0;
}

bool func_202()
{
	return Global_97076 > 0;
}

int func_203()
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_205()
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

int func_206()
{
	if (!func_188(5))
	{
		return 1;
	}
	if (func_201())
	{
		return 1;
	}
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_205())
		{
			return 0;
		}
	}
	if (func_195(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	if ((Global_97347 == func_40() && unk_0x5B668B6112C83376()) && Global_97348)
	{
		return 1;
	}
	return 0;
}

void func_208(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_210(iParam0);
	unk_0xEDE0414F2E7294E3(0);
	unk_0xA81D632371FE58C9(1);
	Global_97344 = 0;
	func_209();
}

void func_209()
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

void func_210(int iParam0)
{
	Global_97347 = iParam0;
}

int func_211(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_40();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_239())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			Var1 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xAEA1379E6840A7DA(unk_0x9F92518438215DD0())) > 1369f && !func_205())
			{
				return 0;
			}
		}
		if (!Global_97358.f_7341)
		{
			return 0;
		}
		if (func_21(0))
		{
			return 0;
		}
		if (func_201())
		{
			return 0;
		}
		if (func_238())
		{
			return 0;
		}
		if (Global_97347 != -1)
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_195(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_237(iParam3))
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_236(func_8()) == 4 || func_236(func_8()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_8()))
		{
			if (!func_235(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_234(Global_97358.f_28192.f_43[iParam3]))
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
		if (func_233())
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
		if (!func_224(4))
		{
			return 0;
		}
		if (!func_188(5))
		{
			return 0;
		}
		if (func_223(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_223(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_237(30) && !func_223(30, 0))
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
				Var5 = { Global_97358.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97358.f_1729.f_539.f_1524[iVar4];
				if (func_222(iVar8))
				{
					if (func_213(iVar4))
					{
						if (!func_212(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0), Var5) < (210f * 210f))
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

bool func_212(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97358.f_1729.f_539.f_1524[iParam0];
	return func_214(iVar0);
}

int func_214(int iParam0)
{
	return func_215(iParam0, 1);
}

int func_215(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_222(iParam0))
	{
		return 0;
	}
	func_216(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_216(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_217(func_151(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_217(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_221(iParam0, iParam1))
	{
		iVar0 = func_158(iParam1);
		iVar1 = func_156(iParam0);
		iVar2 = (func_156(iParam0) - func_156(iParam1));
		iVar3 = (func_158(iParam0) - func_158(iParam1));
		iVar4 = (func_220(iParam0) - func_220(iParam1));
		iVar5 = (func_149(iParam0) - func_149(iParam1));
		iVar6 = (func_150(iParam0) - func_150(iParam1));
		iVar7 = (func_219(iParam0) - func_219(iParam1));
	}
	else
	{
		iVar0 = func_158(iParam0);
		iVar1 = func_156(iParam1);
		iVar2 = (func_156(iParam1) - func_156(iParam0));
		iVar3 = (func_158(iParam1) - func_158(iParam0));
		iVar4 = (func_220(iParam1) - func_220(iParam0));
		iVar5 = (func_149(iParam1) - func_149(iParam0));
		iVar6 = (func_150(iParam1) - func_150(iParam0));
		iVar7 = (func_219(iParam1) - func_219(iParam0));
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
		iVar4 = (iVar4 + func_155(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_218(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_218(float fParam0, float fParam1, float fParam2)
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

int func_219(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_220(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_222(iParam1) || !func_222(iParam0))
	{
		return 1;
	}
	iVar0 = func_156(iParam0);
	iVar1 = func_156(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_158(iParam0);
	iVar1 = func_158(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
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
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
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
	iVar0 = func_219(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_150(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_149(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_156(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_158(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_220(iParam0);
	if (iVar5 < 1 || iVar5 > func_155(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_223(int iParam0, int iParam1)
{
	if (unk_0x94E72F17611BCD3C(Global_97358.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (unk_0x746960881FB19A89(unk_0x9F92518438215DD0()))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
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
						if (((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_232()) || Global_96405) || Global_24446) || func_231()) || func_15(8, -1)) || func_230()) || func_229()) || func_228()) || func_227()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1) || func_232()) || Global_24446) || func_231()) || func_15(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_232()) || Global_96405) || Global_24446) || func_231()) || func_15(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_97358.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0()) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0)) || func_232()) || Global_96405) || Global_24446) || func_231()) || func_15(8, -1)) || func_230()) || func_229()) || func_227()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_232() || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || func_15(8, -1)) || func_227()) || func_226()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_15(8, -1) || func_230()) || func_229()) || func_226()) || func_225())
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
							if ((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || unk_0xD092BBE40A1C72AA(unk_0xCFC72E446B0B3AD7()) > 0) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_232()) || Global_24446) || func_231()) || func_15(8, -1)) || func_229()) || func_228()) || func_227()) || Global_97358.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || func_232()) || func_229()) || Global_96405) || Global_24446) || func_231()) || Global_35957) || func_15(8, -1)) || func_228()) || func_226()) || func_227()) || Global_97358.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x5D1AEC61B1517F38(unk_0x9F92518438215DD0(), 0) || !unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7())) || !unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7())) || !unk_0x9685D9855970A029()) || unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) || unk_0xFAF3D214E00907D8(unk_0x9F92518438215DD0())) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1)) || unk_0xBD280C076BC69C97(unk_0x9F92518438215DD0())) || unk_0x6B6534ADCC502CF1(unk_0x9F92518438215DD0())) || unk_0xC8399522CF774929(unk_0x9F92518438215DD0())) || unk_0x6BD7C167138FCD4C(unk_0xCFC72E446B0B3AD7(), 1)) || unk_0x29F9C49274370985(unk_0xCFC72E446B0B3AD7())) || func_232()) || Global_96405) || Global_24446) || func_231()) || func_15(8, -1)) || func_228()) || func_226()) || func_230()) || func_229()) || func_227())
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

var func_225()
{
	return Global_90001.f_1;
}

int func_226()
{
	if (Global_87289 != -1)
	{
		return unk_0x94E72F17611BCD3C(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_227()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_228()
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

bool func_229()
{
	return Global_90014.f_291 > 0;
}

bool func_230()
{
	return Global_90014.f_290 > 0;
}

var func_231()
{
	return Global_1315900;
}

int func_232()
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_233()
{
	func_7();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_234(int iParam0)
{
	return func_221(func_151(), iParam0);
}

int func_235(int iParam0, int iParam1, int iParam2)
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

int func_236(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_97358.f_5944.f_919[iParam0];
}

bool func_237(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_239())
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

int func_238()
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

int func_239()
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

void func_240()
{
	if (iLocal_142)
	{
		func_260(0);
		if (Global_24682)
		{
			unk_0xDD74AAB135833BB7("AC_STOP");
		}
		func_259();
		unk_0x845977C673188B47();
		func_176(0);
		if (unk_0x66ABEB57BE23A1E8())
		{
			unk_0xF457518D39569180(0);
		}
		if (unk_0x71873A3982C49B19())
		{
			unk_0x4086F5D7C7384DD2(0);
		}
		Global_24709[0 /*7*/].f_6 = 0;
		func_252(0, 1, 1, 0);
		func_55();
		if (unk_0x746960881FB19A89(iLocal_84))
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_84))
			{
				unk_0x9001FCB58244C11D(iLocal_84, 317, 1);
				if (!unk_0x827151D7B70CB853(iLocal_84, 0))
				{
					unk_0xE744DD731E562846(iLocal_84);
				}
				if (iLocal_59 != 2)
				{
					unk_0x5B1A1DA8A0D20935(iLocal_84);
				}
				if (unk_0xE962BD784DD0E442(iLocal_84, 1805844857) != 1 && unk_0xE962BD784DD0E442(iLocal_84, 1805844857) != 0)
				{
					unk_0x4A1AC49BA4A747F7(iLocal_84, 0);
				}
				unk_0x0CFE85F88BE373C8(iLocal_84, 1);
				if (unk_0x6AAACE62C58880BC(iLocal_84))
				{
					unk_0x1FA92C26AB9467D3(iLocal_84);
				}
			}
		}
		if (unk_0x746960881FB19A89(iLocal_85))
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_85))
			{
				if (!unk_0x7E4B3ADE683EE23B(iLocal_85))
				{
					unk_0x4A1AC49BA4A747F7(iLocal_85, 0);
				}
			}
		}
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
			{
				unk_0xC70D4A06E38B2711(unk_0xCFC72E446B0B3AD7(), 1, 0);
			}
		}
	}
	unk_0xD1622C66EC50A005();
	if (func_207())
	{
		if (unk_0x6E4DE584BEE4823B(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0x3FE56706AE09BC00(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
		}
		if (unk_0x6E4DE584BEE4823B(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0x3FE56706AE09BC00(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
		}
	}
	func_241(-1);
	unk_0xE60DEFFB2A853900();
}

void func_241(int iParam0)
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
	if (func_207())
	{
		func_245(iParam0);
		unk_0x50809CE263545545(0, 0);
		Global_97349 = unk_0x17103F66FBB44C3C();
		func_244(30000);
		StringCopy(&cVar0, func_243(Global_97347, 1), 64);
		if (func_39(Global_97347) > 0)
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
	func_242(&Global_24503);
	Global_97348 = 0;
	func_210(-1);
}

void func_242(var uParam0)
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

char* func_243(int iParam0, bool bParam1)
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

void func_244(int iParam0)
{
	Global_35464 = (unk_0x17103F66FBB44C3C() + iParam0);
}

void func_245(int iParam0)
{
	func_246(iParam0, 0, func_251(iParam0));
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_151();
	func_249(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_248(iParam0, &uVar0);
	Var1 = { func_247(&uVar0) };
}

struct<16> func_247(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_149(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_150(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_219(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_220(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_158(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_156(*uParam0), 64);
	return Var0;
}

void func_248(int iParam0, var uParam1)
{
	Global_97358.f_28192.f_43[iParam0] = *uParam1;
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_156(*uParam0);
	iVar1 = func_158(*uParam0);
	iVar2 = func_220(*uParam0);
	iVar3 = func_149(*uParam0);
	iVar4 = func_150(*uParam0);
	iVar5 = func_219(*uParam0);
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
	iVar6 = func_155(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_155(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_250(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_250(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_161(uParam0, iParam1);
	func_160(uParam0, iParam2);
	func_159(uParam0, iParam3);
	func_154(uParam0, iParam4);
	func_153(uParam0, iParam5);
	func_152(uParam0, iParam6);
}

int func_251(int iParam0)
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

void func_252(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xEDCFF0FC6297F270(unk_0xCFC72E446B0B3AD7());
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 1);
		func_258(1);
		unk_0x2C65B46CAD8BDA04();
		unk_0x2D600F28499293DD();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x71F866C9C77F9B9F())
			{
				unk_0xC318E8D9E0AA1394(0);
			}
			if (!func_5())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_257(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_258(0);
		unk_0x1B4F451D66F090A7();
		Global_54756 = 0;
		if (bParam1)
		{
			unk_0x431DA04416622A80();
		}
		unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 0);
		unk_0x81953AC360BD0D5D(unk_0xCFC72E446B0B3AD7(), 0);
		func_257(0, iParam3, iParam2);
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()) && !func_253(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0xC204B4E5503A54EA(unk_0x9F92518438215DD0(), 0);
		}
		Global_68243 = 0;
	}
}

int func_253(int iParam0)
{
	if (func_255(iParam0, 0))
	{
		return 1;
	}
	if (func_254())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_254()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

bool func_255(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_256(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_257(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0xF8386AB49CD1A1B8() != iParam0 && uParam2)
		{
			unk_0xC9B8731F7E02AD92(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_258(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 13);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 13);
	}
}

void func_259()
{
	Global_24678 = 0;
	Global_24679 = 0;
	Global_24681 = 0;
	Global_24682 = 0;
	Global_24683 = 0;
}

void func_260(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_177(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_261()
{
	float fVar0;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		fVar0 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_69, 1);
		iLocal_68 = 1;
		if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_72, 1) < fVar0)
		{
			fVar0 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_72, 1);
			iLocal_68 = 2;
		}
		if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_75, 1) < fVar0)
		{
			fVar0 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_75, 1);
			iLocal_68 = 3;
		}
		if (unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_78, 1) < fVar0)
		{
			fVar0 = unk_0x91EAD4F2F9B5B38A(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), Local_78, 1);
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

