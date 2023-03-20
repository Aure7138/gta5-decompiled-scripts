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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81[2];
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	float fLocal_98[2] = { 0f, 0f };
	float fLocal_101 = 0f;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<3> Local_107 = { 0, 0, 0 } ;
	int iLocal_110 = 0;
	var uLocal_111[2] = { 0, 0 };
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	bool bLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	struct<6> Local_150 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_156 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	bool bLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178 = 16;
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
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
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
	int iVar0;
	
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
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	Local_107 = { 154.92f, 6841.12f, 19.14f };
	iLocal_125 = 200;
	Local_139 = { -1161.199f, 934.5912f, 196.7591f };
	Local_142 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_150, "", 24);
	if (unk_0x4B4BD87E3D30C50D(11))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_53))
		{
			if (unk_0x3E5CB294501B40E0(iLocal_53))
			{
				unk_0xD3778FD9E17F7E71(iLocal_53);
			}
		}
		func_205();
	}
	if (func_163(ScriptParam_0.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		func_160(-1);
	}
	else
	{
		unk_0x2F798BA2098FDADE();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD8AD97AB31334199() || iLocal_131)
		{
			if (!func_159())
			{
				if (func_158())
				{
					func_205();
				}
			}
			unk_0x185B194BB229460F("RE_BU", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_146())
					{
						func_205();
					}
					if (!iLocal_66)
					{
						func_145();
					}
					else
					{
						func_144();
					}
					if (bLocal_52)
					{
						iLocal_162 = 1;
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
					{
						func_143();
						switch (iLocal_49)
						{
							case 0:
								func_133();
								iLocal_49 = 1;
								break;
							
							case 1:
								if ((!func_126(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) && !func_126(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) && !func_125())
								{
									switch (iLocal_50)
									{
										case 0:
											func_124();
											if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_78, 50f, 35f, 50f, 0, 1, 0))
											{
												func_123();
											}
											if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_78, 80f, 65f, 50f, 0, 1, 0))
											{
												func_122();
											}
											if (!unk_0x0B6E83A9A7ED3EBA(iLocal_58))
											{
												if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 281.9148f, 6816.345f, 4.3197f, 48.3924f, 6885.921f, 43.0037f, 226.5f, 0, 1, 0) || unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 50f, 0, 1, 0))
												{
													func_121();
													if (unk_0xC3B073777B46C61A(uLocal_114))
													{
														unk_0x9555F96101785581(uLocal_114, 0);
													}
													iLocal_64 = 0;
													while (iLocal_64 <= 1)
													{
														if (unk_0xC3B073777B46C61A(uLocal_111[iLocal_64]))
														{
															unk_0x9555F96101785581(uLocal_111[iLocal_64], 0);
														}
														iLocal_64++;
													}
													if (!func_159())
													{
														func_112(1);
													}
												}
											}
											break;
									}
								}
								else
								{
									func_121();
									iLocal_49 = 2;
								}
								break;
							
							case 2:
								if ((func_126(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0) || func_126(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, iLocal_129, 7f, 0)) || iLocal_129)
								{
									iLocal_129 = 1;
									if (!func_159())
									{
										func_112(1);
									}
									if (unk_0xC3B073777B46C61A(uLocal_114))
									{
										unk_0x9555F96101785581(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0xC3B073777B46C61A(uLocal_111[iLocal_64]))
										{
											unk_0x9555F96101785581(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									switch (iLocal_128)
									{
										case 0:
											func_111();
											break;
										
										case 1:
											func_111();
											break;
										
										case 2:
											func_111();
											break;
										
										case 3:
											func_111();
											break;
										
										case 4:
											func_111();
											break;
										
										case 5:
											func_111();
											break;
										}
								}
								if (func_125())
								{
									iLocal_75 = 1;
									if (unk_0xC3B073777B46C61A(uLocal_114))
									{
										unk_0x9555F96101785581(uLocal_114, 1);
									}
									iLocal_64 = 0;
									while (iLocal_64 <= 1)
									{
										if (unk_0xC3B073777B46C61A(uLocal_111[iLocal_64]))
										{
											unk_0x9555F96101785581(uLocal_111[iLocal_64], 1);
										}
										iLocal_64++;
									}
									if (!func_110())
									{
										switch (iLocal_51)
										{
											case 1:
												func_107();
												break;
											
											case 3:
												func_106();
												break;
											
											case 4:
												func_105();
												break;
											
											case 5:
												func_103();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x1E80C02AC16B6622(iLocal_54[0]))
												{
													func_101(iLocal_54[0], "GENERIC_WAR_CRY", 24);
												}
												else if (!unk_0x1E80C02AC16B6622(iLocal_54[1]))
												{
													func_101(iLocal_54[1], "GENERIC_WAR_CRY", 24);
												}
												func_111();
												break;
											
											case 6:
												func_103();
												unk_0x4EDE34FBADD967A6(0);
												if (!unk_0x1E80C02AC16B6622(iLocal_54[0]))
												{
													func_101(iLocal_54[0], "GENERIC_SHOCKED_HIGH", 24);
												}
												else if (!unk_0x1E80C02AC16B6622(iLocal_54[1]))
												{
													func_101(iLocal_54[1], "GENERIC_SHOCKED_HIGH", 24);
												}
												func_111();
												break;
										}
									}
									else
									{
										func_103();
										unk_0x4EDE34FBADD967A6(0);
										iVar0 = 0;
										while (iVar0 < iLocal_54)
										{
											if (!unk_0x1E80C02AC16B6622(iLocal_54[iVar0]))
											{
												unk_0x4F9B6ED8FAC6333B(iLocal_54[iVar0], 5, 0, 0);
												unk_0x23E5F4496336DE4E(iLocal_54[iVar0], unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
												unk_0x112CD899A3BEE719(iLocal_54[iVar0], 1);
												if (unk_0x1F2158D615BC4B25(iLocal_60))
												{
													if (unk_0x540DDE9BB09221C3(iLocal_60))
													{
														unk_0xE8EBCCA6A3BE542B(iLocal_60, 1, 1);
													}
												}
												if (unk_0xC3B073777B46C61A(uLocal_111[iVar0]))
												{
													unk_0x296CDA10C549A502(&(uLocal_111[iVar0]));
												}
											}
											iVar0++;
										}
										iLocal_49 = 3;
									}
								}
								break;
							
							case 3:
								if (!bLocal_130)
								{
									func_100();
								}
								if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
								{
									func_86();
								}
								break;
							
							case 4:
								func_85();
								if (!unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_107, 100f, 100f, 100f, 1, 1, 0))
								{
									unk_0x4AAD01BBE039D160(1f);
									if (unk_0x1F2158D615BC4B25(iLocal_54[0]) && unk_0x1F2158D615BC4B25(iLocal_54[1]))
									{
										unk_0xA29D53AF339F4CD0(&(iLocal_54[0]));
										unk_0xA29D53AF339F4CD0(&(iLocal_54[1]));
									}
								}
								if (!unk_0x1F2158D615BC4B25(iLocal_57))
								{
									if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_139, 200f, 200f, 200f, 1, 1, 0))
									{
										unk_0xC60576ADD1AECA45(joaat("s_m_m_highsec_01"));
										unk_0xC60576ADD1AECA45(joaat("granger"));
										if (unk_0x4A4B6FD54C499B7D(joaat("s_m_m_highsec_01")) && unk_0x4A4B6FD54C499B7D(joaat("granger")))
										{
											iLocal_59 = unk_0x2EEA15C0C12C8CDE(joaat("granger"), -1155.043f, 942.9685f, 197.4921f, 161.1247f, 1, 1);
											unk_0x26472A6D46CDD76D(iLocal_59, 200);
											unk_0x130B1E3196595D67(iLocal_59, 1.5f);
											iLocal_57 = unk_0x73B8FD017061F240(iLocal_59, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
											unk_0x5F2AACB0122E1554(iLocal_57, 0, 0, 2, 0);
											unk_0x5F2AACB0122E1554(iLocal_57, 3, 0, 0, 0);
											unk_0x5F2AACB0122E1554(iLocal_57, 4, 0, 0, 0);
											unk_0x1592B6D205958934(iLocal_57, joaat("weapon_pistol"), -1, 1, 1);
											unk_0x054E434B0AECBDA6(iLocal_57, iLocal_177);
										}
									}
								}
								if (!unk_0x1E80C02AC16B6622(iLocal_53))
								{
									if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
									{
										if (unk_0x1205624841D11747(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)) < 1)
										{
											if (!iLocal_132)
											{
												func_81(0);
												func_103();
												unk_0x4EDE34FBADD967A6(0);
												func_70(&uLocal_178, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												iLocal_132 = 1;
											}
										}
									}
									else
									{
										iLocal_132 = 0;
									}
									if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_139, Global_22, 1, 1, 0) && unk_0x0C8E94332AE582B1(iLocal_53, unk_0x77F050A399DB77ED(), 10f, 10f, 10f, 0, 1, 0))
									{
										if (unk_0x3E5CB294501B40E0(iLocal_53))
										{
											if (unk_0xC3B073777B46C61A(uLocal_137))
											{
												unk_0x296CDA10C549A502(&uLocal_137);
											}
											if (unk_0xC3B073777B46C61A(uLocal_138))
											{
												unk_0x296CDA10C549A502(&uLocal_138);
											}
											if (func_69())
											{
												iLocal_49 = 5;
											}
											else
											{
												iLocal_49 = 6;
											}
										}
									}
									else
									{
										func_64();
										func_63();
										func_62();
										func_58();
										func_57();
										func_51();
										if (func_50(Local_139))
										{
											func_81(0);
											func_103();
											unk_0x4EDE34FBADD967A6(0);
											func_70(&uLocal_178, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
										if (func_49())
										{
											func_81(0);
											func_103();
											unk_0x4EDE34FBADD967A6(0);
											func_70(&uLocal_178, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
							
							case 5:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_47();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 6:
								func_85();
								if (func_48(1, 0, 1))
								{
									func_46();
								}
								if (bLocal_124)
								{
									iLocal_49 = 8;
								}
								break;
							
							case 8:
								func_13();
								break;
							
							case 7:
								func_11();
								if (unk_0x1F2158D615BC4B25(iLocal_60))
								{
									if (unk_0x540DDE9BB09221C3(iLocal_60))
									{
										if (!unk_0x1E80C02AC16B6622(iLocal_54[0]))
										{
											if (unk_0x5EE0E9E5B7A50C2A(iLocal_54[0], "random@burial", "a_burial_stop", 3))
											{
												if (unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
												{
													unk_0xE8EBCCA6A3BE542B(iLocal_60, 1, 1);
												}
											}
											else
											{
												unk_0xE8EBCCA6A3BE542B(iLocal_60, 1, 1);
											}
										}
									}
								}
								if (unk_0x1E80C02AC16B6622(iLocal_54[0]) || unk_0x1E80C02AC16B6622(iLocal_54[1]))
								{
									bLocal_147 = true;
								}
								if (bLocal_147)
								{
									if (unk_0x968EA16107097324(iLocal_58, 0))
									{
										if (!unk_0x1E80C02AC16B6622(iLocal_54[0]))
										{
											unk_0x9CC689BED786D50E(iLocal_54[0]);
											if (unk_0x94BE237448EC603E(iLocal_54[0], iLocal_58, -1, 0, 0) || unk_0x94BE237448EC603E(iLocal_54[0], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0xE2CB8488CFA42209(iLocal_54[0]);
													if (unk_0x1F2158D615BC4B25(iLocal_60))
													{
														if (unk_0x540DDE9BB09221C3(iLocal_60))
														{
															unk_0xE8EBCCA6A3BE542B(iLocal_60, 1, 1);
														}
													}
													unk_0x2A6B9F9E71C479CF(&uLocal_65);
													unk_0x8530DA8508D7A4B8(0);
													unk_0x36C8654A22054A00(0, unk_0x03C14E8A9400F2A9(iLocal_58, -0.5f, 0.5f, 0f), unk_0x77F050A399DB77ED(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xFC7C68B6C728CFEC(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0x277D239A78FD3309(0, iLocal_58, unk_0x77F050A399DB77ED(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x44642CB08FA1637E(uLocal_65);
													unk_0xB8A8FA4B28E9F423(iLocal_54[0], uLocal_65);
													unk_0xAAD288E877AC833D(&uLocal_65);
													unk_0x112CD899A3BEE719(iLocal_54[0], 1);
													unk_0x99A55AFB40674D1C(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0x49C650267EDFEBC6(iLocal_54[0], 242628503) == 1)
												{
													if (unk_0xE6BB50DD87FB4D2B(iLocal_54[0]) == 3)
													{
														if (!unk_0x0C8E94332AE582B1(iLocal_54[0], unk_0x77F050A399DB77ED(), 10f, 10f, 10f, 0, 1, 0) && !unk_0xA427F05DB896EEBE(iLocal_54[0], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0xA29D53AF339F4CD0(&(iLocal_54[0]));
														}
													}
												}
											}
											else
											{
												unk_0xFBE25F0677076CF9(iLocal_54[0], unk_0x77F050A399DB77ED(), 0, 16);
												unk_0x112CD899A3BEE719(iLocal_54[0], 1);
											}
										}
										if (!unk_0x1E80C02AC16B6622(iLocal_54[1]))
										{
											unk_0x9CC689BED786D50E(iLocal_54[1]);
											if (unk_0x94BE237448EC603E(iLocal_54[1], iLocal_58, -1, 0, 0) || unk_0x94BE237448EC603E(iLocal_54[1], iLocal_58, 0, 0, 0))
											{
												if (!iLocal_164)
												{
													unk_0xE2CB8488CFA42209(iLocal_54[1]);
													unk_0x2A6B9F9E71C479CF(&uLocal_65);
													unk_0x8530DA8508D7A4B8(0);
													unk_0x36C8654A22054A00(0, unk_0x03C14E8A9400F2A9(iLocal_58, -0.5f, 0.5f, 0f), unk_0x77F050A399DB77ED(), 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													unk_0xFC7C68B6C728CFEC(0, iLocal_58, -1, -1, 3f, 9, 0);
													unk_0x277D239A78FD3309(0, iLocal_58, unk_0x77F050A399DB77ED(), 8, 30f, 262144, -1f, 10f, 1);
													unk_0x44642CB08FA1637E(uLocal_65);
													unk_0xB8A8FA4B28E9F423(iLocal_54[1], uLocal_65);
													unk_0xAAD288E877AC833D(&uLocal_65);
													unk_0x112CD899A3BEE719(iLocal_54[1], 1);
													unk_0x99A55AFB40674D1C(iLocal_58, 1);
													iLocal_164 = 1;
												}
												else if (unk_0x49C650267EDFEBC6(iLocal_54[1], 242628503) == 1)
												{
													if (unk_0xE6BB50DD87FB4D2B(iLocal_54[1]) == 3)
													{
														if (!unk_0x0C8E94332AE582B1(iLocal_54[1], unk_0x77F050A399DB77ED(), 10f, 10f, 10f, 0, 1, 0) && !unk_0xA427F05DB896EEBE(iLocal_54[1], Local_88, 10f, 10f, 10f, 0, 1, 0))
														{
															unk_0xA29D53AF339F4CD0(&(iLocal_54[1]));
														}
													}
												}
											}
											else
											{
												unk_0xFBE25F0677076CF9(iLocal_54[1], unk_0x77F050A399DB77ED(), 0, 16);
												unk_0x112CD899A3BEE719(iLocal_54[1], 1);
											}
										}
									}
								}
								break;
							
							case 9:
								break;
						}
						if ((func_10() && !func_9()) && iLocal_49 != 9)
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_53))
							{
								if (unk_0xA427F05DB896EEBE(iLocal_53, Local_142, 5f, 5f, 5f, 0, 1, 0))
								{
									func_8(0);
									unk_0x4EDE34FBADD967A6(0);
									func_103();
									iLocal_49 = 9;
								}
							}
						}
						if (func_6())
						{
							if (unk_0x1F2158D615BC4B25(iLocal_53))
							{
								unk_0xAB3098579170FA46(&iLocal_53);
							}
							func_13();
						}
						if (func_5())
						{
							func_4();
						}
						func_2();
						if (iLocal_49 != 3)
						{
							if (func_1())
							{
								unk_0x3345CB85AB9EC035("RE6_BOTH_DEAD");
								if (!iLocal_74)
								{
									unk_0xC1B1E9A034A63A62(0);
									iLocal_106 = unk_0x3EAC9995EC220C5A() + 8500;
									iLocal_74 = 1;
								}
								if (!unk_0x1E80C02AC16B6622(iLocal_53))
								{
									if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_53, 20f, 20f, 20f, 0, 1, 1))
									{
										if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
										{
											iLocal_49 = 3;
										}
									}
								}
							}
						}
						if (((iLocal_49 == 1 || iLocal_49 == 2) || iLocal_49 == 3) || iLocal_49 == 7)
						{
							if (!unk_0x1E80C02AC16B6622(iLocal_53))
							{
								if (!bLocal_130)
								{
									if (unk_0x49C650267EDFEBC6(iLocal_53, 1785177548) != 1 && unk_0x49C650267EDFEBC6(iLocal_53, 1785177548) != 0)
									{
										unk_0xB28207B96952D994(iLocal_53);
										uLocal_343 = unk_0xFCF0CDCAF2761068(Local_78, -2f, -4f, 18f, 2);
										unk_0x3C6CCFC07FD12077(iLocal_53, uLocal_343, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										unk_0x1D8909C3B0308E1E(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x1D8909C3B0308E1E(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										unk_0x33AD23CCE6A61B0F(uLocal_343, 1);
										unk_0x112CD899A3BEE719(iLocal_53, 1);
									}
									if (unk_0x01CB02EE3F3F9481(iLocal_53))
									{
										unk_0x41DC9B50650996BA(iLocal_53, 1);
										unk_0x7F8A20B6E7557B94(iLocal_53, 1);
										unk_0x9F48F299B333353E(iLocal_53, 0);
									}
								}
								if ((unk_0x7073FA9C2D0A60C3(iLocal_53) || unk_0x79AF38B040695E18(iLocal_53)) || (iLocal_125 - unk_0x070BBD7287E8E744(iLocal_53)) >= 50)
								{
									unk_0x41DC9B50650996BA(iLocal_53, 1);
									unk_0x7F8A20B6E7557B94(iLocal_53, 1);
									unk_0x9F48F299B333353E(iLocal_53, 0);
								}
								if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !unk_0x0B6E83A9A7ED3EBA(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)))
								{
									if (unk_0x2AA05370067DC5AC(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)) < 5f)
									{
									}
									else if (unk_0x32F9EB04315127B4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), iLocal_53))
									{
										unk_0x41DC9B50650996BA(iLocal_53, 1);
										unk_0x7F8A20B6E7557B94(iLocal_53, 1);
										unk_0x9F48F299B333353E(iLocal_53, 0);
									}
								}
								if (!unk_0x0B6E83A9A7ED3EBA(iLocal_58))
								{
									if (unk_0x32F9EB04315127B4(iLocal_58, iLocal_53))
									{
										unk_0x41DC9B50650996BA(iLocal_53, 1);
										unk_0x7F8A20B6E7557B94(iLocal_53, 1);
										unk_0x9F48F299B333353E(iLocal_53, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_205();
		}
	}
}

int func_1()
{
	if (!bLocal_130)
	{
		if (!unk_0x1F2158D615BC4B25(iLocal_54[0]) && !unk_0x1F2158D615BC4B25(iLocal_54[1]))
		{
			return 1;
		}
		if (unk_0x1F2158D615BC4B25(iLocal_54[0]) && unk_0x1F2158D615BC4B25(iLocal_54[1]))
		{
			if (unk_0x1E80C02AC16B6622(iLocal_54[0]) && unk_0x1E80C02AC16B6622(iLocal_54[1]))
			{
				return 1;
			}
			if (unk_0x27DA724370D29A95(iLocal_54[0]) && unk_0x27DA724370D29A95(iLocal_54[1]))
			{
				return 1;
			}
		}
		if (unk_0x1F2158D615BC4B25(iLocal_54[0]) && !unk_0x1F2158D615BC4B25(iLocal_54[1]))
		{
			if (unk_0x1E80C02AC16B6622(iLocal_54[0]))
			{
				return 1;
			}
		}
		if (unk_0x1F2158D615BC4B25(iLocal_54[1]) && !unk_0x1F2158D615BC4B25(iLocal_54[0]))
		{
			if (unk_0x1E80C02AC16B6622(iLocal_54[1]))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_2()
{
	if (unk_0x1E80C02AC16B6622(iLocal_54[0]))
	{
		if (unk_0xC3B073777B46C61A(uLocal_111[0]))
		{
			if (unk_0x1F2158D615BC4B25(iLocal_60))
			{
				if (unk_0x540DDE9BB09221C3(iLocal_60))
				{
					unk_0xE8EBCCA6A3BE542B(iLocal_60, 1, 1);
				}
			}
			func_3(&uLocal_178, 4);
			unk_0x296CDA10C549A502(&(uLocal_111[0]));
		}
	}
	if (unk_0x1E80C02AC16B6622(iLocal_54[1]))
	{
		if (unk_0xC3B073777B46C61A(uLocal_111[1]))
		{
			func_3(&uLocal_178, 3);
			unk_0x296CDA10C549A502(&(uLocal_111[1]));
		}
	}
	if (unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_53))
		{
		}
		if (unk_0xC3B073777B46C61A(uLocal_114))
		{
			func_3(&uLocal_178, 5);
			unk_0x296CDA10C549A502(&uLocal_114);
		}
	}
}

void func_3(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_4()
{
	unk_0x3345CB85AB9EC035("RE6_END");
	func_205();
}

int func_5()
{
	if (unk_0x1E80C02AC16B6622(iLocal_53))
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (Global_25350)
	{
		func_7(4);
		return 1;
	}
	return 0;
}

void func_7(int iParam0)
{
	Global_99236 = iParam0;
}

void func_8(int iParam0)
{
	Global_16723 = iParam0;
}

int func_9()
{
	if (Global_99250.f_29448.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return Global_25349;
}

void func_11()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_54[0]) || !unk_0x1E80C02AC16B6622(iLocal_54[1]))
		{
			if (!func_12())
			{
				switch (iLocal_168)
				{
					case 0:
						if (iLocal_106 < unk_0x3EAC9995EC220C5A())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 1:
						if (iLocal_106 < unk_0x3EAC9995EC220C5A())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 2:
						if (iLocal_106 < unk_0x3EAC9995EC220C5A())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(3500, 5000));
								iLocal_168++;
							}
						}
						break;
					
					case 3:
						if (iLocal_106 < unk_0x3EAC9995EC220C5A())
						{
							if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(3500, 5000));
								iLocal_168 = 0;
							}
						}
						break;
					}
				}
			}
	}
}

int func_12()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
	{
		return 1;
	}
	return 0;
}

void func_13()
{
	while (!func_45())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_6())
	{
		if (func_44() == 0)
		{
			func_41(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 1)
		{
			func_41(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
		else if (func_44() == 2)
		{
			func_41(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		}
	}
	unk_0xA7E7F5D7C13CE7C0(unk_0x8ACD527A7E574590(), 1);
	func_17(-1, 0);
	func_14();
	func_205();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_16(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_17(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_99250.f_29448.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_18(func_24(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_99238 = iParam1;
		if (Global_99236 == 0)
		{
			if (((Global_99239 == 1 || Global_99239 == 5) || Global_99239 == 11) || Global_99239 == 25)
			{
				func_7(2);
			}
			else if ((Global_99239 == 26 || Global_99239 == 8) || Global_99239 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_18(int iParam0, var uParam1, var uParam2)
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
		func_22((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99250.f_8812[iParam0 /*12*/].f_6 == 11 || Global_99250.f_8812[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99250.f_8812[iParam0 /*12*/].f_5 = 1;
		Global_99250.f_8812[iParam0 /*12*/].f_10 = uParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_19();
	}
}

void func_19()
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
	Global_98986 = 0;
	Global_98987 = 0;
	Global_98988 = 0;
	Global_98989 = 0;
	Global_98990 = 0;
	Global_98991 = 0;
	Global_98992 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99250.f_8812.f_3853;
	Global_99250.f_8812.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99250.f_8812[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99250.f_8812[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98986++;
					fVar1 = (fVar1 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98987++;
					fVar2 = (fVar2 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98988++;
					fVar3 = (fVar3 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98989++;
					fVar4 = (fVar4 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98990++;
					fVar5 = (fVar5 + (Global_99250.f_8812[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98991++;
					fVar6 = (fVar6 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98992++;
					fVar7 = (fVar7 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98969 > 0)
	{
		if (Global_98986 == Global_98969)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98970 > 0)
	{
		if (Global_98987 == Global_98970)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98971 > 0)
	{
		if (Global_98988 == Global_98971)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98972 > 0)
	{
		if (Global_98989 == Global_98972)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98973 > 0)
	{
		if (((Global_98990 == Global_98973 || (Global_98973 * 10 / Global_98990) < 41) || Global_98990 > Global_98976) || Global_98990 == Global_98976)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8812.f_3856, 14))
			{
				if (Global_98990 == Global_98973)
				{
					unk_0x9E0BBE2E0E32750D(joaat("num_rndevents_completed"), Global_98973, 0);
					unk_0x573691DB812DC8AA(&(Global_99250.f_8812.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98974 > 0)
	{
		if (Global_98991 == Global_98974)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98975 > 0)
	{
		if (Global_98992 == Global_98975)
		{
			fVar7 = 5f;
		}
	}
	Global_99250.f_8812.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98990 > Global_98976 || Global_98990 == Global_98976)
	{
		iVar9 = Global_98976;
	}
	else
	{
		iVar9 = Global_98990;
	}
	unk_0x5716C8F12991E399(joaat("num_missions_completed"), Global_98986, 1);
	unk_0x5716C8F12991E399(joaat("num_missions_available"), Global_98969, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_completed"), Global_98987, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_available"), Global_98970, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_completed"), Global_98988, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_available"), Global_98971, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_completed"), Global_98989, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_available"), Global_98972, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_available"), Global_98976, 1);
	unk_0x5716C8F12991E399(joaat("num_misc_completed"), (Global_98992 + Global_98991), 1);
	unk_0x5716C8F12991E399(joaat("num_misc_available"), (Global_98975 + Global_98974), 1);
	Global_98993 = (Global_98986 * 100 / Global_98969);
	Global_98995 = ((Global_98988 + Global_98987) * 100 / (Global_98971 + Global_98970));
	Global_98994 = ((Global_98989 + iVar9) * 100 / (Global_98972 + Global_98976));
	Global_98996 = ((Global_98991 + Global_98992) * 100 / (Global_98974 + Global_98975));
	unk_0x46160091B23E8313(joaat("total_progress_made"), Global_99250.f_8812.f_3853, 1);
	unk_0x5716C8F12991E399(joaat("percent_story_missions"), Global_98993, 1);
	unk_0x5716C8F12991E399(joaat("percent_ambient_missions"), Global_98994, 1);
	unk_0x5716C8F12991E399(joaat("percent_oddjobs"), Global_98995, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853))
	{
		func_21(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_20() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
				{
					func_15();
				}
			}
		}
	}
}

int func_20()
{
	return Global_25115;
}

int func_21(int iParam0, int iParam1)
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
	iVar0 = unk_0xDE96DC4582CFD56F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CB31CF925F17754(iParam0, iParam1);
	}
	return 0;
}

int func_22(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_23();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_23()
{
	return Global_1312746;
}

int func_24(int iParam0, int iParam1)
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

int func_25(int iParam0)
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

void func_26(int iParam0)
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
		unk_0x573691DB812DC8AA(&(Global_99250.f_24863.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35D1CAD6ADAB6491(sParam0, ""))
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
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(&(Global_99250.f_24863[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99250.f_24863.f_145 < 9)
	{
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_4), sParam1, 16);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_8 = (unk_0x3EAC9995EC220C5A() + iParam3);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_9 = iParam5;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_11 = iParam6;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_12 = uParam2;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_13 = iParam7;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_14 = iParam8;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = ((unk_0x3EAC9995EC220C5A() + iParam3) + iParam4);
		}
		else
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = -1;
		}
		Global_99250.f_24863.f_145++;
		func_29();
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99250.f_24863.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[0])
			{
				Global_99250.f_24863.f_146[0] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[1])
			{
				Global_99250.f_24863.f_146[1] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[2])
			{
				Global_99250.f_24863.f_146[2] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	func_31();
	switch (Global_99250.f_1754.f_539.f_3549)
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

void func_31()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_35(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_34(unk_0x77F050A399DB77ED());
			if (func_33(iVar0) && (!func_32(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_33(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_32(int iParam0)
{
	return Global_35700 == iParam0;
}

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)
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
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_24863.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)
{
	unk_0x573691DB812DC8AA(&(Global_99250.f_29448.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)
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

int func_39()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x664B47C58CE8A0A4(), 64);
	uVar16 = func_40(Var0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x39BD4614CF899227(&cParam0))
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

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_16(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xB56FEBC510E7E9DE(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_99250.f_6306.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_99250.f_6306.f_911 == Var0.f_0)
		{
			Global_99250.f_6306.f_911 = -1;
		}
		Var0.f_3 = func_43(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x3EAC9995EC220C5A() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xA5F70A8B83BDFA49(&(Var0.f_1), 1);
		unk_0xA5F70A8B83BDFA49(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0x573691DB812DC8AA(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x573691DB812DC8AA(&(Var0.f_1), 10);
		}
		Global_99250.f_6306[Global_99250.f_6306.f_136 /*15*/] = { Var0 };
		Global_99250.f_6306.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0xB56FEBC510E7E9DE(iParam2, iVar15))
			{
				func_42(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_33(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_6306.f_136)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_6306[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_99250.f_6306[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_99250.f_6306[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_99250.f_6306.f_764)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_6306.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_99250.f_6306.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_99250.f_6306.f_919[iParam0] = iVar1;
}

int func_43(int iParam0)
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

int func_44()
{
	func_31();
	return Global_99250.f_1754.f_539.f_3549;
}

int func_45()
{
	return 1;
}

void func_46()
{
	switch (iLocal_136)
	{
		case 0:
			if (!unk_0x1E80C02AC16B6622(iLocal_53) && unk_0x968EA16107097324(iLocal_59, 0))
			{
				if (unk_0x3E5CB294501B40E0(iLocal_53))
				{
					unk_0xD3778FD9E17F7E71(iLocal_53);
				}
				unk_0x9526D9575C237F2F(iLocal_53, 0);
				unk_0x26A7668D061F96E7(iLocal_53, 1);
				unk_0x2A6B9F9E71C479CF(&uLocal_65);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 5000, 2048, 2);
				unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
				unk_0xFC7C68B6C728CFEC(0, iLocal_59, -1, 0, 1f, 1, 0);
				unk_0x44642CB08FA1637E(uLocal_65);
				unk_0xB8A8FA4B28E9F423(iLocal_53, uLocal_65);
				unk_0xAAD288E877AC833D(&uLocal_65);
				unk_0x112CD899A3BEE719(iLocal_53, 1);
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0x968EA16107097324(iLocal_59, 0))
			{
				if (unk_0xE5FADE1166052251(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_57))
					{
						unk_0x6F310EDA59231DE8(iLocal_57, iLocal_58, 10f, 786599);
						unk_0x112CD899A3BEE719(iLocal_57, 1);
					}
					unk_0x99A55AFB40674D1C(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 2:
			iLocal_136++;
			break;
		
		case 3:
			iLocal_136++;
			break;
		
		case 4:
			if (!func_12())
			{
				iLocal_136++;
			}
			break;
		
		case 5:
			unk_0xC1B1E9A034A63A62(0);
			func_13();
			break;
	}
}

void func_47()
{
	switch (iLocal_136)
	{
		case 0:
			unk_0x329C14474C072D19(255, iLocal_177, joaat("player"));
			unk_0x329C14474C072D19(255, joaat("player"), iLocal_177);
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
			{
				unk_0x29666BB73419DB0E(unk_0xD8D1111EA0CFD1DB(), 5f, 2, 0);
				if (!unk_0x1E80C02AC16B6622(iLocal_53) && unk_0x968EA16107097324(iLocal_59, 0))
				{
					if (unk_0x3E5CB294501B40E0(iLocal_53))
					{
						unk_0xD3778FD9E17F7E71(iLocal_53);
					}
					unk_0x9526D9575C237F2F(iLocal_53, 0);
					unk_0x26A7668D061F96E7(iLocal_53, 1);
					unk_0x2A6B9F9E71C479CF(&uLocal_65);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), 5000, 2048, 2);
					unk_0xFC7C68B6C728CFEC(0, iLocal_59, -1, 0, 1f, 1, 0);
					unk_0x44642CB08FA1637E(uLocal_65);
					unk_0xB8A8FA4B28E9F423(iLocal_53, uLocal_65);
					unk_0xAAD288E877AC833D(&uLocal_65);
					unk_0x112CD899A3BEE719(iLocal_53, 1);
					func_103();
					unk_0x4EDE34FBADD967A6(0);
					func_70(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2700);
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
			iLocal_136++;
			break;
		
		case 1:
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !unk_0x752064BA1674210E(unk_0x77F050A399DB77ED()))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
				{
					if (!unk_0x66CDC04ACFCBEA94(unk_0xD8D1111EA0CFD1DB(), 1))
					{
						if (unk_0x9AB7C4059827C1E1(unk_0xD8D1111EA0CFD1DB(), 1) > 0.1f)
						{
							if (func_44() == 0)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
							}
							if (func_44() == 1)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
							}
							if (func_44() == 2)
							{
								func_70(&uLocal_178, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			iLocal_136++;
			break;
		
		case 2:
			if (unk_0x968EA16107097324(iLocal_59, 0))
			{
				if (unk_0xE5FADE1166052251(iLocal_53, iLocal_59, 0))
				{
					if (!unk_0x1E80C02AC16B6622(iLocal_57))
					{
						unk_0x6F310EDA59231DE8(iLocal_57, iLocal_59, 10f, 786599);
						unk_0x112CD899A3BEE719(iLocal_57, 1);
					}
					unk_0x99A55AFB40674D1C(iLocal_59, 1);
					iLocal_136++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				bLocal_124 = true;
			}
			break;
	}
}

int func_48(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xACF19F629EE5429B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (!unk_0xB2D1758C032223EA(unk_0x77F050A399DB77ED()))
		{
			return 0;
		}
		iVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (bParam0)
		{
			if (unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
			{
				if (unk_0x07A8845F7F106A38(iVar0, -1) != unk_0x77F050A399DB77ED())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
		{
			if (unk_0x8ED30F31356C7C7C(iVar0) < 0.95f || unk_0x8ED30F31356C7C7C(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	if (!unk_0x99BA09207E5CDC50(unk_0x8ACD527A7E574590()))
	{
		return 0;
	}
	return 1;
}

int func_49()
{
	if (func_44() == 2)
	{
		if (func_10())
		{
			if (unk_0xA2490B3CE6382FBB(-1014.154f, 4881.411f, 245.0001f, unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), 0), 1) < 400f)
			{
				if (!Global_25354)
				{
					unk_0x3345CB85AB9EC035("AC_EN_ROUTE_CULT");
					Global_25354 = 1;
					if (!Global_25353)
					{
						Global_25353 = 1;
						return 1;
					}
				}
			}
			else if (Global_25354)
			{
				unk_0x3345CB85AB9EC035("AC_LEFT_AREA");
				Global_25354 = 0;
			}
		}
	}
	return 0;
}

int func_50(struct<3> Param0)
{
	if (func_44() == 2)
	{
		if (func_10() && !Global_25352)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Param0);
			}
			if (unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Param0) > (fLocal_47 + 200f) || unk_0xA2490B3CE6382FBB(-1014.154f, 4881.411f, 245.0001f, unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), 0), 1) < 400f)
			{
				Global_25352 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_51()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if ((((((func_55("REBU2_LV2_2") || func_55("REBU2_LV2_3")) || func_55("REBU2_LV2_4")) || func_55("REBU2_LV2_5")) || func_55("REBU2_LV2_6")) || func_55("REBU2_LV2_7")) || func_55("REBU2_LV2_8"))
		{
			unk_0xFDDC8EE655FF7D0D(iLocal_53, 1, 1);
			unk_0x8530DA8508D7A4B8(iLocal_53);
		}
		if (func_55("REBU2_LV2_9") || iLocal_72 > 1)
		{
			unk_0xFDDC8EE655FF7D0D(iLocal_53, 0, 1);
		}
	}
	if (func_69() && !func_12())
	{
		if (!func_52())
		{
			func_81(1);
		}
		switch (iLocal_72)
		{
			case 0:
				func_70(&uLocal_178, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 1:
				iLocal_73 = unk_0x3EAC9995EC220C5A() + 1500;
				iLocal_72++;
				break;
			
			case 2:
				if (iLocal_73 < unk_0x3EAC9995EC220C5A())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 3:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 4:
				iLocal_73 = unk_0x3EAC9995EC220C5A() + 500;
				iLocal_72++;
				break;
			
			case 5:
				if (iLocal_73 < unk_0x3EAC9995EC220C5A())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 6:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 7:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 8:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 9:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 10:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 11:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 12:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 13:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 14:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 15:
				func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_72++;
				break;
			
			case 16:
				if (func_44() == 0)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				}
				else if (func_44() == 1)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				}
				else if (func_44() == 2)
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
				}
				iLocal_72++;
				break;
			
			case 17:
				iLocal_73 = unk_0x3EAC9995EC220C5A() + 1000;
				iLocal_72++;
				break;
			
			case 18:
				if (iLocal_73 < unk_0x3EAC9995EC220C5A())
				{
					func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_72++;
				}
				break;
			
			case 19:
				iLocal_73 = unk_0x3EAC9995EC220C5A() + 2500;
				iLocal_72++;
				break;
			
			case 20:
				if (iLocal_73 < unk_0x3EAC9995EC220C5A())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					}
					else if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					}
					else if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
					}
					iLocal_72++;
				}
				break;
			}
	}
}

int func_52()
{
	if (((((((((func_53("REBU2_WV") || func_53("REBU2_UNS1")) || func_53("REBU2_UNS2")) || func_53("REBU2_CULT")) || func_53("REBU2_NEAR")) || func_53("REBU2_WRONG")) || func_53("REBU2_STOP")) || func_53("REBU2_GETOUT")) || func_53("REBU2_JACK")) || func_53("REBU2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_53(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_54()}, 4);
		if (unk_0x35D1CAD6ADAB6491(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_54()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

int func_55(char* sParam0)
{
	var uVar0;
	
	if (func_12())
	{
		MemCopy(&uVar0, {func_56()}, 4);
		if (unk_0x35D1CAD6ADAB6491(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_56()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x3EA88DB5F5F71A3B();
		iVar6 = (iVar6 + Global_16722);
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_57()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if (!iLocal_133)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
			{
				if (!unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), unk_0xD8D1111EA0CFD1DB(), 1) && unk_0xE5FADE1166052251(iLocal_53, unk_0xD8D1111EA0CFD1DB(), 0))
				{
					if (!func_53("REBU2_LV2"))
					{
						func_81(0);
						func_103();
						unk_0x4EDE34FBADD967A6(0);
						func_70(&uLocal_178, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						iLocal_133 = 1;
					}
				}
			}
		}
		else if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
		{
			if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), unk_0xD8D1111EA0CFD1DB(), 0) && unk_0xE5FADE1166052251(iLocal_53, unk_0xD8D1111EA0CFD1DB(), 0))
			{
				iLocal_133 = 0;
			}
		}
		if (!iLocal_134)
		{
			if (unk_0xC5AA38F818A1CC23(unk_0x77F050A399DB77ED()))
			{
				func_81(0);
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				iLocal_134 = 1;
			}
		}
		else if (!unk_0xC5AA38F818A1CC23(unk_0x77F050A399DB77ED()))
		{
			iLocal_134 = 0;
		}
		if (!iLocal_135)
		{
			if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
			{
				func_81(0);
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				iLocal_135 = 1;
			}
		}
		else if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
		{
			iLocal_135 = 0;
		}
	}
}

void func_58()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
		{
			if (!func_61())
			{
				if (unk_0x3E5CB294501B40E0(iLocal_53))
				{
					unk_0xD3778FD9E17F7E71(iLocal_53);
				}
				if (unk_0x49C650267EDFEBC6(iLocal_53, 1227113341) != 1 && unk_0x49C650267EDFEBC6(iLocal_53, 1227113341) != 0)
				{
					unk_0xAFB86418412C8866(iLocal_53, unk_0x77F050A399DB77ED(), -1, 6f, 2f, 1073741824, 0);
				}
				if (unk_0xB42592B9FFEB5EDE(iLocal_53, 0))
				{
					unk_0x743E219F0C060EE5(iLocal_53, 0, 4194304);
				}
				if (!iLocal_132)
				{
					func_81(0);
					func_103();
					unk_0x4EDE34FBADD967A6(0);
					iLocal_132 = 1;
					if (!func_60())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				iLocal_132 = 0;
				if (((unk_0x49C650267EDFEBC6(iLocal_53, 1227113341) == 1 || unk_0x49C650267EDFEBC6(iLocal_53, 1227113341) == 0) || unk_0x49C650267EDFEBC6(iLocal_53, 242628503) == 1) || unk_0x49C650267EDFEBC6(iLocal_53, 242628503) == 0)
				{
					unk_0xE2CB8488CFA42209(iLocal_53);
				}
			}
		}
		else if (((!unk_0x3E5CB294501B40E0(iLocal_53) && !unk_0xB42592B9FFEB5EDE(iLocal_53, 0)) && unk_0x49C650267EDFEBC6(iLocal_53, 242628503) != 1) && unk_0x49C650267EDFEBC6(iLocal_53, 242628503) != 0)
		{
			unk_0x92D84E1899554EA4(iLocal_53, func_59());
			unk_0x86CD6F98059D0E25(iLocal_53, 1);
			unk_0xBD99B054E78B74CC(iLocal_53, 0);
		}
	}
}

var func_59()
{
	return unk_0x9E97D0ACA210D142(unk_0x7F3E348C0892D8D2());
}

int func_60()
{
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		if (unk_0x968EA16107097324(unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), 1))
		{
			if ((unk_0x583E994764B3211E(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 1))) || unk_0x9FAD4C61F8FD96DE(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 1)))) || unk_0x93FA2C9C44279C1C(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()
{
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (unk_0x968EA16107097324(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
		{
			if (((((!unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()) && !unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED())) && !unk_0x76A46F8A42763BF8(unk_0x77F050A399DB77ED())) && !unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED())) && !unk_0x90953832F162AE6A(unk_0x77F050A399DB77ED())) && !unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("rhino")))
			{
				if (unk_0x1205624841D11747(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		if (unk_0x968EA16107097324(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED()), 0))
		{
			if ((((!unk_0x5FA5E5014A0AC183(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED()))) && !unk_0x4F32F86538FB8979(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())))) && !unk_0xD3FAF4AD23FDF2DA(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())))) && !unk_0xD68DC1905B617ADD(unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())))) && unk_0xDF1398076E26B0E4(unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_62()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if (unk_0xA73F3A974E4E7D9D(iLocal_53))
		{
			if (!iLocal_170)
			{
				iLocal_171 = unk_0x3EAC9995EC220C5A();
				iLocal_170 = 1;
			}
			else
			{
				iLocal_172 = unk_0x3EAC9995EC220C5A();
			}
		}
		else
		{
			iLocal_170 = 0;
		}
	}
	if ((iLocal_172 - iLocal_171) > 180000)
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_53))
		{
			if (unk_0x3E5CB294501B40E0(iLocal_53))
			{
				unk_0xD3778FD9E17F7E71(iLocal_53);
				if (unk_0xA427F05DB896EEBE(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xE3BCB930B62CBDE5(iLocal_53, 1740.797f, 4648.756f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x112CD899A3BEE719(iLocal_53, 1);
				}
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_63()
{
	if (unk_0x93B76A9A65E87CDF(unk_0x77F050A399DB77ED()))
	{
		if (!iLocal_173)
		{
			iLocal_174 = unk_0x3EAC9995EC220C5A();
			iLocal_173 = 1;
		}
		else
		{
			iLocal_175 = unk_0x3EAC9995EC220C5A();
		}
	}
	else
	{
		iLocal_173 = 0;
	}
	if ((iLocal_175 - iLocal_174) > 120000)
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_53))
		{
			if (unk_0x3E5CB294501B40E0(iLocal_53))
			{
				unk_0xD3778FD9E17F7E71(iLocal_53);
				if (unk_0xA427F05DB896EEBE(iLocal_53, Local_139, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xE3BCB930B62CBDE5(iLocal_53, Local_139, 1f, -1, 1048576000, 0, 1193033728);
					unk_0x112CD899A3BEE719(iLocal_53, 1);
				}
				else
				{
					unk_0x743E219F0C060EE5(iLocal_53, 0, 4194304);
				}
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}
}

void func_64()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_53, 8f, 8f, 8f, 0, 1, 0) || unk_0xE335E4A7ECEE63F4(unk_0x77F050A399DB77ED()))
		{
			if ((unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && !unk_0xE5FADE1166052251(iLocal_53, unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0)) && !unk_0xE335E4A7ECEE63F4(unk_0x77F050A399DB77ED()))
			{
				if (!unk_0xC3B073777B46C61A(uLocal_114))
				{
					uLocal_114 = func_67(iLocal_53, 0, 145);
				}
				if (unk_0xC3B073777B46C61A(uLocal_137))
				{
					unk_0x296CDA10C549A502(&uLocal_137);
				}
			}
			else
			{
				if (!unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()))
				{
					if (unk_0xC3B073777B46C61A(uLocal_114))
					{
						unk_0x296CDA10C549A502(&uLocal_114);
					}
				}
				if (!unk_0xC3B073777B46C61A(uLocal_137))
				{
					uLocal_137 = func_65(Local_139, 1);
				}
			}
		}
		else if (!unk_0xC3B073777B46C61A(uLocal_114))
		{
			uLocal_114 = func_67(iLocal_53, 0, 145);
		}
		if (!unk_0x3E5CB294501B40E0(iLocal_53))
		{
			if (!unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_53, 8f, 8f, 8f, 0, 1, 0))
			{
				unk_0xE2CB8488CFA42209(iLocal_53);
				unk_0x92D84E1899554EA4(iLocal_53, func_59());
				unk_0x86CD6F98059D0E25(iLocal_53, 1);
				unk_0xBD99B054E78B74CC(iLocal_53, 0);
			}
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
			{
				unk_0xE2CB8488CFA42209(iLocal_53);
				unk_0x92D84E1899554EA4(iLocal_53, func_59());
				unk_0x86CD6F98059D0E25(iLocal_53, 1);
				unk_0xBD99B054E78B74CC(iLocal_53, 0);
			}
		}
		if (!unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_53, 150f, 150f, 150f, 0, 1, 0))
		{
			func_4();
		}
	}
}

var func_65(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x1802011F6E339FFF(Param0);
	unk_0x61CD4A0BA23CE782(uVar0, func_66(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
	unk_0x49AFDB1662AE2A92(uVar0, iParam3);
	return uVar0;
}

float func_66(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_67(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC3B073777B46C61A(uVar0)) && unk_0x03BBACB5FC5BF182(&(Global_99250.f_32503[iParam2 /*29*/].f_3)))
	{
		unk_0x45C91EE3FC674072(uVar0, &(Global_99250.f_32503[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_66(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(uVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_66(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_66(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_69()
{
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		iLocal_169 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (unk_0x968EA16107097324(iLocal_169, 0))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_53))
			{
				if (unk_0xBF0744BF24FE8D11(iLocal_53, iLocal_169))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_70(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_71(sParam2, iParam3, 0);
}

int func_71(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xC9AB825AA4821BDA(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_79();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1066B6347C40B301())
		{
			return 0;
		}
		if (func_78(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_77();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0xA5F70A8B83BDFA49(&Global_2283, 20);
			unk_0xA5F70A8B83BDFA49(&Global_2284, 17);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 0);
			if (bParam2)
			{
				func_76();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (func_75())
				{
					return 0;
				}
				if (unk_0x8408B4A4C23B6D99(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xE89300623E310620(unk_0x77F050A399DB77ED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
					if (unk_0x7E0A8E0015B69AA4(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
				}
			}
			if (func_74())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
				{
					return 0;
				}
			}
			func_73();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_72();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_79();
	}
	return 0;
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC9AB825AA4821BDA(0);
	Global_15712 = 1;
}

void func_73()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0xA5F70A8B83BDFA49(&Global_2284, 16);
}

int func_74()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x294E2F2AFFA6421E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
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

void func_76()
{
	if (func_32(14))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_44();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_77()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

void func_79()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if ((unk_0xEA9C2A206A86B744() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

void func_80(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_149)
		{
			if (!unk_0x0AAC2160036975D9(&Local_156))
			{
				if (func_84(&uLocal_178, "REBU2AU", &Local_156, &Local_150, 8, 0, 0))
				{
					iLocal_149 = 0;
				}
			}
			else
			{
				iLocal_149 = 0;
			}
		}
	}
	else if ((!iLocal_149 && func_12()) && !func_52())
	{
		Local_156 = { func_54() };
		Local_150 = { func_56() };
		func_82();
		iLocal_149 = 1;
	}
}

void func_82()
{
	Global_14578 = 0;
	func_83();
}

void func_83()
{
	if (unk_0x1066B6347C40B301())
	{
		unk_0xCAAFCFEB9BD734FB();
		Global_16723 = 0;
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

bool func_84(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_80(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_71(sParam2, iParam4, 0);
}

void func_85()
{
	if (unk_0x1F2158D615BC4B25(iLocal_53))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_53))
		{
			unk_0xD214B72C983BCE75(iLocal_53, 394, 1);
		}
		if (unk_0xCC580427ED36D7F8(iLocal_53, unk_0x77F050A399DB77ED(), 1))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_53))
			{
				unk_0x23E5F4496336DE4E(iLocal_53, unk_0x77F050A399DB77ED(), 150f, -1, 0, 0);
				unk_0x112CD899A3BEE719(iLocal_53, 1);
			}
			if (!unk_0x1E80C02AC16B6622(iLocal_57))
			{
				unk_0x329C14474C072D19(5, iLocal_177, joaat("player"));
				unk_0xFBE25F0677076CF9(iLocal_57, unk_0x77F050A399DB77ED(), 0, 16);
				unk_0x112CD899A3BEE719(iLocal_57, 1);
			}
			func_103();
			unk_0x4EDE34FBADD967A6(0);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
		if (unk_0x1F2158D615BC4B25(iLocal_57))
		{
			if (unk_0xCC580427ED36D7F8(iLocal_57, unk_0x77F050A399DB77ED(), 1))
			{
				if (!unk_0x1E80C02AC16B6622(iLocal_53))
				{
					unk_0x23E5F4496336DE4E(iLocal_53, unk_0x77F050A399DB77ED(), 150f, -1, 0, 0);
					unk_0x112CD899A3BEE719(iLocal_53, 1);
				}
				if (!unk_0x1E80C02AC16B6622(iLocal_57))
				{
					unk_0x329C14474C072D19(5, iLocal_177, joaat("player"));
					unk_0xFBE25F0677076CF9(iLocal_57, unk_0x77F050A399DB77ED(), 0, 16);
					unk_0x112CD899A3BEE719(iLocal_57, 1);
				}
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_51 = 4;
			}
		}
	}
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 1)
		{
			unk_0x23E5F4496336DE4E(iLocal_53, unk_0x77F050A399DB77ED(), 150f, -1, 0, 0);
			unk_0x112CD899A3BEE719(iLocal_53, 1);
			func_103();
			unk_0x4EDE34FBADD967A6(0);
			func_70(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	}
}

void func_86()
{
	int iVar0;
	
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if ((unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_53, 1.2f, 1.2f, 5f, 0, 1, 0) && unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED())) && !unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
		{
			if (func_48(1, 0, 1))
			{
				bLocal_130 = true;
				if (!iLocal_115)
				{
					func_93(1, 1, 1, 0);
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 24);
					unk_0x4ACCE973F9C3CA3B(1);
					unk_0x1B40500A7841D6AB(0);
					unk_0x488AF65D7EDB6B4A(0);
					unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 1);
					if (unk_0x1F2158D615BC4B25(unk_0xD8D1111EA0CFD1DB()))
					{
						unk_0x8D429A827A931AC9(unk_0xD8D1111EA0CFD1DB(), 1, 0);
						if (unk_0x01CB02EE3F3F9481(unk_0xD8D1111EA0CFD1DB()))
						{
							func_92(unk_0xD8D1111EA0CFD1DB());
							unk_0x46C662B7638C9190(unk_0xD8D1111EA0CFD1DB(), 200f);
						}
						if (unk_0x0C8E94332AE582B1(unk_0xD8D1111EA0CFD1DB(), iLocal_53, 5f, 5f, 5f, 0, 1, 0) || unk_0xA427F05DB896EEBE(unk_0xD8D1111EA0CFD1DB(), Local_88, 5f, 5f, 5f, 0, 1, 0))
						{
							unk_0x0B5F372F57E469AC(unk_0xD8D1111EA0CFD1DB(), unk_0xAF99169F0F5AE41D(iLocal_53, 1) - Vector(0f, 3f, 5f), 0, 0, 0, 1);
							if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
							{
								unk_0xC1D3820702043A43(unk_0xD8D1111EA0CFD1DB());
							}
						}
					}
					if (unk_0x1F2158D615BC4B25(iLocal_58))
					{
						if (unk_0x01CB02EE3F3F9481(iLocal_58))
						{
							func_92(iLocal_58);
							unk_0x46C662B7638C9190(iLocal_58, 200f);
						}
						if (unk_0x0C8E94332AE582B1(iLocal_58, iLocal_53, 8f, 8f, 8f, 0, 1, 0))
						{
							unk_0x0B5F372F57E469AC(iLocal_58, Local_88, 0, 0, 0, 1);
							if (!unk_0x0B6E83A9A7ED3EBA(iLocal_58))
							{
								unk_0xC1D3820702043A43(iLocal_58);
							}
						}
					}
					if (!unk_0x1E80C02AC16B6622(iLocal_53))
					{
						iLocal_169 = unk_0x10C448DEF4298C4F(unk_0xAF99169F0F5AE41D(iLocal_53, 1), 5f, 0, 2);
						if (!unk_0x0B6E83A9A7ED3EBA(iLocal_169))
						{
							if (unk_0x01CB02EE3F3F9481(iLocal_169))
							{
								func_92(iLocal_169);
								unk_0x46C662B7638C9190(iLocal_169, 200f);
							}
							unk_0x0B5F372F57E469AC(iLocal_169, unk_0xAF99169F0F5AE41D(iLocal_53, 1) + Vector(0f, 5f, 5f), 1, 0, 0, 1);
						}
					}
					unk_0x571937D113E93996(Local_78, 10f);
					unk_0x2D170B30FD0AB4FC(Local_78, 10f, 0);
					unk_0x3B97B8A2AAD89A9D(Local_78, 4.5f, 0, 0, 0, 0, 0);
					unk_0x0B5F372F57E469AC(iLocal_53, Local_78, 1, 0, 0, 1);
					unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), Local_78, 1, 0, 0, 1);
					if (!unk_0x1E80C02AC16B6622(iLocal_53))
					{
					}
					iVar0 = 0;
					while (iVar0 < iLocal_54)
					{
						if (unk_0x1F2158D615BC4B25(iLocal_54[iVar0]))
						{
							if (unk_0xA427F05DB896EEBE(iLocal_54[iVar0], unk_0xAF99169F0F5AE41D(iLocal_53, 0), 1.5f, 1.5f, 1.5f, 0, 1, 0))
							{
								unk_0xAB3098579170FA46(&(iLocal_54[iVar0]));
							}
						}
						iVar0++;
					}
					if (!unk_0x1E80C02AC16B6622(iLocal_53))
					{
						uLocal_343 = unk_0xFCF0CDCAF2761068(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						uLocal_77 = unk_0x6AC24FEF1D81F105("DEFAULT_ANIMATED_CAMERA", 0);
						unk_0x59AFD0717303A531(uLocal_77, uLocal_343, "untie_cam", "random@burial");
						unk_0xB28207B96952D994(unk_0x77F050A399DB77ED());
						unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), 162.6699f, 6839.238f, 18.8314f, 0, 0, 0, 1);
						unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), 18.2311f);
						unk_0x9F48F299B333353E(iLocal_53, 200);
						unk_0x41DC9B50650996BA(iLocal_53, 0);
						unk_0x7F8A20B6E7557B94(iLocal_53, 0);
						unk_0xB28207B96952D994(iLocal_53);
						unk_0x3C6CCFC07FD12077(iLocal_53, uLocal_343, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						unk_0x9371C699D98CE4D6(iLocal_53, 0, 0);
						unk_0x3C6CCFC07FD12077(unk_0x77F050A399DB77ED(), uLocal_343, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						unk_0x9371C699D98CE4D6(unk_0x77F050A399DB77ED(), 0, 0);
						unk_0x1D8909C3B0308E1E(uLocal_61[0], uLocal_343, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x1D8909C3B0308E1E(uLocal_61[1], uLocal_343, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						unk_0x12A448112D057EB4(uLocal_77, 1);
						unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
						iLocal_120 = unk_0x3EAC9995EC220C5A();
						iLocal_115 = 1;
					}
				}
			}
		}
	}
	if (iLocal_115 && !iLocal_117)
	{
		unk_0xC04F3ABD290057B0();
		if (unk_0x671C6C3F21245221(uLocal_343))
		{
			if ((unk_0x19779E7427AA44FB(uLocal_343) > 0.115f && unk_0x19779E7427AA44FB(uLocal_343) < 0.12f) || (unk_0x19779E7427AA44FB(uLocal_343) > 0.355f && unk_0x19779E7427AA44FB(uLocal_343) < 0.36f))
			{
				unk_0xBBEB613A917D7EE8(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", 1);
			}
			if (unk_0x19779E7427AA44FB(uLocal_343) > 0.6f)
			{
				if (!iLocal_116)
				{
					func_103();
					unk_0x4EDE34FBADD967A6(0);
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
					{
						iLocal_116 = 1;
					}
				}
			}
		}
		iLocal_119 = unk_0x3EAC9995EC220C5A();
		if (((iLocal_119 - iLocal_120) > 9700 && !iLocal_123) && unk_0xB534814830510EB1() == 4)
		{
			unk_0x23D87B2CECB53E05("CamPushInNeutral", 0, 0);
			unk_0xBBEB613A917D7EE8(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_123 = 1;
		}
		if ((iLocal_119 - iLocal_120) > 10000)
		{
			iLocal_117 = 1;
		}
		if (func_90(1000))
		{
			func_103();
			unk_0x16AA81661A0624FB(800);
			while (unk_0x8DD09BB8ACF9E623())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_117 = 1;
			bLocal_118 = true;
		}
	}
	if (iLocal_117 && !bLocal_122)
	{
		unk_0x1B40500A7841D6AB(1);
		unk_0x488AF65D7EDB6B4A(1);
		unk_0xEE4C4CE6312DD1EF(uLocal_343, 1f);
		unk_0xB28207B96952D994(unk_0x77F050A399DB77ED());
		unk_0x9371C699D98CE4D6(unk_0x77F050A399DB77ED(), 0, 0);
		unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), 162.5284f, 6839.658f, 18.8198f, 1, 0, 0, 1);
		unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), 256.7693f);
		if (!unk_0x1E80C02AC16B6622(iLocal_53))
		{
			unk_0xB28207B96952D994(iLocal_53);
			unk_0x9371C699D98CE4D6(iLocal_53, 0, 0);
			unk_0x9AAEF18E6D4F7CB8(iLocal_53, 1);
			unk_0x0B5F372F57E469AC(iLocal_53, 164.4963f, 6839.333f, 18.9657f, 1, 0, 0, 1);
			unk_0x2DA164E80FDEE7F2(iLocal_53, 73.449f);
		}
		unk_0x8793DE27084C2CBD(26.1578f);
		unk_0xABF261CA61470DE0(-8.1198f, 1065353216);
		unk_0x12A448112D057EB4(uLocal_77, 0);
		unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
		unk_0xFE65076A204F9258(uLocal_77, 0);
		unk_0xC845B8398E72DBF0(unk_0x77F050A399DB77ED(), 0);
		if (bLocal_118)
		{
			unk_0xCA6D671341405469(800);
			while (unk_0x329E4482E654B910())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		bLocal_122 = true;
	}
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		if (bLocal_122)
		{
			if (!iLocal_121)
			{
				if (!func_12())
				{
					if (func_44() == 0)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
					}
					if (func_44() == 1)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
					}
					if (func_44() == 2)
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
					}
					unk_0x329C14474C072D19(1, iLocal_177, joaat("player"));
					unk_0x329C14474C072D19(1, joaat("player"), iLocal_177);
					unk_0x2A6B9F9E71C479CF(&uLocal_65);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2048, 2);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 4000);
					if (unk_0x968EA16107097324(unk_0xD8D1111EA0CFD1DB(), 0))
					{
						if (unk_0x0C8E94332AE582B1(iLocal_53, unk_0xD8D1111EA0CFD1DB(), 20f, 20f, 20f, 0, 1, 0) && unk_0x1205624841D11747(unk_0xD8D1111EA0CFD1DB()) > 0)
						{
							unk_0xFC7C68B6C728CFEC(0, unk_0xD8D1111EA0CFD1DB(), -1, 0, 1f, 1, 0);
						}
						else if (!unk_0x3E5CB294501B40E0(iLocal_53))
						{
							unk_0x92D84E1899554EA4(iLocal_53, func_59());
							unk_0x86CD6F98059D0E25(iLocal_53, 1);
							unk_0xBD99B054E78B74CC(iLocal_53, 0);
						}
					}
					else if (!unk_0x3E5CB294501B40E0(iLocal_53))
					{
						unk_0x92D84E1899554EA4(iLocal_53, func_59());
						unk_0x86CD6F98059D0E25(iLocal_53, 1);
						unk_0xBD99B054E78B74CC(iLocal_53, 0);
					}
					unk_0x44642CB08FA1637E(uLocal_65);
					unk_0xB8A8FA4B28E9F423(iLocal_53, uLocal_65);
					unk_0xAAD288E877AC833D(&uLocal_65);
					if (unk_0xC3B073777B46C61A(uLocal_114))
					{
						unk_0x296CDA10C549A502(&uLocal_114);
					}
					if (!unk_0xC3B073777B46C61A(uLocal_137))
					{
						uLocal_137 = func_65(Local_139, 1);
					}
					if (func_44() == 2 && !func_9())
					{
						if (!unk_0xC3B073777B46C61A(uLocal_138))
						{
							uLocal_138 = func_65(Local_142, 0);
							unk_0x06E25D9668199664(uLocal_138, 269);
							func_88();
						}
					}
					func_87();
					iLocal_131 = 1;
					iLocal_121 = 1;
					unk_0xC1B1E9A034A63A62(0);
					unk_0x800899ED4594380A(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					unk_0x6AABDED602B11FF1(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0, 1);
					func_93(0, 1, 1, 0);
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 4);
					unk_0x1E7F0537BF0E8998(unk_0x77F050A399DB77ED());
					iLocal_49 = 4;
				}
			}
		}
	}
}

void func_87()
{
	if (!func_9())
	{
		if (func_44() == 2)
		{
			Global_25349 = 1;
		}
	}
}

void func_88()
{
	if (func_44() == 2)
	{
		if (!Global_25351)
		{
			func_89("CULT_BLIP_HELP", -1);
			Global_25351 = 1;
		}
	}
}

void func_89(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

int func_90(int iParam0)
{
	if (unk_0x398F615441F52A47())
	{
		if ((unk_0x3EAC9995EC220C5A() - Global_28) > iParam0)
		{
			Global_27 = unk_0x3EAC9995EC220C5A();
		}
		Global_28 = unk_0x3EAC9995EC220C5A();
		if ((unk_0x3EAC9995EC220C5A() - Global_27) > iParam0)
		{
			if (func_91())
			{
				Global_27 = unk_0x3EAC9995EC220C5A();
				return 1;
			}
		}
	}
	return 0;
}

int func_91()
{
	if (unk_0x4F297F09162EFB5D())
	{
		return 0;
	}
	if (unk_0x618071F6827C232E(0, 18) || unk_0x618071F6827C232E(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			if (unk_0x01CB02EE3F3F9481(iParam0))
			{
				unk_0xE7043604DC4FFB87(iParam0);
				unk_0x9F48F299B333353E(iParam0, unk_0x070BBD7287E8E744(iParam0) + 200);
				unk_0x46C662B7638C9190(iParam0, (unk_0xA7099FB567A1830C(iParam0) + 200f));
				unk_0x42691817311F7969(iParam0, (unk_0xF9E5E5F3AC4B8008(iParam0) + 200f));
				unk_0x571937D113E93996(unk_0xAF99169F0F5AE41D(iParam0, 1), 5f);
				unk_0x0BA5964C07973FE9(unk_0xAF99169F0F5AE41D(iParam0, 1), 2.5f, 1, 0, 0, 0);
			}
		}
	}
}

void func_93(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_99(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_74())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_98(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_99(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_98(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_94(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_94(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return 1;
	}
	if (func_95())
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_95()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_96(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_97(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_97(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
	}
	if (Global_1315888[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_98(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && uParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_99(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 13);
	}
}

void func_100()
{
	if (!unk_0x0B6E83A9A7ED3EBA(iLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0x3EAC9995EC220C5A())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0x3EAC9995EC220C5A())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0x3EAC9995EC220C5A())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4000, 5500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0x3EAC9995EC220C5A())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4000, 5500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_101(var uParam0, char* sParam1, int iParam2)
{
	unk_0x71C24FB536157D30(uParam0, sParam1, func_102(iParam2), 1);
}

int func_102(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_103()
{
	Global_14578 = 0;
	func_104();
}

void func_104()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
	}
}

void func_105()
{
	if (!iLocal_67 && unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_107, 30f, 30f, 30f, 0, 1, 0))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
		}
	}
	if (unk_0x968EA16107097324(iLocal_58, 0))
	{
		if (!unk_0x1E80C02AC16B6622(iLocal_54[0]))
		{
			unk_0x277D239A78FD3309(iLocal_54[0], iLocal_58, unk_0x77F050A399DB77ED(), 8, 30f, 262144, -1f, 10f, 1);
			unk_0x112CD899A3BEE719(iLocal_54[0], 1);
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_54[1]))
		{
			unk_0xFC7C68B6C728CFEC(iLocal_54[1], iLocal_58, -1, 0, 3f, 1, 0);
			unk_0x112CD899A3BEE719(iLocal_54[1], 1);
		}
	}
	else
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_54[iLocal_64]))
			{
				unk_0x23E5F4496336DE4E(iLocal_54[iLocal_64], unk_0x77F050A399DB77ED(), 250f, -1, 0, 0);
				unk_0x112CD899A3BEE719(iLocal_54[iLocal_64], 1);
			}
			iLocal_64++;
		}
	}
	unk_0x4EDE34FBADD967A6(0);
	func_4();
}

void func_106()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_54[0]) && !unk_0x1E80C02AC16B6622(iLocal_54[1]))
	{
		if (!unk_0x5A12CB727B35559D(iLocal_54[0]) && !unk_0x5A12CB727B35559D(iLocal_54[1]))
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!unk_0x102639E2874F3AA1(iLocal_54[1]))
				{
					unk_0xE2CB8488CFA42209(iLocal_54[1]);
					unk_0x2818FB4F0AE44857(iLocal_54[1], unk_0x77F050A399DB77ED(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
	iLocal_49 = 7;
}

void func_107()
{
	float fVar0;
	
	if (!unk_0x1E80C02AC16B6622(iLocal_54[0]) && !unk_0x1E80C02AC16B6622(iLocal_54[1]))
	{
		if (!iLocal_69)
		{
			if (!iLocal_68)
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_65);
				unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2048, 2);
				unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
				unk_0x44642CB08FA1637E(uLocal_65);
				unk_0xB8A8FA4B28E9F423(iLocal_54[1], uLocal_65);
				unk_0xAAD288E877AC833D(&uLocal_65);
				iLocal_68 = 1;
			}
			if (unk_0x6867AF84AF12BEFC(iLocal_54[1], unk_0x77F050A399DB77ED(), 90f))
			{
				func_103();
				unk_0x4EDE34FBADD967A6(0);
				func_70(&uLocal_178, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
				if (!unk_0x1E80C02AC16B6622(iLocal_54[0]) && !unk_0x1E80C02AC16B6622(iLocal_54[1]))
				{
					fVar0 = func_109(iLocal_54[0], unk_0x77F050A399DB77ED(), 1);
					if (fVar0 > 5f)
					{
						fVar0 = (fVar0 - 2f);
					}
					else
					{
						fVar0 = (fVar0 - 0.5f);
					}
					unk_0xE8EBCCA6A3BE542B(iLocal_60, 0, 1);
					unk_0xCA41E71A6AD186D8(iLocal_60, iLocal_54[0], unk_0x49E48BFB98D99FE3(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xE2CB8488CFA42209(iLocal_54[0]);
					unk_0x2A6B9F9E71C479CF(&uLocal_65);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2048, 2);
					unk_0x642DDF74A8A2B3BB(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, 0, 0, 0);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_65);
					unk_0xB8A8FA4B28E9F423(iLocal_54[0], uLocal_65);
					unk_0xAAD288E877AC833D(&uLocal_65);
					unk_0x9687CF9C13C1F6A1(iLocal_54[1], joaat("weapon_sawnoffshotgun"), 1);
					unk_0xE2CB8488CFA42209(iLocal_54[1]);
					unk_0x2A6B9F9E71C479CF(&uLocal_65);
					unk_0xD0C8DD55C652567F(0, unk_0x77F050A399DB77ED(), -1, 2048, 2);
					unk_0xAFB86418412C8866(0, unk_0x77F050A399DB77ED(), -1, fVar0, 1f, 1073741824, 0);
					unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 0);
					unk_0x44642CB08FA1637E(uLocal_65);
					unk_0xB8A8FA4B28E9F423(iLocal_54[1], uLocal_65);
					unk_0xAAD288E877AC833D(&uLocal_65);
					iLocal_69 = 1;
				}
			}
		}
		if (unk_0x1F2158D615BC4B25(iLocal_60))
		{
			if (unk_0x540DDE9BB09221C3(iLocal_60))
			{
				if (unk_0x5EE0E9E5B7A50C2A(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0xE8EBCCA6A3BE542B(iLocal_60, 1, 1);
					}
				}
			}
		}
		if (iLocal_69 && !iLocal_165)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_65);
				unk_0xF43AF5DCA3A46752(0, unk_0x77F050A399DB77ED(), unk_0x77F050A399DB77ED(), 1f, 0, 3.5f, 1082130432, 1, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
				unk_0xF0C6B04F5AFE0B40(0, unk_0x77F050A399DB77ED(), -1, 0);
				unk_0x44642CB08FA1637E(uLocal_65);
				unk_0xB8A8FA4B28E9F423(iLocal_54[1], uLocal_65);
				unk_0xAAD288E877AC833D(&uLocal_65);
				unk_0x3345CB85AB9EC035("RE6_START");
				iLocal_165 = 1;
			}
		}
		if (iLocal_165 && !iLocal_166)
		{
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xF0C6B04F5AFE0B40(iLocal_54[0], unk_0x77F050A399DB77ED(), -1, 0);
				}
				iLocal_166 = 1;
				unk_0x5AE11BC36633DE4E(0);
			}
		}
		if (iLocal_166 && !bLocal_167)
		{
			if (unk_0xC9D9444186B5A374() > 15000 && !func_12())
			{
				if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x9A42ADE14351A508(iLocal_54[0], unk_0x77F050A399DB77ED(), 0);
					unk_0x9A42ADE14351A508(iLocal_54[1], unk_0x77F050A399DB77ED(), 0);
					func_70(&uLocal_178, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_167 = true;
				}
			}
		}
		if (((!iLocal_70 && iLocal_165) && !unk_0x1E80C02AC16B6622(iLocal_54[0])) && !unk_0x1E80C02AC16B6622(iLocal_54[1]))
		{
			if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_54[0], 30f, 30f, 30f, 0, 1, 0) && unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iLocal_54[1], 30f, 30f, 30f, 0, 1, 0))
			{
				if (!func_12())
				{
					if (func_108())
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					}
					else
					{
						func_70(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
					}
				}
			}
			else
			{
				unk_0x2A6B9F9E71C479CF(&uLocal_65);
				unk_0xAFB86418412C8866(0, iLocal_54[1], -1, 2f, 1f, 1073741824, 0);
				unk_0x9A42ADE14351A508(0, iLocal_54[1], 0);
				unk_0xF424981F4680E6B2(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x44642CB08FA1637E(uLocal_65);
				unk_0xB8A8FA4B28E9F423(iLocal_54[0], uLocal_65);
				unk_0xAAD288E877AC833D(&uLocal_65);
				unk_0x2A6B9F9E71C479CF(&uLocal_65);
				unk_0xAFB86418412C8866(0, iLocal_54[0], -1, 2f, 1f, 1073741824, 0);
				unk_0x9A42ADE14351A508(0, iLocal_54[0], 0);
				unk_0xF424981F4680E6B2(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
				unk_0x44642CB08FA1637E(uLocal_65);
				unk_0xB8A8FA4B28E9F423(iLocal_54[1], uLocal_65);
				unk_0xAAD288E877AC833D(&uLocal_65);
				unk_0x5AE11BC36633DE4E(15000);
				iLocal_145 = 0;
				iLocal_166 = 1;
				iLocal_70 = 1;
			}
		}
		if (bLocal_167)
		{
			func_11();
			func_111();
		}
		if (((unk_0xD89F5D6405AFC348(iLocal_54[0], unk_0x77F050A399DB77ED()) || unk_0xD89F5D6405AFC348(iLocal_54[1], unk_0x77F050A399DB77ED())) || unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iLocal_54[0])) || unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iLocal_54[1]))
		{
			if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 4) && !unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 3))
			{
				if (unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()))
				{
					if (!iLocal_76)
					{
						func_103();
						unk_0x4EDE34FBADD967A6(0);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_111();
						}
					}
				}
			}
			if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 3) && !unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 4))
			{
				if (unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()))
				{
					if (!iLocal_76)
					{
						func_103();
						unk_0x4EDE34FBADD967A6(0);
						if (func_70(&uLocal_178, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							iLocal_76 = 1;
							func_111();
						}
					}
				}
			}
			if (unk_0x0BDCAB0B67087552(unk_0x8ACD527A7E574590()) || unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
			{
				func_111();
			}
		}
	}
}

