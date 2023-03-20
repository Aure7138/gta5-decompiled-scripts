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
	int iLocal_54 = 0;
	int iLocal_55 = 0;
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
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
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
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int* iLocal_122 = NULL;
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
	float fLocal_188 = 0f;
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
	iLocal_54 = unk_0x4A9923385BDB9DAD();
	iLocal_55 = unk_0x186E5D252FA50E7D();
	Local_69 = { -3092.82f, 749.8f, 21.48f };
	Local_72 = { 181.8977f, 4415.152f, 73.463f };
	Local_75 = { 2743.461f, 4385.51f, 47.7521f };
	Local_78 = { -382.1346f, 2817.971f, 44.0671f };
	Local_96 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_127, "", 24);
	Local_62 = { ScriptParam_0.f_1[0 /*3*/] };
	func_261();
	if (unk_0xC968670BFACE42D9(11))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
		{
			if (unk_0x5891CAC5D4ACFF74(iLocal_84))
			{
				unk_0xED74007FFB146BC2(iLocal_84);
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
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC5042CC6F5E3D450() || iLocal_110)
		{
			if (!func_207())
			{
				if (func_206())
				{
					func_240();
				}
			}
			unk_0x208784099002BC30("RE_HL", 0);
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
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
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
										iLocal_157 = unk_0x9CD27B0045628463();
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
										if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
										{
											if (unk_0x20B60995556D004F(iLocal_84, Local_92, 200f, 200f, 200f, false, true, 0))
											{
												unk_0x15D3A79D4E44B913(iLocal_84, Local_92, 1f, -1, 0.25f, false, 40000f);
											}
											else
											{
												unk_0xBB9CE077274F6A1B(iLocal_84, 40000f, 0);
											}
											unk_0x971D38760FBC02EF(iLocal_84, true);
											unk_0x4EDE34FBADD967A6(5000);
										}
										func_53();
										break;
									
									case 10:
										break;
								}
								if ((func_52() && !func_51()) && iLocal_58 != 10)
								{
									if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
									{
										if (unk_0x20B60995556D004F(iLocal_84, Local_96, 5f, 5f, 5f, false, true, 0))
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
									if (unk_0x7239B21A38F536BA(iLocal_84))
									{
										unk_0x9614299DCB53E54B(&iLocal_84);
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
									if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
									{
										unk_0xE1EF3C1216AFF2CD(iLocal_85);
										unk_0x22B0D0E37CCB840D(iLocal_85, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
										unk_0x971D38760FBC02EF(iLocal_85, true);
									}
								}
								else if (iLocal_59 == 5)
								{
									func_1(&uLocal_194, cLocal_177, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_84);
									unk_0x22B0D0E37CCB840D(iLocal_84, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
									unk_0x971D38760FBC02EF(iLocal_84, true);
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x7239B21A38F536BA(iLocal_84))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
					{
						if (!unk_0x751B70C3D034E187(iLocal_84, unk_0xD80958FC74E988A6(), 100f, 100f, 100f, false, true, 0))
						{
							func_53();
						}
					}
				}
			}
		}
		if (iLocal_58 > 0 && iLocal_58 < 8)
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x84A2DD9AC37C35C1(iLocal_84))
				{
					if (!func_207())
					{
						func_182(1);
					}
					func_53();
				}
				else if (!unk_0x47E4E977581C5B55(iLocal_84))
				{
					if (unk_0xC86D67D52A707CF8(iLocal_84, unk_0xD80958FC74E988A6(), false))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_84);
						unk_0x22B0D0E37CCB840D(iLocal_84, unk_0xD80958FC74E988A6(), 250f, -1, false, false);
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
					func_16();
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_6())
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
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
	unk_0xD79DEEFB53455EBA(false);
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
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

void func_7()
{
	if (func_13(14))
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
		Global_14393 = func_8();
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

int func_8()
{
	func_9();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_9()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_12(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_11(unk_0xD80958FC74E988A6());
			if (func_10(iVar0) && (!func_13(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_10(Global_97173.f_1729.f_539.f_3213))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_13(int iParam0)
{
	return Global_34909 == iParam0;
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
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_16()
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

bool func_21(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
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
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_30(iParam0, iParam1) != 322)
		{
			func_24(func_30(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_23(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
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
	Global_97159 = iParam0;
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
		func_27(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_26() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
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
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
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

int func_29()
{
	return Global_1312736;
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
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_35();
	}
}

void func_35()
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

int func_36()
{
	func_9();
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
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_42(int iParam0, int iParam1, int iParam2)
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

void func_43(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454187[iParam0 /*6*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
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
			Global_2453900 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453900 = 1;
		}
	}
	return iVar0;
}

int func_45(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454187[iParam0 /*6*/][func_44(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
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
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_50(int iParam0)
{
	Global_16703 = iParam0;
}

int func_51()
{
	if (Global_97173.f_28117.f_5 == 1000)
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
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
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
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_16703 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_57()
{
	struct<6> Var0;
	
	if (!unk_0x84A2DD9AC37C35C1(iLocal_85) && !unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_85, 25f, 25f, 25f, false, true, 0) && !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_84, 40f, 40f, 40f, false, true, 0))
		{
			unk_0xE1EF3C1216AFF2CD(iLocal_85);
			unk_0x15D3A79D4E44B913(iLocal_85, Local_92, 1f, -1, 0.25f, false, 40000f);
			func_18();
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_85, unk_0xD80958FC74E988A6(), true))
		{
			if (func_54())
			{
				Var0 = { func_60() };
				if ((unk_0x0C515FAB3FF9EA92(&Var0, "REHH3_JB_2") || unk_0x0C515FAB3FF9EA92(&Var0, "REHH3_JB_4")) || unk_0x0C515FAB3FF9EA92(&Var0, "REHH3_JB_6"))
				{
					func_48();
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > 5000)
		{
			if (unk_0x4859F1FC66A6278E(iLocal_85, unk_0xD80958FC74E988A6()))
			{
				iLocal_158 = 4;
			}
		}
	}
	if (!iLocal_112)
	{
		if (unk_0x7239B21A38F536BA(iLocal_84))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_84, unk_0xD80958FC74E988A6(), true))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					func_1(&uLocal_194, cLocal_177, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_112 = 1;
				}
			}
		}
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if (unk_0x47E4E977581C5B55(iLocal_84))
		{
			unk_0x176CECF6F920D707(iLocal_84);
		}
		if (unk_0x84A2DD9AC37C35C1(iLocal_85) && unk_0x20B60995556D004F(iLocal_84, unk_0x3FEF770D40960D5A(iLocal_85, false), 1f, 1f, 5f, false, true, 0))
		{
			iLocal_158 = 5;
		}
	}
	else if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
	{
		unk_0xF166E48407BAC484(iLocal_85, unk_0xD80958FC74E988A6(), 0, 16);
		func_53();
	}
	else
	{
		func_53();
	}
	if (!iLocal_167)
	{
		if (unk_0x84A2DD9AC37C35C1(iLocal_85))
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_121))
			{
				unk_0x86A652570E5F25DD(&iLocal_121);
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				iLocal_158 = 3;
			}
		}
	}
	if (!iLocal_169)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84) && !unk_0x84A2DD9AC37C35C1(iLocal_85))
		{
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				if (unk_0x2E397FD2ECD37C87(unk_0x4F8644AF03D0E0D6()))
				{
					iLocal_158 = 2;
				}
			}
		}
		if (unk_0x84A2DD9AC37C35C1(iLocal_85))
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_121))
			{
				unk_0x86A652570E5F25DD(&iLocal_121);
			}
			func_59(&uLocal_194, 4);
			if (unk_0xC86D67D52A707CF8(iLocal_85, unk_0xD80958FC74E988A6(), true) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				iLocal_158 = 2;
			}
		}
		else if (!unk_0x5F9532F3B5CC2551(iLocal_84))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_84, iLocal_85, true))
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
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84) && !unk_0x84A2DD9AC37C35C1(iLocal_85))
				{
					if (!unk_0x997ABD671D25CA0B(iLocal_84, false) && unk_0x4E209B2C1EAD5159(iLocal_85))
					{
						if (!iLocal_168)
						{
							unk_0xE8854A4326B9E12B(&iLocal_88);
							unk_0x69F4BE8C8CC4796C(0, iLocal_85, -1, 2052, 2);
							unk_0xEA47FE3719165B94(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
							unk_0x5AD23D40115353AC(0, iLocal_85, -1);
							unk_0x39E72BC99E6360CB(iLocal_88);
							unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
							unk_0x3841422E9C488D8C(&iLocal_88);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				unk_0x504D54DF3F6F2247(iLocal_84, 0, 0);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_158 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_169)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4))
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_84);
						unk_0x22B0D0E37CCB840D(iLocal_84, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
						if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
						{
							unk_0xBC9AE166038A5CEC(iLocal_85, 6, 0, 0);
							unk_0x22B0D0E37CCB840D(iLocal_85, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
						}
					}
					func_18();
					iLocal_169 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
				{
					unk_0xBC9AE166038A5CEC(iLocal_84, 7, 0, 0);
				}
				func_1(&uLocal_194, cLocal_177, "REHH3_BAS", 4, 0, 0, 0);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84) && unk_0x7239B21A38F536BA(iLocal_85))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_84);
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x0F804F1DB19B9689(0);
					unk_0xEA47FE3719165B94(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
					unk_0x69F4BE8C8CC4796C(0, iLocal_85, -1, 2052, 4);
					unk_0x15D3A79D4E44B913(0, unk_0x3FEF770D40960D5A(iLocal_85, false), 1f, -1, 3f, false, 40000f);
					unk_0x5AD23D40115353AC(0, iLocal_85, -1);
					unk_0xEA47FE3719165B94(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0f, false, false, false);
					unk_0xEA47FE3719165B94(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
					unk_0xBB9CE077274F6A1B(0, 40000f, 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
					unk_0x971D38760FBC02EF(iLocal_84, true);
					unk_0x9F8AA94D6D97DBF4(iLocal_84, false);
					unk_0x4EDE34FBADD967A6(10000);
					iLocal_167 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 4:
			if (func_58())
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
				{
					if (unk_0x751B70C3D034E187(iLocal_84, unk_0xD80958FC74E988A6(), 15f, 15f, 15f, false, true, 0))
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH3_NOO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_158 = 0;
						}
					}
				}
			}
			else if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
			{
				if (func_1(&uLocal_194, cLocal_177, "REHH3_FHT", 4, 0, 0, 0))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_158 = 0;
				}
			}
			break;
		
		case 5:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
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
	if (unk_0xA921AA820C25702F(unk_0xD53343AA4FB7DD28(0, 65535), 0))
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
		iVar6 = unk_0x480357EE890C295A();
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
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
		{
			if (unk_0x5891CAC5D4ACFF74(iLocal_84))
			{
				unk_0xED74007FFB146BC2(iLocal_84);
			}
			iLocal_58 = 8;
		}
	}
}

