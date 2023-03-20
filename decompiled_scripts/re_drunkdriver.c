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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64[2] = { 0, 0 };
	struct<3> Local_67 = { 0, 0, 0 } ;
	float fLocal_70 = 0f;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	int iLocal_89 = 0;
	int iLocal_90[2] = { 0, 0 };
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
	bool bLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	struct<6> Local_136 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_142[24] = "";
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	struct<3> Local_151 = { 0, 0, 0 } ;
	var uLocal_154[2] = { 0, 0 };
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	struct<3> Local_159 = { 0, 0, 0 } ;
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	var uLocal_172 = 16;
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
	int iLocal_337 = 0;
	struct<3> Local_338 = { 0, 0, 0 } ;
	struct<3> Local_341 = { 0, 0, 0 } ;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	iLocal_50 = unk_0x4A9923385BDB9DAD();
	iLocal_51 = unk_0x186E5D252FA50E7D();
	Local_86 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_123 = -1;
	StringCopy(&Local_136, "", 24);
	iLocal_164 = -1;
	Local_338 = { -1017.345f, -1354.196f, 4.4568f };
	Local_341 = { 2003.456f, 3071.102f, 46.0499f };
	Local_56 = { ScriptParam_0.f_1[0 /*3*/] };
	func_264();
	if (unk_0xC968670BFACE42D9(11))
	{
		func_230();
	}
	if (func_188(Local_56, 27, iLocal_344, 0, 0))
	{
		func_185(-1);
	}
	else
	{
		unk_0x1090044AD1DA76FA();
	}
	iLocal_158 = unk_0x9CD27B0045628463();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC5042CC6F5E3D450() || iLocal_61)
		{
			if (!func_184())
			{
				if (func_183())
				{
					func_230();
				}
			}
			unk_0x208784099002BC30("RE_DD", 0);
			switch (iLocal_52)
			{
				case 0:
					if (iLocal_55)
					{
						iLocal_171 = 1;
						iLocal_52 = 1;
					}
					else
					{
						if (func_171())
						{
							func_230();
						}
						if (!bLocal_59)
						{
							func_170();
						}
						if (bLocal_59)
						{
							func_169();
						}
					}
					break;
				
				case 1:
					func_159();
					if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
					{
						func_158();
						func_155();
						if (iLocal_53 == 1 && !unk_0x7239B21A38F536BA(iLocal_90[1]))
						{
							func_70();
							if (func_68() || unk_0x5F9532F3B5CC2551(iLocal_93))
							{
								if (unk_0x7239B21A38F536BA(iLocal_90[0]))
								{
									if (!unk_0x5F9532F3B5CC2551(iLocal_90[0]))
									{
										if (unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
										{
											unk_0xED74007FFB146BC2(iLocal_90[0]);
										}
										unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
										unk_0x22B0D0E37CCB840D(iLocal_90[0], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
										func_64(iLocal_90[0], 120000, 0);
										unk_0x971D38760FBC02EF(iLocal_90[0], true);
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_172, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_60();
							}
						}
						if (iLocal_53 == 2 || (iLocal_53 == 1 && unk_0x7239B21A38F536BA(iLocal_90[1])))
						{
							func_70();
							if (iLocal_54 != 9)
							{
								if (func_68() || unk_0x5F9532F3B5CC2551(iLocal_93))
								{
									if (unk_0x7239B21A38F536BA(iLocal_90[0]))
									{
										if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
										{
											if (unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
											{
												unk_0xED74007FFB146BC2(iLocal_90[0]);
											}
											unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
											unk_0x22B0D0E37CCB840D(iLocal_90[0], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
											func_64(iLocal_90[0], 120000, 0);
											unk_0x971D38760FBC02EF(iLocal_90[0], true);
										}
									}
									if (unk_0x7239B21A38F536BA(iLocal_90[1]))
									{
										if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
										{
											if (unk_0x5891CAC5D4ACFF74(iLocal_90[1]))
											{
												unk_0xED74007FFB146BC2(iLocal_90[1]);
											}
											unk_0xE1EF3C1216AFF2CD(iLocal_90[1]);
											unk_0x22B0D0E37CCB840D(iLocal_90[1], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
											func_64(iLocal_90[1], 120000, 0);
											unk_0x971D38760FBC02EF(iLocal_90[1], true);
										}
									}
									if (iLocal_53 == 1)
									{
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_172, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_53 == 2)
									{
										func_62();
										unk_0x4EDE34FBADD967A6(0);
										func_61(&uLocal_172, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_60();
								}
							}
						}
						if (unk_0x7239B21A38F536BA(iLocal_90[0]))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
							{
								unk_0x433083750C5E064A(iLocal_90[0], 1f);
							}
						}
						if (unk_0x7239B21A38F536BA(iLocal_90[1]))
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
							{
								unk_0x433083750C5E064A(iLocal_90[1], 1f);
							}
						}
					}
					if ((func_59() && !func_58()) && iLocal_54 != 9)
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
						{
							if (unk_0x20B60995556D004F(iLocal_90[0], Local_86, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_53 == 2)
								{
									if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
									{
										if (!unk_0x5891CAC5D4ACFF74(iLocal_90[0]) && !unk_0x5891CAC5D4ACFF74(iLocal_90[1]))
										{
											unk_0x9F3480FE65DB31B5(iLocal_90[0], func_57());
											unk_0x9F3480FE65DB31B5(iLocal_90[1], func_57());
										}
									}
								}
								func_56(0);
								unk_0x4EDE34FBADD967A6(0);
								func_62();
								iLocal_54 = 9;
							}
						}
					}
					if (func_55())
					{
						if (unk_0x7239B21A38F536BA(iLocal_90[0]))
						{
							unk_0x9614299DCB53E54B(&(iLocal_90[0]));
						}
						if (unk_0x7239B21A38F536BA(iLocal_90[1]))
						{
							unk_0x9614299DCB53E54B(&(iLocal_90[1]));
						}
						func_30();
					}
					if ((func_29() || func_28()) || func_3())
					{
						func_60();
					}
					break;
			}
		}
		else
		{
			func_230();
		}
		func_1();
	}
}

void func_1()
{
	if (((iLocal_53 == 1 && iLocal_54 == 7) && iLocal_63 == 5) && iLocal_109)
	{
		iLocal_158 = unk_0x9CD27B0045628463();
		if (func_2())
		{
			if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
			{
				Local_159 = { unk_0x9A8D700A51CB7B0D(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) };
			}
		}
	}
}

int func_2()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if (iLocal_53 == 1)
			{
				if (unk_0x7239B21A38F536BA(iLocal_90[0]))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
					{
						if (unk_0xA3EE4A07279BB9DB(iLocal_90[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (unk_0x7239B21A38F536BA(iLocal_90[0]) && unk_0x7239B21A38F536BA(iLocal_90[1]))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
					{
						if (unk_0xA3EE4A07279BB9DB(iLocal_90[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && unk_0xA3EE4A07279BB9DB(iLocal_90[1], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	if (iLocal_53 == 2)
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_93))
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_93, 200f, 200f, 200f, false, true, 0))
			{
				return 1;
			}
			if (((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_OFFR")) && !func_27("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!func_27("REDR2_DC") && !func_27("REDR2_AKA")) && !func_27("REDR2_AKB")) && !func_27("REDR2_TRY")) && !func_27("REDR2_JIC")) && !func_27("REDR2_CH")) && !func_27("REDR2_WH2")) && !func_27("REDR2_BCK")) && !func_27("REDR2_JIA")) && !func_27("REDR2_JIB")) && !func_27("REDR2_JIC")) && !func_27("REDR2_WHA")) && !func_27("REDR2_WHB")) && !func_27("REDR2_WHC")) && !func_27("REDR2_PSM")) && !func_27("REDR2_PSF")) && !func_27("REDR2_PST")) && !func_27("REDR2_TK"))
			{
				if (unk_0x8BAD02F0368D9E14(iLocal_93) && unk_0xEEF059FAD016D209(iLocal_93) < iLocal_79)
				{
					iLocal_79 = unk_0xEEF059FAD016D209(iLocal_93);
					func_5(0);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_172, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!unk_0x4C241E39B23DF959(iLocal_93, false) || unk_0xB497F06B288DCFDF(iLocal_93))
			{
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				if (!func_4())
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
						{
							unk_0xBB9CE077274F6A1B(iLocal_90[0], 40000f, 0);
							unk_0x971D38760FBC02EF(iLocal_90[0], true);
						}
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
						{
							unk_0x6A071245EB0D1882(iLocal_90[1], iLocal_90[0], -1, 0f, 1f, 2f, 0);
							unk_0x971D38760FBC02EF(iLocal_90[1], true);
						}
						return 1;
					}
				}
			}
			if (unk_0x131D401334815E94(iLocal_93, 0, 2) && unk_0xC86D67D52A707CF8(iLocal_93, unk_0xD80958FC74E988A6(), false))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
					unk_0x22B0D0E37CCB840D(iLocal_90[0], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_90[1]);
					unk_0x22B0D0E37CCB840D(iLocal_90[1], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_135)
		{
			if (func_10(&uLocal_172, "REDR2AU", &cLocal_142, &Local_136, 8, 0, 0))
			{
				iLocal_135 = 0;
			}
		}
	}
	else if ((!iLocal_135 && unk_0x16754C556D2EDE3D()) && !func_27("REDR1_SWV"))
	{
		cLocal_142 = { func_9() };
		Local_136 = { func_8() };
		func_6();
		iLocal_135 = 1;
	}
}

void func_6()
{
	Global_14558 = 0;
	func_7();
}

void func_7()
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

struct<6> func_8()
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

struct<6> func_9()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

bool func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_11(sParam2, iParam4, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_23();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_12();
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
		func_25();
	}
	return 0;
}

void func_12()
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

void func_13()
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

int func_14()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
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