int func_108()
{
	if (unk_0xB56FEBC510E7E9DE(unk_0xA3746E7F17F47DC2(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

float func_109(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Var3, iParam2);
}

int func_110()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (unk_0x968EA16107097324(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0))
			{
				if ((((unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("rhino")) || unk_0x81481800DECCD9F6(unk_0x77F050A399DB77ED())) || unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("annihilator"))) || unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("buzzard"))) || unk_0xE1E91209C16784C8(unk_0x77F050A399DB77ED()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_111()
{
	func_11();
	unk_0x3345CB85AB9EC035("RE6_START");
	if (!iLocal_145)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_54[0]))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_54[0]))
			{
				unk_0xD214B72C983BCE75(iLocal_54[0], 156, 1);
				if (unk_0x1F2158D615BC4B25(iLocal_60))
				{
					unk_0x9CC689BED786D50E(iLocal_54[0]);
					if (unk_0x540DDE9BB09221C3(iLocal_60))
					{
						if (!iLocal_70)
						{
							unk_0xE8EBCCA6A3BE542B(iLocal_60, 0, 1);
							unk_0xCA41E71A6AD186D8(iLocal_60, iLocal_54[0], unk_0x49E48BFB98D99FE3(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							unk_0xE2CB8488CFA42209(iLocal_54[0]);
							unk_0x2A6B9F9E71C479CF(&uLocal_65);
							unk_0x8530DA8508D7A4B8(0);
							unk_0x642DDF74A8A2B3BB(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, 0, 0, 0);
							unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
							unk_0x44642CB08FA1637E(uLocal_65);
							unk_0xB8A8FA4B28E9F423(iLocal_54[0], uLocal_65);
							unk_0xAAD288E877AC833D(&uLocal_65);
							unk_0x112CD899A3BEE719(iLocal_54[0], 1);
							unk_0x9371C699D98CE4D6(iLocal_54[0], 0, 0);
							iLocal_145 = 1;
						}
					}
					else
					{
						unk_0x2A6B9F9E71C479CF(&uLocal_65);
						unk_0x8530DA8508D7A4B8(0);
						unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
						unk_0x44642CB08FA1637E(uLocal_65);
						unk_0xB8A8FA4B28E9F423(iLocal_54[0], uLocal_65);
						unk_0xAAD288E877AC833D(&uLocal_65);
						unk_0x112CD899A3BEE719(iLocal_54[0], 1);
						iLocal_145 = 1;
					}
				}
			}
			else
			{
				iLocal_145 = 1;
			}
		}
		else
		{
			iLocal_145 = 1;
		}
	}
	if (unk_0x1F2158D615BC4B25(iLocal_60))
	{
		if (unk_0x540DDE9BB09221C3(iLocal_60))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_54[0]))
			{
				if (unk_0x5EE0E9E5B7A50C2A(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
					{
						unk_0xE8EBCCA6A3BE542B(iLocal_60, 1, 1);
					}
				}
			}
		}
	}
	if (!iLocal_146)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_54[1]))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_54[1]))
			{
				unk_0xD214B72C983BCE75(iLocal_54[1], 156, 1);
				unk_0x9CC689BED786D50E(iLocal_54[1]);
				unk_0x2A6B9F9E71C479CF(&uLocal_65);
				unk_0x8530DA8508D7A4B8(0);
				unk_0x9A42ADE14351A508(0, unk_0x77F050A399DB77ED(), 500);
				unk_0xFBE25F0677076CF9(0, unk_0x77F050A399DB77ED(), 0, 16);
				unk_0x44642CB08FA1637E(uLocal_65);
				unk_0xB8A8FA4B28E9F423(iLocal_54[1], uLocal_65);
				unk_0xAAD288E877AC833D(&uLocal_65);
				unk_0x112CD899A3BEE719(iLocal_54[1], 1);
				iLocal_146 = 1;
			}
			else
			{
				iLocal_146 = 1;
			}
		}
		else
		{
			iLocal_146 = 1;
		}
	}
	if (iLocal_146 && iLocal_145)
	{
		iLocal_106 = unk_0x3EAC9995EC220C5A() + 8500;
		unk_0xC1B1E9A034A63A62(0);
		iLocal_49 = 7;
	}
}