void func_62()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_82))
	{
		unk_0x86A652570E5F25DD(&iLocal_82);
	}
	if (unk_0xA6DB27D19ECBB7DA(iLocal_83))
	{
		unk_0x86A652570E5F25DD(&iLocal_83);
	}
	if (iLocal_59 == 1)
	{
		unk_0xA3B0C41BA5CC0BB5(iLocal_176);
		unk_0xDFE8422B3B94E688("TIMER_SCENE");
		if (!iLocal_123)
		{
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_194, cLocal_177, "REHH1_TKA", 4, 0, 0, 0);
			unk_0xD51ADCD2D8BC0FB3(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				func_81(func_8(), 1, 100, 0, 1);
				func_80(198, 0);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_84, 8000, 2052, 4);
				unk_0xE8854A4326B9E12B(&iLocal_88);
				unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
				unk_0x504D54DF3F6F2247(0, 3000, 4194369);
				unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 1000);
				unk_0x15D3A79D4E44B913(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, true, 40000f);
				unk_0xD76B57B44F1E6F8B(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 40000f, 0.5f);
				unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				unk_0x39E72BC99E6360CB(iLocal_88);
				unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
				unk_0x3841422E9C488D8C(&iLocal_88);
				unk_0x971D38760FBC02EF(iLocal_84, true);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_123 = 1;
			}
		}
		if (unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0xFE99B66D079CF6BC(0, 75, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			unk_0xFE99B66D079CF6BC(0, 79, true);
			unk_0xFE99B66D079CF6BC(0, 286, true);
			unk_0xFE99B66D079CF6BC(0, 287, true);
			unk_0xFE99B66D079CF6BC(0, 26, true);
			unk_0xFE99B66D079CF6BC(0, 273, true);
			unk_0xFE99B66D079CF6BC(0, 4, true);
			unk_0xFE99B66D079CF6BC(0, 270, true);
			unk_0xFE99B66D079CF6BC(0, 5, true);
			unk_0xFE99B66D079CF6BC(0, 1, true);
			unk_0xFE99B66D079CF6BC(0, 271, true);
			unk_0xFE99B66D079CF6BC(0, 6, true);
			unk_0xFE99B66D079CF6BC(0, 2, true);
			unk_0xFE99B66D079CF6BC(0, 272, true);
			unk_0xFE99B66D079CF6BC(0, 3, true);
		}
		if (unk_0xC9D9444186B5A374() > 3000 && unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
		}
		else if (unk_0xC9D9444186B5A374() > 7000)
		{
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			unk_0xF46C581C61718916(false);
			if (unk_0xC9D9444186B5A374() > 8500 && !iLocal_125)
			{
				if ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && unk_0x8D4D46230B2C353A() == 4) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xA4FF579AC0E3AAAE() == 4))
				{
					unk_0x2206BF9A37B7F724("CamPushInNeutral", 0, false);
					unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_125 = 1;
				}
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_84) || unk_0xC9D9444186B5A374() > 15000)
		{
			if (unk_0x20B60995556D004F(iLocal_84, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, false, true, 0) || unk_0xC9D9444186B5A374() > 15000)
			{
				unk_0x9614299DCB53E54B(&iLocal_84);
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
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
		{
			if (!unk_0x47E4E977581C5B55(iLocal_84))
			{
				unk_0xE8854A4326B9E12B(&iLocal_88);
				unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
				unk_0xE73A266DB0CA9042(0, 4500);
				unk_0x504D54DF3F6F2247(0, 0, 4194369);
				unk_0x15D3A79D4E44B913(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, false, 40000f);
				unk_0x15D3A79D4E44B913(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, false, 40000f);
				unk_0x15D3A79D4E44B913(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, false, 40000f);
				unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				unk_0x39E72BC99E6360CB(iLocal_88);
				unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
				unk_0x3841422E9C488D8C(&iLocal_88);
				unk_0x971D38760FBC02EF(iLocal_84, true);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_84, 5000, 2052, 2);
				unk_0xED74007FFB146BC2(iLocal_84);
				unk_0x4EDE34FBADD967A6(1000);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
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
				if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
				{
					unk_0x9D64D7405520E3D3(iLocal_85, true);
					if (!unk_0xA6DB27D19ECBB7DA(iLocal_120))
					{
						unk_0x86A652570E5F25DD(&iLocal_120);
					}
					if (!unk_0xA6DB27D19ECBB7DA(iLocal_121))
					{
						iLocal_121 = func_63(iLocal_85, 1, 145);
					}
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, 17f, 1f, 2f, 0);
					unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_85, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
					unk_0x971D38760FBC02EF(iLocal_85, true);
					unk_0x9F8AA94D6D97DBF4(iLocal_85, false);
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					unk_0xF372BC22FCB88606("rghBoyfriend", &iLocal_193);
					unk_0xC80A74AC829DDD92(iLocal_85, iLocal_193);
					unk_0xBF25EB89375A37AD(4, joaat("COP"), iLocal_193);
					unk_0xBF25EB89375A37AD(1, -183807561, iLocal_193);
					unk_0xBF25EB89375A37AD(1, iLocal_193, -183807561);
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
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
		{
			unk_0xE8854A4326B9E12B(&iLocal_88);
			unk_0x504D54DF3F6F2247(0, 0, 4194369);
			unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 3000, 2052, 2);
			unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 3000);
			unk_0x15D3A79D4E44B913(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, false, 40000f);
			unk_0x15D3A79D4E44B913(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, false, 40000f);
			unk_0x15D3A79D4E44B913(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, false, 40000f);
			unk_0x15D3A79D4E44B913(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, false, 40000f);
			unk_0x15D3A79D4E44B913(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, false, 40000f);
			unk_0x15D3A79D4E44B913(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, false, 40000f);
			unk_0x142A02425FF02BD9(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
			unk_0xE73A266DB0CA9042(0, -1);
			unk_0x39E72BC99E6360CB(iLocal_88);
			unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
			unk_0x3841422E9C488D8C(&iLocal_88);
			unk_0x971D38760FBC02EF(iLocal_84, true);
			unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_84, 5000, 2052, 2);
			unk_0xED74007FFB146BC2(iLocal_84);
		}
		unk_0x4EDE34FBADD967A6(2000);
		unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
		unk_0x4EDE34FBADD967A6(3000);
		func_18();
	}
}

