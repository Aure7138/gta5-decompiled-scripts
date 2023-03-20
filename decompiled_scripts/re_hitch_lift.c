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
	uLocal_54 = unk_0xE30164C14FFD22B6();
	uLocal_55 = unk_0xE1ABDD92C442B1EE();
	Local_69 = { -3092.82f, 749.8f, 21.48f };
	Local_72 = { 181.8977f, 4415.152f, 73.463f };
	Local_75 = { 2743.461f, 4385.51f, 47.7521f };
	Local_78 = { -382.1346f, 2817.971f, 44.0671f };
	Local_96 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_127, "", 24);
	Local_62 = { ScriptParam_0.f_1[0 /*3*/] };
	func_263();
	if (unk_0x8D841F1DD3FA555F(11))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_84))
		{
			if (unk_0xCD67A1A6022640ED(iLocal_84))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_84);
			}
		}
		func_242();
	}
	if (func_213(Local_62, 13, iLocal_81, 0, 0))
	{
		func_210(-1);
	}
	else
	{
		unk_0xC23A229F78DAD92A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x52AB115D3D6A8417() || iLocal_110)
		{
			if (!func_209())
			{
				if (func_208())
				{
					func_242();
				}
			}
			unk_0x36137B7A77318822("RE_HL", 0);
			switch (iLocal_56)
			{
				case 0:
					if (func_196())
					{
						func_242();
					}
					if (!iLocal_61)
					{
						func_195();
					}
					else
					{
						func_194();
					}
					if (bLocal_60)
					{
						iLocal_142 = 1;
						iLocal_56 = 1;
					}
					break;
				
				case 1:
					if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
					{
						switch (iLocal_57)
						{
							case 0:
								if ((func_193() && iLocal_58 != 8) && iLocal_58 != 10)
								{
									if (!func_209())
									{
										func_184(1);
									}
									iLocal_57 = 1;
								}
								switch (iLocal_58)
								{
									case 0:
										func_177();
										break;
									
									case 1:
										func_175();
										break;
									
									case 2:
										if (func_174())
										{
										}
										iLocal_157 = unk_0x48E480685981C7D4();
										if (iLocal_139 < 1 && !iLocal_140)
										{
											func_173();
										}
										if (iLocal_59 == 1)
										{
											func_172();
										}
										else if (iLocal_59 == 2)
										{
											func_171();
										}
										else if (iLocal_59 == 3)
										{
											func_170();
										}
										else if (iLocal_59 == 5)
										{
											func_167();
										}
										break;
									
									case 3:
										func_164();
										break;
									
									case 4:
										if (iLocal_59 == 1)
										{
											func_147();
											func_146();
										}
										else if (iLocal_59 == 3)
										{
											func_141();
											func_140();
										}
										else if (iLocal_59 == 5)
										{
											func_141();
											func_131();
										}
										if (!bLocal_113)
										{
											func_127();
											func_126();
											func_123();
											func_122();
											func_119();
											func_117();
											func_116();
											func_115();
										}
										func_107();
										break;
									
									case 6:
										func_62();
										if (iLocal_59 == 3)
										{
											func_140();
										}
										break;
									
									case 7:
										func_61();
										if (iLocal_59 == 3)
										{
											func_140();
										}
										break;
									
									case 8:
										if (iLocal_59 == 3)
										{
											func_57();
											func_140();
										}
										break;
									
									case 9:
										if (!unk_0x5FEB513A4402FD59(iLocal_84))
										{
											if (unk_0x515B65C19A5CA9B1(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
											{
												unk_0xD91194CE3D1E1D77(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
											}
											else
											{
												unk_0x9AF45ACD4E9068EE(iLocal_84, 1193033728, 0);
											}
											unk_0x6CB332CB31E9FA96(iLocal_84, 1);
											unk_0x4EDE34FBADD967A6(5000);
										}
										func_53();
										break;
									
									case 10:
										break;
								}
								if ((func_52() && !func_51()) && iLocal_58 != 10)
								{
									if (!unk_0x5FEB513A4402FD59(iLocal_84))
									{
										if (unk_0x515B65C19A5CA9B1(iLocal_84, Local_96, 5f, 5f, 5f, 0, 1, 0))
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
									if (unk_0x86CCCD2FAE9D5E65(iLocal_84))
									{
										unk_0xF210D34D7F7152ED(&iLocal_84);
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
									if (!unk_0x5FEB513A4402FD59(iLocal_85))
									{
										unk_0x27CC98B7C879C320(iLocal_85);
										unk_0x754376E2234CBB4A(iLocal_85, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
										unk_0x6CB332CB31E9FA96(iLocal_85, 1);
									}
								}
								else if (iLocal_59 == 5)
								{
									func_1(&uLocal_194, cLocal_177, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!unk_0x5FEB513A4402FD59(iLocal_84))
								{
									unk_0x27CC98B7C879C320(iLocal_84);
									unk_0x754376E2234CBB4A(iLocal_84, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
									unk_0x6CB332CB31E9FA96(iLocal_84, 1);
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
			func_242();
		}
		if (iLocal_58 > 2)
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0x86CCCD2FAE9D5E65(iLocal_84))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_84))
					{
						if (!unk_0x8D28631AAAEFC957(iLocal_84, unk_0x81873881071CD9FE(), 100f, 100f, 100f, 0, 1, 0))
						{
							func_53();
						}
					}
				}
			}
		}
		if (iLocal_58 > 0 && iLocal_58 < 8)
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0x5FEB513A4402FD59(iLocal_84))
				{
					if (!func_209())
					{
						func_184(1);
					}
					func_53();
				}
				else if (!unk_0xD81BC0FD4D47CC04(iLocal_84))
				{
					if (unk_0xBBEF8270CE27C0EE(iLocal_84, unk_0x81873881071CD9FE(), 0))
					{
						unk_0x27CC98B7C879C320(iLocal_84);
						unk_0x754376E2234CBB4A(iLocal_84, unk_0x81873881071CD9FE(), 250f, -1, 0, 0);
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
					unk_0x9E95048D8C96C1EA(0);
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
		if (unk_0xE1772957381F609F())
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
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
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
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_6())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
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
	unk_0x9E95048D8C96C1EA(0);
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
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
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
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
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
		if (Global_69020)
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
	return Global_98931.f_1750.f_539.f_3549;
}

void func_9()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_12(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_11(unk_0x81873881071CD9FE());
			if (func_10(iVar0) && (!func_13(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_10(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_13(int iParam0)
{
	return Global_35443 == iParam0;
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
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_16()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
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
	func_242();
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
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_21(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
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
			Global_98931.f_29444.f_2 = 3;
		}
		if (func_30(iParam0, iParam1) != 322)
		{
			func_24(func_30(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_98919 = iParam1;
		if (Global_98917 == 0)
		{
			if (((Global_98920 == 1 || Global_98920 == 5) || Global_98920 == 11) || Global_98920 == 25)
			{
				func_23(2);
			}
			else if ((Global_98920 == 26 || Global_98920 == 8) || Global_98920 == 17)
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
	Global_98917 = iParam0;
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
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_27(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_26() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_20();
				}
			}
		}
	}
}

int func_26()
{
	return Global_24946;
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
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
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
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
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_35();
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_36()
{
	func_9();
	switch (Global_98931.f_1750.f_539.f_3549)
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
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29444.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x11CA2334E341B424(), 64);
	uVar16 = func_41(Var0);
	return uVar16;
}

int func_41(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8DAF7A748E41AD46(&cParam0))
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
			Global_98931.f_1750.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_98931.f_1750.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3438;
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
			if (iVar1 != 3438)
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
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
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
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
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
	uVar0 = Global_2459767[iParam0 /*5*/][func_44(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
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
	if (Global_25181)
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
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

void func_50(int iParam0)
{
	Global_16704 = iParam0;
}

int func_51()
{
	if (Global_98931.f_29444.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return Global_25180;
}

void func_53()
{
	func_55();
	while (func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_242();
}

int func_54()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
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
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_57()
{
	struct<6> Var0;
	
	if (!unk_0x5FEB513A4402FD59(iLocal_85) && !unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if (!unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_85, 25f, 25f, 25f, 0, 1, 0) && !unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_84, 40f, 40f, 40f, 0, 1, 0))
		{
			unk_0x27CC98B7C879C320(iLocal_85);
			unk_0xD91194CE3D1E1D77(iLocal_85, Local_92, 1f, -1, 0.25f, 0, 1193033728);
			func_18();
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_85))
	{
		if (unk_0xBBEF8270CE27C0EE(iLocal_85, unk_0x81873881071CD9FE(), 1))
		{
			if (func_54())
			{
				Var0 = { func_60() };
				if ((unk_0xD994929E13CC1ED5(&Var0, "REHH3_JB_2") || unk_0xD994929E13CC1ED5(&Var0, "REHH3_JB_4")) || unk_0xD994929E13CC1ED5(&Var0, "REHH3_JB_6"))
				{
					func_48();
				}
			}
		}
		if (unk_0xC9D9444186B5A374() > 5000)
		{
			if (unk_0xFB9BF178E208C231(iLocal_85, unk_0x81873881071CD9FE()))
			{
				iLocal_158 = 4;
			}
		}
	}
	if (!iLocal_112)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_84))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_84, unk_0x81873881071CD9FE(), 1))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_85))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					func_1(&uLocal_194, cLocal_177, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_112 = 1;
				}
			}
		}
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if (unk_0xD81BC0FD4D47CC04(iLocal_84))
		{
			unk_0x4191220706130B86(iLocal_84);
		}
		if (unk_0x5FEB513A4402FD59(iLocal_85) && unk_0x515B65C19A5CA9B1(iLocal_84, unk_0xB6AE0DAE06D56288(iLocal_85, 0), 1f, 1f, 5f, 0, 1, 0))
		{
			iLocal_158 = 5;
		}
	}
	else if (!unk_0x5FEB513A4402FD59(iLocal_85))
	{
		unk_0x633A554EB6BC4E71(iLocal_85, unk_0x81873881071CD9FE(), 0, 16);
		func_53();
	}
	else
	{
		func_53();
	}
	if (!iLocal_167)
	{
		if (unk_0x5FEB513A4402FD59(iLocal_85))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_121))
			{
				unk_0x0A8175F24237A3D4(&uLocal_121);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				iLocal_158 = 3;
			}
		}
	}
	if (!iLocal_169)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_84) && !unk_0x5FEB513A4402FD59(iLocal_85))
		{
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				if (unk_0xC4F63EDDAFD0C636(unk_0x1329891157A54C63()))
				{
					iLocal_158 = 2;
				}
			}
		}
		if (unk_0x5FEB513A4402FD59(iLocal_85))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_121))
			{
				unk_0x0A8175F24237A3D4(&uLocal_121);
			}
			func_59(&uLocal_194, 4);
			if (unk_0xBBEF8270CE27C0EE(iLocal_85, unk_0x81873881071CD9FE(), 1) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				iLocal_158 = 2;
			}
		}
		else if (!unk_0x930F8FBB8E9537CC(iLocal_84))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_84, iLocal_85, 1))
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
				if (!unk_0x5FEB513A4402FD59(iLocal_84) && !unk_0x5FEB513A4402FD59(iLocal_85))
				{
					if (!unk_0xE5AB05962FA1FF3F(iLocal_84, 0) && unk_0xF371669B2D6B4C8E(iLocal_85))
					{
						if (!iLocal_168)
						{
							unk_0xEAD984C2869B8B7C(&uLocal_88);
							unk_0xAF625598EDA64AD3(0, iLocal_85, -1, 2052, 2);
							unk_0x31C1393E4ACFD794(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0xF88735A9354A45F3(0, iLocal_85, -1);
							unk_0x56D9ED1541046AF6(uLocal_88);
							unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
							unk_0xA3561415EB3DA3A3(&uLocal_88);
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				unk_0x98046F3D16B9CF76(iLocal_84, 0, 0);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_158 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_169)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_84))
				{
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 4))
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_194, cLocal_177, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_84))
					{
						unk_0x27CC98B7C879C320(iLocal_84);
						unk_0x754376E2234CBB4A(iLocal_84, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
						if (!unk_0x5FEB513A4402FD59(iLocal_85))
						{
							unk_0x832B749856D487BE(iLocal_85, 6, 0, 0);
							unk_0x754376E2234CBB4A(iLocal_85, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
						}
					}
					func_18();
					iLocal_169 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 3:
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x5FEB513A4402FD59(iLocal_84))
				{
					unk_0x832B749856D487BE(iLocal_84, 7, 0, 0);
				}
				func_1(&uLocal_194, cLocal_177, "REHH3_BAS", 4, 0, 0, 0);
				if (!unk_0x5FEB513A4402FD59(iLocal_84) && unk_0x86CCCD2FAE9D5E65(iLocal_85))
				{
					unk_0x27CC98B7C879C320(iLocal_84);
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xF64D185C5B88AF31(0);
					unk_0x31C1393E4ACFD794(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0xAF625598EDA64AD3(0, iLocal_85, -1, 2052, 4);
					unk_0xD91194CE3D1E1D77(0, unk_0xB6AE0DAE06D56288(iLocal_85, 0), 1f, -1, 3f, 0, 1193033728);
					unk_0xF88735A9354A45F3(0, iLocal_85, -1);
					unk_0x31C1393E4ACFD794(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0, 0, 0, 0);
					unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					unk_0x6CB332CB31E9FA96(iLocal_84, 1);
					unk_0x1D15D99A10A15334(iLocal_84, 0);
					unk_0x4EDE34FBADD967A6(10000);
					iLocal_167 = 1;
					iLocal_158 = 0;
				}
			}
			break;
		
		case 4:
			if (func_58())
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_84))
				{
					if (unk_0x8D28631AAAEFC957(iLocal_84, unk_0x81873881071CD9FE(), 15f, 15f, 15f, 0, 1, 0))
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH3_NOO", 4, 0, 0, 0))
						{
							unk_0x5AE11BC36633DE4E(0);
							iLocal_158 = 0;
						}
					}
				}
			}
			else if (!unk_0x5FEB513A4402FD59(iLocal_85))
			{
				if (func_1(&uLocal_194, cLocal_177, "REHH3_FHT", 4, 0, 0, 0))
				{
					unk_0x5AE11BC36633DE4E(0);
					iLocal_158 = 0;
				}
			}
			break;
		
		case 5:
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
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
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
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
		iVar6 = unk_0x21C9C1BDAA5B68B1();
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
		if (!unk_0x5FEB513A4402FD59(iLocal_84))
		{
			if (unk_0xCD67A1A6022640ED(iLocal_84))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_84);
			}
			iLocal_58 = 8;
		}
	}
}