int func_112(int iParam0)
{
	if (func_115())
	{
		Global_99240 = 1;
		Global_99237 = unk_0x3EAC9995EC220C5A();
		if (func_25(Global_99239))
		{
			func_113(0);
		}
		unk_0x275546117AF1F063(1, "RE_TITLE");
		if (iParam0 && func_25(Global_99239))
		{
			unk_0x358EC418194057C1();
		}
		return 1;
	}
	return 0;
}

void func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_99250.f_29448.f_2 < 3)
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_89(func_114(iParam0), -1);
					Global_99250.f_29448.f_2++;
					unk_0x573691DB812DC8AA(&Global_99246, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 1))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_89(func_114(iParam0), -1);
					Global_99250.f_29448.f_3++;
					unk_0x573691DB812DC8AA(&Global_99246, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB56FEBC510E7E9DE(Global_99246, 2))
			{
				if (!unk_0x3AB285A0F995E847())
				{
					func_89(func_114(iParam0), -1);
					Global_99250.f_29448.f_4++;
					unk_0x573691DB812DC8AA(&Global_99246, 2);
				}
			}
			break;
	}
}

char* func_114(int iParam0)
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

int func_115()
{
	switch (func_116(&Global_25174, 0, 5, 0, unk_0x8EC1FFF6B789C28E()))
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

int func_116(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88917.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_120(0))
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		unk_0xB0B3F015E2C68AA2(unk_0x7F3E348C0892D8D2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6F0D8BCEF1D3C17F(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *uParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_118(iParam2))
		{
			return 0;
		}
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
		if (iParam4 != 0)
		{
			func_117(uParam0, iParam4);
		}
	}
	return 2;
}