int func_63(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_64(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_65(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(iVar0, func_65(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_65(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
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
	bVar0 = Global_97173.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	Global_97173.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_77(iParam0, 0);
			func_74(func_76(iParam0), func_78(iParam2), 1);
			iVar1 = unk_0xD53343AA4FB7DD28(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x933D6A9EEC1BACD0(&(Global_2097152[func_73() /*8053*/].f_5756.f_650), iParam0);
					func_70(15, 0);
					break;
			}
			func_69(iVar1);
			func_68(iParam0, iVar1);
			Global_96167.f_15[iParam0] = unk_0x9CD27B0045628463();
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
			Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_68(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_96167.f_4[iParam0] = (unk_0x9CD27B0045628463() + iParam1);
	}
	else
	{
		Global_96167.f_4[iParam0] = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(1200000, 2100000));
	}
}

void func_69(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_96167.f_3 = (unk_0x9CD27B0045628463() + iParam0);
	}
	else
	{
		Global_96167.f_3 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(21600000, 25200000));
	}
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_72(iParam0, iParam1))
	{
		iVar0 = func_71();
		Global_2434883[iVar0] = iParam0;
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
		if (Global_2434883[iVar1] == 0)
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
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
			Global_97173.f_29699[iParam0 /*29*/].f_12[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_12[2] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[0] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] == 1 && Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_97173.f_29699[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_97173.f_29699[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68067)
			{
				if (iParam1 != 4)
				{
					if (Global_14393 != iParam1)
					{
						Global_2922[iParam1 /*4*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2939[iParam1] = 1;
						Global_2944[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14393)
					{
					}
					else
					{
						Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
						Global_2873[1 /*6*/].f_5 = iParam1;
						func_75();
					}
				}
				else
				{
					Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
					Global_2873[1 /*6*/].f_5 = iParam1;
					func_75();
				}
			}
			else
			{
				Global_2873[1 /*6*/] = { Global_97173.f_29699[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0x7B5280EBA9840C72(&(Global_97173.f_29699[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		unk_0x202709F4C58A0424("");
		StringCopy(&cVar16, unk_0x7B5280EBA9840C72(&(Global_2873[1 /*6*/])), 64);
		sVar32 = unk_0x7B5280EBA9840C72("CELL_253");
		unk_0x1CCD9A37359072CF(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x202709F4C58A0424("CELL_255");
		unk_0xC63CD5D2920ACBE7(&(Global_2873[1 /*6*/]));
		unk_0x1CCD9A37359072CF(&cVar0, &cVar0, false, 3, "", 0);
	}
	unk_0xE80492A9AC099A93(&Global_2263, 0);
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
	Global_97173.f_243[func_79() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
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
	Global_97173.f_6839[iParam0] = 1;
	Global_97173.f_6839.f_236[iParam0] = (unk_0x9CD27B0045628463() + iParam1);
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_82(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x767FBC2AC802EF3D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB3271D7AB655B441(iVar1, iVar0, true);
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
					switch (unk_0x8A1C8B1738FFE87E())
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
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
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
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_84(iParam0);
	if (Global_34909 == 15)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_85(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0) || unk_0xA921AA820C25702F(Global_2097152[func_73() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xE80492A9AC099A93(&(Global_2097152[func_73() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_86(iParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
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
	if (!unk_0x10FAB35428CCC9D7())
	{
		return unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0xA921AA820C25702F(Global_2097152[func_73() /*8053*/].f_5756.f_10, iParam0);
}

int func_89(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), iVar1, true);
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
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_101(&Global_2543696))
	{
		if (func_99(&Global_2543696, iParam0))
		{
			return 0;
		}
		if (func_92(&Global_2543696, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
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
	
	if (unk_0x867365E111A3B6EB(iParam1))
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
	
	if (unk_0x867365E111A3B6EB(iParam1))
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

void func_96(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_97() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_97()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
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
	
	unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, iVar0, true);
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_50315[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_104()
{
	int iVar0;
	
	if (unk_0x054354A99211EB96())
	{
		unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

void func_105()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (!func_112())
			{
				if (unk_0x5891CAC5D4ACFF74(iLocal_84))
				{
					unk_0xED74007FFB146BC2(iLocal_84);
				}
				if (unk_0x77F1BEB8863288D5(iLocal_84, 1227113341) != 1 && unk_0x77F1BEB8863288D5(iLocal_84, 1227113341) != 0)
				{
					unk_0x6A071245EB0D1882(iLocal_84, unk_0xD80958FC74E988A6(), -1, 6f, 2f, 2f, 0);
				}
				if (unk_0x997ABD671D25CA0B(iLocal_84, false))
				{
					unk_0x504D54DF3F6F2247(iLocal_84, 0, 0);
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
				if (unk_0x77F1BEB8863288D5(iLocal_84, 1227113341) == 1 && unk_0x77F1BEB8863288D5(iLocal_84, 1227113341) == 0)
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_84);
				}
			}
		}
		else if (!unk_0x5891CAC5D4ACFF74(iLocal_84))
		{
			unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
			unk_0x3DBFC55D5C9BB447(iLocal_84, true);
			unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 0);
		}
	}
}

int func_106()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
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
	else if ((!iLocal_126 && unk_0x16754C556D2EDE3D()) && !func_109())
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
		if (unk_0x0C515FAB3FF9EA92(sParam0, &uVar0))
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
		if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if ((((!unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()) && !unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6())) && !unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6())) && !unk_0x6F972C1AB75A1ED0(unk_0xD80958FC74E988A6())) && !unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("rhino")))
			{
				if (unk_0xA7C4F2C6E744A550(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x4C241E39B23DF959(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()), false))
		{
			if (((!unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()))) && !unk_0xA0948AB42D7BA0DE(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0xAB935175B22E822B(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_113()
{
	if (unk_0x530944F6F4B8A214(unk_0xD80958FC74E988A6()))
	{
		if (!iLocal_149)
		{
			iLocal_151 = unk_0x9CD27B0045628463();
			iLocal_149 = 1;
		}
		else
		{
			iLocal_153 = unk_0x9CD27B0045628463();
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
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
				{
					if (!unk_0x2AFE52F782F25775(iLocal_84))
					{
						unk_0x176CECF6F920D707(iLocal_84);
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
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
		{
			unk_0x9D64D7405520E3D3(iLocal_84, true);
			if (unk_0x5891CAC5D4ACFF74(iLocal_84))
			{
				if (unk_0x997ABD671D25CA0B(iLocal_84, false))
				{
					if (unk_0x20B60995556D004F(iLocal_84, Local_92, 200f, 200f, 200f, false, true, 0))
					{
						unk_0x15D3A79D4E44B913(iLocal_84, Local_92, 1f, -1, 0.25f, false, 40000f);
					}
					else
					{
						unk_0xBB9CE077274F6A1B(iLocal_84, 40000f, 0);
					}
					if (iLocal_59 == 1)
					{
						unk_0x22B0D0E37CCB840D(iLocal_84, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
					}
					unk_0x971D38760FBC02EF(iLocal_84, true);
					unk_0xED74007FFB146BC2(iLocal_84);
					func_53();
				}
			}
		}
	}
}

void func_114()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if (unk_0x01FEE67DB37F59B2(iLocal_84))
		{
			if (!iLocal_146)
			{
				iLocal_147 = unk_0x9CD27B0045628463();
				iLocal_146 = 1;
			}
			else
			{
				iLocal_148 = unk_0x9CD27B0045628463();
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
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
		{
			unk_0x9D64D7405520E3D3(iLocal_84, true);
			if (unk_0x20B60995556D004F(iLocal_84, Local_92, 200f, 200f, 200f, false, true, 0))
			{
				unk_0x15D3A79D4E44B913(iLocal_84, Local_92, 1f, -1, 0.25f, false, 40000f);
			}
			else
			{
				unk_0xBB9CE077274F6A1B(iLocal_84, 40000f, 0);
			}
			if (iLocal_59 == 1)
			{
				unk_0x22B0D0E37CCB840D(iLocal_84, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
			}
			unk_0x971D38760FBC02EF(iLocal_84, true);
			if (unk_0x5891CAC5D4ACFF74(iLocal_84))
			{
				unk_0xED74007FFB146BC2(iLocal_84);
			}
			func_53();
		}
	}
}

void func_115()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && !unk_0xA3EE4A07279BB9DB(iLocal_84, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
			{
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_120))
				{
					iLocal_120 = func_63(iLocal_84, 0, 145);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_82))
				{
					unk_0x86A652570E5F25DD(&iLocal_82);
				}
			}
			else
			{
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_82))
				{
					iLocal_82 = func_116(Local_92, 1);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_120))
				{
					unk_0x86A652570E5F25DD(&iLocal_120);
				}
			}
		}
		else if (!unk_0xA6DB27D19ECBB7DA(iLocal_120))
		{
			iLocal_120 = func_63(iLocal_84, 0, 145);
		}
		if (((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0x997ABD671D25CA0B(iLocal_84, false)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_92, 50f, 50f, 50f, false, true, 0)) || unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0xA6DB27D19ECBB7DA(iLocal_82))
			{
				iLocal_82 = func_116(Local_92, 1);
			}
		}
		else if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_92, 50f, 50f, 50f, false, true, 0))
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_82))
			{
				unk_0x86A652570E5F25DD(&iLocal_82);
			}
		}
	}
}

int func_116(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(iVar0, func_65(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(iVar0, bParam3);
	return iVar0;
}

void func_117()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x997ABD671D25CA0B(iLocal_84, true)) || unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_84, 5f, 5f, 5f, false, true, 0))
		{
			if (func_119())
			{
				func_50(0);
				iLocal_124 = 0;
			}
		}
		else if (!unk_0x2AFE52F782F25775(iLocal_84))
		{
			if (func_54() && !iLocal_124)
			{
				func_50(1);
				iLocal_124 = 1;
			}
		}
		if (unk_0x2AFE52F782F25775(iLocal_84))
		{
			unk_0xBAF20C5432058024(iLocal_84, false);
		}
		if (func_118("REHH3_CHT3_7"))
		{
			unk_0xBD2A8EC3AF4DE7DB(iLocal_84, 1, 1);
		}
		if (func_118("REHH3_CHT6_5"))
		{
			unk_0xBD2A8EC3AF4DE7DB(iLocal_84, 0, 1);
		}
		if (func_118("REHH3_CHT8_3"))
		{
			unk_0xBD2A8EC3AF4DE7DB(iLocal_84, 1, 1);
		}
		if ((func_110("REHH3_CHT8M") || func_110("REHH3_CHT8F")) || func_110("REHH3_CHT8T"))
		{
			unk_0xBD2A8EC3AF4DE7DB(iLocal_84, 0, 1);
		}
	}
}

int func_118(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0x0C515FAB3FF9EA92(sParam0, &uVar0))
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
	if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if (iLocal_59 == 1)
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0xB6997A7EB3F5C8C0(), false) && unk_0xA3EE4A07279BB9DB(iLocal_84, unk_0xB6997A7EB3F5C8C0(), false))
				{
					if (unk_0x8BAD02F0368D9E14(unk_0xB6997A7EB3F5C8C0()))
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
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
			{
				if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0xB6997A7EB3F5C8C0(), true) && unk_0xA3EE4A07279BB9DB(iLocal_84, unk_0xB6997A7EB3F5C8C0(), false))
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
							if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
							{
								if (!unk_0x2AFE52F782F25775(iLocal_84))
								{
									unk_0x176CECF6F920D707(iLocal_84);
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
		else if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0xB6997A7EB3F5C8C0(), false) && unk_0xA3EE4A07279BB9DB(iLocal_84, unk_0xB6997A7EB3F5C8C0(), false))
			{
				iLocal_143 = 0;
			}
		}
		if (!iLocal_144)
		{
			if (unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()))
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
		else if (!unk_0x4AE4FF911DFB61DA(unk_0xD80958FC74E988A6()))
		{
			iLocal_144 = 0;
		}
		if (!iLocal_145)
		{
			if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
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
						if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
						{
							if (!unk_0x2AFE52F782F25775(iLocal_84))
							{
								unk_0x176CECF6F920D707(iLocal_84);
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
		else if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (!unk_0x2AFE52F782F25775(iLocal_84))
				{
					unk_0x176CECF6F920D707(iLocal_84);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (!unk_0x2AFE52F782F25775(iLocal_84))
				{
					unk_0x176CECF6F920D707(iLocal_84);
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
			if (unk_0xF1B760881820C952(-1014.154f, 4881.411f, 245.0001f, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), false), true) < 400f)
			{
				if (!Global_24683)
				{
					unk_0x706D57B0F50DA710("AC_EN_ROUTE_CULT");
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
				unk_0x706D57B0F50DA710("AC_LEFT_AREA");
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
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Param0) > (fLocal_46 + 200f) || unk_0xF1B760881820C952(-1014.154f, 4881.411f, 245.0001f, unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), false), true) < 400f)
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
					iLocal_109 = unk_0x9CD27B0045628463();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = unk_0x9CD27B0045628463();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x9CD27B0045628463() + 2000;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = unk_0x9CD27B0045628463();
				}
				iLocal_107++;
				break;
			
			case 1:
				if (iLocal_109 < unk_0x9CD27B0045628463())
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
				if (iLocal_109 < unk_0x9CD27B0045628463())
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
					iLocal_109 = unk_0x9CD27B0045628463();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = unk_0x9CD27B0045628463();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x9CD27B0045628463() + 500;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = unk_0x9CD27B0045628463();
				}
				iLocal_107++;
				break;
			
			case 4:
				if (iLocal_109 < unk_0x9CD27B0045628463())
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
					iLocal_109 = unk_0x9CD27B0045628463() + 700;
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
					iLocal_109 = unk_0x9CD27B0045628463() + 300;
				}
				iLocal_107++;
				break;
			
			case 21:
				if (iLocal_109 < unk_0x9CD27B0045628463())
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
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
				{
					unk_0xEA47FE3719165B94(iLocal_84, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0f, false, false, false);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_92, 3f, 3f, 2f, true, true, 0) && unk_0x20B60995556D004F(iLocal_84, Local_92, Global_18, false, true, 0))
				{
					if (func_127(1, 0, 1))
					{
						func_126();
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), (10.5f + 2f), 3, false);
						}
						unk_0x176CECF6F920D707(iLocal_84);
						iLocal_58 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_111)
	{
		if (unk_0x84A2DD9AC37C35C1(iLocal_85))
		{
			iLocal_58 = 7;
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
		{
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, false, true, 0) || (unk_0x20B60995556D004F(iLocal_84, 824.8886f, 1275.671f, 359.4312f, Global_18, true, true, 0) && unk_0x751B70C3D034E187(iLocal_84, unk_0xD80958FC74E988A6(), 8f, 8f, 8f, false, true, 0)))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_194, cLocal_177, "REHH3_CHT10", 4, 0, 0, 0);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84) && !unk_0x84A2DD9AC37C35C1(iLocal_85))
				{
					if (unk_0x997ABD671D25CA0B(iLocal_84, false))
					{
						unk_0x176CECF6F920D707(iLocal_84);
						unk_0xE8854A4326B9E12B(&iLocal_88);
						unk_0x0F804F1DB19B9689(0);
						unk_0x69F4BE8C8CC4796C(0, iLocal_85, -1, 2052, 4);
						unk_0x504D54DF3F6F2247(0, 500, 0);
						unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, 5f, 1f, 2f, 0);
						unk_0xEA47FE3719165B94(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0f, false, false, false);
						unk_0x5AD23D40115353AC(0, iLocal_85, -1);
						unk_0x39E72BC99E6360CB(iLocal_88);
						unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
						unk_0x3841422E9C488D8C(&iLocal_88);
					}
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
					{
						unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), (10.5f + 2f), 2, false);
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
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0x95EED5A694951F9F(iVar0) < 0.95f || unk_0x95EED5A694951F9F(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_128()
{
	if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0xA808AA1D79230FC2(iLocal_84, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_92, 50f, 50f, 50f, false, true, 0) && !unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if (!unk_0x997ABD671D25CA0B(iLocal_84, false))
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
		if (unk_0x7239B21A38F536BA(iLocal_85))
		{
			if ((((unk_0x84A2DD9AC37C35C1(iLocal_85) || !unk_0x751B70C3D034E187(iLocal_85, unk_0xD80958FC74E988A6(), 150f, 150f, 150f, false, true, 0)) || unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_92) < 250f) || unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_96) < 250f) || iLocal_115)
			{
				if (unk_0xA6DB27D19ECBB7DA(iLocal_121))
				{
					unk_0x86A652570E5F25DD(&iLocal_121);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_122))
				{
					unk_0x86A652570E5F25DD(&iLocal_122);
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
				{
					unk_0xBC9AE166038A5CEC(iLocal_85, 6, 0, 0);
					unk_0x22B0D0E37CCB840D(iLocal_85, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
					unk_0x2595DD4236549CE3(&iLocal_85);
				}
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_194, cLocal_177, "REHH5_CHT2", 4, 0, 0, 0);
				unk_0x2595DD4236549CE3(&iLocal_85);
				if (unk_0x7239B21A38F536BA(iLocal_170))
				{
					unk_0x629BFA74418D6239(&iLocal_170);
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
				if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
				{
					func_137(&iLocal_85, &iLocal_121, &iLocal_170, &iLocal_122);
					func_136(&iLocal_85, &iLocal_121, &iLocal_170, &iLocal_122);
					func_130(iLocal_170, unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), &uLocal_184, &uLocal_187, &Local_189, &fLocal_188, &uLocal_192, 0f, 0f, 0f, 1500, 0f);
					if (unk_0x751B70C3D034E187(iLocal_85, unk_0xD80958FC74E988A6(), 30f, 30f, 30f, false, true, 0))
					{
						if (iLocal_108 < unk_0x9CD27B0045628463())
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
								iLocal_108 = unk_0x9CD27B0045628463() + 8000;
							}
						}
						if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
						{
							if (!func_110("REHH5_SHO"))
							{
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								func_1(&uLocal_194, cLocal_177, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && !unk_0x84A2DD9AC37C35C1(iLocal_85))
						{
							if ((unk_0x01FEE67DB37F59B2(iLocal_85) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 4)) && unk_0x2E397FD2ECD37C87(unk_0x4F8644AF03D0E0D6()))
							{
								iLocal_115 = 1;
							}
						}
					}
					if (!iLocal_114 && !unk_0x84A2DD9AC37C35C1(iLocal_85))
					{
						if (unk_0x530944F6F4B8A214(unk_0xD80958FC74E988A6()) && unk_0x751B70C3D034E187(iLocal_85, unk_0xD80958FC74E988A6(), 10f, 10f, 10f, false, true, 0))
						{
							unk_0xF166E48407BAC484(iLocal_85, unk_0xD80958FC74E988A6(), 0, 16);
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
	
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x4C241E39B23DF959(iParam0, false))
	{
		if (((((((unk_0x7239B21A38F536BA(iParam1) && iParam0 != iParam1) && !unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(iParam1))) && !unk_0xA0948AB42D7BA0DE(unk_0x9F47B058362C84B5(iParam1))) && !unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(iParam1))) && !unk_0xAB935175B22E822B(unk_0x9F47B058362C84B5(iParam1))) && unk_0xB104CD1BABF302E2(iParam1)) && func_135(iParam0))
		{
			if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x163E252DE035A133(*uParam2, *uParam3, Param7) };
				*uParam3 = func_134(unk_0x3FEF770D40960D5A(iParam0, true), unk_0x3FEF770D40960D5A(iParam1, true));
				func_133(iParam1, uParam4, uParam5);
			}
			if (!unk_0xE31C2C72B8692B64(iParam0))
			{
				*uParam6 = unk_0x9CD27B0045628463();
			}
			else if ((unk_0x9CD27B0045628463() - *uParam6) > iParam10)
			{
				if (func_132(iParam0, iParam1, 1) > fParam11 && unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_131(*uParam2))
					{
						if (!unk_0xE33D59DA70B58FDF(*uParam2, 3f))
						{
							unk_0xBE31FD6CE464AC59(*uParam2, 1.5f, 0);
							unk_0x01C7B9B38428AEB6(*uParam2, 3f, 0, 0, 0, 0, 0);
							unk_0x06843DA7060A026B(iParam0, *uParam2, true, false, false, true);
							unk_0x8E2530AA8ADA980E(iParam0, *uParam3);
							unk_0x49733E92263139D1(iParam0);
							unk_0xAB54A438726D25D5(iParam0, 10f);
							unk_0x2497C4717C8B881E(iParam0, 1, 1);
							*uParam6 = unk_0x9CD27B0045628463();
						}
						else
						{
							Var0 = { unk_0x163E252DE035A133(Local_189, fLocal_188, Param7) };
							if (!func_131(Var0))
							{
								if (!unk_0xE33D59DA70B58FDF(Var0, 2f))
								{
									unk_0xBE31FD6CE464AC59(Var0, 1.5f, 0);
									unk_0x01C7B9B38428AEB6(Var0, 3f, 0, 0, 0, 0, 0);
									unk_0x06843DA7060A026B(iParam0, Var0, true, false, false, true);
									unk_0x8E2530AA8ADA980E(iParam0, fLocal_188);
									unk_0x49733E92263139D1(iParam0);
									unk_0xAB54A438726D25D5(iParam0, 10f);
									unk_0x2497C4717C8B881E(iParam0, 1, 1);
									*uParam6 = unk_0x9CD27B0045628463();
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
			*uParam6 = unk_0x9CD27B0045628463();
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

float func_132(int iParam0, int iParam1, bool bParam2)
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

void func_133(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			*uParam1 = { unk_0x3FEF770D40960D5A(iParam0, true) };
			*uParam2 = unk_0xE83D4F9BA2A38914(iParam0);
		}
	}
}

float func_134(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x2FFB6B224F4B2926((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			if (!unk_0x22AC59A870E6A669(iParam0, -1))
			{
				iVar0 = unk_0xBB40DD2270B65366(iParam0, -1);
				if (unk_0x7239B21A38F536BA(iVar0))
				{
					if (!unk_0x5F9532F3B5CC2551(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_136(int* iParam0, int* iParam1, int* iParam2, int* iParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0x7239B21A38F536BA(*iParam2))
	{
		if (unk_0x4C241E39B23DF959(*iParam2, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(*iParam0))
			{
				if (unk_0xA3EE4A07279BB9DB(*iParam0, *iParam2, false))
				{
					if (unk_0xA6DB27D19ECBB7DA(*iParam1))
					{
						unk_0x86A652570E5F25DD(iParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xA6DB27D19ECBB7DA(*iParam1))
				{
					*iParam1 = func_63(*iParam0, 1, 145);
				}
			}
			if (!unk_0xA6DB27D19ECBB7DA(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_116(unk_0x3FEF770D40960D5A(*iParam2, true), 0);
					unk_0x03D7FB09E75D6B7E(*iParam3, 1);
					unk_0xAE9FC9EF6A9FAC79(*iParam3, 9);
					unk_0xEAA0FFE120D92784(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0x586AFE3FF72D996E(*iParam3) };
				Var4 = { unk_0x3FEF770D40960D5A(*iParam2, true) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0xAE2AF67E9D9AF65D(*iParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0x86A652570E5F25DD(iParam3);
				}
			}
		}
		else
		{
			if (unk_0xA6DB27D19ECBB7DA(*iParam3))
			{
				unk_0x86A652570E5F25DD(iParam3);
			}
			if (!unk_0x84A2DD9AC37C35C1(*iParam0))
			{
				if (!unk_0xA6DB27D19ECBB7DA(*iParam1))
				{
					*iParam1 = func_63(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_137(int* iParam0, int* iParam1, int* iParam2, int* iParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (unk_0x84A2DD9AC37C35C1(*iParam0))
		{
			if (unk_0xA6DB27D19ECBB7DA(*iParam1))
			{
				unk_0x86A652570E5F25DD(iParam1);
			}
			unk_0x2595DD4236549CE3(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0x997ABD671D25CA0B(*iParam0, false))
			{
			}
			else if (unk_0x7239B21A38F536BA(*iParam2))
			{
				if (unk_0x4C241E39B23DF959(*iParam2, false))
				{
					if (unk_0xA3EE4A07279BB9DB(*iParam0, *iParam2, false))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x7239B21A38F536BA(*iParam2))
	{
		if (unk_0x4C241E39B23DF959(*iParam2, false))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x8386BFB614D06749(*iParam2);
				unk_0xC53EB42A499A7E90(*iParam2);
				unk_0x18EB48CFC41F2EA0(*iParam2, 0f);
				unk_0x629BFA74418D6239(iParam2);
				if (unk_0xA6DB27D19ECBB7DA(*iParam3))
				{
					unk_0x86A652570E5F25DD(iParam3);
				}
			}
		}
		else
		{
			unk_0x8386BFB614D06749(*iParam2);
			unk_0xC53EB42A499A7E90(*iParam2);
			unk_0x18EB48CFC41F2EA0(*iParam2, 0f);
			unk_0x629BFA74418D6239(iParam2);
			if (unk_0xA6DB27D19ECBB7DA(*iParam3))
			{
				unk_0x86A652570E5F25DD(iParam3);
			}
		}
	}
}

void func_138()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
	{
		if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, false, true, 0) || unk_0x51210CED3DA1C78A(iLocal_85, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, false, true, 0))
		{
			if (unk_0xBFA48E2FF417213F(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				unk_0xF82D8F1926A02C3D(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, false, 0f, false);
			}
			if (unk_0xBFA48E2FF417213F(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				unk_0xF82D8F1926A02C3D(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, false, 0f, false);
			}
		}
		else
		{
			if (unk_0xBFA48E2FF417213F(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				unk_0xF82D8F1926A02C3D(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, true, 0f, false);
			}
			if (unk_0xBFA48E2FF417213F(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				unk_0xF82D8F1926A02C3D(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, true, 0f, false);
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
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_103, 200f, 200f, 200f, false, true, 0))
			{
				unk_0x963D27A58DF860AC(iLocal_100);
				unk_0xD2A71E1A77418A49("move_m@brave");
				if (unk_0x98A4EB5D89A0C952(iLocal_100) && unk_0x318234F4F3738AF3("move_m@brave"))
				{
					iLocal_85 = unk_0xD49F9B0955C367DE(26, iLocal_100, Local_103, fLocal_106, true, true);
					unk_0x262B14F48D29DE80(iLocal_85, 0, 2, 1, 0);
					unk_0x262B14F48D29DE80(iLocal_85, 3, 0, 2, 0);
					unk_0x9F8AA94D6D97DBF4(iLocal_85, true);
					unk_0x1913FE4CBF41C463(iLocal_85, 42, true);
					unk_0x5BA7919BED300023(iLocal_85, true);
					unk_0xAF8A94EDE7712BEF(iLocal_85, "move_m@brave", 0.25f);
					unk_0x1913FE4CBF41C463(iLocal_85, 137, true);
					func_143(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
					unk_0xEA47FE3719165B94(iLocal_85, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0f, false, false, false);
					unk_0x69F4BE8C8CC4796C(iLocal_85, unk_0xD80958FC74E988A6(), -1, 2052, 4);
					unk_0xE532F5D78798DAAB(iLocal_100);
					bLocal_111 = true;
				}
			}
		}
		else if (iLocal_59 == 5)
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_78, true) > 320f && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					if (unk_0xA3EE4A07279BB9DB(iLocal_84, unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
					{
						if (unk_0xE50E52416CCF948B(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0xD53343AA4FB7DD28(2, 5), &Local_65, 1, 1077936128, 0))
						{
							if (!unk_0xE33D59DA70B58FDF(Local_65, 7f) && unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_65) < 110f)
							{
								unk_0x963D27A58DF860AC(iLocal_100);
								if (unk_0x98A4EB5D89A0C952(iLocal_100))
								{
									func_55();
									unk_0x4EDE34FBADD967A6(0);
									if (func_142(&uLocal_194, cLocal_177, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !unk_0x84A2DD9AC37C35C1(iLocal_84))
									{
										iLocal_170 = unk_0xAF35D0D2583051B0(iLocal_101, Local_65, func_140(Local_65, func_141(unk_0x4F8644AF03D0E0D6()), 1), 1, 1);
										unk_0x4F1D4BE3A7F24601(iLocal_170, 134, 134);
										unk_0x79D3B596FE44EE8B(iLocal_170, 0f);
										iLocal_85 = unk_0x7DD959874C1FD534(iLocal_170, 26, iLocal_100, -1, true, true);
										unk_0x262B14F48D29DE80(iLocal_85, 0, 1, 1, 0);
										unk_0x262B14F48D29DE80(iLocal_85, 2, 1, 0, 0);
										unk_0x1913FE4CBF41C463(iLocal_85, 42, true);
										unk_0x9D64D7405520E3D3(iLocal_85, true);
										func_143(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
										unk_0x49733E92263139D1(iLocal_170);
										unk_0x9454528DF15D657A(iLocal_85, iLocal_170, iLocal_84, 6, 60f, 786468, -1f, -1f, true);
										unk_0xF166E48407BAC484(iLocal_85, unk_0xD80958FC74E988A6(), 0, 16);
										unk_0x971D38760FBC02EF(iLocal_85, true);
										unk_0xE532F5D78798DAAB(iLocal_100);
										unk_0xE532F5D78798DAAB(iLocal_101);
										unk_0xAB54A438726D25D5(iLocal_170, (unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) + 15f));
										if (unk_0xA6DB27D19ECBB7DA(iLocal_82))
										{
											unk_0x86A652570E5F25DD(&iLocal_82);
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
		fVar0 = unk_0x8927CBF9D22261A4(fVar1, fVar2);
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
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
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
			func_146((((iLocal_173 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_172 * 1000 - func_150(func_151()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0);
		}
		else
		{
			func_146(((iLocal_173 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_172 * 1000 - func_150(func_151()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0);
		}
	}
	else if ((iLocal_173 >= 24 && iLocal_154 < 150000) || (iLocal_173 >= 24 && iLocal_154 < 150000))
	{
		func_146((((iLocal_173 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_172 * 1000 - func_150(func_151()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0);
	}
	else
	{
		func_146(((iLocal_173 * 1000 * 60 - func_149(func_151()) * 1000 * 60) + (iLocal_172 * 1000 - func_150(func_151()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0);
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
					iLocal_176 = unk_0x430386FE9BF80B45();
					unk_0x67C540AA08E4A6F5(iLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					unk_0xAD6B3148A78AE9B6(iLocal_176, "countdown_fadein", 35f);
					unk_0x013A80FC08F6E4F2("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == func_149(func_151()) && iLocal_172 == func_150(func_151()) + 5) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_149(func_151()) + 24) && iLocal_172 == func_150(func_151()) + 5))
		{
			if (!iLocal_165)
			{
				unk_0xAD6B3148A78AE9B6(iLocal_176, "countdown_fast", 1f);
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
					iLocal_176 = unk_0x430386FE9BF80B45();
					unk_0x67C540AA08E4A6F5(iLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					unk_0xAD6B3148A78AE9B6(iLocal_176, "countdown_fadein", 35f);
					unk_0x013A80FC08F6E4F2("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == func_149(func_151()) + 1 && iLocal_172 == (func_150(func_151()) - 55)) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_149(func_151()) + 25) && iLocal_172 == (func_150(func_151()) - 55)))
		{
			if (!iLocal_165)
			{
				unk_0xAD6B3148A78AE9B6(iLocal_176, "countdown_fast", 1f);
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
		unk_0xA3B0C41BA5CC0BB5(iLocal_176);
		unk_0xDFE8422B3B94E688("TIMER_SCENE");
		if (iLocal_59 == 1)
		{
			func_1(&uLocal_194, cLocal_177, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
		{
			if (unk_0x997ABD671D25CA0B(iLocal_84, false))
			{
				unk_0x260BE8F09E326A20(unk_0x9A9112A0FE9A4713(iLocal_84, false), (10.5f + 2f), 2, false);
				unk_0x504D54DF3F6F2247(iLocal_84, 1, 0);
				unk_0xED74007FFB146BC2(iLocal_84);
				if (unk_0xA6DB27D19ECBB7DA(iLocal_82))
				{
					unk_0x86A652570E5F25DD(&iLocal_82);
				}
			}
		}
		iLocal_58 = 9;
	}
}

void func_146(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
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
		Global_1328798.f_1 = 1;
		func_147(7, iVar0);
		Global_1328798.f_1664[iVar0] = iParam0;
		StringCopy(&(Global_1328798.f_1664.f_5[iVar0 /*16*/]), sParam1, 64);
		Global_1328798.f_1664.f_70[iVar0] = iParam2;
		Global_1328798.f_1664.f_90[iVar0] = iParam3;
		Global_1328798.f_1664.f_75[iVar0] = iParam4;
		Global_1328798.f_1664.f_80[iVar0] = iParam5;
		Global_1328798.f_1664.f_105[iVar0] = iParam6;
		Global_1328798.f_1664.f_110[iVar0] = iParam7;
		Global_1328798.f_1664.f_85[iVar0] = iParam8;
		Global_1328798.f_1664.f_129[iVar0] = iParam9;
		Global_1328798.f_1664.f_134[iVar0] = iParam10;
		Global_1328798.f_1664.f_148[iVar0] = iParam11;
		Global_1328798.f_1664.f_100[iVar0] = iParam12;
	}
}

void func_147(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1328798.f_1912[iParam0]), iParam1);
}

bool func_148(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_1328798.f_1912[iParam0], iParam1);
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
	
	func_161(&uVar0, unk_0x494E97C2EF27C470());
	func_160(&uVar0, unk_0x13D2B8ADD79640F2());
	func_159(&uVar0, unk_0x25223CA6B4D20B7F());
	func_154(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_153(&uVar0, unk_0xBBC72712E80257A1());
	func_152(&uVar0, unk_0x961777E64BDAF717());
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_157(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
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
	if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if (unk_0x4C241E39B23DF959(unk_0xB6997A7EB3F5C8C0(), false))
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0xB6997A7EB3F5C8C0(), false) && unk_0xA3EE4A07279BB9DB(iLocal_84, unk_0xB6997A7EB3F5C8C0(), false))
			{
				if (unk_0xA6DB27D19ECBB7DA(iLocal_120))
				{
					unk_0x86A652570E5F25DD(&iLocal_120);
				}
				if (!unk_0x5891CAC5D4ACFF74(iLocal_84))
				{
					unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
					unk_0x3DBFC55D5C9BB447(iLocal_84, true);
					unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 0);
				}
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_82))
				{
					iLocal_82 = func_116(Local_92, 1);
				}
				if (((func_8() == 2 && !func_51()) && iLocal_59 != 1) && iLocal_59 != 4)
				{
					if (!unk_0xA6DB27D19ECBB7DA(iLocal_83))
					{
						iLocal_83 = func_116(Local_96, 0);
						unk_0xDF735600A4696DAF(iLocal_83, 269);
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
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

void func_165()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (iLocal_109 < unk_0x9CD27B0045628463())
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0);
					iLocal_109 = (unk_0x9CD27B0045628463() + unk_0xD53343AA4FB7DD28(4500, 6500));
				}
				if (unk_0xD71649DB0A545AA3(iLocal_84, unk_0xD80958FC74E988A6(), 90f))
				{
					if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 24f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
					{
						fLocal_183 = func_132(iLocal_84, unk_0xD80958FC74E988A6(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0xE8854A4326B9E12B(&iLocal_88);
						unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
						unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, fLocal_183, 2f, 2f, 0);
						unk_0x39E72BC99E6360CB(iLocal_88);
						unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
						unk_0x3841422E9C488D8C(&iLocal_88);
						iLocal_139++;
					}
				}
				else if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 12f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
				{
					fLocal_183 = func_132(iLocal_84, unk_0xD80958FC74E988A6(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, fLocal_183, 2f, 2f, 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0xA6DB27D19ECBB7DA(iLocal_120))
			{
				unk_0x75A16C3DA34F1245(iLocal_120, true);
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_84, 5000, 2052, 2);
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x4C241E39B23DF959(iLocal_86, false))
					{
						if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 25f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
						{
							if (unk_0xD71649DB0A545AA3(iLocal_84, unk_0xD80958FC74E988A6(), 150f))
							{
								unk_0x176CECF6F920D707(iLocal_84);
								unk_0xE8854A4326B9E12B(&iLocal_88);
								unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 4);
								if (unk_0x22AC59A870E6A669(iLocal_86, 0))
								{
									unk_0x965791A9A488A062(0, iLocal_86, -1, 0, 2f);
								}
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
								unk_0x39E72BC99E6360CB(iLocal_88);
								unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
								unk_0x3841422E9C488D8C(&iLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84) && unk_0x4C241E39B23DF959(iLocal_86, false))
				{
					if (func_132(iLocal_84, iLocal_86, 1) < 25f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
					{
						if (unk_0xD5037BA82E12416F(iLocal_86) < 2.5f)
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0x751B70C3D034E187(iLocal_84, unk_0xD80958FC74E988A6(), 3f, 3f, 3f, false, true, 0))
				{
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x4C241E39B23DF959(iLocal_86, false))
					{
						if (unk_0xD5037BA82E12416F(iLocal_86) < 2.5f && func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 25f)
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 25f)
				{
					if (func_112())
					{
						if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
						{
							if (unk_0x22AC59A870E6A669(unk_0xB6997A7EB3F5C8C0(), 0))
							{
								unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
								unk_0x3DBFC55D5C9BB447(iLocal_84, true);
								unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 0);
								unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
								unk_0xC20E50AA46D09CA8(iLocal_84, unk_0xB6997A7EB3F5C8C0(), -1, 0, 2f, 1, 0);
								func_166();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xBB40DD2270B65366(unk_0xB6997A7EB3F5C8C0(), 0);
								if (unk_0x84A2DD9AC37C35C1(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_84);
									unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
									unk_0x3DBFC55D5C9BB447(iLocal_84, true);
									unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 1);
									unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (func_112())
				{
					if (unk_0x997ABD671D25CA0B(iLocal_84, false))
					{
						unk_0x0F804F1DB19B9689(iLocal_84);
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
					if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0xED74007FFB146BC2(iLocal_84);
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0xD71649DB0A545AA3(iLocal_84, unk_0xD80958FC74E988A6(), 90f))
				{
					if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 12f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
					{
						fLocal_183 = func_132(iLocal_84, unk_0xD80958FC74E988A6(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0x176CECF6F920D707(iLocal_84);
						unk_0xE8854A4326B9E12B(&iLocal_88);
						unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
						unk_0x304AE42E357B8C7E(0, unk_0xD80958FC74E988A6(), 2.5f, 0f, 0f, 1f, 5000, 0.1f, true);
						unk_0x39E72BC99E6360CB(iLocal_88);
						unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
						unk_0x3841422E9C488D8C(&iLocal_88);
						iLocal_139++;
					}
				}
				else if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 8f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
				{
					fLocal_183 = func_132(iLocal_84, unk_0xD80958FC74E988A6(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, fLocal_183, 1f, 2f, 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0xA6DB27D19ECBB7DA(iLocal_120))
			{
				unk_0x75A16C3DA34F1245(iLocal_120, true);
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_84, 5000, 2052, 2);
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x4C241E39B23DF959(iLocal_86, false))
					{
						if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 10f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
						{
							if (unk_0xD71649DB0A545AA3(iLocal_84, unk_0xD80958FC74E988A6(), 150f))
							{
								unk_0x176CECF6F920D707(iLocal_84);
								unk_0xE8854A4326B9E12B(&iLocal_88);
								unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 4);
								if (unk_0x22AC59A870E6A669(iLocal_86, 0))
								{
									unk_0x965791A9A488A062(0, iLocal_86, -1, 0, 1f);
								}
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
								unk_0x39E72BC99E6360CB(iLocal_88);
								unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
								unk_0x3841422E9C488D8C(&iLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84) && unk_0x4C241E39B23DF959(iLocal_86, false))
				{
					if (func_132(iLocal_84, iLocal_86, 1) < 13f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
					{
						if (unk_0xD5037BA82E12416F(iLocal_86) < 2.5f)
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0xBB062B2B5722478E(iLocal_84))
				{
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x4C241E39B23DF959(iLocal_86, false))
					{
						if (unk_0xD5037BA82E12416F(iLocal_86) < 2.5f && func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 15f)
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 15f)
				{
					if (func_112())
					{
						if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
						{
							if (unk_0x22AC59A870E6A669(unk_0xB6997A7EB3F5C8C0(), 0))
							{
								unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
								unk_0x3DBFC55D5C9BB447(iLocal_84, true);
								unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 0);
								unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
								unk_0xC20E50AA46D09CA8(iLocal_84, unk_0xB6997A7EB3F5C8C0(), -1, 0, 1f, 1, 0);
								func_166();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xBB40DD2270B65366(unk_0xB6997A7EB3F5C8C0(), 0);
								if (unk_0x84A2DD9AC37C35C1(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_84);
									unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
									unk_0x3DBFC55D5C9BB447(iLocal_84, true);
									unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 1);
									unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (func_112())
				{
					unk_0x433083750C5E064A(iLocal_84, 1f);
					if (unk_0x997ABD671D25CA0B(iLocal_84, false))
					{
						unk_0x0F804F1DB19B9689(iLocal_84);
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
					if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0xED74007FFB146BC2(iLocal_84);
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0xD71649DB0A545AA3(iLocal_84, unk_0xD80958FC74E988A6(), 90f))
				{
					if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 12f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
					{
						fLocal_183 = func_132(iLocal_84, unk_0xD80958FC74E988A6(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0xE8854A4326B9E12B(&iLocal_88);
						unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
						unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, fLocal_183, 1f, 2f, 0);
						unk_0x39E72BC99E6360CB(iLocal_88);
						unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
						unk_0x3841422E9C488D8C(&iLocal_88);
						iLocal_139++;
					}
				}
				else if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 8f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
				{
					fLocal_183 = func_132(iLocal_84, unk_0xD80958FC74E988A6(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x6A071245EB0D1882(0, unk_0xD80958FC74E988A6(), -1, fLocal_183, 1f, 2f, 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0xA6DB27D19ECBB7DA(iLocal_120))
			{
				unk_0x75A16C3DA34F1245(iLocal_120, true);
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_84, 5000, 2052, 2);
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x4C241E39B23DF959(iLocal_86, false))
					{
						if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 10f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
						{
							if (unk_0xD71649DB0A545AA3(iLocal_84, unk_0xD80958FC74E988A6(), 150f))
							{
								unk_0x176CECF6F920D707(iLocal_84);
								unk_0xE8854A4326B9E12B(&iLocal_88);
								unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
								if (unk_0x22AC59A870E6A669(iLocal_86, 0))
								{
									unk_0x965791A9A488A062(0, iLocal_86, -1, 0, 1f);
								}
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
								unk_0x39E72BC99E6360CB(iLocal_88);
								unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
								unk_0x3841422E9C488D8C(&iLocal_88);
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_84);
					unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84) && unk_0x4C241E39B23DF959(iLocal_86, false))
				{
					if (func_132(iLocal_84, iLocal_86, 1) < 13f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
					{
						if (unk_0xD5037BA82E12416F(iLocal_86) < 2.5f)
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0xBB062B2B5722478E(iLocal_84))
				{
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x4C241E39B23DF959(iLocal_86, false))
					{
						if (unk_0xD5037BA82E12416F(iLocal_86) < 2.5f && func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 15f)
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 15f)
				{
					if (func_112())
					{
						iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (unk_0x4C241E39B23DF959(iLocal_86, false))
						{
							if (unk_0x22AC59A870E6A669(unk_0xB6997A7EB3F5C8C0(), 0))
							{
								unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
								unk_0x3DBFC55D5C9BB447(iLocal_84, true);
								unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 0);
								unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
								unk_0xC20E50AA46D09CA8(iLocal_84, unk_0xB6997A7EB3F5C8C0(), -1, 0, 1f, 1, 0);
								func_166();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xBB40DD2270B65366(unk_0xB6997A7EB3F5C8C0(), 0);
								if (unk_0x84A2DD9AC37C35C1(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_84);
									unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
									unk_0x3DBFC55D5C9BB447(iLocal_84, true);
									unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 1);
									unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (!iLocal_102)
				{
					if (unk_0x751B70C3D034E187(iLocal_84, unk_0xD80958FC74E988A6(), 3f, 3f, 3f, false, true, 0))
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
					unk_0x433083750C5E064A(iLocal_84, 1f);
					if (unk_0x997ABD671D25CA0B(iLocal_84, false))
					{
						unk_0x0F804F1DB19B9689(iLocal_84);
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
					unk_0xED74007FFB146BC2(iLocal_84);
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
					iLocal_139 = 4;
				}
				if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) > 100f)
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 12f || (unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()) && func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 30f))
				{
					unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_84, 5000, 2052, 2);
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (unk_0x4C241E39B23DF959(iLocal_86, false))
						{
							unk_0xE8854A4326B9E12B(&iLocal_88);
							unk_0x69F4BE8C8CC4796C(0, iLocal_86, 30000, 2054, 2);
							unk_0xEA47FE3719165B94(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
							unk_0x39E72BC99E6360CB(iLocal_88);
							unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
							unk_0x3841422E9C488D8C(&iLocal_88);
						}
						iLocal_139++;
					}
					else if (!iLocal_140)
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_84);
						unk_0xE8854A4326B9E12B(&iLocal_88);
						unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2054, 2);
						unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), -1);
						unk_0x39E72BC99E6360CB(iLocal_88);
						unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
						unk_0x3841422E9C488D8C(&iLocal_88);
						if (func_1(&uLocal_194, cLocal_177, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xA6DB27D19ECBB7DA(iLocal_120))
			{
				unk_0x75A16C3DA34F1245(iLocal_120, true);
			}
			if (func_112())
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0xD5037BA82E12416F(iLocal_86) < 10f)
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
						{
							if (unk_0xD71649DB0A545AA3(iLocal_84, unk_0xD80958FC74E988A6(), 150f))
							{
								fLocal_183 = func_132(iLocal_84, unk_0xD80958FC74E988A6(), 1);
								if (fLocal_183 > 5f)
								{
									fLocal_183 = (fLocal_183 - 0.5f);
								}
								else
								{
									fLocal_183 = (fLocal_183 - 0.25f);
								}
								unk_0xE8854A4326B9E12B(&iLocal_88);
								unk_0x69F4BE8C8CC4796C(0, iLocal_86, 10000, 2054, 2);
								if (unk_0x22AC59A870E6A669(iLocal_86, 0))
								{
									unk_0x965791A9A488A062(0, iLocal_86, -1, 0, 1f);
								}
								unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), -1);
								unk_0x39E72BC99E6360CB(iLocal_88);
								unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
								unk_0x3841422E9C488D8C(&iLocal_88);
								iLocal_139++;
							}
							else
							{
								unk_0x69F4BE8C8CC4796C(iLocal_84, iLocal_86, 10000, 2054, 2);
								iLocal_139++;
							}
						}
					}
				}
			}
			else if (!iLocal_140)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_84);
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2054, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), -1);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84) && unk_0x4C241E39B23DF959(iLocal_86, false))
			{
				if (unk_0xD5037BA82E12416F(iLocal_86) < 2.5f)
				{
					func_126();
					iLocal_139++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84) && unk_0x4C241E39B23DF959(iLocal_86, false))
			{
				if (unk_0xD5037BA82E12416F(iLocal_86) < 2.5f)
				{
					if (func_1(&uLocal_194, cLocal_177, "REHH1_ASK", 4, 0, 0, 0))
					{
						unk_0x176CECF6F920D707(iLocal_84);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_139++;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (unk_0xBB062B2B5722478E(iLocal_84))
				{
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
				}
				if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 15f)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						iLocal_86 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (unk_0x4C241E39B23DF959(iLocal_86, false))
						{
							if (unk_0xD5037BA82E12416F(iLocal_86) < 2.5f)
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) < 15f)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if (func_112())
						{
							if (unk_0x22AC59A870E6A669(unk_0xB6997A7EB3F5C8C0(), 0))
							{
								unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
								unk_0x3DBFC55D5C9BB447(iLocal_84, true);
								unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 0);
								unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
								unk_0xC20E50AA46D09CA8(iLocal_84, unk_0xB6997A7EB3F5C8C0(), -1, 0, 1f, 1, 0);
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xBB40DD2270B65366(unk_0xB6997A7EB3F5C8C0(), 0);
								if (unk_0x84A2DD9AC37C35C1(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_84);
									unk_0x9F3480FE65DB31B5(iLocal_84, func_106());
									unk_0x3DBFC55D5C9BB447(iLocal_84, true);
									unk_0x0BDDB8D9EC6BCF3C(iLocal_84, 1);
									unk_0x69F4BE8C8CC4796C(iLocal_84, unk_0xD80958FC74E988A6(), 10000, 2052, 2);
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
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				if (func_112())
				{
					unk_0x433083750C5E064A(iLocal_84, 1f);
					if (unk_0x997ABD671D25CA0B(iLocal_84, false))
					{
						unk_0x0F804F1DB19B9689(iLocal_84);
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
					unk_0xED74007FFB146BC2(iLocal_84);
					unk_0xE8854A4326B9E12B(&iLocal_88);
					unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 2);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0x39E72BC99E6360CB(iLocal_88);
					unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
					unk_0x3841422E9C488D8C(&iLocal_88);
					iLocal_139 = 5;
				}
				if (func_167(iLocal_84, unk_0xD80958FC74E988A6()) > 100f)
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
		iLocal_171 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(iLocal_84, false), 18f, 0, 4);
	}
	if (iLocal_171 != 0)
	{
		iLocal_155++;
		iLocal_156 = unk_0x9CD27B0045628463();
		if (unk_0xD53343AA4FB7DD28(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_155 > iVar0)
		{
			unk_0xAD738C3085FE7E11(iLocal_171, true, false);
			if (unk_0x4C241E39B23DF959(iLocal_171, false))
			{
				if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_171, false))
				{
					if (iLocal_59 == 1)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
							{
								unk_0x69F4BE8C8CC4796C(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x9CD27B0045628463();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 2)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
							{
								unk_0x69F4BE8C8CC4796C(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x9CD27B0045628463();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 3)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
							{
								unk_0x69F4BE8C8CC4796C(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x9CD27B0045628463();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 5)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
							{
								unk_0x69F4BE8C8CC4796C(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x9CD27B0045628463();
						iLocal_155 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_182 = unk_0x9CD27B0045628463();
			if ((iLocal_182 - iLocal_181) > 3500)
			{
				unk_0x629BFA74418D6239(&iLocal_171);
			}
			iLocal_171 = 0;
		}
	}
}

int func_172()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x4C241E39B23DF959(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), true))
		{
			if ((unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true))) || unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true)))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), true))))
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
		if (unk_0x7239B21A38F536BA(iLocal_84))
		{
			if (!unk_0x5F9532F3B5CC2551(iLocal_84))
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, false, true, 0) && !unk_0xE31C2C72B8692B64(iLocal_84)) || func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 12f)
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
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_89, 100f, 100f, 100f, false, true, 0) && !unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				unk_0xE8854A4326B9E12B(&iLocal_88);
				unk_0x15D3A79D4E44B913(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, true, 40000f);
				unk_0x15D3A79D4E44B913(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, true, 40000f);
				unk_0x15D3A79D4E44B913(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, true, 40000f);
				unk_0x39E72BC99E6360CB(iLocal_88);
				unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
				unk_0x3841422E9C488D8C(&iLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	else if (iLocal_59 == 5)
	{
		if (!iLocal_166)
		{
			if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_89, 200f, 200f, 200f, false, true, 0) && !unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				unk_0xE8854A4326B9E12B(&iLocal_88);
				unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2052, 3);
				unk_0xEA47FE3719165B94(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0f, false, false, false);
				unk_0x15D3A79D4E44B913(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, true, 40000f);
				unk_0x15D3A79D4E44B913(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, true, 40000f);
				unk_0x15D3A79D4E44B913(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, true, 40000f);
				unk_0x15D3A79D4E44B913(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, true, 40000f);
				unk_0x15D3A79D4E44B913(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, true, 40000f);
				unk_0x15D3A79D4E44B913(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, true, 40000f);
				unk_0xEA47FE3719165B94(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0f, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_88);
				unk_0x5ABA3986D90D8A3B(iLocal_84, iLocal_88);
				unk_0x3841422E9C488D8C(&iLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_59 != 1)
	{
		if (unk_0x7239B21A38F536BA(iLocal_84))
		{
			if (!unk_0x5F9532F3B5CC2551(iLocal_84))
			{
				if ((unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_84, 95f, 95f, 50f, false, true, 0) && !unk_0xE31C2C72B8692B64(iLocal_84)) || func_167(unk_0xD80958FC74E988A6(), iLocal_84) < 12f)
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
	if (unk_0xA6DB27D19ECBB7DA(iLocal_119))
	{
		unk_0x86A652570E5F25DD(&iLocal_119);
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
	{
		if (!unk_0xA6DB27D19ECBB7DA(iLocal_120))
		{
			if (!unk_0x5F9532F3B5CC2551(iLocal_84))
			{
				iLocal_120 = func_63(iLocal_84, 0, 145);
				unk_0x75A16C3DA34F1245(iLocal_120, false);
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
		func_143(&uLocal_194, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	}
	else if (func_8() == 1)
	{
		func_143(&uLocal_194, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
	}
	else if (func_8() == 2)
	{
		func_143(&uLocal_194, 2, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
	}
}

void func_175()
{
	func_177(39, 1);
	func_177(40, 1);
	func_177(41, 1);
	func_177(42, 1);
	func_177(43, 1);
	iLocal_84 = unk_0xD49F9B0955C367DE(26, iLocal_99, Local_89, fLocal_95, true, true);
	unk_0xE532F5D78798DAAB(iLocal_99);
	unk_0x9F8AA94D6D97DBF4(iLocal_84, true);
	unk_0x63F58F7C80513AAD(iLocal_84, false);
	unk_0x6C8065A3B780185B(iLocal_84, sLocal_180);
	unk_0x1913FE4CBF41C463(iLocal_84, 137, true);
	unk_0x1913FE4CBF41C463(iLocal_84, 206, true);
	unk_0x70A2D1137C8ED7C9(iLocal_84, 1024, true);
	unk_0x70A2D1137C8ED7C9(iLocal_84, 65536, true);
	unk_0x70A2D1137C8ED7C9(iLocal_84, 2, false);
	unk_0x9F7794730795E019(iLocal_84, 17, true);
	unk_0x43C851690662113D(iLocal_84, 60f);
	unk_0xDC2C5C242AAC342B(iLocal_84, 5f);
	if (iLocal_59 == 1)
	{
		unk_0x262B14F48D29DE80(iLocal_84, 0, 0, 1, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 2, 1, 2, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 3, 0, 2, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 4, 0, 2, 0);
		unk_0x0FC2D89AC25A5814(iLocal_101, true);
		iLocal_170 = unk_0xAF35D0D2583051B0(iLocal_101, -3088.068f, 730.4819f, 20.3028f, 332.2996f, 1, 1);
		unk_0x45F6D8EEF34ABEF1(iLocal_170, 150f);
		unk_0x7C65DAC73C35C862(iLocal_170, 4, false, false);
		unk_0x31B927BBC44156CD(iLocal_170, false);
		unk_0xE532F5D78798DAAB(iLocal_101);
		unk_0xEA47FE3719165B94(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
	}
	else if (iLocal_59 == 2)
	{
		unk_0x262B14F48D29DE80(iLocal_84, 0, 0, 1, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 2, 0, 1, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 3, 0, 0, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 4, 0, 1, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 8, 1, 0, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 10, 0, 0, 0);
		unk_0xEA47FE3719165B94(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
		unk_0x1B5C85C612E5256E(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), false, true, true, true);
		func_176(1);
	}
	else if (iLocal_59 == 3)
	{
		unk_0x262B14F48D29DE80(iLocal_84, 0, 0, 0, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 2, 1, 0, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 3, 0, 0, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 4, 1, 0, 0);
		unk_0x262B14F48D29DE80(iLocal_84, 8, 0, 0, 0);
		unk_0xEA47FE3719165B94(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
		unk_0x1B5C85C612E5256E(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), false, true, true, true);
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
		StringCopy(&Global_96229, unk_0x442E0A7EDE4A738A(), 24);
		Global_96223 = 1;
	}
	else
	{
		StringCopy(&Global_96229, "NULL", 24);
		Global_96223 = 0;
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
	int iVar0;
	
	if (bParam2)
	{
		unk_0xE80492A9AC099A93(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_26() == 0)
		{
			iVar0 = func_45(func_179(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&iVar0, iParam1);
			func_43(func_179(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 813;
			break;
		
		case 1:
			return 814;
			break;
		
		case 2:
			return 815;
			break;
		
		case 3:
			return 816;
			break;
		
		case 4:
			return 817;
			break;
		
		case 5:
			return 818;
			break;
		
		case 6:
			return 819;
			break;
		
		case 7:
			return 820;
			break;
		
		case 8:
			return 821;
			break;
		
		case 9:
			return 822;
			break;
		
		case 10:
			return 823;
			break;
		
		case 11:
			return 824;
			break;
		
		case 12:
			return 825;
			break;
		
		case 13:
			return 826;
			break;
		
		case 14:
			return 827;
			break;
		
		case 15:
			return 829;
			break;
		
		case 16:
			return 830;
			break;
		
		case 17:
			return 831;
			break;
		
		case 18:
			return 832;
			break;
		
		case 19:
			return 833;
			break;
		
		case 20:
			return 834;
			break;
		
		case 21:
			return 835;
			break;
		
		case 22:
			return 836;
			break;
		
		case 23:
			return 837;
			break;
		
		case 24:
			return 838;
			break;
		
		case 25:
			return 839;
			break;
		
		case 26:
			return 840;
			break;
		
		case 27:
			return 841;
			break;
		
		case 28:
			return 842;
			break;
		
		case 29:
			return 843;
			break;
		
		case 30:
			return 844;
			break;
		
		case 31:
			return 845;
			break;
		
		case 32:
			return 846;
			break;
		
		case 33:
			return 847;
			break;
		
		case 34:
			return 848;
			break;
		
		case 35:
			return 849;
			break;
		
		case 36:
			return 850;
			break;
		
		case 37:
			return 851;
			break;
		
		case 38:
			return 852;
			break;
		
		case 39:
			return 853;
			break;
		
		case 40:
			return 857;
			break;
		
		case 41:
			return 858;
			break;
		
		case 42:
			return 859;
			break;
		
		case 43:
			return 860;
			break;
		
		default:
			break;
	}
	return 2827;
}

void func_180(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_26() == 0)
		{
			iVar0 = func_45(func_179(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&iVar0, iParam1);
			func_43(func_179(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_181(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xA921AA820C25702F(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_26() == 0)
		{
			return unk_0xA921AA820C25702F(func_45(func_179(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_182(int iParam0)
{
	if (func_185())
	{
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_31(Global_97162))
		{
			func_183(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_31(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
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
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_164(func_184(iParam0), -1);
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
					func_164(func_184(iParam0), -1);
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
					func_164(func_184(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
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
	switch (func_186(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
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
		if (Global_87667.f_44 == 1)
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
		if (!func_188(iParam2))
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
			func_187(uParam0, iParam4);
		}
	}
	return 2;
}

void func_187(var uParam0, int iParam1)
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

bool func_188(int iParam0)
{
	return func_189(iParam0, Global_34909);
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
	if (Global_34909 == 15)
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
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return 1;
	}
	if (!unk_0x5F9532F3B5CC2551(iLocal_84))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_84, unk_0xD80958FC74E988A6(), true))
		{
			return 1;
		}
		if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_84, unk_0xB6997A7EB3F5C8C0(), true))
			{
				return 1;
			}
		}
		if (!bLocal_113)
		{
			if (unk_0x3F2023999AD51C1F(unk_0x3FEF770D40960D5A(iLocal_84, true), 10f, true) || unk_0x5270A8FBC098C3F8(unk_0x3FEF770D40960D5A(iLocal_84, true) - Vector(10f, 10f, 10f), unk_0x3FEF770D40960D5A(iLocal_84, true) + Vector(10f, 10f, 10f), false))
			{
				return 1;
			}
		}
		else if (unk_0x84A2DD9AC37C35C1(iLocal_85) && unk_0x7239B21A38F536BA(iLocal_85))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_85, unk_0xD80958FC74E988A6(), true) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
				{
					unk_0xBC9AE166038A5CEC(iLocal_84, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!unk_0x5891CAC5D4ACFF74(iLocal_84) && unk_0xD71649DB0A545AA3(iLocal_84, unk_0xD80958FC74E988A6(), 90f)) && unk_0x751B70C3D034E187(iLocal_84, unk_0xD80958FC74E988A6(), 50f, 50f, 50f, false, true, 0))
		{
			if (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_84) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_84))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_192()
{
	unk_0x963D27A58DF860AC(iLocal_99);
	unk_0xD3BD40951412FEF6("random@hitch_lift");
	if (iLocal_59 == 1 || iLocal_59 == 5)
	{
		unk_0x963D27A58DF860AC(iLocal_101);
	}
	if (iLocal_59 == 1)
	{
		unk_0xC6ED9D5092438D91(0);
		unk_0x2F844A8B08D76685("timer", 0);
	}
	else if (iLocal_59 == 3)
	{
		unk_0xD3BD40951412FEF6("facials@gen_female@base");
	}
	if (unk_0x98A4EB5D89A0C952(iLocal_99) && unk_0xD031A9162D01088C("random@hitch_lift"))
	{
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			if (unk_0x98A4EB5D89A0C952(iLocal_101))
			{
				bLocal_60 = true;
			}
		}
		else if (iLocal_59 == 3)
		{
			if (unk_0xD031A9162D01088C("facials@gen_female@base"))
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
		unk_0x963D27A58DF860AC(iLocal_99);
		unk_0xD3BD40951412FEF6("random@hitch_lift");
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			unk_0x963D27A58DF860AC(iLocal_101);
		}
		else if (iLocal_59 == 3)
		{
			unk_0xD3BD40951412FEF6("facials@gen_female@base");
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_205())
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
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (func_10(func_8()))
		{
			iVar36 = func_36();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_196(iVar32, &Var0);
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
	return Global_96891 > 0;
}

int func_203()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_204()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_205()
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
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_205())
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
	if ((Global_97162 == func_40() && unk_0xD2D57F1D764117B1()) && Global_97163)
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
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_209();
}

void func_209()
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

void func_210(int iParam0)
{
	Global_97162 = iParam0;
}

int func_211(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_205())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
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
		if (Global_97162 != -1)
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
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !bParam6)
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
		if (!func_234(Global_97173.f_28117.f_43[iParam3]))
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
		if (func_233())
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
		if (unk_0x26B0E73D7EAAF4D3(unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6())))
		{
			if ((unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(377.153f, -717.567f, 10.0536f) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(320.9934f, 265.2515f, 82.1221f)) || unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0xB0F7F8663821D9C3(-1425.564f, -244.3f, 15.8053f))
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
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_222(iVar8))
				{
					if (func_213(iVar4))
					{
						if (!func_212(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
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
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
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
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
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
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_232()) || Global_96220) || Global_24446) || func_231()) || func_15(8, -1)) || func_230()) || func_229()) || func_228()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_232()) || Global_24446) || func_231()) || func_15(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_232()) || Global_96220) || Global_24446) || func_231()) || func_15(8, -1)) || func_228()) || func_230()) || func_229()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_232()) || Global_96220) || Global_24446) || func_231()) || func_15(8, -1)) || func_230()) || func_229()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_232() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_15(8, -1)) || func_227()) || func_226()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_15(8, -1) || func_230()) || func_229()) || func_226()) || func_225())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_232()) || Global_24446) || func_231()) || func_15(8, -1)) || func_229()) || func_228()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_232()) || func_229()) || Global_96220) || Global_24446) || func_231()) || Global_35953) || func_15(8, -1)) || func_228()) || func_226()) || func_227()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_232()) || Global_96220) || Global_24446) || func_231()) || func_15(8, -1)) || func_228()) || func_226()) || func_230()) || func_229()) || func_227())
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
	return Global_89823.f_1;
}

int func_226()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_227()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_228()
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

bool func_229()
{
	return Global_89836.f_291 > 0;
}

bool func_230()
{
	return Global_89836.f_290 > 0;
}

var func_231()
{
	return Global_1315898;
}

int func_232()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
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
	return Global_97173.f_5944.f_889[iParam0];
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
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xA921AA820C25702F(Global_97173.f_28117.f_1, iVar0);
	}
	return bVar1;
}

int func_238()
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

int func_239()
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

void func_240()
{
	if (iLocal_142)
	{
		func_260(0);
		if (Global_24682)
		{
			unk_0x706D57B0F50DA710("AC_STOP");
		}
		func_259();
		unk_0xD37401D78A929A49();
		func_176(0);
		if (unk_0xE520FF1AD2785B40())
		{
			unk_0xF46C581C61718916(false);
		}
		if (unk_0xBF72910D0F26F025())
		{
			unk_0x247ACBC4ABBC9D1C(false);
		}
		Global_24706[0 /*7*/].f_6 = 0;
		func_252(0, 1, 1, 0);
		func_55();
		if (unk_0x7239B21A38F536BA(iLocal_84))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_84))
			{
				unk_0x1913FE4CBF41C463(iLocal_84, 317, true);
				if (!unk_0x997ABD671D25CA0B(iLocal_84, false))
				{
					unk_0xBB8DE8CF6A8DD8BB(iLocal_84);
				}
				if (iLocal_59 != 2)
				{
					unk_0x176CECF6F920D707(iLocal_84);
				}
				if (unk_0x77F1BEB8863288D5(iLocal_84, 1805844857) != 1 && unk_0x77F1BEB8863288D5(iLocal_84, 1805844857) != 0)
				{
					unk_0x9F8AA94D6D97DBF4(iLocal_84, false);
				}
				unk_0x63F58F7C80513AAD(iLocal_84, true);
				if (unk_0x5891CAC5D4ACFF74(iLocal_84))
				{
					unk_0xED74007FFB146BC2(iLocal_84);
				}
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_85))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_85))
			{
				if (!unk_0xBBCCE00B381F8482(iLocal_85))
				{
					unk_0x9F8AA94D6D97DBF4(iLocal_85, false);
				}
			}
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			}
		}
	}
	unk_0x7A2D8AD0A9EB9C3F();
	if (func_207())
	{
		if (unk_0xBFA48E2FF417213F(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), false))
		{
			unk_0xF82D8F1926A02C3D(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, false, 0f, false);
		}
		if (unk_0xBFA48E2FF417213F(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), false))
		{
			unk_0xF82D8F1926A02C3D(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, false, 0f, false);
		}
	}
	func_241(-1);
	unk_0x1090044AD1DA76FA();
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
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_244(30000);
		StringCopy(&cVar0, func_243(Global_97162, 1), 64);
		if (func_39(Global_97162) > 0)
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
	func_242(&Global_24503);
	Global_97163 = 0;
	func_210(-1);
}

void func_242(var uParam0)
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
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
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
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
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

void func_252(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_258(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_5())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_257(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_258(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_257(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_253(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
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
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_254()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_255(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_256(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
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
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_257(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_258(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
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
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_69, true);
		iLocal_68 = 1;
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_72, true) < fVar0)
		{
			fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_72, true);
			iLocal_68 = 2;
		}
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_75, true) < fVar0)
		{
			fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_75, true);
			iLocal_68 = 3;
		}
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_78, true) < fVar0)
		{
			fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_78, true);
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