void func_62()
{
	if (unk_0xFBACB273AA628CC5(uLocal_82))
	{
		unk_0x0A8175F24237A3D4(&uLocal_82);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_83))
	{
		unk_0x0A8175F24237A3D4(&uLocal_83);
	}
	if (iLocal_59 == 1)
	{
		unk_0x98A5E5B909F1B162(uLocal_176);
		unk_0x0C22E352114F699C("TIMER_SCENE");
		if (!iLocal_123)
		{
			func_48();
			unk_0x4EDE34FBADD967A6(0);
			func_1(&uLocal_194, cLocal_177, "REHH1_TKA", 4, 0, 0, 0);
			unk_0xAAA62646D54D95EF(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				func_82(func_8(), 1, 100, 0, 1);
				func_81(198, 0);
				unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_84, 8000, 2052, 4);
				unk_0xEAD984C2869B8B7C(&uLocal_88);
				unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 10000, 2052, 2);
				unk_0x98046F3D16B9CF76(0, 3000, 4194369);
				unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 1000);
				unk_0xD91194CE3D1E1D77(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xCEF5C750AC257B88(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 1193033728, 1056964608);
				unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x56D9ED1541046AF6(uLocal_88);
				unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
				unk_0xA3561415EB3DA3A3(&uLocal_88);
				unk_0x6CB332CB31E9FA96(iLocal_84, 1);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_123 = 1;
			}
		}
		if (unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0xDE1125A413AF241C(0, 75, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			unk_0xDE1125A413AF241C(0, 79, 1);
			unk_0xDE1125A413AF241C(0, 286, 1);
			unk_0xDE1125A413AF241C(0, 287, 1);
			unk_0xDE1125A413AF241C(0, 26, 1);
			unk_0xDE1125A413AF241C(0, 273, 1);
			unk_0xDE1125A413AF241C(0, 4, 1);
			unk_0xDE1125A413AF241C(0, 270, 1);
			unk_0xDE1125A413AF241C(0, 5, 1);
			unk_0xDE1125A413AF241C(0, 1, 1);
			unk_0xDE1125A413AF241C(0, 271, 1);
			unk_0xDE1125A413AF241C(0, 6, 1);
			unk_0xDE1125A413AF241C(0, 2, 1);
			unk_0xDE1125A413AF241C(0, 272, 1);
			unk_0xDE1125A413AF241C(0, 3, 1);
		}
		if (unk_0xC9D9444186B5A374() > 3000 && unk_0xC9D9444186B5A374() < 7000)
		{
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
		}
		else if (unk_0xC9D9444186B5A374() > 7000)
		{
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			unk_0x59E3A6BEFC421137(0);
			if (unk_0xC9D9444186B5A374() > 8500 && !iLocal_125)
			{
				if ((unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()) && unk_0x4D872223E3957144() == 4) || (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0xF18003343B2E8EE9() == 4))
				{
					unk_0x45D2AAD93E9AC4B3("CamPushInNeutral", 0, 0);
					unk_0x35D7948F61AA3FEC(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_125 = 1;
				}
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_84) || unk_0xC9D9444186B5A374() > 15000)
		{
			if (unk_0x515B65C19A5CA9B1(iLocal_84, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, 0, 1, 0) || unk_0xC9D9444186B5A374() > 15000)
			{
				unk_0xF210D34D7F7152ED(&iLocal_84);
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
		if (!unk_0x5FEB513A4402FD59(iLocal_84))
		{
			if (!unk_0xD81BC0FD4D47CC04(iLocal_84))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_88);
				unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 10000, 2052, 2);
				unk_0x5EAAD72695348E00(0, 4500);
				unk_0x98046F3D16B9CF76(0, 0, 4194369);
				unk_0xD91194CE3D1E1D77(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0xD91194CE3D1E1D77(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0xD91194CE3D1E1D77(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, 0, 1193033728);
				unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				unk_0x56D9ED1541046AF6(uLocal_88);
				unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
				unk_0xA3561415EB3DA3A3(&uLocal_88);
				unk_0x6CB332CB31E9FA96(iLocal_84, 1);
				unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_84, 5000, 2052, 2);
				unk_0x6EC15FE0ADD3E99C(iLocal_84);
				unk_0x4EDE34FBADD967A6(1000);
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
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
				if (!unk_0x5FEB513A4402FD59(iLocal_85))
				{
					unk_0xC9E1121219C75417(iLocal_85, 1);
					if (!unk_0xFBACB273AA628CC5(uLocal_120))
					{
						unk_0x0A8175F24237A3D4(&uLocal_120);
					}
					if (!unk_0xFBACB273AA628CC5(uLocal_121))
					{
						uLocal_121 = func_63(iLocal_85, 1, 145);
					}
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, 17f, 1f, 1073741824, 0);
					unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_85, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					unk_0x6CB332CB31E9FA96(iLocal_85, 1);
					unk_0x1D15D99A10A15334(iLocal_85, 0);
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
					unk_0x4865E80F793024CE("rghBoyfriend", &iLocal_193);
					unk_0x506A601663C5417C(iLocal_85, iLocal_193);
					unk_0xF8E77F310A5B6EAB(4, joaat("COP"), iLocal_193);
					unk_0xF8E77F310A5B6EAB(1, -183807561, iLocal_193);
					unk_0xF8E77F310A5B6EAB(1, iLocal_193, -183807561);
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
		if (!unk_0x5FEB513A4402FD59(iLocal_84))
		{
			unk_0xEAD984C2869B8B7C(&uLocal_88);
			unk_0x98046F3D16B9CF76(0, 0, 4194369);
			unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), 3000, 2052, 2);
			unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 3000);
			unk_0xD91194CE3D1E1D77(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xD91194CE3D1E1D77(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xD91194CE3D1E1D77(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xD91194CE3D1E1D77(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xD91194CE3D1E1D77(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0xD91194CE3D1E1D77(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, 0, 1193033728);
			unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			unk_0x5EAAD72695348E00(0, -1);
			unk_0x56D9ED1541046AF6(uLocal_88);
			unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
			unk_0xA3561415EB3DA3A3(&uLocal_88);
			unk_0x6CB332CB31E9FA96(iLocal_84, 1);
			unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_84, 5000, 2052, 2);
			unk_0x6EC15FE0ADD3E99C(iLocal_84);
		}
		unk_0x4EDE34FBADD967A6(2000);
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
		unk_0x4EDE34FBADD967A6(3000);
		func_18();
	}
}

var func_63(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_64(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_65(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_65(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_65(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
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
		iParam2 = func_80();
	}
	if (func_79(iParam2) == 4)
	{
	}
	bVar0 = Global_98931.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x1C6DF6AD69BE853E())
		{
			if (!func_77(func_78(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_77(func_78(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_98931.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_76(iParam0, 0);
			func_74(func_78(iParam0), func_79(iParam2), 1);
			iVar1 = unk_0x2E0A9E3291F398E3(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0xF3148AAF69AF9CBC(&(Global_2097152[func_73() /*9662*/].f_7252.f_670), iParam0);
					func_70(15, 0);
					break;
			}
			func_69(iVar1);
			func_68(iParam0, iVar1);
			Global_97925.f_15[iParam0] = unk_0x48E480685981C7D4();
		}
	}
	else if (bVar0)
	{
		func_67(func_78(iParam0), func_79(iParam2));
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
			Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_68(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_97925.f_4[iParam0] = (unk_0x48E480685981C7D4() + iParam1);
	}
	else
	{
		Global_97925.f_4[iParam0] = (unk_0x48E480685981C7D4() + unk_0x2E0A9E3291F398E3(1200000, 2100000));
	}
}

void func_69(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_97925.f_3 = (unk_0x48E480685981C7D4() + iParam0);
	}
	else
	{
		Global_97925.f_3 = (unk_0x48E480685981C7D4() + unk_0x2E0A9E3291F398E3(21600000, 25200000));
	}
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_72(iParam0, iParam1))
	{
		iVar0 = func_71();
		Global_2436893[iVar0] = iParam0;
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
		if (Global_2436893[iVar1] == 0)
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
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
			Global_98931.f_32499[iParam0 /*29*/].f_12[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[2] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] == 1 && Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69020)
			{
				if (iParam1 != 4)
				{
					if (Global_14394 != iParam1)
					{
						Global_2923[iParam1 /*4*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2940[iParam1] = 1;
						Global_2945[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14394)
					{
					}
					else
					{
						Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2874[1 /*6*/].f_5 = iParam1;
						func_75();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_75();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
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
	
	StringCopy(&cVar0, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0x02A6B267064771B1("");
		StringCopy(&cVar16, unk_0x46E7F5908F815DDC(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x46E7F5908F815DDC("CELL_253");
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x02A6B267064771B1("CELL_255");
		unk_0x072D7B028D6C7A05(&(Global_2874[1 /*6*/]));
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 0);
}

void func_76(int iParam0, int iParam1)
{
	Global_98931.f_243[func_80() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_77(int iParam0, int iParam1)
{
	if (Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0)
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

int func_79(int iParam0)
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

int func_80()
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

void func_81(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_98931.f_7227[iParam0] = 1;
	Global_98931.f_7227.f_236[iParam0] = (unk_0x48E480685981C7D4() + iParam1);
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_83(Global_98931.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x85C45034BA638694(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x123B783056E76C4E(iVar1, iVar0, 1);
	}
}

int func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_106();
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
					func_105(99, 1);
					func_104(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_104(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_104(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_90(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_89(5))
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
							func_104(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_104(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_104(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_104(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_104(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_104(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_104(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_104(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_104(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_104(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_104(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_104(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA60A6B4935A3E9A7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_104(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_104(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_104(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_104(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_104(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_104(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_104(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_104(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_104(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_104(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_104(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_104(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_105(95, iParam3);
					break;
				
				case 1:
					func_105(97, iParam3);
					break;
				
				case 2:
					func_105(96, iParam3);
					break;
			}
			func_105(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_86(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_86(iVar1);
	}
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_104(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_104(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_104(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
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
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_85(iParam0);
	if (Global_35443 == 15)
	{
		func_84(0);
	}
	return 1;
}

void func_84(bool bParam0)
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
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_86(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_73() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_73() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_87(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_87(int iParam0)
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

void func_88(int iParam0)
{
	func_105(93, iParam0);
	func_105(29, iParam0);
	func_105(30, iParam0);
}

bool func_89(int iParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_73() /*9662*/].f_7252.f_10, iParam0);
}

int func_90(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
		func_27(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_91(27, 1);
	return 1;
}

int func_91(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_92(iParam0, iParam1);
}

int func_92(int iParam0, int iParam1)
{
	if (func_13(14) && !func_103(iParam0))
	{
		return 0;
	}
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_102(&Global_2550589))
	{
		if (func_100(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_93(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_93(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_103(iParam1))
	{
		return 0;
	}
	if (func_100(uParam0, iParam1))
	{
		return 0;
	}
	if (func_99(uParam0) < 0f)
	{
		func_98(uParam0, 0);
	}
	func_96(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_94(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_94(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_13(14) && !func_103(iParam1))
	{
		return 0;
	}
	if (func_100(uParam0, iParam1))
	{
		return 0;
	}
	if (func_99(uParam0) < 0f)
	{
		func_98(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_95(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_95(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_96(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_97(uParam0, iVar0);
		iVar0++;
	}
	func_98(uParam0, (Global_2550588 - 0.5f));
}

void func_97(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_98(var uParam0, float fParam1)
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

float func_99(var uParam0)
{
	return uParam0->f_72;
}

bool func_100(var uParam0, int iParam1)
{
	return func_101(uParam0, iParam1) != -1;
}

int func_101(var uParam0, int iParam1)
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

bool func_102(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_103(int iParam0)
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

void func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_105(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_106()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

void func_107()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (!func_114())
			{
				if (unk_0xCD67A1A6022640ED(iLocal_84))
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_84);
				}
				if (unk_0xFA1212DE7C455679(iLocal_84, 1227113341) != 1 && unk_0xFA1212DE7C455679(iLocal_84, 1227113341) != 0)
				{
					unk_0x65C82688BA49CA39(iLocal_84, unk_0x81873881071CD9FE(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
				{
					unk_0x98046F3D16B9CF76(iLocal_84, 0, 0);
				}
				if (!iLocal_141)
				{
					func_109(0);
					func_48();
					unk_0x4EDE34FBADD967A6(0);
					if (!func_54())
					{
						if (iLocal_59 == 1)
						{
							if (!func_174())
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
							if (!func_174())
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
							if (!func_174())
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
							if (!func_174())
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
				if (unk_0xFA1212DE7C455679(iLocal_84, 1227113341) == 1 && unk_0xFA1212DE7C455679(iLocal_84, 1227113341) == 0)
				{
					unk_0x27CC98B7C879C320(iLocal_84);
				}
			}
		}
		else if (!unk_0xCD67A1A6022640ED(iLocal_84))
		{
			unk_0xABED360AB1F46D3D(iLocal_84, func_108());
			unk_0x64ACA71A49AA111C(iLocal_84, 1);
			unk_0x2DA3CE5ACB2F30AC(iLocal_84, 0);
		}
	}
}

var func_108()
{
	return unk_0xC80D3C64CC2CE6A3(unk_0xEC537F0C0E8265EE());
}

void func_109(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_126)
		{
			if (func_113(&uLocal_194, cLocal_177, &Local_133, &Local_127, 8, 0, 0))
			{
				iLocal_126 = 0;
			}
		}
	}
	else if ((!iLocal_126 && unk_0xE1772957381F609F()) && !func_111())
	{
		Local_133 = { func_110() };
		Local_127 = { func_60() };
		func_55();
		iLocal_126 = 1;
	}
}

struct<6> func_110()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

int func_111()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_112("REHH1_VEH") || func_112("REHH2_VEH")) || func_112("REHH3_VEH")) || func_112("REHH4_VEH")) || func_112("REHH5_VEH")) || func_112("REHH1_VEH2")) || func_112("REHH2_VEH2")) || func_112("REHH3_VEH2")) || func_112("REHH4_VEH2")) || func_112("REHH5_VEH2")) || func_112("REHH1_WLK")) || func_112("REHH2_WLK")) || func_112("REHH3_WLK")) || func_112("REHH4_WLK")) || func_112("REHH5_WLK")) || func_112("REHH1_SLR")) || func_112("REHH4_SLR")) || func_112("REHH1_SLW")) || func_112("REHH2_SLW")) || func_112("REHH3_SLW")) || func_112("REHH4_SLW")) || func_112("REHH5_SLW")) || func_112("REHH1_OUT")) || func_112("REHH2_GETOUT")) || func_112("REHH3_GETOUT")) || func_112("REHH5_GETOUT")) || func_112("REHH1_JACK")) || func_112("REHH2_JACK")) || func_112("REHH3_JACK")) || func_112("REHH5_JACK")) || func_112("REHH1_GUN")) || func_112("REHH2_SHOOT")) || func_112("REHH3_SHOOT")) || func_112("REHH5_SHOO")) || func_112("REHH1_1HOUR")) || func_112("REHH2_1HOUR")) || func_112("REHH1_HHOUR")) || func_112("REHH2_HHOUR")) || func_112("REHH1_CRASH")) || func_112("REHH1_WAY")) || func_112("REHH2_NEAR")) || func_112("REHH3_NEAR")) || func_112("REHH5_NEAR")) || func_112("REHH2_CULT")) || func_112("REHH3_CULT")) || func_112("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_112(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_110()}, 4);
		if (unk_0xD994929E13CC1ED5(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_113(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
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

int func_114()
{
	if (iLocal_59 == 5)
	{
		if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
		{
			if ((((!unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()) && !unk_0x25B75802E65C5545(unk_0x81873881071CD9FE())) && !unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE())) && !unk_0x193403916286AA4E(unk_0x81873881071CD9FE())) && !unk_0x557EC1A9A884772D(unk_0x81873881071CD9FE(), joaat("rhino")))
			{
				if (unk_0x59D35AC211D17FAB(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		if (unk_0x7404950238A154C2(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()), 0))
		{
			if (((!unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE()))) && !unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))) && !unk_0xE4CD4B212196D2C5(unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())))) && unk_0x14B7103DBD149FFE(unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_115()
{
	if (unk_0x7E0C455D8C091153(unk_0x81873881071CD9FE()))
	{
		if (!iLocal_149)
		{
			iLocal_151 = unk_0x48E480685981C7D4();
			iLocal_149 = 1;
		}
		else
		{
			iLocal_153 = unk_0x48E480685981C7D4();
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
		func_109(0);
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
				if (!unk_0x5FEB513A4402FD59(iLocal_84))
				{
					if (!unk_0xDA3121434A61AE41(iLocal_84))
					{
						unk_0x4191220706130B86(iLocal_84);
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
		if (!unk_0x5FEB513A4402FD59(iLocal_84))
		{
			unk_0xC9E1121219C75417(iLocal_84, 1);
			if (unk_0xCD67A1A6022640ED(iLocal_84))
			{
				if (unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
				{
					if (unk_0x515B65C19A5CA9B1(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
					{
						unk_0xD91194CE3D1E1D77(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
					}
					else
					{
						unk_0x9AF45ACD4E9068EE(iLocal_84, 1193033728, 0);
					}
					if (iLocal_59 == 1)
					{
						unk_0x754376E2234CBB4A(iLocal_84, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
					}
					unk_0x6CB332CB31E9FA96(iLocal_84, 1);
					unk_0x6EC15FE0ADD3E99C(iLocal_84);
					func_53();
				}
			}
		}
	}
}

void func_116()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if (unk_0x25CC8E51B72F474F(iLocal_84))
		{
			if (!iLocal_146)
			{
				iLocal_147 = unk_0x48E480685981C7D4();
				iLocal_146 = 1;
			}
			else
			{
				iLocal_148 = unk_0x48E480685981C7D4();
			}
		}
		else
		{
			iLocal_146 = 0;
		}
	}
	if ((iLocal_148 - iLocal_147) > 90000)
	{
		func_109(0);
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
		if (!unk_0x5FEB513A4402FD59(iLocal_84))
		{
			unk_0xC9E1121219C75417(iLocal_84, 1);
			if (unk_0x515B65C19A5CA9B1(iLocal_84, Local_92, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0xD91194CE3D1E1D77(iLocal_84, Local_92, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				unk_0x9AF45ACD4E9068EE(iLocal_84, 1193033728, 0);
			}
			if (iLocal_59 == 1)
			{
				unk_0x754376E2234CBB4A(iLocal_84, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
			}
			unk_0x6CB332CB31E9FA96(iLocal_84, 1);
			if (unk_0xCD67A1A6022640ED(iLocal_84))
			{
				unk_0x6EC15FE0ADD3E99C(iLocal_84);
			}
			func_53();
		}
	}
}

void func_117()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0x04C377C10639B842(iLocal_84, unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_120))
				{
					uLocal_120 = func_63(iLocal_84, 0, 145);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_82))
				{
					unk_0x0A8175F24237A3D4(&uLocal_82);
				}
			}
			else
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_82))
				{
					uLocal_82 = func_118(Local_92, 1);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_120))
				{
					unk_0x0A8175F24237A3D4(&uLocal_120);
				}
			}
		}
		else if (!unk_0xFBACB273AA628CC5(uLocal_120))
		{
			uLocal_120 = func_63(iLocal_84, 0, 145);
		}
		if (((unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0xE5AB05962FA1FF3F(iLocal_84, 0)) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_92, 50f, 50f, 50f, 0, 1, 0)) || unk_0x2ADC2166A28358CB(unk_0x81873881071CD9FE()))
		{
			if (!unk_0xFBACB273AA628CC5(uLocal_82))
			{
				uLocal_82 = func_118(Local_92, 1);
			}
		}
		else if (!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_92, 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_82))
			{
				unk_0x0A8175F24237A3D4(&uLocal_82);
			}
		}
	}
}

var func_118(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_65(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

void func_119()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if ((unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) && unk_0xE5AB05962FA1FF3F(iLocal_84, 1)) || unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_84, 5f, 5f, 5f, 0, 1, 0))
		{
			if (func_121())
			{
				func_50(0);
				iLocal_124 = 0;
			}
		}
		else if (!unk_0xDA3121434A61AE41(iLocal_84))
		{
			if (func_54() && !iLocal_124)
			{
				func_50(1);
				iLocal_124 = 1;
			}
		}
		if (unk_0xDA3121434A61AE41(iLocal_84))
		{
			unk_0x3268BFB21A4C3D3B(iLocal_84, 0);
		}
		if (func_120("REHH3_CHT3_7"))
		{
			unk_0xA0E7F565B88CC79B(iLocal_84, 1, 1);
		}
		if (func_120("REHH3_CHT6_5"))
		{
			unk_0xA0E7F565B88CC79B(iLocal_84, 0, 1);
		}
		if (func_120("REHH3_CHT8_3"))
		{
			unk_0xA0E7F565B88CC79B(iLocal_84, 1, 1);
		}
		if ((func_112("REHH3_CHT8M") || func_112("REHH3_CHT8F")) || func_112("REHH3_CHT8T"))
		{
			unk_0xA0E7F565B88CC79B(iLocal_84, 0, 1);
		}
	}
}

int func_120(char* sParam0)
{
	var uVar0;
	
	if (func_54())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (unk_0xD994929E13CC1ED5(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_121()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

void func_122()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if (iLocal_59 == 1)
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x2ADE2CEED2637E95(), 0) && unk_0x04C377C10639B842(iLocal_84, unk_0x2ADE2CEED2637E95(), 0))
				{
					if (unk_0x03CF5B18BF9EC613(unk_0x2ADE2CEED2637E95()))
					{
						if (!func_112("REHH1_CRASH"))
						{
							func_109(0);
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
			if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x2ADE2CEED2637E95(), 1) && unk_0x04C377C10639B842(iLocal_84, unk_0x2ADE2CEED2637E95(), 0))
				{
					func_109(0);
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
							if (!unk_0x5FEB513A4402FD59(iLocal_84))
							{
								if (!unk_0xDA3121434A61AE41(iLocal_84))
								{
									unk_0x4191220706130B86(iLocal_84);
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
		else if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
		{
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x2ADE2CEED2637E95(), 0) && unk_0x04C377C10639B842(iLocal_84, unk_0x2ADE2CEED2637E95(), 0))
			{
				iLocal_143 = 0;
			}
		}
		if (!iLocal_144)
		{
			if (unk_0xC84F3409C771F6C3(unk_0x81873881071CD9FE()))
			{
				func_109(0);
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
		else if (!unk_0xC84F3409C771F6C3(unk_0x81873881071CD9FE()))
		{
			iLocal_144 = 0;
		}
		if (!iLocal_145)
		{
			if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
			{
				func_109(0);
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
						if (!unk_0x5FEB513A4402FD59(iLocal_84))
						{
							if (!unk_0xDA3121434A61AE41(iLocal_84))
							{
								unk_0x4191220706130B86(iLocal_84);
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
		else if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
		{
			iLocal_145 = 0;
		}
	}
}

void func_123()
{
	if (func_125(Local_92))
	{
		func_109(0);
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (!unk_0xDA3121434A61AE41(iLocal_84))
				{
					unk_0x4191220706130B86(iLocal_84);
				}
			}
			func_1(&uLocal_194, cLocal_177, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_59 == 5)
		{
			func_1(&uLocal_194, cLocal_177, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_124())
	{
		func_109(0);
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (!unk_0xDA3121434A61AE41(iLocal_84))
				{
					unk_0x4191220706130B86(iLocal_84);
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

int func_124()
{
	if (func_8() == 2)
	{
		if (func_52())
		{
			if (unk_0x0D6E79537424BACE(-1014.154f, 4881.411f, 245.0001f, unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), 0), 1) < 400f)
			{
				if (!Global_25185)
				{
					unk_0x80650551CC58C784("AC_EN_ROUTE_CULT");
					Global_25185 = 1;
					if (!Global_25184)
					{
						Global_25184 = 1;
						return 1;
					}
				}
			}
			else if (Global_25185)
			{
				unk_0x80650551CC58C784("AC_LEFT_AREA");
				Global_25185 = 0;
			}
		}
	}
	return 0;
}

int func_125(struct<3> Param0)
{
	if (func_8() == 2)
	{
		if (func_52() && !Global_25183)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Param0) > (fLocal_46 + 200f) || unk_0x0D6E79537424BACE(-1014.154f, 4881.411f, 245.0001f, unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), 0), 1) < 400f)
			{
				Global_25183 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_126()
{
	if (!func_111())
	{
		func_109(1);
	}
	if (!func_54())
	{
		switch (iLocal_107)
		{
			case 0:
				if (iLocal_59 == 1)
				{
					iLocal_109 = unk_0x48E480685981C7D4();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = unk_0x48E480685981C7D4();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x48E480685981C7D4() + 2000;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = unk_0x48E480685981C7D4();
				}
				iLocal_107++;
				break;
			
			case 1:
				if (iLocal_109 < unk_0x48E480685981C7D4())
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
				if (iLocal_109 < unk_0x48E480685981C7D4())
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
					iLocal_109 = unk_0x48E480685981C7D4();
				}
				else if (iLocal_59 == 2)
				{
					iLocal_109 = unk_0x48E480685981C7D4();
				}
				else if (iLocal_59 == 3)
				{
					iLocal_109 = unk_0x48E480685981C7D4() + 500;
				}
				else if (iLocal_59 == 5)
				{
					iLocal_109 = unk_0x48E480685981C7D4();
				}
				iLocal_107++;
				break;
			
			case 4:
				if (iLocal_109 < unk_0x48E480685981C7D4())
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
					iLocal_109 = unk_0x48E480685981C7D4() + 700;
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
					iLocal_109 = unk_0x48E480685981C7D4() + 300;
				}
				iLocal_107++;
				break;
			
			case 21:
				if (iLocal_109 < unk_0x48E480685981C7D4())
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
				if (!unk_0x5FEB513A4402FD59(iLocal_84))
				{
					unk_0x31C1393E4ACFD794(iLocal_84, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0, 0, 0, 0);
				}
				iLocal_107++;
				break;
			}
	}
}

void func_127()
{
	if (iLocal_59 != 3)
	{
		if (func_130())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_92, 3f, 3f, 2f, 1, 1, 0) && unk_0x515B65C19A5CA9B1(iLocal_84, Local_92, Global_19, 0, 1, 0))
				{
					if (func_129(1, 0, 1))
					{
						func_128();
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
						{
							unk_0xE4DF2496E641851E(unk_0x2ADE2CEED2637E95(), (10.5f + 2f), 3, 0);
						}
						unk_0x4191220706130B86(iLocal_84);
						iLocal_58 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_111)
	{
		if (unk_0x5FEB513A4402FD59(iLocal_85))
		{
			iLocal_58 = 7;
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_84))
		{
			if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, 0, 1, 0) || (unk_0x515B65C19A5CA9B1(iLocal_84, 824.8886f, 1275.671f, 359.4312f, Global_19, 1, 1, 0) && unk_0x8D28631AAAEFC957(iLocal_84, unk_0x81873881071CD9FE(), 8f, 8f, 8f, 0, 1, 0)))
			{
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_194, cLocal_177, "REHH3_CHT10", 4, 0, 0, 0);
				if (!unk_0x5FEB513A4402FD59(iLocal_84) && !unk_0x5FEB513A4402FD59(iLocal_85))
				{
					if (unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
					{
						unk_0x4191220706130B86(iLocal_84);
						unk_0xEAD984C2869B8B7C(&uLocal_88);
						unk_0xF64D185C5B88AF31(0);
						unk_0xAF625598EDA64AD3(0, iLocal_85, -1, 2052, 4);
						unk_0x98046F3D16B9CF76(0, 500, 0);
						unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, 5f, 1f, 1073741824, 0);
						unk_0x31C1393E4ACFD794(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0, 0, 0, 0);
						unk_0xF88735A9354A45F3(0, iLocal_85, -1);
						unk_0x56D9ED1541046AF6(uLocal_88);
						unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
						unk_0xA3561415EB3DA3A3(&uLocal_88);
					}
				}
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
					{
						unk_0xE4DF2496E641851E(unk_0x2ADE2CEED2637E95(), (10.5f + 2f), 2, 0);
					}
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_58 = 6;
			}
		}
	}
}

void func_128()
{
	Global_14559 = 0;
	func_16();
}

int func_129(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x4DA8CC792B3D5CB0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (bParam0)
		{
			if (unk_0x930F8FBB8E9537CC(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x930F8FBB8E9537CC(iVar0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) != unk_0x81873881071CD9FE())
				{
					return 0;
				}
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xCADEFB8A5B164C68(iVar0) < 0.95f || unk_0xCADEFB8A5B164C68(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	return 1;
}

int func_130()
{
	if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
	{
		if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0x58A69336FE7307D8(iLocal_84, unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_92, 50f, 50f, 50f, 0, 1, 0) && !unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if (!unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_131()
{
	if (bLocal_113)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_85))
		{
			if ((((unk_0x5FEB513A4402FD59(iLocal_85) || !unk_0x8D28631AAAEFC957(iLocal_85, unk_0x81873881071CD9FE(), 150f, 150f, 150f, 0, 1, 0)) || unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_92) < 250f) || unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_96) < 250f) || iLocal_115)
			{
				if (unk_0xFBACB273AA628CC5(uLocal_121))
				{
					unk_0x0A8175F24237A3D4(&uLocal_121);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_122))
				{
					unk_0x0A8175F24237A3D4(&uLocal_122);
				}
				if (!unk_0x5FEB513A4402FD59(iLocal_85))
				{
					unk_0x832B749856D487BE(iLocal_85, 6, 0, 0);
					unk_0x754376E2234CBB4A(iLocal_85, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
					unk_0x71A8BCA218722FA1(&iLocal_85);
				}
				func_48();
				unk_0x4EDE34FBADD967A6(0);
				func_1(&uLocal_194, cLocal_177, "REHH5_CHT2", 4, 0, 0, 0);
				unk_0x71A8BCA218722FA1(&iLocal_85);
				if (unk_0x86CCCD2FAE9D5E65(iLocal_170))
				{
					unk_0xE0913C01F5C0CC3D(&iLocal_170);
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
				if (!unk_0x5FEB513A4402FD59(iLocal_85))
				{
					func_139(&iLocal_85, &uLocal_121, &iLocal_170, &uLocal_122);
					func_138(&iLocal_85, &uLocal_121, &iLocal_170, &uLocal_122);
					func_132(iLocal_170, unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), &uLocal_184, &uLocal_187, &Local_189, &uLocal_188, &uLocal_192, 0f, 0f, 0f, 1500, 0f);
					if (unk_0x8D28631AAAEFC957(iLocal_85, unk_0x81873881071CD9FE(), 30f, 30f, 30f, 0, 1, 0))
					{
						if (iLocal_108 < unk_0x48E480685981C7D4())
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
								iLocal_108 = unk_0x48E480685981C7D4() + 8000;
							}
						}
						if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
						{
							if (!func_112("REHH5_SHO"))
							{
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								func_1(&uLocal_194, cLocal_177, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()) && !unk_0x5FEB513A4402FD59(iLocal_85))
						{
							if ((unk_0x25CC8E51B72F474F(iLocal_85) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 4)) && unk_0xC4F63EDDAFD0C636(unk_0x1329891157A54C63()))
							{
								iLocal_115 = 1;
							}
						}
					}
					if (!iLocal_114 && !unk_0x5FEB513A4402FD59(iLocal_85))
					{
						if (unk_0x7E0C455D8C091153(unk_0x81873881071CD9FE()) && unk_0x8D28631AAAEFC957(iLocal_85, unk_0x81873881071CD9FE(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x633A554EB6BC4E71(iLocal_85, unk_0x81873881071CD9FE(), 0, 16);
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

void func_132(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		if (((((((unk_0x86CCCD2FAE9D5E65(iParam1) && iParam0 != iParam1) && !unk_0x9F59BCFFFEAAD4B1(unk_0x14B7103DBD149FFE(iParam1))) && !unk_0x1699D7B95446F15C(unk_0x14B7103DBD149FFE(iParam1))) && !unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(iParam1))) && !unk_0xE4CD4B212196D2C5(unk_0x14B7103DBD149FFE(iParam1))) && unk_0x653781B2157A929D(iParam1)) && func_137(iParam0))
		{
			if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { unk_0x957F1AE07A974C5E(*uParam2, *uParam3, Param7) };
				*uParam3 = func_136(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0xB6AE0DAE06D56288(iParam1, 1));
				func_135(iParam1, uParam4, uParam5);
			}
			if (!unk_0x895C275673BCEAB0(iParam0))
			{
				*uParam6 = unk_0x48E480685981C7D4();
			}
			else if ((unk_0x48E480685981C7D4() - *uParam6) > iParam10)
			{
				if (func_134(iParam0, iParam1, 1) > fParam11 && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_133(*uParam2))
					{
						if (!unk_0x547A2AA158CA2804(*uParam2, 3f))
						{
							unk_0x984F8E3A66FFFEE5(*uParam2, 1.5f, 0);
							unk_0xA450601E968044DB(*uParam2, 3f, 0, 0, 0, 0, 0);
							unk_0xB067093BBAF0A747(iParam0, *uParam2, 1, 0, 0, 1);
							unk_0xC24172029826A66F(iParam0, *uParam3);
							unk_0x5CC9D6711FE01F0D(iParam0);
							unk_0x3D24414865131CB8(iParam0, 10f);
							unk_0x686D6CDC14C4BA6C(iParam0, 1, 1);
							*uParam6 = unk_0x48E480685981C7D4();
						}
						else
						{
							Var0 = { unk_0x957F1AE07A974C5E(Local_189, uLocal_188, Param7) };
							if (!func_133(Var0))
							{
								if (!unk_0x547A2AA158CA2804(Var0, 2f))
								{
									unk_0x984F8E3A66FFFEE5(Var0, 1.5f, 0);
									unk_0xA450601E968044DB(Var0, 3f, 0, 0, 0, 0, 0);
									unk_0xB067093BBAF0A747(iParam0, Var0, 1, 0, 0, 1);
									unk_0xC24172029826A66F(iParam0, uLocal_188);
									unk_0x5CC9D6711FE01F0D(iParam0);
									unk_0x3D24414865131CB8(iParam0, 10f);
									unk_0x686D6CDC14C4BA6C(iParam0, 1, 1);
									*uParam6 = unk_0x48E480685981C7D4();
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
			*uParam6 = unk_0x48E480685981C7D4();
		}
	}
}

int func_133(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_134(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

void func_135(int iParam0, var uParam1, var uParam2)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			*uParam1 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
			*uParam2 = unk_0x3306AAAFE3B25098(iParam0);
		}
	}
}

var func_136(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x097CA9356FED843D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			if (!unk_0xBEB00EB4ADDC2A33(iParam0, -1))
			{
				iVar0 = unk_0xB0B9E53CEFDB16AA(iParam0, -1);
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					if (!unk_0x930F8FBB8E9537CC(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_138(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (unk_0x86CCCD2FAE9D5E65(*iParam2))
	{
		if (unk_0x7404950238A154C2(*iParam2, 0))
		{
			if (!unk_0x5FEB513A4402FD59(*iParam0))
			{
				if (unk_0x04C377C10639B842(*iParam0, *iParam2, 0))
				{
					if (unk_0xFBACB273AA628CC5(*uParam1))
					{
						unk_0x0A8175F24237A3D4(uParam1);
					}
					iVar0 = 1;
				}
				else if (!unk_0xFBACB273AA628CC5(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
			if (!unk_0xFBACB273AA628CC5(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_118(unk_0xB6AE0DAE06D56288(*iParam2, 1), 0);
					unk_0x1B86E7A8766EA6B4(*uParam3, 1);
					unk_0xCB015C3E2E01CA1C(*uParam3, 9);
					unk_0x2AB7C42FF2AF476D(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { unk_0x3BB744083EDD3FF5(*uParam3) };
				Var4 = { unk_0xB6AE0DAE06D56288(*iParam2, 1) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * unk_0x0000000050597EE2()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * unk_0x0000000050597EE2()));
				unk_0x8F0CD34B4BFF4767(*uParam3, Var1);
				if (iVar0 == 0)
				{
					unk_0x0A8175F24237A3D4(uParam3);
				}
			}
		}
		else
		{
			if (unk_0xFBACB273AA628CC5(*uParam3))
			{
				unk_0x0A8175F24237A3D4(uParam3);
			}
			if (!unk_0x5FEB513A4402FD59(*iParam0))
			{
				if (!unk_0xFBACB273AA628CC5(*uParam1))
				{
					*uParam1 = func_63(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_139(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(*iParam0))
	{
		if (unk_0x5FEB513A4402FD59(*iParam0))
		{
			if (unk_0xFBACB273AA628CC5(*uParam1))
			{
				unk_0x0A8175F24237A3D4(uParam1);
			}
			unk_0x71A8BCA218722FA1(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!unk_0xE5AB05962FA1FF3F(*iParam0, 0))
			{
			}
			else if (unk_0x86CCCD2FAE9D5E65(*iParam2))
			{
				if (unk_0x7404950238A154C2(*iParam2, 0))
				{
					if (unk_0x04C377C10639B842(*iParam0, *iParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(*iParam2))
	{
		if (unk_0x7404950238A154C2(*iParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				unk_0x298028A164A4361E(*iParam2);
				unk_0x3DD8579AB91A77D6(*iParam2);
				unk_0xA5F9A8EE8A45DD7E(*iParam2, 0);
				unk_0xE0913C01F5C0CC3D(iParam2);
				if (unk_0xFBACB273AA628CC5(*uParam3))
				{
					unk_0x0A8175F24237A3D4(uParam3);
				}
			}
		}
		else
		{
			unk_0x298028A164A4361E(*iParam2);
			unk_0x3DD8579AB91A77D6(*iParam2);
			unk_0xA5F9A8EE8A45DD7E(*iParam2, 0);
			unk_0xE0913C01F5C0CC3D(iParam2);
			if (unk_0xFBACB273AA628CC5(*uParam3))
			{
				unk_0x0A8175F24237A3D4(uParam3);
			}
		}
	}
}

void func_140()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_85))
	{
		if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(iLocal_85, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, 0, 1, 0))
		{
			if (unk_0x667A6FB4A24C8B47(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xBF4F29C80C79D83C(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
			}
			if (unk_0x667A6FB4A24C8B47(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xBF4F29C80C79D83C(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
			}
		}
		else
		{
			if (unk_0x667A6FB4A24C8B47(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xBF4F29C80C79D83C(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
			}
			if (unk_0x667A6FB4A24C8B47(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
			{
				unk_0xBF4F29C80C79D83C(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 1, 0f, 0);
			}
		}
	}
}

void func_141()
{
	if (!bLocal_111)
	{
		if (iLocal_59 == 3)
		{
			if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_103, 200f, 200f, 200f, 0, 1, 0))
			{
				unk_0x32A12757CBF48A33(iLocal_100);
				unk_0xF147E5A343BAF150("move_m@brave");
				if (unk_0x33ACB874CECA2D4B(iLocal_100) && unk_0xDBB20E5B224C075C("move_m@brave"))
				{
					iLocal_85 = unk_0x206897C6DBC12488(26, iLocal_100, Local_103, fLocal_106, 1, 1);
					unk_0x03F73D35E5AC583A(iLocal_85, 0, 2, 1, 0);
					unk_0x03F73D35E5AC583A(iLocal_85, 3, 0, 2, 0);
					unk_0x1D15D99A10A15334(iLocal_85, 1);
					unk_0xCE566DBDCACD245E(iLocal_85, 42, 1);
					unk_0xCF01B06C83451A7F(iLocal_85, 1);
					unk_0x350B20EBD616FAD8(iLocal_85, "move_m@brave", 1048576000);
					unk_0xCE566DBDCACD245E(iLocal_85, 137, 1);
					func_145(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
					unk_0x31C1393E4ACFD794(iLocal_85, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0xAF625598EDA64AD3(iLocal_85, unk_0x81873881071CD9FE(), -1, 2052, 4);
					unk_0x887F4488DA99FD21(iLocal_100);
					bLocal_111 = true;
				}
			}
		}
		else if (iLocal_59 == 5)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_78, 1) > 320f && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if (unk_0x04C377C10639B842(iLocal_84, unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
					{
						if (unk_0x6FF90B691E3204B1(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0x2E0A9E3291F398E3(2, 5), &Local_65, 1, 1077936128, 0))
						{
							if (!unk_0x547A2AA158CA2804(Local_65, 7f) && unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_65) < 110f)
							{
								unk_0x32A12757CBF48A33(iLocal_100);
								if (unk_0x33ACB874CECA2D4B(iLocal_100))
								{
									func_55();
									unk_0x4EDE34FBADD967A6(0);
									if (func_144(&uLocal_194, cLocal_177, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !unk_0x5FEB513A4402FD59(iLocal_84))
									{
										iLocal_170 = unk_0xE00F8DEA9778FC87(iLocal_101, Local_65, func_142(Local_65, func_143(unk_0x1329891157A54C63()), 1), 1, 1);
										unk_0xFD021BAF9614D437(iLocal_170, 134, 134);
										unk_0xA0E7470F98EF901A(iLocal_170, 0f);
										iLocal_85 = unk_0x4D135F3066A9BF9C(iLocal_170, 26, iLocal_100, -1, 1, 1);
										unk_0x03F73D35E5AC583A(iLocal_85, 0, 1, 1, 0);
										unk_0x03F73D35E5AC583A(iLocal_85, 2, 1, 0, 0);
										unk_0xCE566DBDCACD245E(iLocal_85, 42, 1);
										unk_0xC9E1121219C75417(iLocal_85, 1);
										func_145(&uLocal_194, 4, iLocal_85, sLocal_179, 0, 1);
										unk_0x5CC9D6711FE01F0D(iLocal_170);
										unk_0xEFACB1875068FA30(iLocal_85, iLocal_170, iLocal_84, 6, 60f, 786468, -1f, -1f, 1);
										unk_0x633A554EB6BC4E71(iLocal_85, unk_0x81873881071CD9FE(), 0, 16);
										unk_0x6CB332CB31E9FA96(iLocal_85, 1);
										unk_0x887F4488DA99FD21(iLocal_100);
										unk_0x887F4488DA99FD21(iLocal_101);
										unk_0x3D24414865131CB8(iLocal_170, (unk_0xA04824262F150982(unk_0x81873881071CD9FE()) + 15f));
										if (unk_0xFBACB273AA628CC5(uLocal_82))
										{
											unk_0x0A8175F24237A3D4(&uLocal_82);
										}
										func_55();
										while (func_54())
										{
											unk_0x4EDE34FBADD967A6(0);
										}
										func_113(&uLocal_194, cLocal_177, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
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

float func_142(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x43A2E703A9A654DB(fVar1, fVar2);
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

Vector3 func_143(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_144(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
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

void func_145(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

void func_146()
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

void func_147()
{
	iLocal_154 = func_152(func_153()) * 1000;
	iLocal_154 = (iLocal_154 + func_151(func_153()) * 1000 * 60);
	if (!iLocal_163)
	{
		if ((iLocal_173 >= 24 && iLocal_154 < 150000) || (iLocal_173 >= 24 && iLocal_154 < 150000))
		{
			func_148((((iLocal_173 * 1000 * 60 - func_151(func_153()) * 1000 * 60) + (iLocal_172 * 1000 - func_152(func_153()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
		else
		{
			func_148(((iLocal_173 * 1000 * 60 - func_151(func_153()) * 1000 * 60) + (iLocal_172 * 1000 - func_152(func_153()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((iLocal_173 >= 24 && iLocal_154 < 150000) || (iLocal_173 >= 24 && iLocal_154 < 150000))
	{
		func_148((((iLocal_173 * 1000 * 60 - func_151(func_153()) * 1000 * 60) + (iLocal_172 * 1000 - func_152(func_153()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	else
	{
		func_148(((iLocal_173 * 1000 * 60 - func_151(func_153()) * 1000 * 60) + (iLocal_172 * 1000 - func_152(func_153()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	if ((iLocal_173 == func_151(func_153()) + 1 && iLocal_172 == func_152(func_153())) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_151(func_153()) + 25) && iLocal_172 == func_152(func_153())))
	{
		if (!iLocal_162)
		{
			if (!func_112("REHH1_1HOUR") && !func_112("REHH4_1HOUR"))
			{
				func_109(0);
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
		if ((iLocal_173 == func_151(func_153()) && iLocal_172 == func_152(func_153()) + 30) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_151(func_153()) + 24) && iLocal_172 == func_152(func_153()) + 30))
		{
			if (!iLocal_163)
			{
				if (!func_112("REHH1_HHOUR") && !func_112("REHH4_HHOUR"))
				{
					func_109(0);
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
					uLocal_176 = unk_0xEDDCCC3D357A50F8();
					unk_0x35D7948F61AA3FEC(uLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0xBAF887AF0EAEA412(iLocal_176, "countdown_fadein", 35f);
					unk_0xF2A6D4C99549CA85("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == func_151(func_153()) && iLocal_172 == func_152(func_153()) + 5) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_151(func_153()) + 24) && iLocal_172 == func_152(func_153()) + 5))
		{
			if (!iLocal_165)
			{
				unk_0xBAF887AF0EAEA412(iLocal_176, "countdown_fast", 1f);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_172 == 0)
	{
		if ((iLocal_173 == func_151(func_153()) + 1 && iLocal_172 == (func_152(func_153()) - 30)) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_151(func_153()) + 25) && iLocal_172 == (func_152(func_153()) - 30)))
		{
			if (!iLocal_163)
			{
				if (!func_112("REHH1_HHOUR") && !func_112("REHH4_HHOUR"))
				{
					func_109(0);
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
					iLocal_176 = unk_0xEDDCCC3D357A50F8();
					unk_0x35D7948F61AA3FEC(iLocal_176, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, 1);
					unk_0xBAF887AF0EAEA412(iLocal_176, "countdown_fadein", 35f);
					unk_0xF2A6D4C99549CA85("TIMER_SCENE");
					iLocal_164 = 1;
				}
			}
		}
		if ((iLocal_173 == func_151(func_153()) + 1 && iLocal_172 == (func_152(func_153()) - 55)) || (((iLocal_173 >= 24 && iLocal_154 < 150000) && iLocal_173 == func_151(func_153()) + 25) && iLocal_172 == (func_152(func_153()) - 55)))
		{
			if (!iLocal_165)
			{
				unk_0xBAF887AF0EAEA412(iLocal_176, "countdown_fast", 1f);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_173 >= 24 && iLocal_154 < 150000)
	{
		if (iLocal_173 == func_151(func_153()) + 24 && iLocal_172 == func_152(func_153()))
		{
			bLocal_174 = true;
		}
	}
	else if (iLocal_173 == func_151(func_153()) && iLocal_172 == func_152(func_153()))
	{
		bLocal_174 = true;
	}
	if (bLocal_174)
	{
		func_48();
		unk_0x4EDE34FBADD967A6(0);
		unk_0x98A5E5B909F1B162(iLocal_176);
		unk_0x0C22E352114F699C("TIMER_SCENE");
		if (iLocal_59 == 1)
		{
			func_1(&uLocal_194, cLocal_177, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!unk_0x5FEB513A4402FD59(iLocal_84))
		{
			if (unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
			{
				unk_0xE4DF2496E641851E(unk_0xE68E6B44DABA9C05(iLocal_84, 0), (10.5f + 2f), 2, 0);
				unk_0x98046F3D16B9CF76(iLocal_84, 1, 0);
				unk_0x6EC15FE0ADD3E99C(iLocal_84);
				if (unk_0xFBACB273AA628CC5(uLocal_82))
				{
					unk_0x0A8175F24237A3D4(&uLocal_82);
				}
			}
		}
		iLocal_58 = 9;
	}
}

void func_148(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_150(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_149(7, iVar0);
		Global_1336084.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3911.f_172[iVar0] = iParam2;
		Global_1336084.f_3911.f_216[iVar0] = iParam3;
		Global_1336084.f_3911.f_183[iVar0] = iParam4;
		Global_1336084.f_3911.f_194[iVar0] = iParam5;
		Global_1336084.f_3911.f_249[iVar0] = iParam6;
		Global_1336084.f_3911.f_260[iVar0] = iParam7;
		Global_1336084.f_3911.f_205[iVar0] = iParam8;
		Global_1336084.f_3911.f_314[iVar0] = iParam9;
		Global_1336084.f_3911.f_325[iVar0] = iParam10;
		Global_1336084.f_3911.f_357[iVar0] = iParam11;
		Global_1336084.f_3911.f_238[iVar0] = iParam12;
		Global_1336084.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_149(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_150(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

int func_151(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_152(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_153()
{
	var uVar0;
	
	func_163(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_162(&uVar0, unk_0x25B31B877207A3A9());
	func_161(&uVar0, unk_0x0C937048CF6952B5());
	func_156(&uVar0, unk_0x8B6B3DD84CE74978());
	func_155(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_154(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_154(var uParam0, int iParam1)
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

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_160(*uParam0);
	iVar1 = func_158(*uParam0);
	if (iParam1 < 1 || iParam1 > func_157(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_157(int iParam0, int iParam1)
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

int func_158(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_159(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_159(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_160(int iParam0)
{
	return iParam0 & 15;
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_163(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_164()
{
	if (!unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if (unk_0x7404950238A154C2(unk_0x2ADE2CEED2637E95(), 0))
		{
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), unk_0x2ADE2CEED2637E95(), 0) && unk_0x04C377C10639B842(iLocal_84, unk_0x2ADE2CEED2637E95(), 0))
			{
				if (unk_0xFBACB273AA628CC5(uLocal_120))
				{
					unk_0x0A8175F24237A3D4(&uLocal_120);
				}
				if (!unk_0xCD67A1A6022640ED(iLocal_84))
				{
					unk_0xABED360AB1F46D3D(iLocal_84, func_108());
					unk_0x64ACA71A49AA111C(iLocal_84, 1);
					unk_0x2DA3CE5ACB2F30AC(iLocal_84, 0);
				}
				if (!unk_0xFBACB273AA628CC5(uLocal_82))
				{
					uLocal_82 = func_118(Local_92, 1);
				}
				if (((func_8() == 2 && !func_51()) && iLocal_59 != 1) && iLocal_59 != 4)
				{
					if (!unk_0xFBACB273AA628CC5(uLocal_83))
					{
						uLocal_83 = func_118(Local_96, 0);
						unk_0x8F827BB0F6ED7AA8(uLocal_83, 269);
						func_165();
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
						iLocal_173 = func_151(func_153()) + 2;
						if (func_152(func_153()) >= 30)
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

void func_165()
{
	if (func_8() == 2)
	{
		if (!Global_25182)
		{
			func_166("CULT_BLIP_HELP", -1);
			Global_25182 = 1;
		}
	}
}

void func_166(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

void func_167()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (iLocal_109 < unk_0x48E480685981C7D4())
				{
					func_1(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0);
					iLocal_109 = (unk_0x48E480685981C7D4() + unk_0x2E0A9E3291F398E3(4500, 6500));
				}
				if (unk_0x598CCC94D95857D9(iLocal_84, unk_0x81873881071CD9FE(), 90f))
				{
					if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 24f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
					{
						fLocal_183 = func_134(iLocal_84, unk_0x81873881071CD9FE(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0xEAD984C2869B8B7C(&uLocal_88);
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
						unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, fLocal_183, 2f, 1073741824, 0);
						unk_0x56D9ED1541046AF6(uLocal_88);
						unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
						unk_0xA3561415EB3DA3A3(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 12f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
				{
					fLocal_183 = func_134(iLocal_84, unk_0x81873881071CD9FE(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, fLocal_183, 2f, 1073741824, 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0xFBACB273AA628CC5(uLocal_120))
			{
				unk_0x3C8D013C840ADA0A(uLocal_120, 1);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_84, 5000, 2052, 2);
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x7404950238A154C2(iLocal_86, 0))
					{
						if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 25f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
						{
							if (unk_0x598CCC94D95857D9(iLocal_84, unk_0x81873881071CD9FE(), 150f))
							{
								unk_0x4191220706130B86(iLocal_84);
								unk_0xEAD984C2869B8B7C(&uLocal_88);
								unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 4);
								if (unk_0xBEB00EB4ADDC2A33(iLocal_86, 0))
								{
									unk_0xEA0CAED3D5D8B8E4(0, iLocal_86, -1, 0, 2f);
								}
								unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
								unk_0x56D9ED1541046AF6(uLocal_88);
								unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
								unk_0xA3561415EB3DA3A3(&uLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (!unk_0x5FEB513A4402FD59(iLocal_84) && unk_0x7404950238A154C2(iLocal_86, 0))
				{
					if (func_134(iLocal_84, iLocal_86, 1) < 25f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
					{
						if (unk_0xA04824262F150982(iLocal_86) < 2.5f)
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_84))
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0x8D28631AAAEFC957(iLocal_84, unk_0x81873881071CD9FE(), 3f, 3f, 3f, 0, 1, 0))
				{
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
				}
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x7404950238A154C2(iLocal_86, 0))
					{
						if (unk_0xA04824262F150982(iLocal_86) < 2.5f && func_169(iLocal_84, unk_0x81873881071CD9FE()) < 25f)
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && func_169(iLocal_84, unk_0x81873881071CD9FE()) < 25f)
				{
					if (func_114())
					{
						if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
						{
							if (unk_0xBEB00EB4ADDC2A33(unk_0x2ADE2CEED2637E95(), 0))
							{
								unk_0xABED360AB1F46D3D(iLocal_84, func_108());
								unk_0x64ACA71A49AA111C(iLocal_84, 1);
								unk_0x2DA3CE5ACB2F30AC(iLocal_84, 0);
								unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 10000, 2052, 2);
								unk_0x3C3A95141D01773E(iLocal_84, unk_0x2ADE2CEED2637E95(), -1, 0, 2f, 1, 0);
								func_168();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xB0B9E53CEFDB16AA(unk_0x2ADE2CEED2637E95(), 0);
								if (unk_0x5FEB513A4402FD59(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x27CC98B7C879C320(iLocal_84);
									unk_0xABED360AB1F46D3D(iLocal_84, func_108());
									unk_0x64ACA71A49AA111C(iLocal_84, 1);
									unk_0x2DA3CE5ACB2F30AC(iLocal_84, 1);
									unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!func_54())
						{
							if (!func_174())
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (func_114())
				{
					if (unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
					{
						unk_0xF64D185C5B88AF31(iLocal_84);
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
					if (func_169(iLocal_84, unk_0x81873881071CD9FE()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_84);
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					iLocal_139 = 4;
				}
			}
			break;
	}
}

void func_168()
{
	if (!func_51())
	{
		if (func_8() == 2)
		{
			Global_25180 = 1;
		}
	}
}

float func_169(int iParam0, int iParam1)
{
	return func_134(iParam0, iParam1, 1);
}

void func_170()
{
	int iVar0;
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0x598CCC94D95857D9(iLocal_84, unk_0x81873881071CD9FE(), 90f))
				{
					if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 12f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
					{
						fLocal_183 = func_134(iLocal_84, unk_0x81873881071CD9FE(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0x4191220706130B86(iLocal_84);
						unk_0xEAD984C2869B8B7C(&uLocal_88);
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
						unk_0x874614DC82BB9C8A(0, unk_0x81873881071CD9FE(), 2.5f, 0f, 0f, 1f, 5000, 1036831949, 1);
						unk_0x56D9ED1541046AF6(uLocal_88);
						unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
						unk_0xA3561415EB3DA3A3(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 8f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
				{
					fLocal_183 = func_134(iLocal_84, unk_0x81873881071CD9FE(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, fLocal_183, 1f, 1073741824, 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0xFBACB273AA628CC5(uLocal_120))
			{
				unk_0x3C8D013C840ADA0A(uLocal_120, 1);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_84, 5000, 2052, 2);
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x7404950238A154C2(iLocal_86, 0))
					{
						if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 10f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
						{
							if (unk_0x598CCC94D95857D9(iLocal_84, unk_0x81873881071CD9FE(), 150f))
							{
								unk_0x4191220706130B86(iLocal_84);
								unk_0xEAD984C2869B8B7C(&uLocal_88);
								unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 4);
								if (unk_0xBEB00EB4ADDC2A33(iLocal_86, 0))
								{
									unk_0xEA0CAED3D5D8B8E4(0, iLocal_86, -1, 0, 1f);
								}
								unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
								unk_0x56D9ED1541046AF6(uLocal_88);
								unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
								unk_0xA3561415EB3DA3A3(&uLocal_88);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (!unk_0x5FEB513A4402FD59(iLocal_84) && unk_0x7404950238A154C2(iLocal_86, 0))
				{
					if (func_134(iLocal_84, iLocal_86, 1) < 13f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
					{
						if (unk_0xA04824262F150982(iLocal_86) < 2.5f)
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_84))
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0x463E18F5BBDEA9C4(iLocal_84))
				{
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
				}
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x7404950238A154C2(iLocal_86, 0))
					{
						if (unk_0xA04824262F150982(iLocal_86) < 2.5f && func_169(iLocal_84, unk_0x81873881071CD9FE()) < 15f)
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && func_169(iLocal_84, unk_0x81873881071CD9FE()) < 15f)
				{
					if (func_114())
					{
						if (unk_0x7404950238A154C2(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
						{
							if (unk_0xBEB00EB4ADDC2A33(unk_0x2ADE2CEED2637E95(), 0))
							{
								unk_0xABED360AB1F46D3D(iLocal_84, func_108());
								unk_0x64ACA71A49AA111C(iLocal_84, 1);
								unk_0x2DA3CE5ACB2F30AC(iLocal_84, 0);
								unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 10000, 2052, 2);
								unk_0x3C3A95141D01773E(iLocal_84, unk_0x2ADE2CEED2637E95(), -1, 0, 1f, 1, 0);
								func_168();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xB0B9E53CEFDB16AA(unk_0x2ADE2CEED2637E95(), 0);
								if (unk_0x5FEB513A4402FD59(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x27CC98B7C879C320(iLocal_84);
									unk_0xABED360AB1F46D3D(iLocal_84, func_108());
									unk_0x64ACA71A49AA111C(iLocal_84, 1);
									unk_0x2DA3CE5ACB2F30AC(iLocal_84, 1);
									unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!func_54())
						{
							if (!func_174())
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (func_114())
				{
					unk_0x99E525B7A12DCDBE(iLocal_84, 1f);
					if (unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
					{
						unk_0xF64D185C5B88AF31(iLocal_84);
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
					if (func_169(iLocal_84, unk_0x81873881071CD9FE()) > 100f)
					{
						func_53();
					}
				}
				else
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_84);
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					iLocal_139 = 4;
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0x598CCC94D95857D9(iLocal_84, unk_0x81873881071CD9FE(), 90f))
				{
					if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 12f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
					{
						fLocal_183 = func_134(iLocal_84, unk_0x81873881071CD9FE(), 1);
						if (fLocal_183 > 5f)
						{
							fLocal_183 = (fLocal_183 - 1f);
						}
						else
						{
							fLocal_183 = (fLocal_183 - 0.5f);
						}
						unk_0xEAD984C2869B8B7C(&uLocal_88);
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
						unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, fLocal_183, 1f, 1073741824, 0);
						unk_0x56D9ED1541046AF6(uLocal_88);
						unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
						unk_0xA3561415EB3DA3A3(&uLocal_88);
						iLocal_139++;
					}
				}
				else if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 8f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
				{
					fLocal_183 = func_134(iLocal_84, unk_0x81873881071CD9FE(), 1);
					fLocal_183 = (fLocal_183 - 0.25f);
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0x65C82688BA49CA39(0, unk_0x81873881071CD9FE(), -1, fLocal_183, 1f, 1073741824, 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					iLocal_139++;
				}
			}
			break;
		
		case 1:
			if (unk_0xFBACB273AA628CC5(uLocal_120))
			{
				unk_0x3C8D013C840ADA0A(uLocal_120, 1);
			}
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_84, 5000, 2052, 2);
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x7404950238A154C2(iLocal_86, 0))
					{
						if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 10f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
						{
							if (unk_0x598CCC94D95857D9(iLocal_84, unk_0x81873881071CD9FE(), 150f))
							{
								unk_0x4191220706130B86(iLocal_84);
								unk_0xEAD984C2869B8B7C(&uLocal_88);
								unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
								if (unk_0xBEB00EB4ADDC2A33(iLocal_86, 0))
								{
									unk_0xEA0CAED3D5D8B8E4(0, iLocal_86, -1, 0, 1f);
								}
								unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
								unk_0x56D9ED1541046AF6(uLocal_88);
								unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
								unk_0xA3561415EB3DA3A3(&uLocal_88);
								func_48();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_139++;
							}
						}
					}
				}
				else if (!iLocal_140)
				{
					unk_0x27CC98B7C879C320(iLocal_84);
					unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 7000, 2052, 2);
					if (func_1(&uLocal_194, cLocal_177, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_140 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (!unk_0x5FEB513A4402FD59(iLocal_84) && unk_0x7404950238A154C2(iLocal_86, 0))
				{
					if (func_134(iLocal_84, iLocal_86, 1) < 13f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
					{
						if (unk_0xA04824262F150982(iLocal_86) < 2.5f)
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_84))
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0x463E18F5BBDEA9C4(iLocal_84))
				{
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
				}
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0x7404950238A154C2(iLocal_86, 0))
					{
						if (unk_0xA04824262F150982(iLocal_86) < 2.5f && func_169(iLocal_84, unk_0x81873881071CD9FE()) < 15f)
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && func_169(iLocal_84, unk_0x81873881071CD9FE()) < 15f)
				{
					if (func_114())
					{
						iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						if (unk_0x7404950238A154C2(iLocal_86, 0))
						{
							if (unk_0xBEB00EB4ADDC2A33(unk_0x2ADE2CEED2637E95(), 0))
							{
								unk_0xABED360AB1F46D3D(iLocal_84, func_108());
								unk_0x64ACA71A49AA111C(iLocal_84, 1);
								unk_0x2DA3CE5ACB2F30AC(iLocal_84, 0);
								unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 10000, 2052, 2);
								unk_0x3C3A95141D01773E(iLocal_84, unk_0x2ADE2CEED2637E95(), -1, 0, 1f, 1, 0);
								func_168();
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xB0B9E53CEFDB16AA(unk_0x2ADE2CEED2637E95(), 0);
								if (unk_0x5FEB513A4402FD59(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x27CC98B7C879C320(iLocal_84);
									unk_0xABED360AB1F46D3D(iLocal_84, func_108());
									unk_0x64ACA71A49AA111C(iLocal_84, 1);
									unk_0x2DA3CE5ACB2F30AC(iLocal_84, 1);
									unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
					}
					else if (!iLocal_141)
					{
						if (!func_54())
						{
							if (!func_174())
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (!iLocal_102)
				{
					if (unk_0x8D28631AAAEFC957(iLocal_84, unk_0x81873881071CD9FE(), 3f, 3f, 3f, 0, 1, 0))
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
				if (func_114())
				{
					unk_0x99E525B7A12DCDBE(iLocal_84, 1f);
					if (unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
					{
						unk_0xF64D185C5B88AF31(iLocal_84);
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
					unk_0x6EC15FE0ADD3E99C(iLocal_84);
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					iLocal_139 = 4;
				}
				if (func_169(iLocal_84, unk_0x81873881071CD9FE()) > 100f)
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
	
	switch (iLocal_139)
	{
		case 0:
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (func_169(unk_0x81873881071CD9FE(), iLocal_84) < 12f || (unk_0xE4E020F60ADEECA5(unk_0x1329891157A54C63()) && func_169(unk_0x81873881071CD9FE(), iLocal_84) < 30f))
				{
					unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_84, 5000, 2052, 2);
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						if (unk_0x7404950238A154C2(iLocal_86, 0))
						{
							unk_0xEAD984C2869B8B7C(&uLocal_88);
							unk_0xAF625598EDA64AD3(0, iLocal_86, 30000, 2054, 2);
							unk_0x31C1393E4ACFD794(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
							unk_0x56D9ED1541046AF6(uLocal_88);
							unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
							unk_0xA3561415EB3DA3A3(&uLocal_88);
						}
						iLocal_139++;
					}
					else if (!iLocal_140)
					{
						unk_0x27CC98B7C879C320(iLocal_84);
						unk_0xEAD984C2869B8B7C(&uLocal_88);
						unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2054, 2);
						unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), -1);
						unk_0x56D9ED1541046AF6(uLocal_88);
						unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
						unk_0xA3561415EB3DA3A3(&uLocal_88);
						if (func_1(&uLocal_194, cLocal_177, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xFBACB273AA628CC5(uLocal_120))
			{
				unk_0x3C8D013C840ADA0A(uLocal_120, 1);
			}
			if (func_114())
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					if (unk_0xA04824262F150982(iLocal_86) < 10f)
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_84))
						{
							if (unk_0x598CCC94D95857D9(iLocal_84, unk_0x81873881071CD9FE(), 150f))
							{
								fLocal_183 = func_134(iLocal_84, unk_0x81873881071CD9FE(), 1);
								if (fLocal_183 > 5f)
								{
									fLocal_183 = (fLocal_183 - 0.5f);
								}
								else
								{
									fLocal_183 = (fLocal_183 - 0.25f);
								}
								unk_0xEAD984C2869B8B7C(&uLocal_88);
								unk_0xAF625598EDA64AD3(0, iLocal_86, 10000, 2054, 2);
								if (unk_0xBEB00EB4ADDC2A33(iLocal_86, 0))
								{
									unk_0xEA0CAED3D5D8B8E4(0, iLocal_86, -1, 0, 1f);
								}
								unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), -1);
								unk_0x56D9ED1541046AF6(uLocal_88);
								unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
								unk_0xA3561415EB3DA3A3(&uLocal_88);
								iLocal_139++;
							}
							else
							{
								unk_0xAF625598EDA64AD3(iLocal_84, iLocal_86, 10000, 2054, 2);
								iLocal_139++;
							}
						}
					}
				}
			}
			else if (!iLocal_140)
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					unk_0x27CC98B7C879C320(iLocal_84);
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2054, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), -1);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					if (!func_54())
					{
						if (!func_174())
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84) && unk_0x7404950238A154C2(iLocal_86, 0))
			{
				if (unk_0xA04824262F150982(iLocal_86) < 2.5f)
				{
					func_128();
					iLocal_139++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x5FEB513A4402FD59(iLocal_84) && unk_0x7404950238A154C2(iLocal_86, 0))
			{
				if (unk_0xA04824262F150982(iLocal_86) < 2.5f)
				{
					if (func_1(&uLocal_194, cLocal_177, "REHH1_ASK", 4, 0, 0, 0))
					{
						unk_0x4191220706130B86(iLocal_84);
						unk_0xC1B1E9A034A63A62(0);
						iLocal_139++;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (unk_0x463E18F5BBDEA9C4(iLocal_84))
				{
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
				}
				if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 15f)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						iLocal_86 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						if (unk_0x7404950238A154C2(iLocal_86, 0))
						{
							if (unk_0xA04824262F150982(iLocal_86) < 2.5f)
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (func_169(iLocal_84, unk_0x81873881071CD9FE()) < 15f)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (func_114())
						{
							if (unk_0xBEB00EB4ADDC2A33(unk_0x2ADE2CEED2637E95(), 0))
							{
								unk_0xABED360AB1F46D3D(iLocal_84, func_108());
								unk_0x64ACA71A49AA111C(iLocal_84, 1);
								unk_0x2DA3CE5ACB2F30AC(iLocal_84, 0);
								unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 10000, 2052, 2);
								unk_0x3C3A95141D01773E(iLocal_84, unk_0x2ADE2CEED2637E95(), -1, 0, 1f, 1, 0);
								iLocal_139++;
							}
							else
							{
								iVar0 = unk_0xB0B9E53CEFDB16AA(unk_0x2ADE2CEED2637E95(), 0);
								if (unk_0x5FEB513A4402FD59(iVar0))
								{
									iLocal_57 = 1;
								}
								else
								{
									unk_0x27CC98B7C879C320(iLocal_84);
									unk_0xABED360AB1F46D3D(iLocal_84, func_108());
									unk_0x64ACA71A49AA111C(iLocal_84, 1);
									unk_0x2DA3CE5ACB2F30AC(iLocal_84, 1);
									unk_0xAF625598EDA64AD3(iLocal_84, unk_0x81873881071CD9FE(), 10000, 2052, 2);
									iLocal_139++;
								}
							}
						}
						else if (!iLocal_141)
						{
							if (!func_54())
							{
								if (!func_174())
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
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				if (func_114())
				{
					unk_0x99E525B7A12DCDBE(iLocal_84, 1f);
					if (unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
					{
						unk_0xF64D185C5B88AF31(iLocal_84);
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
					unk_0x6EC15FE0ADD3E99C(iLocal_84);
					unk_0xEAD984C2869B8B7C(&uLocal_88);
					unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 2);
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x56D9ED1541046AF6(uLocal_88);
					unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
					unk_0xA3561415EB3DA3A3(&uLocal_88);
					iLocal_139 = 5;
				}
				if (func_169(iLocal_84, unk_0x81873881071CD9FE()) > 100f)
				{
					func_53();
				}
			}
			break;
	}
}

void func_173()
{
	int iVar0;
	
	if ((iLocal_157 - iLocal_156) > 1000)
	{
		iLocal_171 = unk_0x19DFFDAF59F973CC(unk_0xB6AE0DAE06D56288(iLocal_84, 0), 18f, 0, 4);
	}
	if (iLocal_171 != 0)
	{
		iLocal_155++;
		iLocal_156 = unk_0x48E480685981C7D4();
		if (unk_0x2E0A9E3291F398E3(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_155 > iVar0)
		{
			unk_0xD768713E73165208(iLocal_171, 1, 0);
			if (unk_0x7404950238A154C2(iLocal_171, 0))
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_171, 0))
				{
					if (iLocal_59 == 1)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_84))
							{
								unk_0xAF625598EDA64AD3(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x48E480685981C7D4();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 2)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_84))
							{
								unk_0xAF625598EDA64AD3(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x48E480685981C7D4();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 3)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_84))
							{
								unk_0xAF625598EDA64AD3(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x48E480685981C7D4();
						iLocal_155 = 0;
					}
					else if (iLocal_59 == 5)
					{
						if (func_1(&uLocal_194, cLocal_177, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_84))
							{
								unk_0xAF625598EDA64AD3(iLocal_84, iLocal_171, 3000, 2052, 2);
							}
						}
						iLocal_181 = unk_0x48E480685981C7D4();
						iLocal_155 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_182 = unk_0x48E480685981C7D4();
			if ((iLocal_182 - iLocal_181) > 3500)
			{
				unk_0xE0913C01F5C0CC3D(&iLocal_171);
			}
			iLocal_171 = 0;
		}
	}
}

int func_174()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		if (unk_0x7404950238A154C2(unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE()), 1))
		{
			if ((unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1))) || unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1)))) || unk_0x8923BC9F314B991D(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_175()
{
	if (iLocal_59 == 1)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_84))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_84))
			{
				if ((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, 0, 1, 0) && !unk_0x895C275673BCEAB0(iLocal_84)) || func_169(unk_0x81873881071CD9FE(), iLocal_84) < 12f)
				{
					func_176();
					iLocal_58 = 2;
				}
			}
		}
	}
	else if (iLocal_59 == 2)
	{
		if (!iLocal_166)
		{
			if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_89, 100f, 100f, 100f, 0, 1, 0) && !unk_0x5FEB513A4402FD59(iLocal_84))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_88);
				unk_0xD91194CE3D1E1D77(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0xD91194CE3D1E1D77(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0xD91194CE3D1E1D77(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 1193033728);
				unk_0x56D9ED1541046AF6(uLocal_88);
				unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
				unk_0xA3561415EB3DA3A3(&uLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	else if (iLocal_59 == 5)
	{
		if (!iLocal_166)
		{
			if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_89, 200f, 200f, 200f, 0, 1, 0) && !unk_0x5FEB513A4402FD59(iLocal_84))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_88);
				unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 2052, 3);
				unk_0x31C1393E4ACFD794(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0, 0, 0, 0);
				unk_0xD91194CE3D1E1D77(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xD91194CE3D1E1D77(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xD91194CE3D1E1D77(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xD91194CE3D1E1D77(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xD91194CE3D1E1D77(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0xD91194CE3D1E1D77(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 1193033728);
				unk_0x31C1393E4ACFD794(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0, 0, 0, 0);
				unk_0x56D9ED1541046AF6(uLocal_88);
				unk_0xC65002CAA1212AF9(iLocal_84, uLocal_88);
				unk_0xA3561415EB3DA3A3(&uLocal_88);
				iLocal_166 = 1;
			}
		}
	}
	if (iLocal_59 != 1)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_84))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_84))
			{
				if ((unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_84, 95f, 95f, 50f, 0, 1, 0) && !unk_0x895C275673BCEAB0(iLocal_84)) || func_169(unk_0x81873881071CD9FE(), iLocal_84) < 12f)
				{
					func_176();
					iLocal_58 = 2;
				}
			}
		}
	}
}

void func_176()
{
	if (unk_0xFBACB273AA628CC5(uLocal_119))
	{
		unk_0x0A8175F24237A3D4(&uLocal_119);
	}
	if (!unk_0x5FEB513A4402FD59(iLocal_84))
	{
		if (!unk_0xFBACB273AA628CC5(uLocal_120))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_84))
			{
				uLocal_120 = func_63(iLocal_84, 0, 145);
				unk_0x3C8D013C840ADA0A(uLocal_120, 0);
			}
		}
		if (!func_209())
		{
			func_184(1);
		}
		func_145(&uLocal_194, 3, iLocal_84, sLocal_178, 0, 1);
	}
	if (func_8() == 0)
	{
		func_145(&uLocal_194, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
	}
	else if (func_8() == 1)
	{
		func_145(&uLocal_194, 1, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	}
	else if (func_8() == 2)
	{
		func_145(&uLocal_194, 2, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
	}
}

void func_177()
{
	func_179(39, 1);
	func_179(40, 1);
	func_179(41, 1);
	func_179(42, 1);
	func_179(43, 1);
	func_179(44, 1);
	iLocal_84 = unk_0x206897C6DBC12488(26, iLocal_99, Local_89, fLocal_95, 1, 1);
	unk_0x887F4488DA99FD21(iLocal_99);
	unk_0x1D15D99A10A15334(iLocal_84, 1);
	unk_0x33B1E568CEF14B0D(iLocal_84, 0);
	unk_0xEF1A2C5B3EE83E3E(iLocal_84, sLocal_180);
	unk_0xCE566DBDCACD245E(iLocal_84, 137, 1);
	unk_0xCE566DBDCACD245E(iLocal_84, 206, 1);
	unk_0x7F5F0D37173E518C(iLocal_84, 1024, 1);
	unk_0x7F5F0D37173E518C(iLocal_84, 65536, 1);
	unk_0x7F5F0D37173E518C(iLocal_84, 2, 0);
	unk_0x4B9FA68A3AC8C29D(iLocal_84, 17, 1);
	unk_0x78668C7A86739922(iLocal_84, 60f);
	unk_0xDBB43B192A0D4430(iLocal_84, 5f);
	if (iLocal_59 == 1)
	{
		unk_0x03F73D35E5AC583A(iLocal_84, 0, 0, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 2, 1, 2, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 3, 0, 2, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 4, 0, 2, 0);
		unk_0xB5A91586385F755B(iLocal_101, 1);
		iLocal_170 = unk_0xE00F8DEA9778FC87(iLocal_101, -3088.068f, 730.4819f, 20.3028f, 332.2996f, 1, 1);
		unk_0xE61FF1947C0507EB(iLocal_170, 150f);
		unk_0x4DBA43D6DE677017(iLocal_170, 4, 0, 0);
		unk_0x8F26EC305B587F81(iLocal_170, 0);
		unk_0x887F4488DA99FD21(iLocal_101);
		unk_0x31C1393E4ACFD794(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
	}
	else if (iLocal_59 == 2)
	{
		unk_0x03F73D35E5AC583A(iLocal_84, 0, 0, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 2, 0, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 3, 0, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 4, 0, 1, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 8, 1, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 10, 0, 0, 0);
		unk_0x31C1393E4ACFD794(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x13705C66F125D98D(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		func_178(1);
	}
	else if (iLocal_59 == 3)
	{
		unk_0x03F73D35E5AC583A(iLocal_84, 0, 0, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 2, 1, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 3, 0, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 4, 1, 0, 0);
		unk_0x03F73D35E5AC583A(iLocal_84, 8, 0, 0, 0);
		unk_0x31C1393E4ACFD794(iLocal_84, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0, 0, 0, 0);
		unk_0x13705C66F125D98D(Local_92 - Vector(20f, 50f, 50f), Local_92 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	}
	else if (iLocal_59 == 5)
	{
	}
	iLocal_58 = 1;
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_97987, unk_0x11CA2334E341B424(), 24);
		Global_97981 = 1;
	}
	else
	{
		StringCopy(&Global_97987, "NULL", 24);
		Global_97981 = 0;
	}
}

void func_179(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_183(iParam0, 2, 1))
		{
			func_182(iParam0, 2, 1);
		}
	}
	else if (func_183(iParam0, 2, 1))
	{
		func_180(iParam0, 2, 1);
	}
}

void func_180(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_181(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_43(func_181(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

void func_182(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_26() == 0)
		{
			uVar0 = func_45(func_181(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_43(func_181(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_183(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_26() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_45(func_181(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_184(int iParam0)
{
	if (func_187())
	{
		Global_98921 = 1;
		Global_98918 = unk_0x48E480685981C7D4();
		if (func_31(Global_98920))
		{
			func_185(0);
		}
		unk_0x13754D0D5B45CB5D(1, "RE_TITLE");
		if (iParam0 && func_31(Global_98920))
		{
			unk_0x34D34ABC20E130B1();
		}
		return 1;
	}
	return 0;
}

void func_185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_98931.f_29444.f_2 < 3)
			{
				if (!unk_0x4C075069555D364B())
				{
					func_166(func_186(iParam0), -1);
					Global_98931.f_29444.f_2++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 1))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_166(func_186(iParam0), -1);
					Global_98931.f_29444.f_3++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x236D8AD7EE179F46(Global_98927, 2))
			{
				if (!unk_0x4C075069555D364B())
				{
					func_166(func_186(iParam0), -1);
					Global_98931.f_29444.f_4++;
					unk_0xF3148AAF69AF9CBC(&Global_98927, 2);
				}
			}
			break;
	}
}

char* func_186(int iParam0)
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

int func_187()
{
	switch (func_188(&Global_25005, 0, 5, 0, unk_0x8F56512BDA9F6921()))
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

int func_188(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88620.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_192(0))
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *uParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_190(iParam2))
		{
			return 0;
		}
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
		if (iParam4 != 0)
		{
			func_189(uParam0, iParam4);
		}
	}
	return 2;
}

void func_189(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_190(int iParam0)
{
	return func_191(iParam0, Global_35443);
}

int func_191(int iParam0, int iParam1)
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

int func_192(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_193()
{
	if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
	{
		return 1;
	}
	if (!unk_0x930F8FBB8E9537CC(iLocal_84))
	{
		if (unk_0xBBEF8270CE27C0EE(iLocal_84, unk_0x81873881071CD9FE(), 1))
		{
			return 1;
		}
		if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_84, unk_0x2ADE2CEED2637E95(), 1))
			{
				return 1;
			}
		}
		if (!bLocal_113)
		{
			if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iLocal_84, 1), 10f, 1) || unk_0x6DF2A27FBC647AEC(unk_0xB6AE0DAE06D56288(iLocal_84, 1) - Vector(10f, 10f, 10f), unk_0xB6AE0DAE06D56288(iLocal_84, 1) + Vector(10f, 10f, 10f), 0))
			{
				return 1;
			}
		}
		else if (unk_0x5FEB513A4402FD59(iLocal_85) && unk_0x86CCCD2FAE9D5E65(iLocal_85))
		{
			if (unk_0xBBEF8270CE27C0EE(iLocal_85, unk_0x81873881071CD9FE(), 1) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 7))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_84))
				{
					unk_0x832B749856D487BE(iLocal_84, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!unk_0xCD67A1A6022640ED(iLocal_84) && unk_0x598CCC94D95857D9(iLocal_84, unk_0x81873881071CD9FE(), 90f)) && unk_0x8D28631AAAEFC957(iLocal_84, unk_0x81873881071CD9FE(), 50f, 50f, 50f, 0, 1, 0))
		{
			if (unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iLocal_84) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_84))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_194()
{
	unk_0x32A12757CBF48A33(iLocal_99);
	unk_0x295DC04FC13E025B("random@hitch_lift");
	if (iLocal_59 == 1 || iLocal_59 == 5)
	{
		unk_0x32A12757CBF48A33(iLocal_101);
	}
	if (iLocal_59 == 1)
	{
		unk_0x342437AFD16ED2D2(0);
		unk_0x9D2B95F4020E5347("timer", 0);
	}
	else if (iLocal_59 == 3)
	{
		unk_0x295DC04FC13E025B("facials@gen_female@base");
	}
	if (unk_0x33ACB874CECA2D4B(iLocal_99) && unk_0x8E8B546E1A81D27F("random@hitch_lift"))
	{
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			if (unk_0x33ACB874CECA2D4B(iLocal_101))
			{
				bLocal_60 = true;
			}
		}
		else if (iLocal_59 == 3)
		{
			if (unk_0x8E8B546E1A81D27F("facials@gen_female@base"))
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
		unk_0x32A12757CBF48A33(iLocal_99);
		unk_0x295DC04FC13E025B("random@hitch_lift");
		if (iLocal_59 == 1 || iLocal_59 == 5)
		{
			unk_0x32A12757CBF48A33(iLocal_101);
		}
		else if (iLocal_59 == 3)
		{
			unk_0x295DC04FC13E025B("facials@gen_female@base");
		}
	}
}

void func_195()
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

int func_196()
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_207())
		{
			return 0;
		}
	}
	if (func_203())
	{
		return 1;
	}
	if (func_197(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_197(float fParam0, bool bParam1)
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
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (func_10(func_8()))
		{
			iVar36 = func_36();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 2) && !unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar32 /*6*/], 3))
				{
					func_198(iVar32, &Var0);
					fVar35 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var0.f_6, 1);
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

void func_198(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_199(uParam1, "Abigail1", func_201(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 1:
			func_199(uParam1, "Abigail2", func_201(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 2:
			func_199(uParam1, "Barry1", func_201(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 3:
			func_199(uParam1, "Barry2", func_201(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 4:
			func_199(uParam1, "Barry3", func_201(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 5:
			func_199(uParam1, "Barry3A", func_201(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 6:
			func_199(uParam1, "Barry3C", func_201(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 7:
			func_199(uParam1, "Barry4", func_201(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_200(iParam0), 0, 0);
			break;
		
		case 8:
			func_199(uParam1, "Dreyfuss1", func_201(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 9:
			func_199(uParam1, "Epsilon1", func_201(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 10:
			func_199(uParam1, "Epsilon2", func_201(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 11:
			func_199(uParam1, "Epsilon3", func_201(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 12:
			func_199(uParam1, "Epsilon4", func_201(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 13:
			func_199(uParam1, "Epsilon5", func_201(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 14:
			func_199(uParam1, "Epsilon6", func_201(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 15:
			func_199(uParam1, "Epsilon7", func_201(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 16:
			func_199(uParam1, "Epsilon8", func_201(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 17:
			func_199(uParam1, "Extreme1", func_201(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 18:
			func_199(uParam1, "Extreme2", func_201(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 19:
			func_199(uParam1, "Extreme3", func_201(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 20:
			func_199(uParam1, "Extreme4", func_201(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 21:
			func_199(uParam1, "Fanatic1", func_201(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_200(iParam0), 1, 0);
			break;
		
		case 22:
			func_199(uParam1, "Fanatic2", func_201(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_200(iParam0), 1, 0);
			break;
		
		case 23:
			func_199(uParam1, "Fanatic3", func_201(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_200(iParam0), 0, 1);
			break;
		
		case 24:
			func_199(uParam1, "Hao1", func_201(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_200(iParam0), 0, 1);
			break;
		
		case 25:
			func_199(uParam1, "Hunting1", func_201(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 26:
			func_199(uParam1, "Hunting2", func_201(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 27:
			func_199(uParam1, "Josh1", func_201(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 28:
			func_199(uParam1, "Josh2", func_201(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 29:
			func_199(uParam1, "Josh3", func_201(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 30:
			func_199(uParam1, "Josh4", func_201(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 31:
			func_199(uParam1, "Maude1", func_201(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 32:
			func_199(uParam1, "Minute1", func_201(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 33:
			func_199(uParam1, "Minute2", func_201(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 34:
			func_199(uParam1, "Minute3", func_201(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 35:
			func_199(uParam1, "MrsPhilips1", func_201(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 36:
			func_199(uParam1, "MrsPhilips2", func_201(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 37:
			func_199(uParam1, "Nigel1", func_201(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 38:
			func_199(uParam1, "Nigel1A", func_201(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 39:
			func_199(uParam1, "Nigel1B", func_201(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_200(iParam0), 1, 1);
			break;
		
		case 40:
			func_199(uParam1, "Nigel1C", func_201(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_200(iParam0), 1, 1);
			break;
		
		case 41:
			func_199(uParam1, "Nigel1D", func_201(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_200(iParam0), 1, 1);
			break;
		
		case 42:
			func_199(uParam1, "Nigel2", func_201(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 43:
			func_199(uParam1, "Nigel3", func_201(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 1);
			break;
		
		case 44:
			func_199(uParam1, "Omega1", func_201(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 45:
			func_199(uParam1, "Omega2", func_201(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 46:
			func_199(uParam1, "Paparazzo1", func_201(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 47:
			func_199(uParam1, "Paparazzo2", func_201(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 48:
			func_199(uParam1, "Paparazzo3", func_201(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 49:
			func_199(uParam1, "Paparazzo3A", func_201(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 50:
			func_199(uParam1, "Paparazzo3B", func_201(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 51:
			func_199(uParam1, "Paparazzo4", func_201(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 52:
			func_199(uParam1, "Rampage1", func_201(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 54:
			func_199(uParam1, "Rampage3", func_201(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 55:
			func_199(uParam1, "Rampage4", func_201(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 56:
			func_199(uParam1, "Rampage5", func_201(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_200(iParam0), 0, 0);
			break;
		
		case 53:
			func_199(uParam1, "Rampage2", func_201(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_200(iParam0), 1, 0);
			break;
		
		case 57:
			func_199(uParam1, "TheLastOne", func_201(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 58:
			func_199(uParam1, "Tonya1", func_201(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 59:
			func_199(uParam1, "Tonya2", func_201(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 60:
			func_199(uParam1, "Tonya3", func_201(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 61:
			func_199(uParam1, "Tonya4", func_201(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		case 62:
			func_199(uParam1, "Tonya5", func_201(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_200(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_199(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_200(int iParam0)
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

struct<2> func_201(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_202(iParam0) };
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_202(int iParam0)
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

int func_203()
{
	if (func_206() && !func_207())
	{
		return 1;
	}
	if (func_205() && func_204())
	{
		return 1;
	}
	return 0;
}

bool func_204()
{
	return Global_98649 > 0;
}

int func_205()
{
	if (Global_88064 != -1)
	{
		return 1;
	}
	return 0;
}

int func_206()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

int func_207()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_208()
{
	if (!func_190(5))
	{
		return 1;
	}
	if (func_203())
	{
		return 1;
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_207())
		{
			return 0;
		}
	}
	if (func_197(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	if ((Global_98920 == func_40() && unk_0x9284F36E422CA571()) && Global_98921)
	{
		return 1;
	}
	return 0;
}

void func_210(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_40();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_212(iParam0);
	unk_0x154D79F694221AD0(0);
	unk_0xCE84C16ABC548B6E(1);
	Global_98917 = 0;
	func_211();
}

void func_211()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			unk_0xB5A91586385F755B(unk_0x14B7103DBD149FFE(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)), 1);
		}
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
	}
}

void func_212(int iParam0)
{
	Global_98920 = iParam0;
}

int func_213(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135723)
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
		if (!func_241())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC684AF573327E1AB(unk_0x81873881071CD9FE())) > 1369f && !func_207())
			{
				return 0;
			}
		}
		if (!Global_98931.f_7699)
		{
			return 0;
		}
		if (func_21(0))
		{
			return 0;
		}
		if (func_203())
		{
			return 0;
		}
		if (func_240())
		{
			return 0;
		}
		if (Global_98920 != -1)
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_197(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_239(iParam3))
		{
			return 0;
		}
		if (func_10(func_8()))
		{
			if (func_238(func_8()) == 4 || func_238(func_8()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_8()))
		{
			if (!func_237(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_236(Global_98931.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x48E480685981C7D4() - Global_98922) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_235())
		{
			return 0;
		}
		if (unk_0x0C59B91B32EEDDEE())
		{
			return 0;
		}
		if (unk_0x9284F36E422CA571())
		{
			return 0;
		}
		if (!func_226(4))
		{
			return 0;
		}
		if (!func_190(5))
		{
			return 0;
		}
		if (func_225(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x59F36F53A82C2E72(unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())))
		{
			if ((unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(377.153f, -717.567f, 10.0536f) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(320.9934f, 265.2515f, 82.1221f)) || unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xB3202EEA6EFADBA8(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_225(0, 0))
		{
			return 0;
		}
		if (Global_25092)
		{
			return 0;
		}
		if (func_239(30) && !func_225(30, 0))
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
				Var5 = { Global_98931.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_98931.f_1750.f_539.f_1524[iVar4];
				if (func_224(iVar8))
				{
					if (func_215(iVar4))
					{
						if (!func_214(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var5) < (210f * 210f))
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

bool func_214(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_98931.f_1750.f_539.f_1524[iParam0];
	return func_216(iVar0);
}

int func_216(int iParam0)
{
	return func_217(iParam0, 1);
}

int func_217(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_224(iParam0))
	{
		return 0;
	}
	func_218(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_219(func_153(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_223(iParam0, iParam1))
	{
		iVar0 = func_160(iParam1);
		iVar1 = func_158(iParam0);
		iVar2 = (func_158(iParam0) - func_158(iParam1));
		iVar3 = (func_160(iParam0) - func_160(iParam1));
		iVar4 = (func_222(iParam0) - func_222(iParam1));
		iVar5 = (func_151(iParam0) - func_151(iParam1));
		iVar6 = (func_152(iParam0) - func_152(iParam1));
		iVar7 = (func_221(iParam0) - func_221(iParam1));
	}
	else
	{
		iVar0 = func_160(iParam0);
		iVar1 = func_158(iParam1);
		iVar2 = (func_158(iParam1) - func_158(iParam0));
		iVar3 = (func_160(iParam1) - func_160(iParam0));
		iVar4 = (func_222(iParam1) - func_222(iParam0));
		iVar5 = (func_151(iParam1) - func_151(iParam0));
		iVar6 = (func_152(iParam1) - func_152(iParam0));
		iVar7 = (func_221(iParam1) - func_221(iParam0));
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
		iVar4 = (iVar4 + func_157(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_220(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_220(float fParam0, float fParam1, float fParam2)
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

int func_221(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_222(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_223(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_224(iParam1) || !func_224(iParam0))
	{
		return 1;
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
	iVar0 = func_160(iParam0);
	iVar1 = func_160(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
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
	iVar0 = func_152(iParam0);
	iVar1 = func_152(iParam1);
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
	return 0;
}

int func_224(int iParam0)
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
	iVar0 = func_221(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_152(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_151(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_158(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_160(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_222(iParam0);
	if (iVar5 < 1 || iVar5 > func_157(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
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
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_234()) || Global_97978) || Global_24948) || func_233()) || func_15(8, -1)) || func_232()) || func_231()) || func_230()) || func_229()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_234()) || Global_24948) || func_233()) || func_15(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_234()) || Global_97978) || Global_24948) || func_233()) || func_15(8, -1)) || func_230()) || func_232()) || func_231()) || func_229()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_234()) || Global_97978) || Global_24948) || func_233()) || func_15(8, -1)) || func_232()) || func_231()) || func_229()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_234() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_15(8, -1)) || func_229()) || func_228()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_15(8, -1) || func_232()) || func_231()) || func_228()) || func_227())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_234()) || Global_24948) || func_233()) || func_15(8, -1)) || func_231()) || func_230()) || func_229()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_234()) || func_231()) || Global_97978) || Global_24948) || func_233()) || Global_36493) || func_15(8, -1)) || func_230()) || func_228()) || func_229()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_234()) || Global_97978) || Global_24948) || func_233()) || func_15(8, -1)) || func_230()) || func_228()) || func_232()) || func_231()) || func_229())
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

var func_227()
{
	return Global_90848.f_1;
}

int func_228()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_229()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_231()
{
	return Global_90861.f_297 > 0;
}

bool func_232()
{
	return Global_90861.f_296 > 0;
}

var func_233()
{
	return Global_1315892;
}

int func_234()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_235()
{
	func_7();
	if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_236(int iParam0)
{
	return func_223(func_153(), iParam0);
}

int func_237(int iParam0, int iParam1, int iParam2)
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

int func_238(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_98931.f_6302.f_919[iParam0];
}

bool func_239(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_241())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x236D8AD7EE179F46(Global_98931.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_240()
{
	var uVar0;
	
	if (Global_25096)
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(uVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_241()
{
	var uVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_242()
{
	if (iLocal_142)
	{
		func_262(0);
		if (Global_25184)
		{
			unk_0x80650551CC58C784("AC_STOP");
		}
		func_261();
		unk_0x3C936873011FA97B();
		func_178(0);
		if (unk_0xCA020F3125A93EB9())
		{
			unk_0x59E3A6BEFC421137(0);
		}
		if (unk_0x1BDDD4FBC466EE4E())
		{
			unk_0xDB5CD77375639A28(0);
		}
		Global_25211[0 /*7*/].f_6 = 0;
		func_254(0, 1, 1, 0);
		func_55();
		if (unk_0x86CCCD2FAE9D5E65(iLocal_84))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_84))
			{
				unk_0xCE566DBDCACD245E(iLocal_84, 317, 1);
				if (!unk_0xE5AB05962FA1FF3F(iLocal_84, 0))
				{
					unk_0x40C2DE5A3C7D6ACD(iLocal_84);
				}
				if (iLocal_59 != 2)
				{
					unk_0x4191220706130B86(iLocal_84);
				}
				if (unk_0xFA1212DE7C455679(iLocal_84, 1805844857) != 1 && unk_0xFA1212DE7C455679(iLocal_84, 1805844857) != 0)
				{
					unk_0x1D15D99A10A15334(iLocal_84, 0);
				}
				unk_0x33B1E568CEF14B0D(iLocal_84, 1);
				if (unk_0xCD67A1A6022640ED(iLocal_84))
				{
					unk_0x6EC15FE0ADD3E99C(iLocal_84);
				}
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_85))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_85))
			{
				if (!unk_0x5EF53977B76418E5(iLocal_85))
				{
					unk_0x1D15D99A10A15334(iLocal_85, 0);
				}
			}
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			}
		}
	}
	unk_0xABF33AFE6B2877A8();
	if (func_209())
	{
		if (unk_0x667A6FB4A24C8B47(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0xBF4F29C80C79D83C(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
		}
		if (unk_0x667A6FB4A24C8B47(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			unk_0xBF4F29C80C79D83C(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
		}
	}
	func_243(-1);
	unk_0xC23A229F78DAD92A();
}

void func_243(int iParam0)
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
	if (func_209())
	{
		func_247(iParam0);
		unk_0x13754D0D5B45CB5D(0, 0);
		Global_98922 = unk_0x48E480685981C7D4();
		func_246(30000);
		StringCopy(&cVar0, func_245(Global_98920, 1), 64);
		if (func_39(Global_98920) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_98919, 64);
		}
		unk_0xAD4A8703D0E8206B(&cVar0, Global_98917, (unk_0x48E480685981C7D4() - Global_98918), 0);
	}
	else if (unk_0x236D8AD7EE179F46(Global_98927, 0) && Global_98931.f_29444.f_2 < 3)
	{
		unk_0xC69E84EBBD7166E6(&Global_98927, 0);
	}
	func_244(&Global_25005);
	Global_98921 = 0;
	func_212(-1);
}

void func_244(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35405)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

char* func_245(int iParam0, bool bParam1)
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

void func_246(int iParam0)
{
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
}

void func_247(int iParam0)
{
	func_248(iParam0, 0, func_253(iParam0));
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_153();
	func_251(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_250(iParam0, &uVar0);
	Var1 = { func_249(&uVar0) };
}

struct<16> func_249(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_151(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_152(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_221(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_160(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_158(*uParam0), 64);
	return Var0;
}

void func_250(int iParam0, var uParam1)
{
	Global_98931.f_29444.f_43[iParam0] = *uParam1;
}

void func_251(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_158(*uParam0);
	iVar1 = func_160(*uParam0);
	iVar2 = func_222(*uParam0);
	iVar3 = func_151(*uParam0);
	iVar4 = func_152(*uParam0);
	iVar5 = func_221(*uParam0);
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
	iVar6 = func_157(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_157(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_252(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_252(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_163(uParam0, iParam1);
	func_162(uParam0, iParam2);
	func_161(uParam0, iParam3);
	func_155(uParam0, iParam5);
	func_156(uParam0, iParam4);
	func_154(uParam0, iParam6);
}

int func_253(int iParam0)
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

void func_254(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_260(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_5())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_259(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_260(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_259(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_255(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_255(int iParam0)
{
	if (func_257(iParam0, 0))
	{
		return 1;
	}
	if (func_256())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_256()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_257(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_258(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_258(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
	}
	if (Global_1315870[iVar1] == 1)
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

int func_259(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_260(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

void func_261()
{
	Global_25180 = 0;
	Global_25181 = 0;
	Global_25183 = 0;
	Global_25184 = 0;
	Global_25185 = 0;
}

void func_262(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_179(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_263()
{
	float fVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		fVar0 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_69, 1);
		iLocal_68 = 1;
		if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_72, 1) < fVar0)
		{
			fVar0 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_72, 1);
			iLocal_68 = 2;
		}
		if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_75, 1) < fVar0)
		{
			fVar0 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_75, 1);
			iLocal_68 = 3;
		}
		if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_78, 1) < fVar0)
		{
			fVar0 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_78, 1);
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