void func_117(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_118(int iParam0)
{
	return func_119(iParam0, Global_35700);
}

int func_119(int iParam0, int iParam1)
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

int func_120(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_118(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_121()
{
	if (unk_0xC3B073777B46C61A(uLocal_163))
	{
		unk_0x296CDA10C549A502(&uLocal_163);
	}
	if (!unk_0xC3B073777B46C61A(uLocal_114))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iLocal_53))
		{
			uLocal_114 = func_67(iLocal_53, 0, 145);
		}
	}
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		if (!unk_0xC3B073777B46C61A(uLocal_111[iLocal_64]))
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_54[iLocal_64]))
			{
				uLocal_111[iLocal_64] = func_67(iLocal_54[iLocal_64], 1, 145);
			}
		}
		iLocal_64++;
	}
}

void func_122()
{
	if (!unk_0x1E80C02AC16B6622(iLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < unk_0x3EAC9995EC220C5A())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 1:
				if (iLocal_106 < unk_0x3EAC9995EC220C5A())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 2:
				if (iLocal_106 < unk_0x3EAC9995EC220C5A())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4500, 6500));
						iLocal_168++;
					}
				}
				break;
			
			case 3:
				if (iLocal_106 < unk_0x3EAC9995EC220C5A())
				{
					if (func_70(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = (unk_0x3EAC9995EC220C5A() + unk_0xA3746E7F17F47DC2(4500, 6500));
						iLocal_168 = 0;
					}
				}
				break;
			}
	}
}