void func_16()
{
	if (func_22(14))
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
		Global_14393 = func_17();
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

int func_17()
{
	func_18();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_18()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_21(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_20(unk_0xD80958FC74E988A6());
			if (func_19(iVar0) && (!func_22(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_19(Global_97173.f_1729.f_539.f_3213))
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

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_27(char* sParam0)
{
	var uVar0;
	
	if (func_4())
	{
		MemCopy(&uVar0, {func_9()}, 4);
		if (unk_0x0C515FAB3FF9EA92(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (iLocal_53 == 1)
	{
		if (unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
		{
			return 1;
		}
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	if (iLocal_53 == 1)
	{
		if (!unk_0x7239B21A38F536BA(iLocal_90[0]))
		{
			return 1;
		}
	}
	if (iLocal_53 == 2)
	{
		if (!unk_0x7239B21A38F536BA(iLocal_90[0]) && !unk_0x7239B21A38F536BA(iLocal_90[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_30()
{
	while (!func_54())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_34(27, iLocal_344);
	func_31();
	func_230();
}

void func_31()
{
	func_32();
}

int func_32()
{
	if (func_33(0))
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

bool func_33(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

void func_34(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_51(iParam0))
	{
		func_50(iParam0, iParam1);
		if (!func_49(51))
		{
			func_45("RE_REWARD", 1, 0, 4000, 10000, func_48(), 0, 138, 0);
			func_44(51);
		}
		if (func_43(iParam0))
		{
			Global_97173.f_28117.f_2 = 3;
		}
		if (func_42(iParam0, iParam1) != 322)
		{
			func_36(func_42(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_97161 = iParam1;
		if (Global_97159 == 0)
		{
			if (((Global_97162 == 1 || Global_97162 == 5) || Global_97162 == 11) || Global_97162 == 25)
			{
				func_35(2);
			}
			else if ((Global_97162 == 26 || Global_97162 == 8) || Global_97162 == 17)
			{
				func_35(7);
			}
			else
			{
				func_35(1);
			}
		}
	}
}

void func_35(int iParam0)
{
	Global_97159 = iParam0;
}

void func_36(int iParam0, var uParam1, var uParam2)
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
		func_40((891 + iParam0), 1, -1, 1);
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
		func_37();
	}
}

void func_37()
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
		func_39(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_38() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_32();
				}
			}
		}
	}
}

int func_38()
{
	return Global_24444;
}

int func_39(int iParam0, int iParam1)
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

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_41();
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

int func_41()
{
	return Global_1312736;
}

int func_42(int iParam0, int iParam1)
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

int func_43(int iParam0)
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

void func_44(int iParam0)
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

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_47();
	}
}

void func_47()
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

int func_48()
{
	func_18();
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

int func_49(int iParam0)
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

void func_50(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_28117.f_8[iParam0]), iParam1);
}

int func_51(int iParam0)
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

int func_52()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x442E0A7EDE4A738A(), 64);
	uVar16 = func_53(Var0);
	return uVar16;
}

int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_54()
{
	return 1;
}

int func_55()
{
	if (Global_24679)
	{
		func_35(4);
		return 1;
	}
	return 0;
}

void func_56(int iParam0)
{
	Global_16703 = iParam0;
}

int func_57()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

int func_58()
{
	if (Global_97173.f_28117.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return Global_24678;
}

void func_60()
{
	func_230();
}

bool func_61(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

void func_62()
{
	Global_14558 = 0;
	func_63();
}

void func_63()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

int func_64(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = func_67(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_66(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_65();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_35730[iVar2 /*5*/] = 0;
	Global_35730[iVar2 /*5*/].f_1 = iParam0;
	Global_35730[iVar2 /*5*/].f_2 = iParam1;
	Global_35730[iVar2 /*5*/].f_3 = iParam1;
	Global_35730[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xD80958FC74E988A6())
	{
		Global_35951 = 1;
	}
	Global_35729++;
	return 1;
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
		{
			return Global_35756[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_68()
{
	unk_0xD4B8E3D1917BC86B(true);
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return 1;
	}
	if ((unk_0x3F2023999AD51C1F(Local_151, 40f, true) || unk_0x3F2023999AD51C1F(func_69(unk_0x4F8644AF03D0E0D6()), 10f, false)) || unk_0x5270A8FBC098C3F8(Local_151 - Vector(40f, 40f, 40f), Local_151 + Vector(40f, 40f, 40f), false))
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
	{
		if (unk_0xC86D67D52A707CF8(iLocal_90[0], unk_0xD80958FC74E988A6(), true) || unk_0xCFB0A0D8EDD145A3(iLocal_90[0]))
		{
			return 1;
		}
		if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_90[0], unk_0xB6997A7EB3F5C8C0(), true))
			{
				return 1;
			}
		}
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
		{
			if (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_90[0]) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_90[0]))
			{
				if (unk_0x6CD5A433374D4CFB(iLocal_90[0], unk_0xD80958FC74E988A6()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x7239B21A38F536BA(iLocal_90[1]))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
		{
			if (unk_0xC86D67D52A707CF8(iLocal_90[1], unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
			{
				if (unk_0xC86D67D52A707CF8(iLocal_90[1], unk_0xB6997A7EB3F5C8C0(), true))
				{
					return 1;
				}
			}
			if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 6))
			{
				if (unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iLocal_90[1]) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iLocal_90[1]))
				{
					if (unk_0x6CD5A433374D4CFB(iLocal_90[1], unk_0xD80958FC74E988A6()))
					{
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_69(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

void func_70()
{
	int iVar0;
	
	switch (iLocal_54)
	{
		case 0:
			if (iLocal_53 == 1)
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1017.461f, -1259.868f, 3.9183f, -1061.891f, -1424.029f, 24.4253f, 171.75f, false, true, 0) && unk_0xE33D59DA70B58FDF(Local_151, 1f)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_151, 15f, 15f, 15f, false, true, 0))
				{
					if (unk_0xA6DB27D19ECBB7DA(iLocal_150))
					{
						unk_0x86A652570E5F25DD(&iLocal_150);
					}
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
					{
						if (!unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
						{
							uLocal_154[0] = func_154(iLocal_90[0], 0, 145);
							unk_0x75A16C3DA34F1245(uLocal_154[0], false);
						}
					}
					if (!func_184())
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
						{
							iLocal_94 = unk_0xB6997A7EB3F5C8C0();
						}
						func_153(&uLocal_172, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_144(1);
						func_143(1);
					}
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), -1011.144f, -1378.79f, 4.1997f, -1039.685f, -1337.61f, 9.7035f, 37.875f, false, true, 0))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
						{
							func_142();
							unk_0xEA47FE3719165B94(iLocal_90[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0f, false, false, false);
							unk_0xEA47FE3719165B94(iLocal_90[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0f, false, false, false);
							iLocal_122 = (unk_0x9CD27B0045628463() + 60000);
							if (unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
							{
								unk_0x75A16C3DA34F1245(uLocal_154[0], true);
							}
							iLocal_54 = 1;
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if ((unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1820.238f, 3671.948f, 30.8437f, 1957.818f, 3751.887f, 55.4436f, 159.9375f, false, true, 0) && unk_0xE33D59DA70B58FDF(Local_151, 1f)) || unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_151, 15f, 15f, 15f, false, true, 0))
				{
					func_141();
					if (!func_184())
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
						{
							iLocal_94 = unk_0xB6997A7EB3F5C8C0();
						}
						func_144(1);
						func_143(1);
					}
					if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1877.761f, 3727.7f, 31.882f, 1896.962f, 3693.83f, 34.9925f, 19.1875f, false, true, 0))
					{
						func_61(&uLocal_172, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
						{
							unk_0x75A16C3DA34F1245(uLocal_154[0], true);
						}
						if (unk_0xA6DB27D19ECBB7DA(uLocal_154[1]))
						{
							unk_0x75A16C3DA34F1245(uLocal_154[1], true);
						}
						iLocal_122 = (unk_0x9CD27B0045628463() + 120000);
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_122 < unk_0x9CD27B0045628463())
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x5F9532F3B5CC2551(iLocal_93))
				{
					unk_0xE8854A4326B9E12B(&iLocal_98);
					unk_0x69F4BE8C8CC4796C(0, iLocal_90[1], 7000, 2060, 4);
					unk_0xE73A266DB0CA9042(0, 2500);
					unk_0xC20E50AA46D09CA8(0, iLocal_93, -1, -1, 1f, 1, 0);
					unk_0x39E72BC99E6360CB(iLocal_98);
					unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
					unk_0x3841422E9C488D8C(&iLocal_98);
				}
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
				{
					unk_0xE8854A4326B9E12B(&iLocal_98);
					unk_0x69F4BE8C8CC4796C(0, iLocal_90[0], 7000, 2060, 4);
					unk_0x15D3A79D4E44B913(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, false, 40000f);
					unk_0x15D3A79D4E44B913(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, true, 40000f);
					unk_0xBB9CE077274F6A1B(0, 40000f, 0);
					unk_0x39E72BC99E6360CB(iLocal_98);
					unk_0x5ABA3986D90D8A3B(iLocal_90[1], iLocal_98);
					unk_0x3841422E9C488D8C(&iLocal_98);
				}
				unk_0xC1B1E9A034A63A62(0);
				iLocal_54 = 3;
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
			{
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 8f, 8f, 4f, false, true, 0))
				{
					if (unk_0xD71649DB0A545AA3(unk_0xD80958FC74E988A6(), iLocal_90[0], 80f))
					{
						bLocal_120 = true;
						unk_0xC1B1E9A034A63A62(0);
						iLocal_54 = 4;
					}
				}
				else if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 30f, 30f, 30f, false, true, 0))
				{
					unk_0xB542DE8C3D1CB210(true);
				}
				else
				{
					unk_0xB542DE8C3D1CB210(false);
				}
			}
			break;
		
		case 3:
			if (iLocal_53 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
					{
						if (func_61(&uLocal_172, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							unk_0xC1B1E9A034A63A62(0);
							iLocal_54 = 4;
						}
					}
					if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 8f, 8f, 4f, false, true, 0))
					{
						if (unk_0xD71649DB0A545AA3(unk_0xD80958FC74E988A6(), iLocal_90[0], 80f))
						{
							bLocal_120 = true;
							unk_0xC1B1E9A034A63A62(0);
							iLocal_54 = 4;
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 30f, 30f, 30f, false, true, 0))
					{
						func_140();
						if (func_139())
						{
							func_56(0);
						}
					}
					else if (func_4())
					{
						func_56(1);
					}
				}
				if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_67, 15f, 15f, 15f, false, true, 0) && !unk_0x44D28D5DDFE5F68C(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
					{
						if (unk_0xD71649DB0A545AA3(unk_0xD80958FC74E988A6(), iLocal_90[0], 80f))
						{
							if (unk_0x6CD5A433374D4CFB(iLocal_90[0], unk_0xD80958FC74E988A6()))
							{
								if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
								{
									unk_0xE8854A4326B9E12B(&iLocal_98);
									unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2060, 4);
									unk_0xEA47FE3719165B94(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0f, false, false, false);
									unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
									unk_0x39E72BC99E6360CB(iLocal_98);
									unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
									unk_0x3841422E9C488D8C(&iLocal_98);
								}
								if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
								{
									unk_0x69F4BE8C8CC4796C(iLocal_90[1], unk_0xD80958FC74E988A6(), -1, 2060, 4);
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_54 = 4;
							}
						}
					}
				}
				if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1889.121f, 3715.057f, 31.844f, 1895.608f, 3703.586f, 34.8272f, 12.4375f, false, true, 0))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
					{
						unk_0xE8854A4326B9E12B(&iLocal_98);
						unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2060, 4);
						unk_0xEA47FE3719165B94(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0f, false, false, false);
						unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
						unk_0x39E72BC99E6360CB(iLocal_98);
						unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
						unk_0x3841422E9C488D8C(&iLocal_98);
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
						{
							unk_0x69F4BE8C8CC4796C(iLocal_90[1], unk_0xD80958FC74E988A6(), -1, 2060, 4);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_54 = 4;
					}
				}
				if (unk_0x4C241E39B23DF959(iLocal_93, false))
				{
					if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_93, 1.5f, 1.5f, 5f, false, true, 0) && unk_0x44D28D5DDFE5F68C(unk_0xD80958FC74E988A6()))
					{
						if (func_139())
						{
							func_56(0);
						}
						func_62();
						unk_0x4EDE34FBADD967A6(0);
						if (func_61(&uLocal_172, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_169 = 2;
							iLocal_62 = 0;
							while (iLocal_62 <= 1)
							{
								if (unk_0xA6DB27D19ECBB7DA(uLocal_154[iLocal_62]))
								{
									unk_0x86A652570E5F25DD(&(uLocal_154[iLocal_62]));
								}
								iLocal_62++;
							}
							if (!unk_0xA6DB27D19ECBB7DA(iLocal_157))
							{
								iLocal_157 = func_137(iLocal_93, 0, 0);
							}
							if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
							{
								unk_0xAAA34F8A7CB32098(iLocal_90[0]);
							}
							iLocal_54 = 4;
						}
					}
				}
				if (iLocal_122 < unk_0x9CD27B0045628463())
				{
					if (func_139())
					{
						func_56(0);
					}
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1])) && unk_0x7239B21A38F536BA(iLocal_93))
						{
							unk_0xE8854A4326B9E12B(&iLocal_98);
							unk_0x69F4BE8C8CC4796C(0, iLocal_90[1], -1, 2060, 4);
							unk_0xC20E50AA46D09CA8(0, iLocal_93, -1, -1, 1f, 1, 0);
							unk_0x39E72BC99E6360CB(iLocal_98);
							unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
							unk_0x3841422E9C488D8C(&iLocal_98);
							unk_0xE8854A4326B9E12B(&iLocal_98);
							unk_0x69F4BE8C8CC4796C(0, iLocal_90[0], -1, 2060, 4);
							unk_0x5AD23D40115353AC(0, iLocal_90[0], 0);
							unk_0xC20E50AA46D09CA8(0, iLocal_93, -1, 0, 1f, 1, 0);
							unk_0x39E72BC99E6360CB(iLocal_98);
							unk_0x5ABA3986D90D8A3B(iLocal_90[1], iLocal_98);
							unk_0x3841422E9C488D8C(&iLocal_98);
							iLocal_62 = 0;
							while (iLocal_62 <= 1)
							{
								if (unk_0xA6DB27D19ECBB7DA(uLocal_154[iLocal_62]))
								{
									unk_0x86A652570E5F25DD(&(uLocal_154[iLocal_62]));
								}
								iLocal_62++;
							}
							iLocal_54 = 2;
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_53 == 1)
			{
				switch (iLocal_169)
				{
					case 0:
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
						{
							if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 8f, 8f, 4f, false, true, 0) || bLocal_120)
							{
								unk_0xB542DE8C3D1CB210(false);
								unk_0x69F4BE8C8CC4796C(iLocal_90[0], unk_0xD80958FC74E988A6(), -1, 2060, 4);
								unk_0x69F4BE8C8CC4796C(iLocal_90[1], unk_0xD80958FC74E988A6(), -1, 2060, 4);
								unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_90[0], -1, 2060, 4);
								if ((unk_0x9CD27B0045628463() + 50000) > iLocal_122 || unk_0xFA1E2BF8B10598F9(unk_0x4F8644AF03D0E0D6()))
								{
									func_6();
									if (bLocal_120)
									{
										if (!func_4())
										{
											if (func_17() == 0)
											{
												if (func_61(&uLocal_172, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_169++;
												}
											}
											else if (func_17() == 1)
											{
												if (func_61(&uLocal_172, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_169++;
												}
											}
											else if (func_17() == 2)
											{
												if (func_61(&uLocal_172, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													unk_0xC1B1E9A034A63A62(0);
													iLocal_169++;
												}
											}
										}
									}
									else
									{
										iLocal_169++;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!func_4())
						{
							if (func_136())
							{
								if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
								{
									unk_0xE8854A4326B9E12B(&iLocal_98);
									unk_0xEA47FE3719165B94(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0f, false, false, false);
									unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), -1);
									unk_0x39E72BC99E6360CB(iLocal_98);
									unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
									unk_0x3841422E9C488D8C(&iLocal_98);
									if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
									{
										unk_0xE8854A4326B9E12B(&iLocal_98);
										unk_0xEA47FE3719165B94(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0f, false, false, false);
										unk_0x5AD23D40115353AC(0, iLocal_90[0], 0);
										unk_0xE73A266DB0CA9042(0, 3000);
										unk_0x15D3A79D4E44B913(0, -1052.215f, -1354.937f, 4.3754f, 1f, -1, 1f, false, 40000f);
										unk_0x15D3A79D4E44B913(0, -1061.464f, -1384.922f, 4.2462f, 1f, -1, 1f, true, 40000f);
										unk_0xBB9CE077274F6A1B(0, 40000f, 0);
										unk_0x39E72BC99E6360CB(iLocal_98);
										unk_0x5ABA3986D90D8A3B(iLocal_90[1], iLocal_98);
										unk_0x3841422E9C488D8C(&iLocal_98);
									}
									func_135();
								}
							}
							else
							{
								if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
								{
									if (unk_0xD71649DB0A545AA3(unk_0xD80958FC74E988A6(), iLocal_90[0], 80f))
									{
										unk_0x69F4BE8C8CC4796C(iLocal_90[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
										unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_90[0], 10000, 2060, 4);
										func_6();
										unk_0x4EDE34FBADD967A6(0);
										iLocal_169++;
									}
									else
									{
										func_134(iLocal_90[0], &(uLocal_64[0]));
									}
								}
								if (!func_4())
								{
									iLocal_169++;
								}
							}
						}
						break;
					
					case 2:
						if (func_136())
						{
							iLocal_169 = 6;
						}
						else
						{
							iLocal_169++;
						}
						break;
					
					case 3:
						if (!iLocal_103)
						{
							if (unk_0x83666F9FB8FEBD4B() > 1500)
							{
								if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
								{
									unk_0xE8854A4326B9E12B(&iLocal_98);
									unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), 10000, 2060, 4);
									unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
									unk_0xE73A266DB0CA9042(0, 500);
									unk_0x39E72BC99E6360CB(iLocal_98);
									unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
									unk_0x3841422E9C488D8C(&iLocal_98);
									unk_0xC1B1E9A034A63A62(0);
									iLocal_103 = 1;
								}
							}
						}
						func_134(iLocal_90[0], &(uLocal_64[0]));
						if (!func_4())
						{
							if (func_61(&uLocal_172, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_169++;
							}
						}
						break;
					
					case 4:
						if (!func_136())
						{
							if (!func_4())
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
									if (unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
									{
										unk_0x86A652570E5F25DD(&(uLocal_154[0]));
									}
									if (unk_0xA6DB27D19ECBB7DA(uLocal_154[1]))
									{
										unk_0x86A652570E5F25DD(&(uLocal_154[1]));
									}
									if (unk_0x4C241E39B23DF959(iLocal_93, false))
									{
										unk_0xB664292EAECF7FA6(iLocal_93, 1);
										if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
										{
											unk_0xC20E50AA46D09CA8(iLocal_90[0], iLocal_93, -1, 0, 1f, 1, 0);
										}
									}
									iLocal_169++;
								}
							}
						}
						else
						{
							if (unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_154[0]));
							}
							if (unk_0xA6DB27D19ECBB7DA(uLocal_154[1]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_154[1]));
							}
							iLocal_169++;
						}
						break;
					
					case 5:
						if (func_136())
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
							{
								if (!unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
									unk_0x9F3480FE65DB31B5(iLocal_90[0], func_57());
									unk_0x3DBFC55D5C9BB447(iLocal_90[0], true);
									unk_0x0BDDB8D9EC6BCF3C(iLocal_90[0], 0);
								}
								unk_0xBF25EB89375A37AD(255, iLocal_99, joaat("player"));
								func_133();
							}
							if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
							{
								if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) != iLocal_93)
								{
									if (!func_4())
									{
										if (func_17() == 0)
										{
											if (func_61(&uLocal_172, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_54 = 7;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_172, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_54 = 7;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_172, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_54 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_54 = 7;
								}
							}
						}
						break;
					
					case 6:
						func_134(iLocal_90[0], &(uLocal_64[0]));
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (func_136())
							{
								if (!func_4())
								{
									if (func_61(&uLocal_172, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_169 = 10;
									}
								}
							}
							else
							{
								iLocal_169 = 4;
							}
						}
						else
						{
							iLocal_169 = 4;
						}
						break;
					
					case 7:
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (func_136())
							{
								if (!func_4())
								{
									if (func_17() == 0)
									{
										if (func_61(&uLocal_172, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_169 = 10;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_172, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_169 = 10;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_172, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
											iLocal_169 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_169 = 4;
							}
						}
						else
						{
							iLocal_169 = 4;
						}
						break;
					
					case 10:
						if (func_136())
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
							{
								if (!unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
								{
									unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
									unk_0x9F3480FE65DB31B5(iLocal_90[0], func_57());
									unk_0x3DBFC55D5C9BB447(iLocal_90[0], true);
									unk_0x0BDDB8D9EC6BCF3C(iLocal_90[0], 0);
								}
								unk_0xBF25EB89375A37AD(255, iLocal_99, joaat("player"));
								func_133();
							}
							iLocal_169++;
						}
						else
						{
							iLocal_169 = 4;
						}
						break;
					
					case 11:
						iLocal_54 = 7;
						break;
					}
			}
			if (iLocal_53 == 2)
			{
				switch (iLocal_169)
				{
					case 0:
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
						{
							if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 10f, 10f, 10f, false, true, 0))
							{
								if (unk_0xD71649DB0A545AA3(iLocal_90[0], unk_0xD80958FC74E988A6(), 50f))
								{
									unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_90[0], -1, 2060, 4);
									unk_0x69F4BE8C8CC4796C(iLocal_90[0], unk_0xD80958FC74E988A6(), -1, 2060, 4);
									unk_0x69F4BE8C8CC4796C(iLocal_90[1], unk_0xD80958FC74E988A6(), -1, 2060, 4);
									if (func_139())
									{
										func_56(0);
									}
									func_6();
									unk_0x4EDE34FBADD967A6(0);
									if (func_61(&uLocal_172, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_169++;
									}
								}
								else
								{
									func_134(iLocal_90[0], &(uLocal_64[0]));
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
						{
							unk_0xE8854A4326B9E12B(&iLocal_98);
							unk_0xE73A266DB0CA9042(0, 500);
							unk_0x39E72BC99E6360CB(iLocal_98);
							unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
							unk_0x3841422E9C488D8C(&iLocal_98);
							unk_0xC1B1E9A034A63A62(0);
							iLocal_169++;
						}
						break;
					
					case 2:
						func_134(iLocal_90[0], &(uLocal_64[0]));
						if (!unk_0x44D28D5DDFE5F68C(unk_0xD80958FC74E988A6()))
						{
							if (unk_0x4C241E39B23DF959(iLocal_93, false))
							{
								unk_0xB664292EAECF7FA6(iLocal_93, 1);
							}
						}
						if (unk_0x83666F9FB8FEBD4B() > 8000)
						{
							if (unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_154[0]));
							}
							if (unk_0xA6DB27D19ECBB7DA(uLocal_154[1]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_154[1]));
							}
							if (!unk_0xA6DB27D19ECBB7DA(iLocal_157))
							{
								if (unk_0x4C241E39B23DF959(iLocal_93, false))
								{
									iLocal_157 = func_137(iLocal_93, 0, 0);
									unk_0xB664292EAECF7FA6(iLocal_93, 1);
								}
							}
						}
						if (!func_4())
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
							{
								if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 20f, 20f, 20f, false, true, 0) && unk_0x83666F9FB8FEBD4B() > 9500)
								{
									iVar0 = unk_0xD53343AA4FB7DD28(0, 100);
									if (iVar0 < 60)
									{
										if (func_61(&uLocal_172, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											unk_0xC1B1E9A034A63A62(0);
										}
									}
									else if (func_61(&uLocal_172, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										unk_0xC1B1E9A034A63A62(0);
									}
								}
							}
						}
						if (!unk_0x5F9532F3B5CC2551(iLocal_93))
						{
							if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_93, true))
							{
								iLocal_54 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_53 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x5F9532F3B5CC2551(iLocal_93))
				{
					if (unk_0x83666F9FB8FEBD4B() > 50000 || unk_0xBB40DD2270B65366(iLocal_93, -1) == iLocal_90[0])
					{
						if (func_61(&uLocal_172, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (unk_0x4C241E39B23DF959(iLocal_93, false) && !unk_0xB497F06B288DCFDF(iLocal_93))
							{
								if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
								{
									if (unk_0x22AC59A870E6A669(iLocal_93, -1) && unk_0xA3EE4A07279BB9DB(iLocal_90[0], iLocal_93, false))
									{
										unk_0x7AA80209BDA643EB(iLocal_90[0], iLocal_93);
										iLocal_54 = 2;
									}
									else if (unk_0xBB40DD2270B65366(iLocal_93, -1) == iLocal_90[0])
									{
										iLocal_54 = 2;
									}
									else if (unk_0xBB40DD2270B65366(iLocal_93, -1) == unk_0xD80958FC74E988A6())
									{
										iLocal_54 = 7;
									}
									else
									{
										func_64(iLocal_90[0], 120000, 0);
										unk_0xBB9CE077274F6A1B(iLocal_90[0], 40000f, 0);
										unk_0x971D38760FBC02EF(iLocal_90[0], true);
										unk_0x4EDE34FBADD967A6(0);
										func_60();
									}
								}
							}
							else if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
							{
								func_64(iLocal_90[0], 120000, 0);
								unk_0xBB9CE077274F6A1B(iLocal_90[0], 40000f, 0);
								unk_0x971D38760FBC02EF(iLocal_90[0], true);
								unk_0x4EDE34FBADD967A6(0);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (unk_0x83666F9FB8FEBD4B() > 60000)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (unk_0x4C241E39B23DF959(iLocal_93, false))
						{
							if (unk_0x22AC59A870E6A669(iLocal_93, -1))
							{
								if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
								{
									unk_0xE8854A4326B9E12B(&iLocal_98);
									unk_0x0F804F1DB19B9689(0);
									unk_0xC20E50AA46D09CA8(0, iLocal_93, -1, -1, 1f, 1, 0);
									unk_0x39E72BC99E6360CB(iLocal_98);
									unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
									unk_0x3841422E9C488D8C(&iLocal_98);
								}
							}
							if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
							{
								unk_0xE8854A4326B9E12B(&iLocal_98);
								unk_0x0F804F1DB19B9689(0);
								unk_0xC20E50AA46D09CA8(0, iLocal_93, -1, 0, 1f, 1, 0);
								unk_0x39E72BC99E6360CB(iLocal_98);
								unk_0x5ABA3986D90D8A3B(iLocal_90[1], iLocal_98);
								unk_0x3841422E9C488D8C(&iLocal_98);
							}
							iLocal_54 = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_53 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					if (!unk_0x5F9532F3B5CC2551(iLocal_93))
					{
						if (unk_0xA3EE4A07279BB9DB(iLocal_90[0], iLocal_93, false))
						{
							if (unk_0x77F1BEB8863288D5(iLocal_90[0], 355471868) != 1 && unk_0x77F1BEB8863288D5(iLocal_90[0], 355471868) != 0)
							{
								unk_0x45F6D8EEF34ABEF1(iLocal_93, 5f);
								unk_0x25367DE49D64CF16(iLocal_93, true);
								unk_0xE8854A4326B9E12B(&iLocal_98);
								unk_0xF0AF20AA7731F8C3(0, iLocal_93, -1016.152f, -1352.855f, 4.4854f, 4, 50f, 262144, -1f, 100f, true);
								unk_0xF0AF20AA7731F8C3(0, iLocal_93, -1005.757f, -1353.806f, 4.4756f, 4, 50f, 262144, -1f, 100f, true);
								unk_0xF0AF20AA7731F8C3(0, iLocal_93, -989.2302f, -1354.278f, -7.3581f, 4, 50f, 262144, -1f, 100f, true);
								unk_0x39E72BC99E6360CB(iLocal_98);
								unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
								unk_0x3841422E9C488D8C(&iLocal_98);
								unk_0x971D38760FBC02EF(iLocal_90[0], true);
								func_60();
							}
						}
					}
				}
			}
			if (iLocal_53 == 2)
			{
				if (unk_0x4C241E39B23DF959(iLocal_93, false))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
					{
						if (unk_0xA808AA1D79230FC2(iLocal_90[0], iLocal_93) && unk_0xA808AA1D79230FC2(iLocal_90[1], iLocal_93))
						{
							unk_0x25367DE49D64CF16(iLocal_93, true);
							unk_0xE1EF3C1216AFF2CD(iLocal_90[1]);
							unk_0x919BE13EED931959(iLocal_90[1], -1);
							unk_0x971D38760FBC02EF(iLocal_90[1], true);
							iLocal_54 = 5;
						}
						if (!iLocal_100)
						{
							if (unk_0xA808AA1D79230FC2(iLocal_90[0], iLocal_93) && !unk_0xA808AA1D79230FC2(iLocal_90[1], iLocal_93))
							{
								unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
								unk_0x919BE13EED931959(iLocal_90[0], -1);
							}
							if (!unk_0xA808AA1D79230FC2(iLocal_90[0], iLocal_93) && unk_0xA808AA1D79230FC2(iLocal_90[1], iLocal_93))
							{
								unk_0xE1EF3C1216AFF2CD(iLocal_90[1]);
								unk_0x919BE13EED931959(iLocal_90[1], -1);
							}
							iLocal_100 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (unk_0x4C241E39B23DF959(iLocal_93, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
					unk_0xE8854A4326B9E12B(&iLocal_98);
					unk_0xE2A2AA2F659D77A7(0, iLocal_93, unk_0x1899F328B0E12848(iLocal_93, 0f, 2f, 0f), 10f, 0, iLocal_97, 262144, 5f, -1f);
					unk_0xC429DCEEB339E129(0, iLocal_93, 24, 500);
					unk_0xC429DCEEB339E129(0, iLocal_93, 9, 1500);
					unk_0xC429DCEEB339E129(0, iLocal_93, 24, 500);
					unk_0xC429DCEEB339E129(0, iLocal_93, 11, 1500);
					unk_0xF0AF20AA7731F8C3(0, iLocal_93, 2185.817f, 3915.471f, 27.9257f, 4, 30f, 262144, 0f, 0f, true);
					unk_0x39E72BC99E6360CB(iLocal_98);
					unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
					unk_0x3841422E9C488D8C(&iLocal_98);
					unk_0x971D38760FBC02EF(iLocal_90[0], true);
				}
			}
			iLocal_54 = 6;
			break;
		
		case 6:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
			{
				if (unk_0x77F1BEB8863288D5(iLocal_90[0], 242628503) == 1)
				{
					if (unk_0x00A9010CFE1E3533(iLocal_90[0]) == 5)
					{
						func_60();
					}
				}
			}
			break;
		
		case 7:
			if (iLocal_53 == 1)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
				{
					if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[1], 50f, 50f, 50f, false, true, 0))
					{
						unk_0x2595DD4236549CE3(&(iLocal_90[1]));
					}
				}
				switch (iLocal_63)
				{
					case 0:
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (!unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
							{
								uLocal_154[0] = func_154(iLocal_90[0], 0, 145);
							}
							iLocal_63++;
							unk_0xC1B1E9A034A63A62(0);
						}
						break;
					
					case 1:
						if (unk_0x83666F9FB8FEBD4B() > 1000)
						{
							if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
							{
								if (func_136())
								{
									if (unk_0x4C241E39B23DF959(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), false))
									{
										fLocal_163 = func_132(unk_0xD80958FC74E988A6(), iLocal_90[0], 1);
										iLocal_63++;
									}
								}
								else if (!iLocal_118)
								{
									if (func_61(&uLocal_172, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_118 = 1;
									}
								}
							}
						}
						break;
					
					case 2:
						func_131();
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
						{
							if (func_136())
							{
								if (!iLocal_117)
								{
									if (func_132(unk_0xD80958FC74E988A6(), iLocal_90[0], 1) > (fLocal_163 + 5f))
									{
										if (func_61(&uLocal_172, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_117 = 1;
										}
									}
								}
							}
							else if (!iLocal_118)
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_118 = 1;
								}
							}
						}
						if (func_2())
						{
							if (unk_0x4C241E39B23DF959(iLocal_93, false))
							{
								unk_0xB664292EAECF7FA6(iLocal_93, 1);
							}
							if (unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
							{
								unk_0x86A652570E5F25DD(&(uLocal_154[0]));
							}
							if (func_17() == 2 && !func_58())
							{
								if (!unk_0xA6DB27D19ECBB7DA(iLocal_102))
								{
									iLocal_102 = func_129(Local_86, 0);
									unk_0xDF735600A4696DAF(iLocal_102, 269);
									func_127();
								}
							}
							iLocal_61 = 1;
							iLocal_63++;
						}
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
						{
							if (func_132(unk_0xD80958FC74E988A6(), iLocal_90[0], 1) > 50f)
							{
								func_60();
							}
						}
						break;
					
					case 3:
						if (!func_4())
						{
							unk_0x4EDE34FBADD967A6(1500);
							unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
							if (func_17() == 0)
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_63++;
								}
							}
							else if (func_17() == 1)
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_63++;
								}
							}
							else if (func_17() == 2)
							{
								if (func_61(&uLocal_172, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_63++;
								}
							}
						}
						break;
					
					case 4:
						if (!func_4())
						{
							if (func_61(&uLocal_172, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_170 = unk_0x9CD27B0045628463();
								iLocal_63++;
							}
						}
						break;
					
					case 5:
						func_126();
						func_125();
						func_131();
						if (!iLocal_109)
						{
							if ((unk_0x9CD27B0045628463() - iLocal_170) > 7000)
							{
								if (!func_4())
								{
									if (func_61(&uLocal_172, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_170 = unk_0x9CD27B0045628463();
										iLocal_109 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_108 && !bLocal_107)
							{
								func_124();
							}
							else
							{
								func_121();
								func_120();
								unk_0x51669F7D1FB53D9F(true);
							}
						}
						if (func_119(Local_80))
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_172, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (func_118())
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_172, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
						{
							if (unk_0x20B60995556D004F(iLocal_90[0], Local_80, Global_21, true, true, 0))
							{
								if (unk_0xA6DB27D19ECBB7DA(iLocal_101))
								{
									unk_0x86A652570E5F25DD(&iLocal_101);
								}
								if (unk_0xA6DB27D19ECBB7DA(iLocal_102))
								{
									unk_0x86A652570E5F25DD(&iLocal_102);
								}
								iLocal_54 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_53 == 2)
			{
				switch (iLocal_63)
				{
					case 0:
						if (!unk_0x5F9532F3B5CC2551(iLocal_93))
						{
							if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_93, true))
							{
								if (!unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
								{
									uLocal_154[0] = func_154(iLocal_90[0], 0, 145);
								}
								if (!unk_0xA6DB27D19ECBB7DA(uLocal_154[1]))
								{
									uLocal_154[1] = func_154(iLocal_90[1], 0, 145);
								}
								if (!func_4())
								{
									unk_0xC1B1E9A034A63A62(0);
									if (func_17() == 0)
									{
										if (func_61(&uLocal_172, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_63++;
										}
									}
									else if (func_17() == 1)
									{
										if (func_61(&uLocal_172, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_63++;
										}
									}
									else if (func_17() == 2)
									{
										if (func_61(&uLocal_172, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_63++;
										}
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x5F9532F3B5CC2551(iLocal_93))
						{
							unk_0x0F804F1DB19B9689(iLocal_90[0]);
							unk_0xC20E50AA46D09CA8(iLocal_90[0], iLocal_93, 30000, 2, 2f, 1, 0);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_63++;
						break;
					
					case 2:
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]) && !unk_0x5F9532F3B5CC2551(iLocal_93))
						{
							unk_0xE8854A4326B9E12B(&iLocal_98);
							unk_0x0F804F1DB19B9689(0);
							unk_0x304AE42E357B8C7E(0, iLocal_93, 1.5f, -3f, 0f, 1f, 4000, 0.1f, true);
							unk_0xC20E50AA46D09CA8(0, iLocal_93, 30000, 1, 2f, 1, 0);
							unk_0x39E72BC99E6360CB(iLocal_98);
							unk_0x5ABA3986D90D8A3B(iLocal_90[1], iLocal_98);
							unk_0x3841422E9C488D8C(&iLocal_98);
						}
						unk_0xC1B1E9A034A63A62(0);
						iLocal_63++;
						break;
					
					case 3:
						func_126();
						func_125();
						if (!iLocal_116)
						{
							if (!func_4())
							{
								if (func_61(&uLocal_172, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_116 = 1;
								}
							}
						}
						if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
						{
							if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
							{
								if (!unk_0x5F9532F3B5CC2551(iLocal_90[0]) && !unk_0x5F9532F3B5CC2551(iLocal_90[1]))
								{
									if (unk_0xA3EE4A07279BB9DB(iLocal_90[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) && unk_0xA3EE4A07279BB9DB(iLocal_90[1], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
									{
										unk_0xBF25EB89375A37AD(255, iLocal_99, joaat("player"));
										func_133();
										iLocal_62 = 0;
										while (iLocal_62 <= (iLocal_89 - 1))
										{
											if (unk_0xA6DB27D19ECBB7DA(uLocal_154[iLocal_62]))
											{
												unk_0x86A652570E5F25DD(&(uLocal_154[iLocal_62]));
											}
											iLocal_62++;
										}
										if (unk_0xA6DB27D19ECBB7DA(iLocal_157))
										{
											unk_0x86A652570E5F25DD(&iLocal_157);
										}
										if (func_17() == 2 && !func_58())
										{
											if (!unk_0xA6DB27D19ECBB7DA(iLocal_102))
											{
												iLocal_102 = func_129(Local_86, 0);
												unk_0xDF735600A4696DAF(iLocal_102, 269);
												func_127();
											}
										}
										if (func_17() == 0)
										{
											if (func_61(&uLocal_172, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_63++;
											}
										}
										else if (func_17() == 1)
										{
											if (func_61(&uLocal_172, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_63++;
											}
										}
										else if (func_17() == 2)
										{
											if (func_61(&uLocal_172, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												unk_0xC1B1E9A034A63A62(0);
												iLocal_63++;
											}
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_126();
						func_125();
						if (!func_4())
						{
							if (func_61(&uLocal_172, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_61 = 1;
								unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
								iLocal_170 = unk_0x9CD27B0045628463();
								iLocal_63++;
							}
						}
						break;
					
					case 5:
						func_126();
						if (iLocal_345 == 0 || iLocal_345 == 9)
						{
							func_125();
						}
						if ((unk_0x9CD27B0045628463() - iLocal_170) > 9000)
						{
							func_112();
						}
						if (iLocal_345 == 9 && ((unk_0x9CD27B0045628463() - iLocal_346) > 6000 && (unk_0x9CD27B0045628463() - iLocal_346) < 6500))
						{
							func_61(&uLocal_172, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (func_119(Local_80))
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_172, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (func_118())
						{
							func_5(0);
							func_62();
							unk_0x4EDE34FBADD967A6(0);
							func_61(&uLocal_172, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!unk_0x5F9532F3B5CC2551(iLocal_93))
						{
							if ((!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1])) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_93, false))
							{
								if (unk_0x20B60995556D004F(iLocal_90[0], Local_80, Global_21, true, true, 0) && unk_0x20B60995556D004F(iLocal_90[1], Local_80, Global_21, false, true, 0))
								{
									iLocal_63++;
								}
							}
						}
						break;
					
					case 6:
						if (unk_0xA6DB27D19ECBB7DA(iLocal_101))
						{
							unk_0x86A652570E5F25DD(&iLocal_101);
						}
						if (unk_0xA6DB27D19ECBB7DA(iLocal_102))
						{
							unk_0x86A652570E5F25DD(&iLocal_102);
						}
						iLocal_54 = 8;
						break;
					}
			}
			break;
		
		case 8:
			iLocal_62 = 0;
			while (iLocal_62 <= (iLocal_89 - 1))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[iLocal_62]))
				{
					unk_0x9F8AA94D6D97DBF4(iLocal_90[iLocal_62], false);
				}
				iLocal_62++;
			}
			if (iLocal_53 == 1)
			{
				if (func_111(1, 0, 1) && iLocal_123 == -1)
				{
					func_6();
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), (10.5f - 5f), 2, false);
					}
					if (func_2())
					{
						if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) == iLocal_93)
						{
							iLocal_123 = 0;
						}
						else
						{
							iLocal_123 = 1;
						}
					}
					else
					{
						iLocal_123 = 2;
					}
				}
				if (iLocal_123 == 0)
				{
					func_110();
				}
				if (iLocal_123 == 1)
				{
					func_109();
				}
				if (iLocal_123 == 2)
				{
					func_108();
				}
				if (bLocal_129)
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					func_30();
				}
			}
			if (iLocal_53 == 2)
			{
				if (func_111(1, 0, 1) && iLocal_123 == -1)
				{
					func_62();
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						unk_0x260BE8F09E326A20(unk_0xB6997A7EB3F5C8C0(), (10.5f - 4f), 2, false);
						unk_0xACCFB4ACF53551B0(1143.587f, 2672.224f, 37.1142f, 70f, 2);
						unk_0xACCFB4ACF53551B0(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					func_101(1, 1, 1, 0);
					while (func_4())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (func_2())
					{
						if (unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false) == iLocal_93)
						{
							iLocal_123 = 0;
						}
					}
				}
				if (iLocal_123 == 0)
				{
					func_98();
				}
				else if (iLocal_123 == 1)
				{
					func_97();
				}
				else if (iLocal_123 == 2)
				{
					func_71();
				}
				if (bLocal_129)
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
					func_30();
				}
			}
			break;
		
		case 9:
			break;
	}
}

void func_71()
{
	switch (iLocal_125)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
			{
				unk_0xED74007FFB146BC2(iLocal_90[0]);
				unk_0x69F4BE8C8CC4796C(iLocal_90[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
				unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_90[0], 10000, 2060, 4);
			}
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
			{
				unk_0xED74007FFB146BC2(iLocal_90[0]);
				unk_0x69F4BE8C8CC4796C(iLocal_90[1], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
			}
			func_61(&uLocal_172, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_125++;
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					unk_0xD76B57B44F1E6F8B(iLocal_90[0], Local_83, 1f, -1, 40000f, 0.5f);
					iLocal_124 = unk_0x9CD27B0045628463() + 500;
					iLocal_125++;
				}
			}
			break;
		
		case 3:
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
				{
					unk_0x15D3A79D4E44B913(iLocal_90[1], Local_83, 1f, -1, 0.25f, false, 40000f);
					iLocal_125++;
				}
			}
			break;
		
		case 4:
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_73(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_96();
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
					func_95(99, 1);
					func_94(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_94(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_94(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_80(5))
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
							func_94(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_80(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_94(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_94(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_94(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_94(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_94(joaat("sp2_money_spent_property"), iParam3);
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
									func_94(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_80(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_94(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_94(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_94(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_79(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_95(95, iParam3);
					break;
				
				case 1:
					func_95(97, iParam3);
					break;
				
				case 2:
					func_95(96, iParam3);
					break;
			}
			func_95(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_76(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_76(iVar1);
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
					func_94(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_94(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_94(joaat("sp2_total_cash_earned"), iParam3);
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
	func_75(iParam0);
	if (Global_34909 == 15)
	{
		func_74(0);
	}
	return 1;
}

void func_74(bool bParam0)
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

void func_75(int iParam0)
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

void func_76(int iParam0)
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
	else if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0) || unk_0xA921AA820C25702F(Global_2097152[func_78() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xE80492A9AC099A93(&(Global_2097152[func_78() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_77(iParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_77(int iParam0)
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

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79(int iParam0)
{
	func_95(93, iParam0);
	func_95(29, iParam0);
	func_95(30, iParam0);
}

bool func_80(int iParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0xA921AA820C25702F(Global_2097152[func_78() /*8053*/].f_5756.f_10, iParam0);
}

int func_81(bool bParam0)
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
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_93(&Global_2543696))
	{
		if (func_91(&Global_2543696, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_2543696, iParam0))
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

int func_84(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_87(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_90(uParam0, iVar0);
		iVar0++;
	}
	func_88(&(uParam0->f_62), (8f - 0.5f));
}

void func_88(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_89() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_89()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

void func_90(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)
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

bool func_93(var uParam0)
{
	return uParam0->f_68 == 1;
}

void func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, iVar0, true);
}

void func_95(int iParam0, int iParam1)
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

void func_96()
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

void func_97()
{
	int iVar0;
	
	switch (iLocal_125)
	{
		case 0:
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				if (unk_0x5721B434AD84D57A(iVar0))
				{
					if (unk_0x4C241E39B23DF959(iVar0, false))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
							unk_0xED74007FFB146BC2(iLocal_90[0]);
						}
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_90[1]);
							unk_0xED74007FFB146BC2(iLocal_90[1]);
						}
					}
					func_61(&uLocal_172, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
			{
				unk_0xE8854A4326B9E12B(&iLocal_98);
				unk_0x504D54DF3F6F2247(0, 0, 0);
				unk_0x15D3A79D4E44B913(0, Local_83, 1f, -1, 0.25f, false, 40000f);
				unk_0x39E72BC99E6360CB(iLocal_98);
				unk_0x5ABA3986D90D8A3B(iLocal_90[1], iLocal_98);
				unk_0x3841422E9C488D8C(&iLocal_98);
				iLocal_124 = unk_0x9CD27B0045628463() + 1500;
				iLocal_125++;
			}
			break;
		
		case 3:
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					unk_0x15D3A79D4E44B913(iLocal_90[0], Local_83, 1f, -1, 0.25f, false, 40000f);
					iLocal_125++;
				}
			}
			break;
		
		case 4:
			if (func_17() == 2)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_124 = unk_0x9CD27B0045628463() + 1000;
					iLocal_125 = 7;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_124 = unk_0x9CD27B0045628463() + 1500;
					iLocal_125 = 7;
				}
			}
			else if (func_17() == 0)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_124 = unk_0x9CD27B0045628463() + 750;
					iLocal_125 = 7;
				}
			}
			break;
		
		case 5:
			iLocal_125++;
			break;
		
		case 6:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						unk_0x15D3A79D4E44B913(iLocal_90[0], Local_83, 1f, -1, 0.25f, false, 40000f);
						iLocal_124 = unk_0x9CD27B0045628463() + 3500;
						iLocal_125++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						unk_0x15D3A79D4E44B913(iLocal_90[0], Local_83, 1f, -1, 0.25f, false, 40000f);
						iLocal_124 = unk_0x9CD27B0045628463() + 3500;
						iLocal_125++;
					}
				}
			}
			break;
		
		case 7:
			if (!func_4())
			{
				iLocal_125++;
			}
			break;
		
		case 8:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_98()
{
	unk_0x719FF505F097FD20();
	switch (iLocal_125)
	{
		case 0:
			unk_0xA6294919E56FF02A(false);
			unk_0xA0EBB943C300E693(false);
			if (unk_0x4C241E39B23DF959(iLocal_93, false))
			{
				if (unk_0x5721B434AD84D57A(iLocal_93))
				{
					if (unk_0x4C241E39B23DF959(iLocal_93, false))
					{
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
							unk_0xED74007FFB146BC2(iLocal_90[0]);
							unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_90[0], 4000, 2060, 4);
						}
						if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
						{
							unk_0xE1EF3C1216AFF2CD(iLocal_90[1]);
							unk_0xED74007FFB146BC2(iLocal_90[1]);
						}
					}
					StringCopy(&cLocal_142, "", 24);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_172, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			if (unk_0x4C241E39B23DF959(iLocal_93, false))
			{
				iLocal_127 = unk_0x6ABFA3E16460F22D(26379945, 1121.335f, 2643.908f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, false, 2);
				iLocal_128 = unk_0x6ABFA3E16460F22D(26379945, 1121.302f, 2643.998f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, false, 2);
				unk_0x6A25241C340D3822(iLocal_127, "HAND_SHAKE", 0.3f);
				unk_0x6A25241C340D3822(iLocal_128, "HAND_SHAKE", 0.3f);
				unk_0x9FBDA379383A52A4(iLocal_128, iLocal_127, 2500, 0, 0);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				unk_0xA56F01F3765B93A0(Local_80, 8f, true, false, false, false);
				unk_0x06843DA7060A026B(iLocal_93, 1120.551f, 2647.307f, 36.9963f, true, false, false, true);
				unk_0x8E2530AA8ADA980E(iLocal_93, 179.7675f);
				unk_0x49733E92263139D1(iLocal_93);
				iLocal_124 = unk_0x9CD27B0045628463() + 2500;
				iLocal_125++;
			}
			break;
		
		case 2:
			if (iLocal_124 - 500) < unk_0x9CD27B0045628463()
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
				{
					if (unk_0x997ABD671D25CA0B(iLocal_90[1], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_98);
						unk_0x15D3A79D4E44B913(0, Local_83, 1f, -1, 0.25f, false, 40000f);
						unk_0x39E72BC99E6360CB(iLocal_98);
						unk_0x5ABA3986D90D8A3B(iLocal_90[1], iLocal_98);
						unk_0x3841422E9C488D8C(&iLocal_98);
						unk_0x971D38760FBC02EF(iLocal_90[1], true);
					}
				}
			}
			if (iLocal_124 - 1000) < unk_0x9CD27B0045628463()
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					if (unk_0x997ABD671D25CA0B(iLocal_90[0], false))
					{
						unk_0xE8854A4326B9E12B(&iLocal_98);
						unk_0x15D3A79D4E44B913(0, Local_83 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, false, 40000f);
						unk_0x39E72BC99E6360CB(iLocal_98);
						unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
						unk_0x3841422E9C488D8C(&iLocal_98);
						unk_0x971D38760FBC02EF(iLocal_90[0], true);
					}
				}
			}
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				unk_0xBFD8727AEA3CCEBA(iLocal_127, 1105.849f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iLocal_128, 1106f, 2664.469f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				unk_0x9FBDA379383A52A4(iLocal_128, iLocal_127, 5000, 0, 0);
				unk_0xC197616D221FF4A4();
				iLocal_124 = unk_0x9CD27B0045628463() + 6000;
				iLocal_125++;
			}
			break;
		
		case 3:
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				unk_0xBFD8727AEA3CCEBA(iLocal_127, 1122.37f, 2646.108f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				unk_0xBFD8727AEA3CCEBA(iLocal_128, 1122.338f, 2646.157f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				unk_0x9FBDA379383A52A4(iLocal_128, iLocal_127, 1500, 1, 1);
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
				{
					unk_0x06843DA7060A026B(iLocal_90[0], 1141.156f, 2643.205f, 37.1487f, true, false, false, true);
					unk_0x8E2530AA8ADA980E(iLocal_90[0], 262.7369f);
					unk_0x06843DA7060A026B(iLocal_90[1], 1140.152f, 2644.149f, 37.1487f, true, false, false, true);
					unk_0x8E2530AA8ADA980E(iLocal_90[1], 262.1522f);
				}
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
				{
					unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), 0, 0);
				}
				if (func_17() == 2)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 1)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (func_17() == 0)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_124 = unk_0x9CD27B0045628463() + 1700;
				iLocal_125++;
			}
			break;
		
		case 4:
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			iLocal_125 = 7;
			break;
		
		case 6:
			if (!func_4())
			{
				if (func_17() == 2)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_124 = unk_0x9CD27B0045628463() + 5500;
						iLocal_125++;
					}
				}
				if (func_17() == 1 || func_17() == 0)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_124 = unk_0x9CD27B0045628463() + 5500;
						iLocal_125++;
					}
				}
			}
			break;
		
		case 7:
			unk_0xC197616D221FF4A4();
			unk_0x6F6981D2253C208F(unk_0xD80958FC74E988A6(), false);
			func_101(0, 1, 1, 0);
			unk_0x9614299DCB53E54B(&(iLocal_90[0]));
			unk_0x9614299DCB53E54B(&(iLocal_90[1]));
			if (unk_0x4C241E39B23DF959(iLocal_93, false))
			{
				unk_0xB664292EAECF7FA6(iLocal_93, 7);
			}
			if (iLocal_130)
			{
				if (!unk_0x5F9532F3B5CC2551(iLocal_93))
				{
					unk_0x2208438012482A1A(unk_0xD80958FC74E988A6(), false, false);
					unk_0x781B3D62BB013EF5(iLocal_93, true);
					unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				}
			}
			else
			{
				unk_0xC819F3CBB62BF692(false, 0f, 3, 0);
			}
			unk_0x026FB97D0A425F84(iLocal_127, false);
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0x6D0858B8EDFD2B7D(-7f, 1f);
			unk_0xA6294919E56FF02A(true);
			unk_0xA0EBB943C300E693(true);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			func_72(func_17(), 1, 40, 0, 1);
			bLocal_129 = true;
	}
	if (iLocal_125 != 0)
	{
		if (func_99(1000))
		{
			func_62();
			iLocal_130 = 1;
			iLocal_125 = 7;
		}
	}
}

int func_99(int iParam0)
{
	if (unk_0x5A859503B0C08678())
	{
		if ((unk_0x9CD27B0045628463() - Global_27) > iParam0)
		{
			Global_26 = unk_0x9CD27B0045628463();
		}
		Global_27 = unk_0x9CD27B0045628463();
		if ((unk_0x9CD27B0045628463() - Global_26) > iParam0)
		{
			if (func_100())
			{
				Global_26 = unk_0x9CD27B0045628463();
				return 1;
			}
		}
	}
	return 0;
}

int func_100()
{
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x580417101DDB492F(0, 18) || unk_0x580417101DDB492F(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_101(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_107(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_14())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_106(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_107(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_106(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_102(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
	}
}

int func_102(int iParam0)
{
	if (func_104(iParam0, 0))
	{
		return 1;
	}
	if (func_103())
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

bool func_103()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

bool func_104(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_105(-1, 0) == 8;
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

int func_105(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
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

int func_106(bool bParam0, bool bParam1, var uParam2)
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

void func_107(int iParam0)
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

void func_108()
{
	switch (iLocal_125)
	{
		case 0:
			if (!func_4())
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					unk_0xED74007FFB146BC2(iLocal_90[0]);
					unk_0x69F4BE8C8CC4796C(iLocal_90[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
					unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_90[0], 10000, 2060, 4);
				}
				if (bLocal_107)
				{
					func_61(&uLocal_172, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					func_61(&uLocal_172, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_125++;
			}
			break;
		
		case 1:
			iLocal_124 = unk_0x9CD27B0045628463() + 3000;
			iLocal_125++;
			break;
		
		case 2:
			if (func_17() == 0)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
			{
				unk_0xE8854A4326B9E12B(&iLocal_98);
				unk_0x504D54DF3F6F2247(0, 0, 0);
				unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 1800);
				unk_0x15D3A79D4E44B913(0, Local_83, 1f, -1, 0.25f, false, 40000f);
				unk_0xEA47FE3719165B94(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0f, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_98);
				unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
				unk_0x3841422E9C488D8C(&iLocal_98);
				unk_0x971D38760FBC02EF(iLocal_90[0], true);
				iLocal_124 = unk_0x9CD27B0045628463() + 2000;
				iLocal_125++;
			}
			break;
		
		case 4:
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_109()
{
	int iVar0;
	
	switch (iLocal_125)
	{
		case 0:
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				if (unk_0x5721B434AD84D57A(iVar0) && !func_4())
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
						unk_0xED74007FFB146BC2(iLocal_90[0]);
						unk_0x69F4BE8C8CC4796C(iLocal_90[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
						unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_90[0], 10000, 2060, 4);
					}
					if (bLocal_107)
					{
						func_61(&uLocal_172, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_172, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			iLocal_125++;
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
			{
				unk_0xE8854A4326B9E12B(&iLocal_98);
				unk_0x504D54DF3F6F2247(0, 0, 4194304);
				unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 1800);
				unk_0x15D3A79D4E44B913(0, Local_83, 1f, -1, 0.25f, false, 40000f);
				unk_0xEA47FE3719165B94(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0f, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_98);
				unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
				unk_0x3841422E9C488D8C(&iLocal_98);
				unk_0x971D38760FBC02EF(iLocal_90[0], true);
			}
			func_64(iLocal_90[0], 120000, 0);
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			iLocal_124 = unk_0x9CD27B0045628463() + 3000;
			iLocal_125++;
			break;
		
		case 4:
			iLocal_124 = unk_0x9CD27B0045628463() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			break;
		
		case 5:
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				iLocal_125++;
			}
			break;
		
		case 6:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

void func_110()
{
	switch (iLocal_125)
	{
		case 0:
			if (unk_0x4C241E39B23DF959(iLocal_93, false))
			{
				if (unk_0x5721B434AD84D57A(iLocal_93) && !func_4())
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
						unk_0xED74007FFB146BC2(iLocal_90[0]);
						unk_0x69F4BE8C8CC4796C(iLocal_90[0], unk_0xD80958FC74E988A6(), 10000, 2060, 4);
						unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iLocal_90[0], 10000, 2060, 4);
					}
					if (bLocal_107)
					{
						func_61(&uLocal_172, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						func_61(&uLocal_172, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_125++;
				}
			}
			break;
		
		case 1:
			iLocal_125++;
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
			{
				unk_0xE8854A4326B9E12B(&iLocal_98);
				unk_0x504D54DF3F6F2247(0, 0, 4194304);
				unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 1800);
				unk_0x15D3A79D4E44B913(0, Local_83, 1f, -1, 0.25f, false, 40000f);
				unk_0xEA47FE3719165B94(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0f, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_98);
				unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
				unk_0x3841422E9C488D8C(&iLocal_98);
				unk_0x971D38760FBC02EF(iLocal_90[0], true);
				func_64(iLocal_90[0], 120000, 0);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				iLocal_124 = unk_0x9CD27B0045628463() + 3000;
				iLocal_125++;
			}
			break;
		
		case 3:
			iLocal_124 = unk_0x9CD27B0045628463() + 3000;
			if (func_17() == 0)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 1)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			else if (func_17() == 2)
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_125++;
				}
			}
			break;
		
		case 4:
			if (iLocal_124 < unk_0x9CD27B0045628463())
			{
				iLocal_125++;
			}
			break;
		
		case 5:
			iLocal_125++;
			break;
		
		case 6:
			iLocal_125++;
			break;
		
		case 7:
			func_72(func_17(), 1, 80, 0, 1);
			bLocal_129 = true;
			break;
	}
}

int func_111(bool bParam0, bool bParam1, bool bParam2)
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

void func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if ((unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = unk_0x19CAFA3C87F7C2FF();
		if (iVar1 != 0)
		{
			iVar2 = unk_0xEE778F8C7E1142E2(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((func_117(64) || unk_0xF3A21BCD95725A4A(0, 86)) || unk_0xF3A21BCD95725A4A(0, 71)) || unk_0xF3A21BCD95725A4A(0, 72)) || unk_0xF3A21BCD95725A4A(0, 76)) || unk_0xF3A21BCD95725A4A(0, 73)) || unk_0xF3A21BCD95725A4A(0, 68)) || unk_0xF3A21BCD95725A4A(0, 75)) || iVar0)
		{
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
		}
	}
	switch (iLocal_345)
	{
		case 0:
			if (func_116())
			{
				unk_0x69F4BE8C8CC4796C(iLocal_90[0], iLocal_90[1], -1, 2060, 4);
				unk_0x69F4BE8C8CC4796C(iLocal_90[1], iLocal_90[0], -1, 2060, 4);
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					unk_0xE8854A4326B9E12B(&iLocal_98);
					unk_0xEA47FE3719165B94(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0f, false, false, false);
					unk_0xEA47FE3719165B94(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0f, false, false, false);
					unk_0x39E72BC99E6360CB(iLocal_98);
					unk_0x5ABA3986D90D8A3B(iLocal_90[0], iLocal_98);
					unk_0x3841422E9C488D8C(&iLocal_98);
					unk_0xE8854A4326B9E12B(&iLocal_98);
					unk_0xEA47FE3719165B94(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0f, false, false, false);
					unk_0xEA47FE3719165B94(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0f, false, false, false);
					unk_0x39E72BC99E6360CB(iLocal_98);
					unk_0x5ABA3986D90D8A3B(iLocal_90[1], iLocal_98);
					unk_0x3841422E9C488D8C(&iLocal_98);
					iLocal_346 = unk_0x9CD27B0045628463();
					iLocal_345++;
				}
			}
			break;
		
		case 1:
			if (!func_4())
			{
				iLocal_346 = unk_0x9CD27B0045628463();
				iLocal_345++;
			}
			break;
		
		case 2:
			if (func_116())
			{
				if ((unk_0x9CD27B0045628463() - iLocal_346) > 5000)
				{
					if (func_61(&uLocal_172, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_346 = unk_0x9CD27B0045628463();
						iLocal_345++;
					}
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - iLocal_346) > 15000)
			{
				if (func_116())
				{
					unk_0xEA47FE3719165B94(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0f, false, false, false);
					unk_0xEA47FE3719165B94(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0f, false, false, false);
					iLocal_345++;
				}
			}
			break;
		
		case 4:
			if (func_116())
			{
				func_114();
				if (unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (unk_0x346D81500D088F42(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						unk_0xEA47FE3719165B94(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0f, false, false, false);
						unk_0xEA47FE3719165B94(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0f, false, false, false);
						iLocal_346 = unk_0x9CD27B0045628463();
						iLocal_345++;
					}
				}
			}
			else if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
			{
				unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
				unk_0xE1EF3C1216AFF2CD(iLocal_90[1]);
				iLocal_345 = 3;
			}
			break;
		
		case 5:
			if (func_116())
			{
				func_114();
				func_113();
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(iLocal_90[1], false), false))
				{
					if ((unk_0x9CD27B0045628463() - iLocal_346) > 15000)
					{
						bVar3 = false;
						iVar4 = unk_0x19CAFA3C87F7C2FF();
						if (iVar4 != 0)
						{
							iVar5 = unk_0xEE778F8C7E1142E2(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							unk_0xE8854A4326B9E12B(&iLocal_98);
							unk_0xEA47FE3719165B94(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0f, false, false, false);
							unk_0xEA47FE3719165B94(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0f, false, false, false);
							unk_0x39E72BC99E6360CB(iLocal_98);
							unk_0x5ABA3986D90D8A3B(unk_0xD80958FC74E988A6(), iLocal_98);
							unk_0x3841422E9C488D8C(&iLocal_98);
						}
						if (func_17() == 0)
						{
							if (func_61(&uLocal_172, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_346 = unk_0x9CD27B0045628463();
								iLocal_345++;
							}
						}
						else if (func_17() == 1)
						{
							if (func_61(&uLocal_172, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_346 = unk_0x9CD27B0045628463();
								iLocal_345++;
							}
						}
						else if (func_17() == 2)
						{
							if (func_61(&uLocal_172, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_346 = unk_0x9CD27B0045628463() + 14000;
								iLocal_345++;
							}
						}
					}
				}
			}
			break;
		
		case 6:
			func_114();
			func_113();
			if ((unk_0x9CD27B0045628463() - iLocal_346) > 5000 && func_116())
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(iLocal_90[1], false), false))
				{
					if (unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (unk_0x346D81500D088F42(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0f, false, false, false);
							}
							unk_0xEA47FE3719165B94(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0f, false, false, false);
							unk_0xEA47FE3719165B94(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0f, false, false, false);
							iLocal_345++;
						}
					}
				}
			}
			break;
		
		case 7:
			func_114();
			if (func_116())
			{
				if (unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (unk_0x346D81500D088F42(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && unk_0x346D81500D088F42(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						unk_0xC5F68BE9613E2D18(unk_0x9A9112A0FE9A4713(iLocal_90[0], false), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
						iLocal_346 = unk_0x9CD27B0045628463();
						iLocal_345++;
					}
				}
			}
			break;
		
		case 8:
			func_114();
			if (func_116())
			{
				if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(iLocal_90[1], false), false))
				{
					if (unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (unk_0x346D81500D088F42(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							unk_0xEA47FE3719165B94(iLocal_90[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0f, false, false, false);
							unk_0xEA47FE3719165B94(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0f, false, false, false);
							iLocal_345 = 6;
						}
					}
				}
			}
			if ((unk_0x9CD27B0045628463() - iLocal_346) > 10000)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
					unk_0xE1EF3C1216AFF2CD(iLocal_90[1]);
					iLocal_346 = unk_0x9CD27B0045628463();
					iLocal_345++;
				}
			}
			break;
	}
}

void func_113()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(iLocal_90[0], false), false))
		{
			if (unk_0x1F0B79228E461EC9(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((unk_0x346D81500D088F42(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && unk_0x346D81500D088F42(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (unk_0x346D81500D088F42(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && unk_0x346D81500D088F42(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (unk_0x346D81500D088F42(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && unk_0x346D81500D088F42(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (unk_0x346D81500D088F42(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && unk_0x346D81500D088F42(iLocal_90[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					unk_0xC5F68BE9613E2D18(unk_0x9A9112A0FE9A4713(iLocal_90[0], false), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
					unk_0xE65F427EB70AB1ED(-1, "SUSPENSION_SCRIPT_FORCE", unk_0x9A9112A0FE9A4713(iLocal_90[0], false), 0, false, 0);
				}
			}
		}
	}
}

void func_114()
{
	unk_0xEB2D525B57F42B40();
	func_115();
}

void func_115()
{
	Global_17098.f_134 = 1;
}

int func_116()
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
	{
		if (unk_0x997ABD671D25CA0B(iLocal_90[1], false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iLocal_90[1], false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
				{
					if (unk_0xA3EE4A07279BB9DB(iLocal_90[0], iVar0, false))
					{
						if (unk_0xBB40DD2270B65366(iVar0, 2) == iLocal_90[0] && unk_0xBB40DD2270B65366(iVar0, 1) == iLocal_90[1])
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (unk_0xD95E79E8686D2C27(2, 195) - 128);
	iVar1 = (unk_0xD95E79E8686D2C27(2, 196) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (func_17() == 2)
	{
		if (func_59())
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

int func_119(struct<3> Param0)
{
	if (func_17() == 2)
	{
		if (func_59() && !Global_24681)
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

void func_120()
{
	if (!bLocal_107)
	{
		if ((((((((!func_27("REDR1_SWV") && !func_27("REDR1_COM")) && !func_27("REDR1_BANT1")) && !func_27("REDR1_SIK")) && !func_27("REDR2_DC")) && !func_27("REDR1_OFFR")) && !func_27("REDR2_OFFR")) && !func_27("REDR1_CULT")) && !func_27("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_109 && !iLocal_133) && (unk_0x9CD27B0045628463() - iLocal_170) > 9000)
		{
			if (!func_4())
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (iLocal_133 && !iLocal_134)
	{
		if (!func_4())
		{
			if (func_17() == 0)
			{
				func_61(&uLocal_172, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (func_17() == 1)
			{
				func_61(&uLocal_172, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (func_17() == 2)
			{
				func_61(&uLocal_172, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_148 = unk_0x9CD27B0045628463() + 6000;
			iLocal_134 = 1;
		}
	}
	if (!bLocal_107)
	{
		if ((iLocal_133 && !iLocal_132) && iLocal_148 < unk_0x9CD27B0045628463())
		{
			if (!func_4())
			{
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_134 = 0;
					iLocal_132 = 1;
				}
			}
		}
	}
	else if ((bLocal_107 && !iLocal_131) && iLocal_148 < unk_0x9CD27B0045628463())
	{
		if (!func_4())
		{
			if (func_61(&uLocal_172, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_134 = 0;
				iLocal_131 = 1;
			}
		}
	}
}

void func_121()
{
	if (func_2() && iLocal_110 < 2)
	{
		if ((unk_0x5D35ECF3A81A0EE0(unk_0x4F8644AF03D0E0D6()) > 0 && unk_0x5D35ECF3A81A0EE0(unk_0x4F8644AF03D0E0D6()) < 100) || unk_0x8BAD02F0368D9E14(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
		{
			if (!func_27("REDR1_SWV"))
			{
				func_5(0);
				func_62();
				unk_0x4EDE34FBADD967A6(0);
				func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_162 += 6;
			}
		}
		func_122(Local_159, (unk_0x9CD27B0045628463() - iLocal_158));
	}
	if (iLocal_162 > 17)
	{
		iLocal_108 = 1;
	}
}

void func_122(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_2())
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			Var0 = { unk_0x9A8D700A51CB7B0D(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false) };
		}
	}
	Var3 = { Var0 - Param0 };
	Var3 = { func_123(Var3, iParam3) };
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
		{
			if (!unk_0xB104CD1BABF302E2(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) && !func_27("REDR1_SWV"))
			{
				if (iLocal_164 == -1)
				{
					iLocal_164 = unk_0x9CD27B0045628463() + 400;
				}
				else if (iLocal_164 < unk_0x9CD27B0045628463())
				{
					iLocal_162 += 3;
					func_5(0);
					func_62();
					unk_0x4EDE34FBADD967A6(0);
					func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_164 = -1;
			}
		}
	}
	if (Var3.f_1 > 0.025f)
	{
		iLocal_162++;
		if (!func_27("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_1 < -0.025f)
	{
		iLocal_162++;
		if (!func_27("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 > 0.025f)
	{
		iLocal_162++;
		if (!func_27("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var3.f_0 < -0.025f)
	{
		iLocal_162++;
		if (!func_27("REDR1_SWV") && iLocal_110 < 4)
		{
			func_5(0);
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_123(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	Var0.f_0 = (Param0.f_0 / IntToFloat(iParam3));
	Var0.f_1 = (Param0.f_1 / IntToFloat(iParam3));
	Var0.f_2 = (Param0.f_2 / IntToFloat(iParam3));
	return Var0;
}

void func_124()
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
	{
		switch (iLocal_110)
		{
			case 0:
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)))
					{
						unk_0xA711568EEDB43069(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					iLocal_110++;
				}
				break;
			
			case 1:
				if (unk_0xC9D9444186B5A374() > 3000 || !func_4())
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
					{
						unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
						unk_0xEA47FE3719165B94(iLocal_90[0], "random@drunk_driver_1", sLocal_113, 8f, -8f, -1, 0, 0f, false, false, false);
						iLocal_110++;
					}
				}
				break;
			
			case 2:
				if (unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_1", sLocal_113, 3))
				{
					fVar0 = unk_0x346D81500D088F42(iLocal_90[0], "random@drunk_driver_1", sLocal_113);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_104)
						{
							unk_0x0E7E72961BA18619("scr_puke_in_car", iLocal_90[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_104 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_105)
						{
							unk_0x0E7E72961BA18619("scr_puke_in_car", iLocal_90[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_105 = 1;
							if (func_17() == 0)
							{
								func_61(&uLocal_172, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (func_17() == 1)
							{
								func_61(&uLocal_172, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (func_17() == 2)
							{
								func_61(&uLocal_172, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_106)
						{
							unk_0x0E7E72961BA18619("scr_puke_in_car", iLocal_90[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_106 = 1;
						}
					}
					if (unk_0x346D81500D088F42(iLocal_90[0], "random@drunk_driver_1", sLocal_113) > 0.8f)
					{
						iLocal_110++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_1", sLocal_113, 3))
				{
				}
				if (func_61(&uLocal_172, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					unk_0xEA47FE3719165B94(iLocal_90[0], "random@drunk_driver_1", sLocal_112, 2f, -4f, -1, 1, 0f, false, false, false);
					iLocal_104 = 0;
					iLocal_110++;
				}
				break;
			
			case 4:
				unk_0xA3B0C41BA5CC0BB5(iLocal_111);
				bLocal_107 = true;
				break;
			}
	}
}

void func_125()
{
	if (unk_0x530944F6F4B8A214(unk_0xD80958FC74E988A6()))
	{
		if (!iLocal_167)
		{
			iLocal_165 = unk_0x9CD27B0045628463();
			iLocal_167 = 1;
		}
		else
		{
			iLocal_166 = unk_0x9CD27B0045628463();
		}
	}
	else
	{
		iLocal_166 = 0;
		iLocal_167 = 0;
		iLocal_168 = 0;
	}
	if ((iLocal_166 - iLocal_165) > 50000 && !iLocal_168)
	{
		if (iLocal_53 == 1)
		{
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_168 = 1;
	}
	if ((iLocal_166 - iLocal_165) > 60000 && iLocal_168)
	{
		if (iLocal_53 == 2)
		{
			func_62();
			unk_0x4EDE34FBADD967A6(0);
			func_61(&uLocal_172, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
		{
			unk_0xBB9CE077274F6A1B(iLocal_90[0], 40000f, 0);
			func_64(iLocal_90[0], 120000, 0);
			unk_0x971D38760FBC02EF(iLocal_90[0], true);
			if (unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
			{
				unk_0xED74007FFB146BC2(iLocal_90[0]);
			}
			unk_0x304AE42E357B8C7E(iLocal_90[1], iLocal_90[0], 0f, 1f, 0f, 1f, -1, 0.1f, true);
			func_64(iLocal_90[1], 120000, 0);
			unk_0x971D38760FBC02EF(iLocal_90[1], true);
			if (unk_0x5891CAC5D4ACFF74(iLocal_90[1]))
			{
				unk_0xED74007FFB146BC2(iLocal_90[1]);
			}
		}
		func_60();
	}
}

void func_126()
{
	if (iLocal_53 == 1)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 150f, 150f, 150f, false, true, 0))
			{
				func_60();
			}
			if (func_136() || unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
				{
					unk_0x9F3480FE65DB31B5(iLocal_90[0], func_57());
					unk_0x3DBFC55D5C9BB447(iLocal_90[0], true);
					unk_0x0BDDB8D9EC6BCF3C(iLocal_90[0], 0);
				}
			}
			else if (unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
			{
				unk_0xED74007FFB146BC2(iLocal_90[0]);
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				if (unk_0xA3EE4A07279BB9DB(iLocal_90[0], unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
				{
					if ((!unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_1", sLocal_112, 3) && !unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_1", sLocal_113, 3)) && !unk_0xBB062B2B5722478E(iLocal_90[0]))
					{
						unk_0xEA47FE3719165B94(iLocal_90[0], "random@drunk_driver_1", sLocal_112, 2f, -4f, -1, 1, 0f, false, false, false);
					}
					if (func_139())
					{
						func_56(0);
						iLocal_119 = 0;
					}
				}
				else if (unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_1", sLocal_112, 3))
				{
					unk_0xEE08C992D238C5D1(iLocal_90[0], 0, false);
				}
			}
			else
			{
				if (unk_0x997ABD671D25CA0B(iLocal_90[0], false))
				{
					if (unk_0x1F0B79228E461EC9(iLocal_90[0], "random@drunk_driver_1", sLocal_112, 3))
					{
						unk_0xEE08C992D238C5D1(iLocal_90[0], 0, false);
					}
				}
				if (func_4() && !iLocal_119)
				{
					func_56(1);
					iLocal_119 = 1;
				}
			}
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 8f, 8f, 8f, false, true, 0) || unk_0x6E575D6A898AB852(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_154[0]));
				}
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_101))
				{
					iLocal_101 = func_129(Local_80, 1);
				}
			}
			else
			{
				if (!unk_0xA6DB27D19ECBB7DA(uLocal_154[0]))
				{
					uLocal_154[0] = func_154(iLocal_90[0], 0, 145);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_101))
				{
					unk_0x86A652570E5F25DD(&iLocal_101);
				}
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if ((!unk_0x5F9532F3B5CC2551(iLocal_93) && !unk_0x84A2DD9AC37C35C1(iLocal_90[0])) && !unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
		{
			if (!unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 150f, 150f, 150f, false, true, 0) || !unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[1], 150f, 150f, 150f, false, true, 0))
			{
				if (unk_0x7239B21A38F536BA(iLocal_90[0]))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
					{
						if (unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
						{
							unk_0xED74007FFB146BC2(iLocal_90[0]);
						}
						unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
						unk_0x22B0D0E37CCB840D(iLocal_90[0], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
						func_64(iLocal_90[0], 120000, 0);
						unk_0x971D38760FBC02EF(iLocal_90[0], true);
					}
				}
				if (unk_0x7239B21A38F536BA(iLocal_90[1]))
				{
					if (!unk_0x84A2DD9AC37C35C1(iLocal_90[1]))
					{
						if (unk_0x5891CAC5D4ACFF74(iLocal_90[1]))
						{
							unk_0xED74007FFB146BC2(iLocal_90[1]);
						}
						unk_0xE1EF3C1216AFF2CD(iLocal_90[1]);
						unk_0x22B0D0E37CCB840D(iLocal_90[1], unk_0xD80958FC74E988A6(), 250f, -1, false, false);
						func_64(iLocal_90[1], 120000, 0);
						unk_0x971D38760FBC02EF(iLocal_90[1], true);
					}
				}
				func_60();
			}
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_93, false))
			{
				if (unk_0xA3EE4A07279BB9DB(iLocal_90[0], iLocal_93, false) && unk_0xA3EE4A07279BB9DB(iLocal_90[1], iLocal_93, false))
				{
					if (func_139())
					{
						func_56(0);
						iLocal_119 = 0;
					}
					if (!unk_0xA6DB27D19ECBB7DA(iLocal_101))
					{
						iLocal_101 = func_129(Local_80, 1);
					}
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_157))
				{
					unk_0x86A652570E5F25DD(&iLocal_157);
				}
			}
			else
			{
				if ((func_4() && !iLocal_119) && iLocal_63 > 3)
				{
					func_56(1);
					iLocal_119 = 1;
				}
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_157))
				{
					iLocal_157 = func_137(iLocal_93, 0, 0);
				}
				if (unk_0xA6DB27D19ECBB7DA(iLocal_101))
				{
					unk_0x86A652570E5F25DD(&iLocal_101);
				}
			}
		}
	}
}

void func_127()
{
	if (func_17() == 2)
	{
		if (!Global_24680)
		{
			func_128("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}

void func_128(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_129(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(iVar0, func_130(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(iVar0, bParam3);
	return iVar0;
}

float func_130(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_131()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (!func_136())
			{
				if (unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
				{
					unk_0xED74007FFB146BC2(iLocal_90[0]);
				}
				if (unk_0x77F1BEB8863288D5(iLocal_90[0], 1227113341) != 1 && unk_0x77F1BEB8863288D5(iLocal_90[0], 1227113341) != 0)
				{
					unk_0x6A071245EB0D1882(iLocal_90[0], unk_0xD80958FC74E988A6(), -1, 6f, 2f, 2f, 0);
				}
				if (unk_0x997ABD671D25CA0B(iLocal_90[0], false))
				{
					unk_0x504D54DF3F6F2247(iLocal_90[0], 0, 0);
				}
				if (!iLocal_121)
				{
					if (!func_4())
					{
						func_61(&uLocal_172, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_121 = 1;
					}
				}
			}
			else
			{
				iLocal_121 = 0;
				if (unk_0x77F1BEB8863288D5(iLocal_90[0], 1227113341) == 1 && unk_0x77F1BEB8863288D5(iLocal_90[0], 1227113341) == 0)
				{
					unk_0xE1EF3C1216AFF2CD(iLocal_90[0]);
				}
			}
		}
		else if (!unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
		{
			unk_0x9F3480FE65DB31B5(iLocal_90[0], func_57());
			unk_0x3DBFC55D5C9BB447(iLocal_90[0], true);
			unk_0x0BDDB8D9EC6BCF3C(iLocal_90[0], 0);
		}
	}
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

void func_133()
{
	if (!func_58())
	{
		if (func_17() == 2)
		{
			Global_24678 = 1;
		}
	}
}

void func_134(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x84A2DD9AC37C35C1(iParam0))
			{
				unk_0xE8854A4326B9E12B(&iLocal_98);
				unk_0x0F804F1DB19B9689(0);
				unk_0x69F4BE8C8CC4796C(0, unk_0xD80958FC74E988A6(), -1, 2060, 4);
				unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), -1);
				unk_0x39E72BC99E6360CB(iLocal_98);
				unk_0x5ABA3986D90D8A3B(iParam0, iLocal_98);
				unk_0x3841422E9C488D8C(&iLocal_98);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!unk_0x84A2DD9AC37C35C1(iParam0))
			{
				if (unk_0xD71649DB0A545AA3(iParam0, unk_0xD80958FC74E988A6(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!unk_0x84A2DD9AC37C35C1(iParam0))
			{
				if (!unk_0xD71649DB0A545AA3(iParam0, unk_0xD80958FC74E988A6(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_135()
{
	if (func_17() == 0)
	{
		if (func_61(&uLocal_172, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_169++;
		}
	}
	else if (func_17() == 1)
	{
		if (func_61(&uLocal_172, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_169++;
		}
	}
	else if (func_17() == 2)
	{
		if (func_61(&uLocal_172, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_169++;
		}
	}
}

int func_136()
{
	int iVar0;
	
	if (iLocal_53 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_53 == 2)
	{
		iVar0 = 2;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0x4C241E39B23DF959(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), false))
		{
			if ((((((!unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()) && !unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6())) && !unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6())) && !unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6())) && !unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6())) && !unk_0x6F972C1AB75A1ED0(unk_0xD80958FC74E988A6())) && !unk_0x796D90EFB19AA332(unk_0xD80958FC74E988A6(), joaat("rhino")))
			{
				if (unk_0xA7C4F2C6E744A550(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false)) >= iVar0)
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
			if (((((!unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()))) && !unk_0xDCE4334788AF94EA(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0xA0948AB42D7BA0DE(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && !unk_0xAB935175B22E822B(unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())))) && unk_0x9F47B058362C84B5(unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_137(int iParam0, bool bParam1, bool bParam2)
{
	return func_138(iParam0, !bParam1, bParam2);
}

int func_138(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_130(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(iVar0, func_130(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_130(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_139()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_140()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
	{
		if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_90[0], 30f, 30f, 30f, false, true, 0))
		{
			if (!iLocal_114)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_114 = 1;
				}
			}
			if (!iLocal_115)
			{
				if (func_61(&uLocal_172, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_115 = 1;
				}
			}
		}
	}
}

void func_141()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_150))
	{
		unk_0x86A652570E5F25DD(&iLocal_150);
	}
	iLocal_62 = 0;
	while (iLocal_62 <= (iLocal_89 - 1))
	{
		if (!unk_0xA6DB27D19ECBB7DA(uLocal_154[iLocal_62]))
		{
			uLocal_154[iLocal_62] = func_154(iLocal_90[iLocal_62], 0, 145);
			unk_0x75A16C3DA34F1245(uLocal_154[iLocal_62], false);
		}
		iLocal_62++;
	}
}

void func_142()
{
	unk_0x23641AFE870AF385();
	Global_16684 = 0;
}

void func_143(bool bParam0)
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

int func_144(int iParam0)
{
	if (func_147())
	{
		Global_97163 = 1;
		Global_97160 = unk_0x9CD27B0045628463();
		if (func_43(Global_97162))
		{
			func_145(0);
		}
		unk_0x5F28ECF5FC84772F(true, "RE_TITLE");
		if (iParam0 && func_43(Global_97162))
		{
			unk_0xF2DD778C22B15BDA();
		}
		return 1;
	}
	return 0;
}

void func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_97173.f_28117.f_2 < 3)
			{
				if (!unk_0xDAD37F45428801AE())
				{
					func_128(func_146(iParam0), -1);
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
					func_128(func_146(iParam0), -1);
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
					func_128(func_146(iParam0), -1);
					Global_97173.f_28117.f_4++;
					unk_0x933D6A9EEC1BACD0(&Global_97169, 2);
				}
			}
			break;
	}
}

char* func_146(int iParam0)
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

int func_147()
{
	switch (func_148(&Global_24503, 0, 5, 0, unk_0xC30338E8088E2E21()))
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

int func_148(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_152(0))
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
		if (!func_150(iParam2))
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
			func_149(uParam0, iParam4);
		}
	}
	return 2;
}

void func_149(var uParam0, int iParam1)
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

bool func_150(int iParam0)
{
	return func_151(iParam0, Global_34909);
}

int func_151(int iParam0, int iParam1)
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

int func_152(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_150(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_153(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_16685 = 1;
	Global_16689 = 0;
	Global_16687 = iParam7;
	Global_2621441 = 0;
	return func_11(sParam2, iParam3, 0);
}

int func_154(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_138(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_155()
{
	if (func_157())
	{
		sLocal_112 = "drunk_idle_van";
		sLocal_113 = "vomit_van";
	}
	else if (func_156())
	{
		sLocal_112 = "drunk_idle_low";
		sLocal_113 = "vomit_low";
	}
	else
	{
		sLocal_112 = "drunk_idle";
		sLocal_113 = "vomit_outside";
	}
}

int func_156()
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(iLocal_90[0], false))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(iLocal_90[0], false)))
		{
			iVar0 = unk_0x28D37D4F71AC5C58(unk_0x9A9112A0FE9A4713(iLocal_90[0], false));
			if (((((iVar0 == -2066252141 || iVar0 == 925191417) || iVar0 == -782720499) || iVar0 == 1105669833) || iVar0 == 542797648) || iVar0 == 68566729)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_157()
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(iLocal_90[0], false))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0x9A9112A0FE9A4713(iLocal_90[0], false)))
		{
			iVar0 = unk_0x28D37D4F71AC5C58(unk_0x9A9112A0FE9A4713(iLocal_90[0], false));
			if ((((((((((iVar0 == -1965057835 || iVar0 == 919485892) || iVar0 == -1838563680) || iVar0 == 1768419516) || iVar0 == 1576485197) || iVar0 == 929009548) || iVar0 == -497732145) || iVar0 == -1659990386) || iVar0 == 434478421) || iVar0 == 1816176348) || iVar0 == 1710903184)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_158()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		iVar0 = unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			iVar1 = unk_0xBB40DD2270B65366(iVar0, 0);
			if (!unk_0x84A2DD9AC37C35C1(iVar1))
			{
				if (iVar1 != unk_0xD80958FC74E988A6())
				{
					if (unk_0x0A7B270912999B3C(iVar1))
					{
						if (!unk_0x813A0A7C9D2E831F(iVar1, unk_0xD80958FC74E988A6()))
						{
							unk_0x69F4BE8C8CC4796C(iVar1, unk_0xD80958FC74E988A6(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_159()
{
	if (!iLocal_60)
	{
		func_161(39, 1);
		func_161(40, 1);
		func_161(41, 1);
		func_161(42, 1);
		func_161(43, 1);
		unk_0xA56F01F3765B93A0(Local_67, 8f, true, false, false, false);
		unk_0x1B5C85C612E5256E(Local_67 - Vector(8f, 8f, 8f), Local_67 + Vector(8f, 8f, 8f), false, true, true, true);
		unk_0xC12321827687FE4D(Local_75 - Vector(10f, 15f, 15f), Local_75 + Vector(10f, 15f, 15f), false, true);
		unk_0xC12321827687FE4D(Local_80 - Vector(10f, 15f, 15f), Local_80 + Vector(10f, 15f, 15f), false, true);
		unk_0x933D6A9EEC1BACD0(&uLocal_149, 5);
		if (func_17() == 0)
		{
			func_160(&uLocal_172, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
		}
		else if (func_17() == 1)
		{
			func_160(&uLocal_172, 1, unk_0xD80958FC74E988A6(), "FRANKLIN", 0, 1);
		}
		else if (func_17() == 2)
		{
			func_160(&uLocal_172, 2, unk_0xD80958FC74E988A6(), "TREVOR", 0, 1);
		}
		unk_0xF372BC22FCB88606("rghDrunkPeds", &iLocal_99);
		iLocal_93 = unk_0xAF35D0D2583051B0(iLocal_97, Local_75, fLocal_78, 1, 1);
		unk_0xB72E26D81006005B(iLocal_93);
		unk_0x49733E92263139D1(iLocal_93);
		unk_0x0FC2D89AC25A5814(iLocal_97, true);
		unk_0xB664292EAECF7FA6(iLocal_93, 3);
		unk_0x2B6747FAA9DB9D6B(iLocal_93, true);
		iLocal_79 = unk_0xEEF059FAD016D209(iLocal_93);
		iLocal_90[0] = unk_0xD49F9B0955C367DE(26, iLocal_95, Local_67, fLocal_70, true, true);
		unk_0x9F8AA94D6D97DBF4(iLocal_90[0], true);
		unk_0xC80A74AC829DDD92(iLocal_90[0], iLocal_99);
		unk_0x1913FE4CBF41C463(iLocal_90[0], 185, true);
		unk_0x70A2D1137C8ED7C9(iLocal_90[0], 65536, true);
		unk_0xE532F5D78798DAAB(iLocal_95);
		unk_0x9D64D7405520E3D3(iLocal_90[0], true);
		iLocal_90[1] = unk_0xD49F9B0955C367DE(26, iLocal_96, Local_71, fLocal_74, true, true);
		unk_0x9F8AA94D6D97DBF4(iLocal_90[1], true);
		unk_0xC80A74AC829DDD92(iLocal_90[1], iLocal_99);
		unk_0x1913FE4CBF41C463(iLocal_90[1], 185, true);
		unk_0x70A2D1137C8ED7C9(iLocal_90[1], 65536, true);
		unk_0x9D64D7405520E3D3(iLocal_90[1], true);
		unk_0xBF25EB89375A37AD(5, iLocal_99, joaat("player"));
		unk_0xE532F5D78798DAAB(iLocal_96);
		if (iLocal_53 == 1)
		{
			unk_0xEA47FE3719165B94(iLocal_90[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0f, false, false, false);
			unk_0xEA47FE3719165B94(iLocal_90[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0f, false, false, false);
			unk_0xAF8A94EDE7712BEF(iLocal_90[0], "MOVE_M@DRUNK@VERYDRUNK", 0.25f);
			unk_0xAF8A94EDE7712BEF(iLocal_90[1], "MOVE_M@DRUNK@MODERATEDRUNK", 0.25f);
			unk_0x262B14F48D29DE80(iLocal_90[0], 0, 1, 2, 0);
			unk_0x262B14F48D29DE80(iLocal_90[0], 3, 0, 1, 0);
			unk_0x262B14F48D29DE80(iLocal_90[0], 4, 0, 1, 0);
			unk_0x262B14F48D29DE80(iLocal_90[1], 0, 1, 1, 0);
			unk_0x262B14F48D29DE80(iLocal_90[1], 3, 0, 0, 0);
			unk_0x262B14F48D29DE80(iLocal_90[1], 4, 0, 1, 0);
			unk_0xA711568EEDB43069(iLocal_93, 1);
			unk_0x1913FE4CBF41C463(iLocal_90[0], 206, true);
			unk_0x1913FE4CBF41C463(iLocal_90[0], 299, true);
			unk_0x63F58F7C80513AAD(iLocal_90[0], false);
			unk_0x6C8065A3B780185B(iLocal_90[0], "REDR1Drunk1_AI_Drunk");
			unk_0x6C8065A3B780185B(iLocal_90[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_160(&uLocal_172, 3, iLocal_90[0], "REDR1Drunk1", 0, 1);
			func_160(&uLocal_172, 4, iLocal_90[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_53 == 2)
		{
			unk_0x1B5C85C612E5256E(Local_80 - Vector(10f, 50f, 30f), Local_80 + Vector(10f, 50f, 30f), false, true, true, true);
			unk_0x92F0CF722BC4202F(iLocal_93, true);
			unk_0x262B14F48D29DE80(iLocal_90[1], 0, 0, 0, 0);
			unk_0x262B14F48D29DE80(iLocal_90[1], 2, 0, 2, 0);
			unk_0x262B14F48D29DE80(iLocal_90[1], 3, 1, 1, 0);
			unk_0x262B14F48D29DE80(iLocal_90[1], 4, 1, 2, 0);
			unk_0x262B14F48D29DE80(iLocal_90[1], 8, 0, 0, 0);
			unk_0x1913FE4CBF41C463(iLocal_90[0], 134, true);
			unk_0x1913FE4CBF41C463(iLocal_90[1], 134, true);
			unk_0x1913FE4CBF41C463(iLocal_90[0], 26, true);
			unk_0x1913FE4CBF41C463(iLocal_90[1], 26, true);
			unk_0x1913FE4CBF41C463(iLocal_90[0], 206, true);
			unk_0x1913FE4CBF41C463(iLocal_90[1], 206, true);
			unk_0x63F58F7C80513AAD(iLocal_90[0], false);
			unk_0x63F58F7C80513AAD(iLocal_90[1], false);
			unk_0x142A02425FF02BD9(iLocal_90[0], "WORLD_HUMAN_BUM_STANDING", 0, false);
			unk_0x69F4BE8C8CC4796C(iLocal_90[0], iLocal_90[1], -1, 2060, 4);
			unk_0x142A02425FF02BD9(iLocal_90[1], "WORLD_HUMAN_BUM_STANDING", 0, false);
			unk_0x6373D1349925A70E(iLocal_90[1], false);
			unk_0x69F4BE8C8CC4796C(iLocal_90[1], iLocal_90[0], -1, 2060, 4);
			unk_0xAF8A94EDE7712BEF(iLocal_90[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 0.25f);
			unk_0xAF8A94EDE7712BEF(iLocal_90[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 0.25f);
			unk_0x6C8065A3B780185B(iLocal_90[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			unk_0x6C8065A3B780185B(iLocal_90[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_160(&uLocal_172, 3, iLocal_90[0], "REDR2DrunkM", 0, 1);
			func_160(&uLocal_172, 4, iLocal_90[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_60 = 1;
	}
}

void func_160(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_161(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_168(iParam0, 2, 1))
		{
			func_167(iParam0, 2, 1);
		}
	}
	else if (func_168(iParam0, 2, 1))
	{
		func_162(iParam0, 2, 1);
	}
}

void func_162(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xE80492A9AC099A93(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_38() == 0)
		{
			iVar0 = func_165(func_166(iParam0), -1, 0);
			unk_0xE80492A9AC099A93(&iVar0, iParam1);
			func_163(func_166(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_163(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454187[iParam0 /*6*/][func_164(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_164(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454187[iParam0 /*6*/][func_164(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_166(int iParam0)
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

void func_167(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_38() == 0)
		{
			iVar0 = func_165(func_166(iParam0), -1, 0);
			unk_0x933D6A9EEC1BACD0(&iVar0, iParam1);
			func_163(func_166(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

int func_168(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xA921AA820C25702F(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0x10FAB35428CCC9D7())
	{
		if (func_38() == 0)
		{
			return unk_0xA921AA820C25702F(func_165(func_166(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_169()
{
	unk_0x963D27A58DF860AC(iLocal_95);
	unk_0x963D27A58DF860AC(iLocal_97);
	unk_0x963D27A58DF860AC(iLocal_96);
	if (iLocal_53 == 1)
	{
		unk_0x944955FB2A3935C8();
		unk_0xD3BD40951412FEF6("random@drunk_driver_1");
		unk_0x6EA47DAE7FAD0EED("MOVE_M@DRUNK@VERYDRUNK");
		unk_0x2F844A8B08D76685("Taxi_Vomit", 0);
	}
	else if (iLocal_53 == 2)
	{
		unk_0xD3BD40951412FEF6("random@drunk_driver_2");
		unk_0xD3BD40951412FEF6("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		unk_0xD3BD40951412FEF6("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	unk_0x6EA47DAE7FAD0EED("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((unk_0x98A4EB5D89A0C952(iLocal_95) && unk_0x98A4EB5D89A0C952(iLocal_97)) && unk_0xC4EA073D86FB29B0("MOVE_M@DRUNK@MODERATEDRUNK")) && unk_0x98A4EB5D89A0C952(iLocal_96))
	{
		if (iLocal_53 == 1)
		{
			if (((unk_0xCA7D9B86ECA7481B() && unk_0xD031A9162D01088C("random@drunk_driver_1")) && unk_0xC4EA073D86FB29B0("MOVE_M@DRUNK@VERYDRUNK")) && unk_0x2F844A8B08D76685("CONSTRUCTION_ACCIDENT_1", 0))
			{
				iLocal_55 = 1;
			}
		}
		else if (iLocal_53 == 2)
		{
			if ((unk_0xD031A9162D01088C("random@drunk_driver_2") && unk_0xD031A9162D01088C("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && unk_0xD031A9162D01088C("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_55 = 1;
			}
		}
	}
	else
	{
		unk_0x963D27A58DF860AC(iLocal_95);
		unk_0x963D27A58DF860AC(iLocal_97);
		unk_0x963D27A58DF860AC(iLocal_96);
		if (iLocal_53 == 1)
		{
			unk_0x944955FB2A3935C8();
			unk_0xD3BD40951412FEF6("random@drunk_driver_1");
			unk_0x6EA47DAE7FAD0EED("MOVE_M@DRUNK@VERYDRUNK");
			unk_0x2F844A8B08D76685("Taxi_Vomit", 0);
		}
		else if (iLocal_53 == 2)
		{
			unk_0xD3BD40951412FEF6("random@drunk_driver_2");
			unk_0xD3BD40951412FEF6("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			unk_0xD3BD40951412FEF6("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		unk_0x6EA47DAE7FAD0EED("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_170()
{
	if (iLocal_53 == 1)
	{
		Local_151 = { -1018.238f, -1350.101f, 4.475f };
		iLocal_89 = 2;
		iLocal_95 = joaat("a_m_y_beachvesp_01");
		iLocal_96 = joaat("a_m_y_beachvesp_02");
		Local_67 = { -1016.762f, -1356.459f, 4.5531f };
		fLocal_70 = 247.8087f;
		Local_71 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_74 = 66.3861f;
		Local_75 = { -1027.762f, -1341.644f, 4.4614f };
		fLocal_78 = 76.9418f;
		iLocal_97 = joaat("baller2");
		Local_80 = { 160.8892f, -111.4167f, 61.2999f };
		Local_83 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_59 = true;
	}
	if (iLocal_53 == 2)
	{
		Local_151 = { 1893.856f, 3714.346f, 31.7771f };
		iLocal_89 = 2;
		iLocal_95 = joaat("a_m_y_genstreet_01");
		iLocal_96 = joaat("a_f_y_hipster_03");
		Local_67 = { 1893.856f, 3714.346f, 31.7771f };
		fLocal_70 = 252.0142f;
		Local_71 = { 1894.763f, 3714.16f, 31.7605f };
		fLocal_74 = 86.1102f;
		Local_75 = { 1888.256f, 3717.189f, 31.8394f };
		fLocal_78 = 299.4672f;
		iLocal_97 = joaat("emperor");
		Local_80 = { 1120.551f, 2647.307f, 36.9963f };
		Local_83 = { 1121.866f, 2641.707f, 37.1487f };
		bLocal_59 = true;
	}
}

int func_171()
{
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_182())
		{
			return 0;
		}
	}
	if (func_178())
	{
		return 1;
	}
	if (func_172(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_172(float fParam0, bool bParam1)
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
		if (func_19(func_17()))
		{
			iVar36 = func_48();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 2) && !unk_0xA921AA820C25702F(Global_97173.f_16795[iVar32 /*6*/], 3))
				{
					func_173(iVar32, &Var0);
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

void func_173(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_174(uParam1, "Abigail1", func_176(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 1:
			func_174(uParam1, "Abigail2", func_176(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 2:
			func_174(uParam1, "Barry1", func_176(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 3:
			func_174(uParam1, "Barry2", func_176(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 4:
			func_174(uParam1, "Barry3", func_176(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 5:
			func_174(uParam1, "Barry3A", func_176(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 6:
			func_174(uParam1, "Barry3C", func_176(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 7:
			func_174(uParam1, "Barry4", func_176(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_175(iParam0), 0, 0);
			break;
		
		case 8:
			func_174(uParam1, "Dreyfuss1", func_176(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 9:
			func_174(uParam1, "Epsilon1", func_176(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 10:
			func_174(uParam1, "Epsilon2", func_176(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 11:
			func_174(uParam1, "Epsilon3", func_176(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 12:
			func_174(uParam1, "Epsilon4", func_176(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 13:
			func_174(uParam1, "Epsilon5", func_176(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 14:
			func_174(uParam1, "Epsilon6", func_176(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 15:
			func_174(uParam1, "Epsilon7", func_176(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 16:
			func_174(uParam1, "Epsilon8", func_176(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 17:
			func_174(uParam1, "Extreme1", func_176(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 18:
			func_174(uParam1, "Extreme2", func_176(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 19:
			func_174(uParam1, "Extreme3", func_176(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 20:
			func_174(uParam1, "Extreme4", func_176(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 21:
			func_174(uParam1, "Fanatic1", func_176(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_175(iParam0), 1, 0);
			break;
		
		case 22:
			func_174(uParam1, "Fanatic2", func_176(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_175(iParam0), 1, 0);
			break;
		
		case 23:
			func_174(uParam1, "Fanatic3", func_176(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_175(iParam0), 0, 1);
			break;
		
		case 24:
			func_174(uParam1, "Hao1", func_176(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_175(iParam0), 0, 1);
			break;
		
		case 25:
			func_174(uParam1, "Hunting1", func_176(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 26:
			func_174(uParam1, "Hunting2", func_176(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 27:
			func_174(uParam1, "Josh1", func_176(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 28:
			func_174(uParam1, "Josh2", func_176(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 29:
			func_174(uParam1, "Josh3", func_176(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 30:
			func_174(uParam1, "Josh4", func_176(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 31:
			func_174(uParam1, "Maude1", func_176(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 32:
			func_174(uParam1, "Minute1", func_176(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 33:
			func_174(uParam1, "Minute2", func_176(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 34:
			func_174(uParam1, "Minute3", func_176(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 35:
			func_174(uParam1, "MrsPhilips1", func_176(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 36:
			func_174(uParam1, "MrsPhilips2", func_176(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 37:
			func_174(uParam1, "Nigel1", func_176(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 38:
			func_174(uParam1, "Nigel1A", func_176(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 39:
			func_174(uParam1, "Nigel1B", func_176(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_175(iParam0), 1, 1);
			break;
		
		case 40:
			func_174(uParam1, "Nigel1C", func_176(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_175(iParam0), 1, 1);
			break;
		
		case 41:
			func_174(uParam1, "Nigel1D", func_176(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_175(iParam0), 1, 1);
			break;
		
		case 42:
			func_174(uParam1, "Nigel2", func_176(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 43:
			func_174(uParam1, "Nigel3", func_176(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 44:
			func_174(uParam1, "Omega1", func_176(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 45:
			func_174(uParam1, "Omega2", func_176(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 46:
			func_174(uParam1, "Paparazzo1", func_176(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 47:
			func_174(uParam1, "Paparazzo2", func_176(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 48:
			func_174(uParam1, "Paparazzo3", func_176(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 49:
			func_174(uParam1, "Paparazzo3A", func_176(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 50:
			func_174(uParam1, "Paparazzo3B", func_176(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 51:
			func_174(uParam1, "Paparazzo4", func_176(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 52:
			func_174(uParam1, "Rampage1", func_176(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 54:
			func_174(uParam1, "Rampage3", func_176(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 55:
			func_174(uParam1, "Rampage4", func_176(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 56:
			func_174(uParam1, "Rampage5", func_176(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 53:
			func_174(uParam1, "Rampage2", func_176(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 57:
			func_174(uParam1, "TheLastOne", func_176(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 58:
			func_174(uParam1, "Tonya1", func_176(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 59:
			func_174(uParam1, "Tonya2", func_176(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 60:
			func_174(uParam1, "Tonya3", func_176(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 61:
			func_174(uParam1, "Tonya4", func_176(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 62:
			func_174(uParam1, "Tonya5", func_176(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_174(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_175(int iParam0)
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

struct<2> func_176(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_177(iParam0) };
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

struct<2> func_177(int iParam0)
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

int func_178()
{
	if (func_181() && !func_182())
	{
		return 1;
	}
	if (func_180() && func_179())
	{
		return 1;
	}
	return 0;
}

bool func_179()
{
	return Global_96891 > 0;
}

int func_180()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_182()
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

int func_183()
{
	if (!func_150(5))
	{
		return 1;
	}
	if (func_178())
	{
		return 1;
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_182())
		{
			return 0;
		}
	}
	if (func_172(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	if ((Global_97162 == func_52() && unk_0xD2D57F1D764117B1()) && Global_97163)
	{
		return 1;
	}
	return 0;
}

void func_185(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_187(iParam0);
	unk_0x65D2EBB47E1CEC21(false);
	unk_0x971927086CFD2158(true);
	Global_97159 = 0;
	func_186();
}

void func_186()
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

void func_187(int iParam0)
{
	Global_97162 = iParam0;
}

int func_188(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
		iParam3 = func_52();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_229())
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
			if (unk_0xA8CEACB4F35AE058(unk_0x4805D2B1D8CF94A9(unk_0xD80958FC74E988A6())) > 1369f && !func_182())
			{
				return 0;
			}
		}
		if (!Global_97173.f_7311)
		{
			return 0;
		}
		if (func_33(0))
		{
			return 0;
		}
		if (func_178())
		{
			return 0;
		}
		if (func_228())
		{
			return 0;
		}
		if (Global_97162 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_172(100f, 1) != -1)
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
		if (!func_227(iParam3))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_226(func_17()) == 4 || func_226(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_225(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_224(Global_97173.f_28117.f_43[iParam3]))
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
		if (func_223())
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
		if (!func_214(4))
		{
			return 0;
		}
		if (!func_150(5))
		{
			return 0;
		}
		if (func_213(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_213(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_227(30) && !func_213(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97173.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97173.f_1729.f_539.f_1524[iVar4];
				if (func_212(iVar8))
				{
					if (func_190(iVar4))
					{
						if (!func_189(Var5, 0f, 0f, 0f))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), Var5) < (210f * 210f))
							{
								if (func_17() != iVar4)
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

bool func_189(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_97173.f_1729.f_539.f_1524[iParam0];
	return func_191(iVar0);
}

int func_191(int iParam0)
{
	return func_192(iParam0, 1);
}

int func_192(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_212(iParam0))
	{
		return 0;
	}
	func_193(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_193(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_194(func_205(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_194(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_204(iParam0, iParam1))
	{
		iVar0 = func_203(iParam1);
		iVar1 = func_201(iParam0);
		iVar2 = (func_201(iParam0) - func_201(iParam1));
		iVar3 = (func_203(iParam0) - func_203(iParam1));
		iVar4 = (func_200(iParam0) - func_200(iParam1));
		iVar5 = (func_199(iParam0) - func_199(iParam1));
		iVar6 = (func_198(iParam0) - func_198(iParam1));
		iVar7 = (func_197(iParam0) - func_197(iParam1));
	}
	else
	{
		iVar0 = func_203(iParam0);
		iVar1 = func_201(iParam1);
		iVar2 = (func_201(iParam1) - func_201(iParam0));
		iVar3 = (func_203(iParam1) - func_203(iParam0));
		iVar4 = (func_200(iParam1) - func_200(iParam0));
		iVar5 = (func_199(iParam1) - func_199(iParam0));
		iVar6 = (func_198(iParam1) - func_198(iParam0));
		iVar7 = (func_197(iParam1) - func_197(iParam0));
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
		iVar4 = (iVar4 + func_196(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_195(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_195(float fParam0, float fParam1, float fParam2)
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

int func_196(int iParam0, int iParam1)
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

int func_197(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_198(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_199(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_200(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_201(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_202(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
}

int func_202(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_203(int iParam0)
{
	return iParam0 & 15;
}

int func_204(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_212(iParam1) || !func_212(iParam0))
	{
		return 1;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	var uVar0;
	
	func_211(&uVar0, unk_0x494E97C2EF27C470());
	func_210(&uVar0, unk_0x13D2B8ADD79640F2());
	func_209(&uVar0, unk_0x25223CA6B4D20B7F());
	func_208(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_207(&uVar0, unk_0xBBC72712E80257A1());
	func_206(&uVar0, unk_0x961777E64BDAF717());
	return uVar0;
}

void func_206(var uParam0, int iParam1)
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

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_208(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_201(*uParam0);
	if (iParam1 < 1 || iParam1 > func_196(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_210(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_212(int iParam0)
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
	iVar0 = func_197(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_198(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_199(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_201(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_203(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_200(iParam0);
	if (iVar5 < 1 || iVar5 > func_196(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_213(int iParam0, int iParam1)
{
	if (unk_0xA921AA820C25702F(Global_97173.f_28117.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_222()) || Global_96220) || Global_24446) || func_221()) || func_24(8, -1)) || func_220()) || func_219()) || func_218()) || func_217()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true) || func_222()) || Global_24446) || func_221()) || func_24(8, -1)) || func_218()) || func_220()) || func_219()) || func_217()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_222()) || Global_96220) || Global_24446) || func_221()) || func_24(8, -1)) || func_218()) || func_220()) || func_219()) || func_217()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0)) || func_222()) || Global_96220) || Global_24446) || func_221()) || func_24(8, -1)) || func_220()) || func_219()) || func_217()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_222() || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || func_24(8, -1)) || func_217()) || func_216()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_220()) || func_219()) || func_216()) || func_215())
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
							if ((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) > 0) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_222()) || Global_24446) || func_221()) || func_24(8, -1)) || func_219()) || func_218()) || func_217()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || func_222()) || func_219()) || Global_96220) || Global_24446) || func_221()) || Global_35953) || func_24(8, -1)) || func_218()) || func_216()) || func_217()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4859F1FC66A6278E(unk_0xD80958FC74E988A6(), 0) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || !unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6())) || !unk_0x5A859503B0C08678()) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || unk_0x886E37EC497200B6(unk_0xD80958FC74E988A6())) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) || unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) || unk_0xFB92A102F1C4DFA3(unk_0xD80958FC74E988A6())) || unk_0x9DE327631295B4C2(unk_0xD80958FC74E988A6())) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true)) || unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6())) || func_222()) || Global_96220) || Global_24446) || func_221()) || func_24(8, -1)) || func_218()) || func_216()) || func_220()) || func_219()) || func_217())
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

var func_215()
{
	return Global_89823.f_1;
}

int func_216()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_217()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_218()
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

bool func_219()
{
	return Global_89836.f_291 > 0;
}

bool func_220()
{
	return Global_89836.f_290 > 0;
}

var func_221()
{
	return Global_1315898;
}

int func_222()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_223()
{
	func_16();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_224(int iParam0)
{
	return func_204(func_205(), iParam0);
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
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

int func_226(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_97173.f_5944.f_889[iParam0];
}

bool func_227(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_229())
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

int func_228()
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

int func_229()
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

void func_230()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if ((unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_enter_m", 3) || unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_idle_m", 3)) || unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
		}
	}
	if (iLocal_171)
	{
		func_263(0);
		if (Global_24682)
		{
			unk_0x706D57B0F50DA710("AC_STOP");
		}
		func_262();
		func_6();
		unk_0xB542DE8C3D1CB210(false);
		unk_0xD37401D78A929A49();
		unk_0xC12321827687FE4D(Local_75 - Vector(10f, 15f, 15f), Local_75 + Vector(10f, 15f, 15f), true, true);
		unk_0xC12321827687FE4D(Local_80 - Vector(10f, 15f, 15f), Local_80 + Vector(10f, 15f, 15f), true, true);
		func_143(0);
		if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
		{
			if (!unk_0x0A7B270912999B3C(unk_0xB6997A7EB3F5C8C0()))
			{
				unk_0xAD738C3085FE7E11(unk_0xB6997A7EB3F5C8C0(), true, false);
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iLocal_94))
		{
			if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_94, false) && func_132(unk_0xD80958FC74E988A6(), iLocal_94, 1) > 50f)
			{
				func_242(iLocal_94, 0, 145);
			}
		}
		if (unk_0x7239B21A38F536BA(iLocal_90[0]))
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_90[0]))
			{
				unk_0x1913FE4CBF41C463(iLocal_90[0], 317, true);
				if (!unk_0x997ABD671D25CA0B(iLocal_90[0], false))
				{
					unk_0xBB8DE8CF6A8DD8BB(iLocal_90[0]);
				}
				if (unk_0x5891CAC5D4ACFF74(iLocal_90[0]))
				{
					unk_0xED74007FFB146BC2(iLocal_90[0]);
				}
			}
		}
		iLocal_62 = 0;
		while (iLocal_62 <= (iLocal_89 - 1))
		{
			if (unk_0x7239B21A38F536BA(iLocal_90[iLocal_62]))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_90[iLocal_62]))
				{
					unk_0x1913FE4CBF41C463(iLocal_90[iLocal_62], 317, true);
					if (!unk_0x997ABD671D25CA0B(iLocal_90[iLocal_62], false))
					{
						unk_0xBB8DE8CF6A8DD8BB(iLocal_90[iLocal_62]);
					}
					unk_0x63F58F7C80513AAD(iLocal_90[iLocal_62], true);
					unk_0xBF25EB89375A37AD(255, iLocal_99, joaat("player"));
					unk_0x9F8AA94D6D97DBF4(iLocal_90[iLocal_62], false);
				}
				unk_0x2595DD4236549CE3(&(iLocal_90[iLocal_62]));
			}
			iLocal_62++;
		}
		iLocal_62 = 0;
		while (iLocal_62 <= (iLocal_89 - 1))
		{
			if (unk_0xA6DB27D19ECBB7DA(uLocal_154[iLocal_62]))
			{
				unk_0x86A652570E5F25DD(&(uLocal_154[iLocal_62]));
			}
			iLocal_62++;
		}
		if (iLocal_53 == 1)
		{
			unk_0x1EE7063B80FFC77C(42.7808f, -1324.405f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (unk_0xA7A932170592B50E(iLocal_126))
		{
			if (unk_0xDFB2B516207D3534(iLocal_126))
			{
				unk_0x026FB97D0A425F84(iLocal_126, false);
			}
		}
	}
	func_231(-1);
	unk_0x1090044AD1DA76FA();
}

void func_231(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_184())
	{
		func_235(iParam0);
		unk_0x5F28ECF5FC84772F(false, 0);
		Global_97164 = unk_0x9CD27B0045628463();
		func_234(30000);
		StringCopy(&cVar0, func_233(Global_97162, 1), 64);
		if (func_51(Global_97162) > 0)
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
	func_232(&Global_24503);
	Global_97163 = 0;
	func_187(-1);
}

void func_232(var uParam0)
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

char* func_233(int iParam0, bool bParam1)
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

void func_234(int iParam0)
{
	Global_35460 = (unk_0x9CD27B0045628463() + iParam0);
}

void func_235(int iParam0)
{
	func_236(iParam0, 0, func_241(iParam0));
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_205();
	func_239(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_238(iParam0, &uVar0);
	Var1 = { func_237(&uVar0) };
}

struct<16> func_237(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_199(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_198(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_197(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_203(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_201(*uParam0), 64);
	return Var0;
}

void func_238(int iParam0, var uParam1)
{
	Global_97173.f_28117.f_43[iParam0] = *uParam1;
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_201(*uParam0);
	iVar1 = func_203(*uParam0);
	iVar2 = func_200(*uParam0);
	iVar3 = func_199(*uParam0);
	iVar4 = func_198(*uParam0);
	iVar5 = func_197(*uParam0);
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
	iVar6 = func_196(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_196(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_240(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_211(uParam0, iParam1);
	func_210(uParam0, iParam2);
	func_209(uParam0, iParam3);
	func_208(uParam0, iParam4);
	func_207(uParam0, iParam5);
	func_206(uParam0, iParam6);
}

int func_241(int iParam0)
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

int func_242(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xA6E9C38DB51D7748(iParam0, &uVar0);
		if (!unk_0xCA042B6957743895(sVar1))
		{
			if (unk_0xD24D37CC275948CC(sVar1) == unk_0xD24D37CC275948CC("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_243(iParam0, iParam2);
	return 1;
}

void func_243(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_248(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xBB40DD2270B65366(iParam0, -1);
		if (!unk_0x7239B21A38F536BA(iVar0))
		{
			iVar0 = unk_0x83F969AA1EE2A664(iParam0, -1);
		}
		if (unk_0x7239B21A38F536BA(iVar0) && !unk_0x84A2DD9AC37C35C1(iVar0))
		{
			if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97173.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x9F47B058362C84B5(iParam0) == Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0xCA042B6957743895(&(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97173.f_18338.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x9F47B058362C84B5(iParam0) == Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0xCA042B6957743895(&(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97173.f_18338.f_4798 = iParam1;
	Global_67865 = iParam0;
	Global_97173.f_18338.f_4796 = 1;
	func_244(iParam0, &(Global_97173.f_18338.f_4742));
}

void func_244(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		func_247(uParam1);
		uParam1->f_42 = unk_0x9F47B058362C84B5(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7CE1CCB9B293020E(iParam0), 16);
		*uParam1 = unk_0xF11BC2DD9A3E7195(iParam0);
		unk_0xA19435F193E081AC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x3BC4245933A166F7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB635392A4938B3C3(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x0EE21293DAD47C95(iParam0);
		uParam1->f_43 = unk_0x2BB9230590DA5E8A(iParam0);
		uParam1->f_45 = unk_0xB3ED1BFB4BE636DC(iParam0);
		uParam1->f_46 = unk_0x25BC98A59C2EA962(iParam0);
		unk_0x8389CD56CA8072DC(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x7619EEE8C886757F(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x8C4B92553E4766A5(iParam0, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 28);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 29);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 30);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x52F357A30698BCCE(iParam0, false))
		{
			uParam1->f_44 = unk_0xF8C397922FC03F41(iParam0);
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_42))
		{
			if (unk_0x4198AB0022B15F87(iParam0))
			{
				switch (unk_0x9B0F3DCA3DB0F4CD(iParam0))
				{
					case 2:
					case 0:
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 23);
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 23);
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x678B9BB8C3F58FEB(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 9);
		}
		if (unk_0x4AF9BD80EEBEB453(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 10);
		}
		if (unk_0xF095C0405307B21B(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 13);
			unk_0xB64CF2CCA9D95F52(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x910A32E7AAD2656C(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 12);
		}
		func_246(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(iParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), func_245(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x060D935D3981A275(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_53), 11);
		}
		if (unk_0x05661B80A8C9165F(iParam0, "IgnoredByQuickSave") && unk_0xDACE671663F2F5DB(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_53), 27);
		}
	}
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_246(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4C241E39B23DF959(*iParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x84B233A8C8FC8AE7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x772960298DA26FDB(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB3924ECD70E095DC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB3924ECD70E095DC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_247(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_248(int iParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false)) || func_260(iParam0, 0, 0)) || func_260(iParam0, 1, 0)) || func_260(iParam0, 2, 0)) || func_259(iParam0) != 145) || func_258(iParam0)) || func_257(iParam0)) || func_256(iParam0)) || func_255(iParam0)) || !func_249(unk_0x9F47B058362C84B5(iParam0)))
	{
		if (func_257(iParam0))
		{
		}
		if (func_257(iParam0))
		{
		}
		if (func_260(iParam0, 0, 0))
		{
		}
		if (func_260(iParam0, 1, 0))
		{
		}
		if (func_260(iParam0, 2, 0))
		{
		}
		if (func_259(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_249(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_250(iParam0))
	{
		return 0;
	}
	if (((unk_0x45A9187928F4B9E3(iParam0) || unk_0xA0948AB42D7BA0DE(iParam0)) || unk_0xDCE4334788AF94EA(iParam0)) || unk_0xAB935175B22E822B(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_250(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x19AAC8F07BFEC53E(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("buffalo3") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("gauntlet2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_229())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xA7A866D21CD2329B())
		{
			if (unk_0x33468EDC08E371F6(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD4D7B033C3AA243C(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_254() && !func_253()) && !func_252()) && !func_251()) && !func_229())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x4D982ADB1978442D() || unk_0x48AF36444B965238()) || unk_0xA72BC0B675B1519E())
		{
		}
		else if (!func_252())
		{
			return 0;
		}
	}
	return 1;
}

int func_251()
{
	return 0;
}

int func_252()
{
	return 1;
}

int func_253()
{
	return 1;
}

int func_254()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x9F47B058362C84B5(iParam0);
	sVar1 = unk_0x7CE1CCB9B293020E(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_250(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(Global_87550[iVar0]))
		{
			if (Global_87550[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_257(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x4C241E39B23DF959(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7239B21A38F536BA(Global_87520[iVar0]) && unk_0x4C241E39B23DF959(Global_87520[iVar0], false))
			{
				if (Global_87520[iVar0] == iParam0 && unk_0x9F47B058362C84B5(Global_87520[iVar0]) == unk_0x9F47B058362C84B5(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(Global_66960.f_484[24]))
	{
		if (iParam0 == Global_66960.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_66960.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_66960.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 145;
	}
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_87520[iVar0]))
		{
			if (Global_87520[iVar0] == iParam0)
			{
				return Global_87530[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_260(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_261(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xA921AA820C25702F(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_261(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_262()
{
	Global_24678 = 0;
	Global_24679 = 0;
	Global_24681 = 0;
	Global_24682 = 0;
	Global_24683 = 0;
}

void func_263(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_161(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_264()
{
	float fVar0;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_338, true);
		iLocal_337 = 1;
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_341, true) < fVar0)
		{
			fVar0 = unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), Local_341, true);
			iLocal_337 = 2;
		}
		if (iLocal_337 == 1)
		{
			iLocal_344 = 1;
			iLocal_53 = 1;
			return Local_338;
		}
		if (iLocal_337 == 2)
		{
			iLocal_344 = 2;
			iLocal_53 = 2;
			return Local_341;
		}
	}
	return 0f, 0f, 0f;
}