void func_123()
{
	switch (iLocal_110)
	{
		case 0:
			if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
			{
				iLocal_110++;
			}
			break;
		
		case 1:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 2:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 3:
			if (!func_12())
			{
				if (func_70(&uLocal_178, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
				{
					iLocal_110++;
				}
			}
			break;
		
		case 4:
			iLocal_106 = unk_0x3EAC9995EC220C5A() + 3000;
			iLocal_110++;
			break;
		
		case 5:
			break;
	}
}

void func_124()
{
	if (unk_0x1F2158D615BC4B25(iLocal_60))
	{
		if (unk_0x540DDE9BB09221C3(iLocal_60))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_54[0]))
			{
				if (unk_0x5EE0E9E5B7A50C2A(iLocal_54[0], "random@burial", "a_burial_stop", 3))
				{
					if (unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial_stop") > 0.124f && unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") < 0.127f)
					{
						unk_0x534358BA3E00486C("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
				if (unk_0x5EE0E9E5B7A50C2A(iLocal_54[0], "random@burial", "a_burial", 3))
				{
					if (((((unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") > 0.04f && unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") < 0.043f) || (unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") > 0.24f && unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") < 0.243f)) || (unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") > 0.44f && unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") < 0.443f)) || (unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") > 0.64f && unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") < 0.643f)) || (unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") > 0.84f && unk_0x91741EBC3EA7D505(iLocal_54[0], "random@burial", "a_burial") < 0.843f))
					{
						unk_0x534358BA3E00486C("scr_burial_dirt", iLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_125()
{
	if (!iLocal_129)
	{
		if (unk_0x5E9F3856F26E26EC(Local_88, 100f, 1) || unk_0x5E9F3856F26E26EC(Local_88, 100f, 1))
		{
			if (unk_0x1E80C02AC16B6622(iLocal_54[0]) || unk_0x1E80C02AC16B6622(iLocal_54[1]))
			{
				iLocal_51 = 1;
				return 1;
			}
			else if (!unk_0x5E9F3856F26E26EC(Local_88, 100f, 1) || !unk_0x5E9F3856F26E26EC(Local_88, 100f, 1))
			{
				iLocal_51 = 1;
				return 1;
			}
		}
		if (((((((((unk_0x6EB89E4E3575F3CE(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_smokegrenade"), 1) || unk_0x6EB89E4E3575F3CE(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenade"), 1)) || unk_0x6EB89E4E3575F3CE(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_stickybomb"), 1)) || unk_0x6EB89E4E3575F3CE(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher"), 1)) || unk_0x6EB89E4E3575F3CE(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_grenadelauncher_smoke"), 1)) || unk_0x6EB89E4E3575F3CE(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_rpg"), 1)) || unk_0x6EB89E4E3575F3CE(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("weapon_molotov"), 1)) || unk_0x755AA3C6AFA69BE8(2, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0x755AA3C6AFA69BE8(4, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f))) || unk_0x755AA3C6AFA69BE8(0, Local_88 - Vector(100f, 100f, 100f), Local_88 + Vector(100f, 100f, 100f)))
		{
			iLocal_51 = 1;
			return 1;
		}
		if (unk_0x1F2158D615BC4B25(iLocal_58))
		{
			if (!unk_0x0B6E83A9A7ED3EBA(iLocal_58))
			{
				if (unk_0xCC580427ED36D7F8(iLocal_58, unk_0x77F050A399DB77ED(), 1) || unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_58, 0))
				{
					unk_0x1E7F0537BF0E8998(iLocal_58);
					func_111();
					iLocal_51 = 3;
					return 1;
				}
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("towtruck")) || unk_0xCF9A4297B6D5AB5C(unk_0x77F050A399DB77ED(), joaat("towtruck2")))
					{
						if (unk_0xFF8B60AD533C7DBD(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), iLocal_58))
						{
							func_111();
							iLocal_51 = 3;
							return 1;
						}
					}
				}
			}
		}
		if (!iLocal_75)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_54[0]) && !unk_0x1E80C02AC16B6622(iLocal_54[1]))
			{
				if ((((unk_0xD89F5D6405AFC348(iLocal_54[0], unk_0x77F050A399DB77ED()) || unk_0xD89F5D6405AFC348(iLocal_54[1], unk_0x77F050A399DB77ED())) || unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iLocal_54[0])) || unk_0xF5C2DCB6CB199B63(unk_0x8ACD527A7E574590(), iLocal_54[1])) || unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_88 - Vector(0f, 0f, 7f), 20f, 15f, 35f, 0, 1, 0))
				{
					if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_88 - Vector(0f, 0f, 7f), 28f, 18f, 35f, 0, 1, 0))
					{
						iLocal_51 = 1;
						return 1;
					}
				}
			}
		}
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_54[0]) && !unk_0x1E80C02AC16B6622(iLocal_54[1]))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
				{
					if (unk_0x32F9EB04315127B4(unk_0xD8D1111EA0CFD1DB(), iLocal_54[0]) || unk_0x32F9EB04315127B4(unk_0xD8D1111EA0CFD1DB(), iLocal_54[1]))
					{
						iLocal_51 = 5;
						return 1;
					}
				}
			}
		}
		if (!unk_0x1E80C02AC16B6622(iLocal_53))
		{
			if (unk_0xCC580427ED36D7F8(iLocal_53, unk_0x77F050A399DB77ED(), 0) || unk_0x1CBFB08D4D50FF0E(iLocal_53, joaat("weapon_stungun"), 0))
			{
				iLocal_51 = 4;
				return 1;
			}
		}
		else
		{
			iLocal_51 = 4;
			return 1;
		}
		if (unk_0x0B6E83A9A7ED3EBA(iLocal_54[0]) || unk_0x0B6E83A9A7ED3EBA(iLocal_54[1]))
		{
			iLocal_51 = 6;
			return 1;
		}
		if (iLocal_75)
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0) && !bParam4)
	{
		if (unk_0xA73F3A974E4E7D9D(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0) && !bParam4)
		{
			Var3 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			Var6 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0xB56FEBC510E7E9DE(iParam3, 3))
			{
				if (func_132(iParam0, iParam6))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_130(iParam0);
					return 1;
				}
			}
			if (!unk_0xB56FEBC510E7E9DE(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x5E9F3856F26E26EC(Var6, fParam5, 1))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_130(iParam0);
					return 1;
				}
				if (unk_0x1B2F50A8C0266050(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_130(iParam0);
					return 1;
				}
			}
			if (!unk_0xB56FEBC510E7E9DE(iParam3, 2))
			{
				fVar0 = unk_0xF29E18FF209FD9FE(unk_0x77F050A399DB77ED());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
				{
					if (unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iParam0) || unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xC76E1A07C6272140(iParam0, unk_0x77F050A399DB77ED(), 17))
							{
								func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_131("	aggro Ped knows player is pointing gun\n");
								func_127("		lockOnTimer = ", *uParam2);
								func_131("\n");
								func_127("		time since not LockedOn = ", (unk_0x3EAC9995EC220C5A() - iLocal_19));
								func_131("\n");
								bVar2 = true;
								if (unk_0x3EAC9995EC220C5A() > (iLocal_19 + *uParam2))
								{
									func_131("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_130(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xB56FEBC510E7E9DE(iParam3, 0))
			{
				if (unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0))
				{
					func_131("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_131("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_130(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_19 = unk_0x3EAC9995EC220C5A();
	}
	return 0;
}

void func_127(char* sParam0, int iParam1)
{
	func_129(sParam0);
	func_128(iParam1);
}

void func_128(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_129(char* sParam0)
{
	if (unk_0x35D1CAD6ADAB6491(uParam0, uParam0))
	{
	}
}

void func_130(int iParam0)
{
	unk_0xD94FD848D9F76114(iParam0);
}

void func_131(char* sParam0)
{
	func_129(sParam0);
}

int func_132(int iParam0, int iParam1)
{
	if (unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xCC580427ED36D7F8(iParam0, unk_0x77F050A399DB77ED(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xCC580427ED36D7F8(iParam0, unk_0x77F050A399DB77ED(), 1))
	{
		if ((unk_0xAAAF35D386405ACE(iParam0) - unk_0x070BBD7287E8E744(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_133()
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_135(39, 1);
	func_135(40, 1);
	func_135(41, 1);
	func_135(42, 1);
	func_135(43, 1);
	func_135(44, 1);
	unk_0x2277155D92E898D2(Local_139 - Vector(20f, 40f, 40f), Local_139 + Vector(20f, 40f, 40f), 0, 1, 1, 1);
	unk_0x2277155D92E898D2(Local_78 - Vector(20f, 50f, 60f), Local_78 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
	unk_0x5416146016E39BF7(iLocal_105, 1);
	unk_0xC8CA2CBC777B0FA7(5, 0);
	unk_0xC8CA2CBC777B0FA7(3, 0);
	unk_0x4AAD01BBE039D160(0f);
	iLocal_53 = unk_0x6665DCC708A346F3(26, iLocal_102, Local_78, fLocal_97, 1, 1);
	unk_0x9526D9575C237F2F(iLocal_53, 1);
	unk_0x26A7668D061F96E7(iLocal_53, 0);
	unk_0xCAB5098DD2DF915A(iLocal_53, 2, 0);
	unk_0xCAB5098DD2DF915A(iLocal_53, 128, 1);
	unk_0xB424F90D6E96BCF8(iLocal_53, 1, 0);
	unk_0xB424F90D6E96BCF8(iLocal_53, 6, 0);
	unk_0x1706625EBCDDEBF9(iLocal_53, 206, 1);
	unk_0x1706625EBCDDEBF9(iLocal_53, 318, 0);
	unk_0x1706625EBCDDEBF9(iLocal_53, 118, 0);
	unk_0x1706625EBCDDEBF9(iLocal_53, 208, 1);
	unk_0xFB4F6722A032A0F0(iLocal_102);
	unk_0x9F48F299B333353E(iLocal_53, iLocal_125);
	unk_0x007FD255A321ABD0(unk_0x77F050A399DB77ED(), 0);
	unk_0x72FAE653AFC04E97("rghKidnappers", &iLocal_176);
	unk_0x72FAE653AFC04E97("rghVictim", &iLocal_177);
	unk_0x054E434B0AECBDA6(iLocal_53, iLocal_177);
	iLocal_64 = 0;
	while (iLocal_64 <= 1)
	{
		iLocal_54[iLocal_64] = unk_0x6665DCC708A346F3(26, iLocal_103, Local_81[iLocal_64 /*3*/], fLocal_98[iLocal_64], 1, 1);
		unk_0x9526D9575C237F2F(iLocal_54[iLocal_64], 1);
		unk_0x4D896523CC7D24B7(iLocal_54[iLocal_64], 1);
		unk_0xB424F90D6E96BCF8(iLocal_54[iLocal_64], 0, 1);
		unk_0xCAB5098DD2DF915A(iLocal_54[iLocal_64], 2, 0);
		unk_0xCAB5098DD2DF915A(iLocal_54[iLocal_64], 128, 1);
		unk_0x1706625EBCDDEBF9(iLocal_54[iLocal_64], 42, 1);
		unk_0x831F6A79993D3933(iLocal_54[0], 2);
		unk_0xB424F90D6E96BCF8(iLocal_54[0], 50, 1);
		unk_0x1A8C6CC3CB0B507B(iLocal_54[iLocal_64], 50);
		unk_0x15E0B3143320FB58(iLocal_54[iLocal_64], 13);
		unk_0xA09672E91FA74DCA(iLocal_54[iLocal_64], 1);
		unk_0x054E434B0AECBDA6(iLocal_54[iLocal_64], iLocal_176);
		unk_0x4FE5EDEAD55F44A3(iLocal_54[iLocal_64], unk_0xA3746E7F17F47DC2(800, 2000));
		iLocal_64++;
	}
	unk_0xFB4F6722A032A0F0(iLocal_104);
	unk_0xFB4F6722A032A0F0(iLocal_103);
	unk_0x1A8C6CC3CB0B507B(iLocal_54[1], 100);
	unk_0xE0E77BB84096208B(iLocal_54[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	unk_0x329C14474C072D19(5, iLocal_176, joaat("player"));
	unk_0x1592B6D205958934(iLocal_54[0], joaat("weapon_pistol"), -1, 0, 1);
	unk_0x1592B6D205958934(iLocal_54[1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
	iLocal_58 = unk_0x2EEA15C0C12C8CDE(iLocal_105, Local_88, fLocal_101, 1, 1);
	unk_0xC1D3820702043A43(iLocal_58);
	unk_0x9918CD095D8B0583(iLocal_58, 3);
	unk_0x9AB688542BF676CD(iLocal_58, 5, 0, 0);
	unk_0xFB4F6722A032A0F0(iLocal_105);
	iLocal_60 = unk_0x4A498A71A7B2E7A5(joaat("prop_ld_shovel"), Local_107, 1, 1, 0);
	unk_0xFB4F6722A032A0F0(joaat("prop_ld_shovel"));
	uLocal_61[0] = unk_0x4A498A71A7B2E7A5(joaat("p_arm_bind_cut_s"), Local_107, 1, 1, 0);
	uLocal_61[1] = unk_0x4A498A71A7B2E7A5(joaat("p_arm_bind_cut_s"), Local_107 + Vector(1f, 1f, 1f), 1, 1, 0);
	unk_0xC60576ADD1AECA45(joaat("p_arm_bind_cut_s"));
	unk_0xCA41E71A6AD186D8(iLocal_60, iLocal_54[0], unk_0x49E48BFB98D99FE3(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x5F2AACB0122E1554(iLocal_54[0], 0, 0, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_54[0], 3, 0, 1, 0);
	unk_0x5F2AACB0122E1554(iLocal_54[0], 4, 1, 0, 0);
	unk_0x5F2AACB0122E1554(iLocal_54[1], 0, 0, 2, 0);
	unk_0x5F2AACB0122E1554(iLocal_54[1], 3, 2, 1, 0);
	unk_0x5F2AACB0122E1554(iLocal_54[1], 4, 1, 1, 0);
	Var0 = { Local_78 };
	Var3 = { -2f, -4f, 18f };
	uLocal_343 = unk_0xFCF0CDCAF2761068(Var0, Var3, 2);
	unk_0x3C6CCFC07FD12077(iLocal_53, uLocal_343, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	unk_0x1D8909C3B0308E1E(uLocal_61[0], uLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x1D8909C3B0308E1E(uLocal_61[1], uLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	unk_0x33AD23CCE6A61B0F(uLocal_343, 1);
	unk_0x112CD899A3BEE719(iLocal_53, 1);
	unk_0x642DDF74A8A2B3BB(iLocal_54[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0x642DDF74A8A2B3BB(iLocal_54[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, 0, 0, 0);
	unk_0xD7B9B5607FB1E95A(iLocal_54[0], Local_91, Local_94, 2.75f, 0, 0);
	unk_0xD7B9B5607FB1E95A(iLocal_54[1], Local_91, Local_94, 2.75f, 0, 0);
	if (func_44() == 0)
	{
		func_134(&uLocal_178, 0, unk_0x77F050A399DB77ED(), "MICHAEL", 0, 1);
	}
	else if (func_44() == 1)
	{
		func_134(&uLocal_178, 1, unk_0x77F050A399DB77ED(), "FRANKLIN", 0, 1);
	}
	else if (func_44() == 2)
	{
		func_134(&uLocal_178, 2, unk_0x77F050A399DB77ED(), "TREVOR", 0, 1);
	}
	unk_0x58580C834A43EBA2(iLocal_54[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	unk_0x58580C834A43EBA2(iLocal_54[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	unk_0x58580C834A43EBA2(iLocal_53, "KIDNAPPEDFEMALE");
	func_134(&uLocal_178, 4, iLocal_54[0], "KIDNAPPER2", 0, 1);
	func_134(&uLocal_178, 3, iLocal_54[1], "KIDNAPPER1", 0, 1);
	func_134(&uLocal_178, 5, iLocal_53, "KIDNAPPEDFEMALE", 0, 1);
}

void func_134(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 0);
			}
			else
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xFAF696F3B3892233(iParam2, 0);
			}
			else
			{
				unk_0xFAF696F3B3892233(iParam2, 1);
			}
		}
	}
}

void func_135(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_142(iParam0, 2, 1))
		{
			func_141(iParam0, 2, 1);
		}
	}
	else if (func_142(iParam0, 2, 1))
	{
		func_136(iParam0, 2, 1);
	}
}

void func_136(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xA5F70A8B83BDFA49(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_20() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0xA5F70A8B83BDFA49(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_668[iParam0]), iParam1);
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466327[iParam0 /*5*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x5716C8F12991E399(iVar0, uParam1, iParam3);
	}
}

int func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
		if (iVar1 > -1)
		{
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466327[iParam0 /*5*/][func_138(iParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_140(int iParam0)
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
			return 3664;
			break;
		
		default:
			break;
	}
	return 3741;
}

void func_141(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x573691DB812DC8AA(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_20() == 0)
		{
			uVar0 = func_139(func_140(iParam0), -1, 0);
			unk_0x573691DB812DC8AA(&uVar0, iParam1);
			func_137(func_140(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x573691DB812DC8AA(&(Global_99250.f_668[iParam0]), iParam1);
	}
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_20() == 0)
		{
			return unk_0xB56FEBC510E7E9DE(func_139(func_140(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_143()
{
	var uVar0;
	int iVar1;
	
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1))
	{
		uVar0 = unk_0x390630AC85062C4E(unk_0x77F050A399DB77ED());
		if (unk_0x968EA16107097324(uVar0, 0))
		{
			iVar1 = unk_0x07A8845F7F106A38(iVar0, 0);
			if (!unk_0x1E80C02AC16B6622(iVar1))
			{
				if (iVar1 != unk_0x77F050A399DB77ED())
				{
					if (unk_0x335346A332B62CA2(iVar1))
					{
						if (!unk_0x404D1ED8CA2B4615(iVar1, unk_0x77F050A399DB77ED()))
						{
							unk_0xD0C8DD55C652567F(iVar1, unk_0x77F050A399DB77ED(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_144()
{
	unk_0xC60576ADD1AECA45(iLocal_102);
	unk_0xC60576ADD1AECA45(iLocal_104);
	unk_0xC60576ADD1AECA45(iLocal_103);
	unk_0xC60576ADD1AECA45(iLocal_105);
	unk_0xC60576ADD1AECA45(joaat("prop_ld_shovel"));
	unk_0xC60576ADD1AECA45(joaat("p_arm_bind_cut_s"));
	unk_0x6E2E777C1AD81C36("random@burial");
	unk_0xAB01A53F64F073E1();
	unk_0x5F4EA7D1E9029E5C("ROPE_CUT", 0);
	unk_0x374D3B72ED08A312("RE6_BOTH_DEAD_OS");
	if (((((((((unk_0x4A4B6FD54C499B7D(iLocal_102) && unk_0x4A4B6FD54C499B7D(iLocal_104)) && unk_0x4A4B6FD54C499B7D(iLocal_103)) && unk_0x4A4B6FD54C499B7D(iLocal_105)) && unk_0x4A4B6FD54C499B7D(joaat("prop_ld_shovel"))) && unk_0x4A4B6FD54C499B7D(joaat("p_arm_bind_cut_s"))) && unk_0x5263DE3D9A17A86F("random@burial")) && unk_0x4D35306F9B28A02F()) && unk_0x5F4EA7D1E9029E5C("ROPE_CUT", 0)) && unk_0x374D3B72ED08A312("RE6_BOTH_DEAD_OS"))
	{
		bLocal_52 = true;
	}
	else
	{
		unk_0xC60576ADD1AECA45(iLocal_102);
		unk_0xC60576ADD1AECA45(iLocal_104);
		unk_0xC60576ADD1AECA45(iLocal_103);
		unk_0xC60576ADD1AECA45(iLocal_105);
		unk_0xC60576ADD1AECA45(joaat("prop_ld_shovel"));
		unk_0xC60576ADD1AECA45(joaat("p_arm_bind_cut_s"));
		unk_0x6E2E777C1AD81C36("random@burial");
		unk_0xAB01A53F64F073E1();
		unk_0x5F4EA7D1E9029E5C("ROPE_CUT", 0);
		unk_0x374D3B72ED08A312("RE6_BOTH_DEAD_OS");
	}
}

void func_145()
{
	iLocal_102 = joaat("u_f_y_mistress");
	iLocal_103 = joaat("a_m_m_salton_01");
	iLocal_104 = joaat("a_m_m_salton_01");
	iLocal_105 = joaat("bison");
	Local_78 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_97 = 0f;
	Local_81[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	fLocal_98[0] = 297.0056f;
	Local_81[1 /*3*/] = { 162.5046f, 6841.68f, 18.8426f };
	fLocal_98[1] = 193.3866f;
	Local_88 = { 169.3462f, 6837.805f, 19.1421f };
	fLocal_101 = 265.6862f;
	Local_91 = { 164.0896f, 6836.923f, 19.03899f };
	Local_94 = { 168.9638f, 6834.302f, 24.99057f };
	iLocal_66 = 1;
}

int func_146()
{
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_157())
		{
			return 0;
		}
	}
	if (func_153())
	{
		return 1;
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
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (func_33(func_44()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 2) && !unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iVar32 /*6*/], 3))
				{
					func_148(iVar32, &Var0);
					fVar35 = unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var0.f_6, 1);
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
	if (unk_0x0AAC2160036975D9(&cVar2))
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
	if (func_156() && !func_157())
	{
		return 1;
	}
	if (func_155() && func_154())
	{
		return 1;
	}
	return 0;
}

bool func_154()
{
	return Global_98968 > 0;
}

int func_155()
{
	if (Global_88361 != -1)
	{
		return 1;
	}
	return 0;
}

int func_156()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

int func_157()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x93920F49CB9AD85E() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_158()
{
	if (!func_118(5))
	{
		return 1;
	}
	if (func_153())
	{
		return 1;
	}
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_157())
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

int func_159()
{
	if ((Global_99239 == func_39() && unk_0x74E62879922177A9()) && Global_99240)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_162(iParam0);
	unk_0x13FDF28AC5D80885(0);
	unk_0x62E4698C0067789A(1);
	Global_99236 = 0;
	func_161();
}

void func_161()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			unk_0x5416146016E39BF7(unk_0xDF1398076E26B0E4(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)), 1);
		}
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 0);
	}
}

void func_162(int iParam0)
{
	Global_99239 = iParam0;
}

int func_163(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_136046)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_39();
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
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xC8AC706FAE314DA7(unk_0x77F050A399DB77ED())) > 1369f && !func_157())
			{
				return 0;
			}
		}
		if (!Global_99250.f_7703)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_153())
		{
			return 0;
		}
		if (func_203())
		{
			return 0;
		}
		if (Global_99239 != -1)
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_147(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_202(iParam3))
		{
			return 0;
		}
		if (func_33(func_44()))
		{
			if (func_201(func_44()) == 4 || func_201(func_44()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_44()))
		{
			if (!func_200(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_199(Global_99250.f_29448.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x3EAC9995EC220C5A() - Global_99241) < 150000)
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
		if (unk_0x21DB261DC1511E40())
		{
			return 0;
		}
		if (unk_0x74E62879922177A9())
		{
			return 0;
		}
		if (!func_189(4))
		{
			return 0;
		}
		if (!func_118(5))
		{
			return 0;
		}
		if (func_188(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x5C31634D1DECF73C(unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED())))
		{
			if ((unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(377.153f, -717.567f, 10.0536f) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(320.9934f, 265.2515f, 82.1221f)) || unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9F8CC1CBF5965B17(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_188(0, 0))
		{
			return 0;
		}
		if (Global_25261)
		{
			return 0;
		}
		if (func_202(30) && !func_188(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_44()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_99250.f_1754.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_99250.f_1754.f_539.f_1524[iVar4];
				if (func_187(iVar8))
				{
					if (func_165(iVar4))
					{
						if (!func_164(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), Var5) < (210f * 210f))
							{
								if (func_44() != iVar4)
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

bool func_164(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_99250.f_1754.f_539.f_1524[iParam0];
	return func_166(iVar0);
}

int func_166(int iParam0)
{
	return func_167(iParam0, 1);
}

int func_167(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_187(iParam0))
	{
		return 0;
	}
	func_168(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_168(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_169(func_180(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_169(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_179(iParam0, iParam1))
	{
		iVar0 = func_178(iParam1);
		iVar1 = func_176(iParam0);
		iVar2 = (func_176(iParam0) - func_176(iParam1));
		iVar3 = (func_178(iParam0) - func_178(iParam1));
		iVar4 = (func_175(iParam0) - func_175(iParam1));
		iVar5 = (func_174(iParam0) - func_174(iParam1));
		iVar6 = (func_173(iParam0) - func_173(iParam1));
		iVar7 = (func_172(iParam0) - func_172(iParam1));
	}
	else
	{
		iVar0 = func_178(iParam0);
		iVar1 = func_176(iParam1);
		iVar2 = (func_176(iParam1) - func_176(iParam0));
		iVar3 = (func_178(iParam1) - func_178(iParam0));
		iVar4 = (func_175(iParam1) - func_175(iParam0));
		iVar5 = (func_174(iParam1) - func_174(iParam0));
		iVar6 = (func_173(iParam1) - func_173(iParam0));
		iVar7 = (func_172(iParam1) - func_172(iParam0));
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
		iVar4 = (iVar4 + func_171(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_170(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_170(float fParam0, float fParam1, float fParam2)
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

int func_171(int iParam0, int iParam1)
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

int func_172(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_173(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_174(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_175(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_176(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_177(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(int iParam0)
{
	return iParam0 & 15;
}

int func_179(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_187(iParam1) || !func_187(iParam0))
	{
		return 1;
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
	iVar0 = func_178(iParam0);
	iVar1 = func_178(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = func_172(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	var uVar0;
	
	func_186(&uVar0, unk_0x624CC88A8815545E());
	func_185(&uVar0, unk_0xD3D98375D5CA69E4());
	func_184(&uVar0, unk_0x5C5157A539753532());
	func_183(&uVar0, unk_0xCB12BC5A618B995B());
	func_182(&uVar0, unk_0x9746D90F14C930B9());
	func_181(&uVar0, unk_0xD45B57A596913560());
	return uVar0;
}

void func_181(var uParam0, int iParam1)
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

void func_182(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_183(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_176(*uParam0);
	if (iParam1 < 1 || iParam1 > func_171(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_184(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_185(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_186(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_187(int iParam0)
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
	iVar0 = func_172(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_173(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_174(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_176(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_178(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_175(iParam0);
	if (iVar5 < 1 || iVar5 > func_171(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_188(int iParam0, int iParam1)
{
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)
{
	int iVar0;
	
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				iVar0 = func_44();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_197()) || Global_98297) || Global_25117) || func_196()) || func_78(8, -1)) || func_195()) || func_194()) || func_193()) || func_192()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1) || func_197()) || Global_25117) || func_196()) || func_78(8, -1)) || func_193()) || func_195()) || func_194()) || func_192()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_197()) || Global_98297) || Global_25117) || func_196()) || func_78(8, -1)) || func_193()) || func_195()) || func_194()) || func_192()) || Global_99250.f_6306.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_197()) || Global_98297) || Global_25117) || func_196()) || func_78(8, -1)) || func_195()) || func_194()) || func_192()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_197() || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || func_78(8, -1)) || func_192()) || func_191()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_78(8, -1) || func_195()) || func_194()) || func_191()) || func_190())
						{
							return 0;
						}
						if ((unk_0xA153A26DF49EBCC0() && unk_0xD802C73A0EC92D7F() != 3) && unk_0x9F0EFBAAF424E79A() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
						{
							if ((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_197()) || Global_25117) || func_196()) || func_78(8, -1)) || func_194()) || func_193()) || func_192()) || Global_99250.f_6306.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || func_197()) || func_194()) || Global_98297) || Global_25117) || func_196()) || Global_36750) || func_78(8, -1)) || func_193()) || func_191()) || func_192()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0)) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1)) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0xCDC007CB03638977(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_197()) || Global_98297) || Global_25117) || func_196()) || func_78(8, -1)) || func_193()) || func_191()) || func_195()) || func_194()) || func_192())
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
	return Global_91145.f_1;
}

int func_191()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_192()
{
	if (unk_0xB1A77D5C890711F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_194()
{
	return Global_91158.f_297 > 0;
}

bool func_195()
{
	return Global_91158.f_296 > 0;
}

var func_196()
{
	return Global_1315910;
}

int func_197()
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_198()
{
	func_76();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_199(int iParam0)
{
	return func_179(func_180(), iParam0);
}

int func_200(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_44();
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
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_99250.f_6306.f_919[iParam0];
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
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB56FEBC510E7E9DE(Global_99250.f_29448.f_1, iVar0);
	}
	return bVar1;
}

int func_203()
{
	var uVar0;
	
	if (Global_25265)
	{
		uVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if (unk_0x968EA16107097324(uVar0, 0))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x07A8845F7F106A38(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
{
	var uVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		if (unk_0xF5783AD1B5945861())
		{
			if (unk_0x05E0388968EC9D08())
			{
				unk_0xBA16CA557222A92B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x573691DB812DC8AA(&uVar0, 2);
				unk_0x573691DB812DC8AA(&uVar0, 4);
				unk_0x573691DB812DC8AA(&uVar0, 6);
				unk_0x573691DB812DC8AA(&Global_25, 2);
				unk_0x573691DB812DC8AA(&Global_25, 4);
				unk_0x573691DB812DC8AA(&Global_25, 6);
				unk_0x5716C8F12991E399(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x5B08E2B84948C788())
				{
					iVar0 = unk_0x824EA95BCC498CB4(866);
					unk_0x573691DB812DC8AA(&iVar0, 0);
					unk_0xF49776B60F784AFF(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136298 == 2)
	{
		return 1;
	}
	else if (Global_136298 == 3)
	{
		return 0;
	}
	if (unk_0x5B08E2B84948C788())
	{
		if (unk_0xB56FEBC510E7E9DE(unk_0x824EA95BCC498CB4(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_205()
{
	int iVar0;
	
	if (iLocal_162)
	{
		func_218(0);
		unk_0x3309AB731FDAB1DB();
		unk_0x9C3F27BE5DA33F3B("RE6_BOTH_DEAD_OS");
		if (iLocal_145 || iLocal_165)
		{
			if (Global_25353)
			{
				unk_0x3345CB85AB9EC035("AC_STOP");
			}
			else
			{
				unk_0x3345CB85AB9EC035("RE6_END");
			}
		}
		func_217();
		unk_0x329C14474C072D19(255, iLocal_177, joaat("player"));
		unk_0x329C14474C072D19(255, joaat("player"), iLocal_177);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_53))
			{
				unk_0x1706625EBCDDEBF9(iLocal_53, 317, 1);
				if (!unk_0xB42592B9FFEB5EDE(iLocal_53, 0))
				{
					unk_0x0956105C59379117(iLocal_53);
				}
				if (unk_0x3E5CB294501B40E0(iLocal_53))
				{
					unk_0xD3778FD9E17F7E71(iLocal_53);
				}
				unk_0x9526D9575C237F2F(iLocal_53, 0);
				unk_0x26A7668D061F96E7(iLocal_53, 1);
			}
			else if (!unk_0x0B6E83A9A7ED3EBA(iLocal_53))
			{
				unk_0x41DC9B50650996BA(iLocal_53, 1);
				unk_0x7F8A20B6E7557B94(iLocal_53, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_54)
		{
			if (!unk_0x1E80C02AC16B6622(iLocal_54[iVar0]) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				unk_0x9CC689BED786D50E(iLocal_54[iVar0]);
				if (iLocal_69 || iLocal_76)
				{
					unk_0xFBE25F0677076CF9(iLocal_54[iVar0], unk_0x77F050A399DB77ED(), 0, 16);
				}
				else
				{
					unk_0x23E5F4496336DE4E(iLocal_54[iVar0], unk_0x77F050A399DB77ED(), 1000f, -1, 0, 0);
					func_103();
				}
				unk_0x112CD899A3BEE719(iLocal_54[iVar0], 1);
			}
			iVar0++;
		}
		unk_0x7D779528B7C61C13(&(uLocal_61[0]));
		unk_0x7D779528B7C61C13(&(uLocal_61[1]));
		if (unk_0x1F2158D615BC4B25(iLocal_58))
		{
			unk_0xB84D4C251623B60C(&iLocal_58);
		}
		if (unk_0x1F2158D615BC4B25(iLocal_60))
		{
			if (unk_0x540DDE9BB09221C3(iLocal_60))
			{
				unk_0xE8EBCCA6A3BE542B(iLocal_60, 1, 1);
			}
			unk_0xFF0E2D994E7D2E94(&iLocal_60);
		}
		if (unk_0xC3B073777B46C61A(uLocal_163))
		{
			unk_0x296CDA10C549A502(&uLocal_163);
		}
		iLocal_64 = 0;
		while (iLocal_64 <= 1)
		{
			if (unk_0xC3B073777B46C61A(uLocal_111[iLocal_64]))
			{
				unk_0x296CDA10C549A502(&(uLocal_111[iLocal_64]));
			}
			iLocal_64++;
		}
		if (unk_0xC3B073777B46C61A(uLocal_114))
		{
			unk_0x296CDA10C549A502(&uLocal_114);
		}
		if (unk_0x06F36936289C5EC8(uLocal_77))
		{
			unk_0xFE65076A204F9258(uLocal_77, 0);
		}
		unk_0xC8CA2CBC777B0FA7(5, 1);
		unk_0xC8CA2CBC777B0FA7(3, 1);
		unk_0x4AAD01BBE039D160(1f);
		unk_0x6AABDED602B11FF1(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 1, 1);
	}
	func_206(-1);
	unk_0x2F798BA2098FDADE();
}

void func_206(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_159())
	{
		func_210(iParam0);
		unk_0x275546117AF1F063(0, 0);
		Global_99241 = unk_0x3EAC9995EC220C5A();
		func_209(30000);
		StringCopy(&cVar0, func_208(Global_99239, 1), 64);
		if (func_38(Global_99239) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_99238, 64);
		}
		unk_0x0C0A547C7A0D11B0(&cVar0, Global_99236, (unk_0x3EAC9995EC220C5A() - Global_99237), 0);
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99246, 0) && Global_99250.f_29448.f_2 < 3)
	{
		unk_0xA5F70A8B83BDFA49(&Global_99246, 0);
	}
	func_207(&Global_25174);
	Global_99240 = 0;
	func_162(-1);
}

void func_207(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35662)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
}

char* func_208(int iParam0, bool bParam1)
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

void func_209(int iParam0)
{
	Global_36251 = (unk_0x3EAC9995EC220C5A() + iParam0);
}

void func_210(int iParam0)
{
	func_211(iParam0, 0, func_216(iParam0));
}

void func_211(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_180();
	func_214(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_213(iParam0, &uVar0);
	Var1 = { func_212(&uVar0) };
}

struct<16> func_212(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
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
	StringConCat(&Var0, ":", 64);
	iVar16 = func_172(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_175(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_178(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_176(*uParam0), 64);
	return Var0;
}

void func_213(int iParam0, var uParam1)
{
	Global_99250.f_29448.f_43[iParam0] = *uParam1;
}

void func_214(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_176(*uParam0);
	iVar1 = func_178(*uParam0);
	iVar2 = func_175(*uParam0);
	iVar3 = func_174(*uParam0);
	iVar4 = func_173(*uParam0);
	iVar5 = func_172(*uParam0);
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
	iVar6 = func_171(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_171(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_215(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_186(uParam0, iParam1);
	func_185(uParam0, iParam2);
	func_184(uParam0, iParam3);
	func_182(uParam0, iParam5);
	func_183(uParam0, iParam4);
	func_181(uParam0, iParam6);
}

int func_216(int iParam0)
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

void func_217()
{
	Global_25349 = 0;
	Global_25350 = 0;
	Global_25352 = 0;
	Global_25353 = 0;
	Global_25354 = 0;
}

void func_218(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_135(iVar0, bParam0);
		iVar0++;
	}
}

