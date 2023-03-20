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
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	struct<28> Local_36 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 16;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	char[] cLocal_239[8] = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 1000;
	var uLocal_263 = 1000;
	var uLocal_264 = 0;
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
	iLocal_19 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_66 = -1;
	iLocal_237 = -1;
	iLocal_238 = -1;
	StringCopy(&cLocal_239, "PMRAUD", 8);
	iLocal_251 = -1;
	iLocal_252 = -1;
	unk_0x2DD582B35DC84774(1);
	if (unk_0x2C897F101BA20806(3))
	{
		func_81(2);
		func_80();
	}
	func_74();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_73())
		{
			iLocal_238 = -1;
		}
		else if (iLocal_238 == -1)
		{
			iLocal_238 = unk_0x09560C7DE2A384BD();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_35)
	{
		case 0:
			unk_0x939DA7EBCC6588FF(Local_36.f_10);
			if (Local_36.f_11 != 0)
			{
				unk_0x939DA7EBCC6588FF(Local_36.f_11);
			}
			unk_0x95AB598E6554985B("PRECOV", 0);
			if (unk_0x5CD78FA34B48CB6E(0))
			{
				if (unk_0x538DF9E5B1DF01EB(Global_96151.f_222[0]) && unk_0xECFECDAD51A6184F(Global_96151.f_222[0], 0))
				{
					iLocal_243 = Global_96151.f_222[0];
					Global_96151.f_222[0] = 0;
					unk_0x7B9576B4E099FB1F(iLocal_243, 1, 1);
					Local_36.f_7 = unk_0xA609E58449080951(iLocal_243);
					unk_0xEA054561294AEC10(Local_36.f_7);
					unk_0x32DC163A33A4AB6D(Local_36.f_7, 1);
				}
				if (unk_0x538DF9E5B1DF01EB(Global_96151.f_225[0]))
				{
					iLocal_244 = Global_96151.f_225[0];
					Global_96151.f_225[0] = 0;
					unk_0x7B9576B4E099FB1F(iLocal_244, 1, 1);
					Local_36.f_8 = unk_0xA609E58449080951(iLocal_244);
					unk_0xA9465591B42213AE(iLocal_244, iLocal_250);
					unk_0x065062839FBD7BCF(iLocal_244, 0);
					unk_0xE97E86766A24F0FA(iLocal_244, 5);
					unk_0x2686393074E14730(iLocal_244, 1);
					unk_0x15EBFEEB77BF84B7(iLocal_244, 23, 1);
					if (unk_0x2FDD93A1F5E63663(Local_36.f_7))
					{
						if (Local_36.f_26)
						{
							unk_0x49D26ECEB56A3095(iLocal_244, 1);
							unk_0x575C51FE953F1EA4(iLocal_244, 1, 4096, -1);
						}
						else
						{
							unk_0x49D26ECEB56A3095(iLocal_244, 0);
						}
					}
					if (Local_36.f_20)
					{
						unk_0x39272B2594E03395(iLocal_244, joaat("weapon_pistol"), 120, 0, 0);
						unk_0x39272B2594E03395(iLocal_244, joaat("weapon_microsmg"), 120, 1, 1);
					}
					unk_0xEA054561294AEC10(Local_36.f_8);
					unk_0x67565210B706E956(iLocal_244, 0, 0, 0, Local_36.f_27, 0, 0, 0, 0);
					func_72(&uLocal_72, 3, iLocal_244, "ABIGAIL", 0, 1);
				}
				if (unk_0x538DF9E5B1DF01EB(Global_96151.f_225[1]))
				{
					iLocal_245 = Global_96151.f_225[1];
					Global_96151.f_225[1] = 0;
					unk_0x7B9576B4E099FB1F(iLocal_245, 1, 1);
					Local_36.f_9 = unk_0xA609E58449080951(iLocal_245);
					unk_0xA9465591B42213AE(iLocal_245, iLocal_250);
					unk_0x065062839FBD7BCF(iLocal_245, 0);
					unk_0xE97E86766A24F0FA(iLocal_245, 5);
					unk_0x2686393074E14730(iLocal_245, 1);
					unk_0x15EBFEEB77BF84B7(iLocal_245, 23, 1);
					if (unk_0x2FDD93A1F5E63663(Local_36.f_7))
					{
						if (Local_36.f_26)
						{
							unk_0x49D26ECEB56A3095(iLocal_245, 1);
							unk_0x575C51FE953F1EA4(iLocal_245, 1, 4096, -1);
						}
						else
						{
							unk_0x49D26ECEB56A3095(iLocal_245, 0);
						}
					}
					unk_0xEA054561294AEC10(Local_36.f_9);
					unk_0x67565210B706E956(iLocal_245, 0, 0, 0, Local_36.f_27, 0, 0, 0, 0);
				}
				if ((!unk_0x538DF9E5B1DF01EB(iLocal_244) || !unk_0x2DE0B96E966FD817(iLocal_244)) && (!unk_0x538DF9E5B1DF01EB(iLocal_245) || !unk_0x2DE0B96E966FD817(iLocal_245)))
				{
					uLocal_248 = func_71(iLocal_243, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_36.f_12), 32);
					func_70(&cVar0, 7500, 1);
					func_69(&(Local_36.f_22), 10000);
					iLocal_237 = 0;
					iLocal_67 = 0;
					iLocal_68 = 0;
					if (Local_36.f_19 != -1)
					{
						iLocal_66 = (unk_0x09560C7DE2A384BD() + Local_36.f_19);
					}
				}
				iLocal_35++;
			}
			break;
		
		case 1:
			if (((((unk_0x538DF9E5B1DF01EB(iLocal_244) && unk_0x2DE0B96E966FD817(iLocal_244)) || (unk_0x538DF9E5B1DF01EB(iLocal_245) && unk_0x2DE0B96E966FD817(iLocal_245))) || ((Local_36.f_17 && unk_0x2FDD93A1F5E63663(Local_36.f_7)) && !unk_0xAD203DB71ADF6E57(iLocal_244, iLocal_243, 0))) || ((Local_36.f_17 && unk_0x2FDD93A1F5E63663(Local_36.f_7)) && !unk_0xAD203DB71ADF6E57(iLocal_245, iLocal_243, 0))) || ((Local_36.f_18 && !unk_0xAD203DB71ADF6E57(iLocal_244, iLocal_243, 0)) && func_68(iLocal_244)))
			{
				if (Local_36.f_17 && unk_0x2FDD93A1F5E63663(Local_36.f_7))
				{
					if (!unk_0x2DE0B96E966FD817(iLocal_244) && unk_0xAD203DB71ADF6E57(iLocal_244, iLocal_243, 0))
					{
						unk_0x43884CCCEFD522DB(iLocal_244);
					}
					if (!unk_0x2DE0B96E966FD817(iLocal_245) && unk_0xAD203DB71ADF6E57(iLocal_245, iLocal_243, 0))
					{
						unk_0x43884CCCEFD522DB(iLocal_245);
					}
				}
				if (unk_0xCE3402BDFD2ADED8())
				{
					unk_0xEDC11454B9658FE1();
				}
				if (unk_0x11A809BBE3889742())
				{
					unk_0xFD1E0AEC770DAF2E(1);
				}
				if (func_73())
				{
					func_66();
				}
				iLocal_237 = -1;
				if (unk_0x5494F37F35C1D7D7(Local_36.f_10) && (Local_36.f_11 == 0 || unk_0x5494F37F35C1D7D7(Local_36.f_11)))
				{
					if (unk_0x538DF9E5B1DF01EB(iLocal_244))
					{
						Var8 = { unk_0xC4C1971ABDF23486(iLocal_244, 1067030938, 1069547520) };
						uLocal_246 = unk_0xE3FFBBF0B5D956E4(joaat("pickup_money_med_bag"), Var8, Local_36.f_28, -1, 1, Local_36.f_10);
						unk_0xEA054561294AEC10(Local_36.f_10);
						if (unk_0x5660C8AFDD9C1721(uLocal_248))
						{
							unk_0xB6FB9702660D84F6(&uLocal_248);
						}
						uLocal_248 = func_65(uLocal_246);
					}
					if (unk_0x538DF9E5B1DF01EB(iLocal_245) && Local_36.f_11 != 0)
					{
						Var8 = { unk_0xC4C1971ABDF23486(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = unk_0xE3FFBBF0B5D956E4(joaat("pickup_money_med_bag"), Var8, Local_36.f_29, -1, 1, Local_36.f_11);
						unk_0xEA054561294AEC10(Local_36.f_11);
						if (unk_0x5660C8AFDD9C1721(uLocal_249))
						{
							unk_0xB6FB9702660D84F6(&uLocal_249);
						}
						uLocal_249 = func_65(uLocal_247);
					}
					func_64(&uLocal_253, 0, 0);
					iLocal_241 = 1;
					iLocal_35++;
				}
			}
			else
			{
				if (unk_0x202EF5D8203705EF(iLocal_244, 0))
				{
					if (unk_0x5660C8AFDD9C1721(uLocal_249))
					{
						unk_0xB6FB9702660D84F6(&uLocal_249);
					}
					if (!unk_0x5660C8AFDD9C1721(uLocal_248))
					{
						uLocal_248 = func_71(unk_0x6ADAC08D70C79DE5(iLocal_244, 0), 1, 0);
					}
				}
				else
				{
					if (unk_0x5660C8AFDD9C1721(uLocal_248))
					{
						unk_0xB6FB9702660D84F6(&uLocal_248);
					}
					if (!unk_0x5660C8AFDD9C1721(uLocal_249))
					{
						uLocal_249 = func_61(iLocal_244, 1, 145);
					}
				}
				func_40(&uLocal_253, iLocal_244, 0, 0, 1, 1, 1);
				if (iLocal_66 != -1)
				{
					if (unk_0x09560C7DE2A384BD() > iLocal_66)
					{
						func_39();
					}
					else
					{
						iVar11 = func_38(unk_0x045E73D0141F51B4((iLocal_66 - unk_0x09560C7DE2A384BD())), 0, Local_36.f_19);
						if (iVar11 <= 10000)
						{
							func_34((Local_36.f_19 - iVar11), Local_36.f_19, "UPLOAD", 9, 10000, 1);
						}
						else
						{
							func_34((Local_36.f_19 - iVar11), Local_36.f_19, "UPLOAD", 9, 0, 1);
						}
					}
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_244))
				{
					if (func_33(unk_0xA16EC202D9D35357(), iLocal_244, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0x5660C8AFDD9C1721(uLocal_248))
					{
						func_32(uLocal_248, iLocal_244, 500f, 0.8f, 0);
					}
				}
				if (unk_0x538DF9E5B1DF01EB(iLocal_245))
				{
					if (func_33(unk_0xA16EC202D9D35357(), iLocal_245, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0x5660C8AFDD9C1721(uLocal_249))
					{
						func_32(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x27C40BD761A1E76F(uLocal_246) || unk_0x3FCA2F27F738473E(uLocal_246))
			{
				if (unk_0x27C40BD761A1E76F(uLocal_246))
				{
					unk_0x4B96753E257A5CA4(uLocal_246);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_248))
				{
					unk_0xB6FB9702660D84F6(&uLocal_248);
				}
			}
			if (!unk_0x27C40BD761A1E76F(uLocal_247) || unk_0x3FCA2F27F738473E(uLocal_247))
			{
				if (unk_0x27C40BD761A1E76F(uLocal_247))
				{
					unk_0x4B96753E257A5CA4(uLocal_247);
				}
				if (unk_0x5660C8AFDD9C1721(uLocal_249))
				{
					unk_0xB6FB9702660D84F6(&uLocal_249);
				}
			}
			if (!unk_0x5660C8AFDD9C1721(uLocal_248) && !unk_0x5660C8AFDD9C1721(uLocal_249))
			{
				if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
				{
					if (!iLocal_70)
					{
						func_70("LOSE_WANTED", 7500, 1);
						iLocal_70 = 1;
					}
				}
				else
				{
					unk_0xEDC11454B9658FE1();
					func_31();
				}
			}
			else if ((unk_0x27C40BD761A1E76F(uLocal_246) && func_30(unk_0xA16EC202D9D35357(), unk_0xA3B3632D39761B55(uLocal_246), 1) > 500f) || (unk_0x27C40BD761A1E76F(uLocal_247) && func_30(unk_0xA16EC202D9D35357(), unk_0xA3B3632D39761B55(uLocal_247), 1) > 500f))
			{
				func_39();
			}
			else if (iLocal_241 && func_28())
			{
				unk_0xEDC11454B9658FE1();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_36.f_12), 32);
				func_70(&cVar0, 7500, 1);
				iLocal_241 = 0;
			}
			break;
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_244) && !unk_0x2DE0B96E966FD817(iLocal_244))
	{
		if ((unk_0x538DF9E5B1DF01EB(iLocal_243) && unk_0xECFECDAD51A6184F(iLocal_243, 0)) && !iLocal_67)
		{
			if (!func_27(iLocal_244, 242628503, 1))
			{
				unk_0x6D98AA46076A68BE(&uLocal_242);
				unk_0x270A587A7AD98455(0, iLocal_243, 31, 10000);
				unk_0xD14A21CF793D510E(0, iLocal_243, unk_0xA16EC202D9D35357(), 8, 30f, Local_36.f_16, 1000f, 0f, 1);
				unk_0x963BB7C99350D827(uLocal_242);
				unk_0x0891776D0327B77A(iLocal_244, uLocal_242);
				unk_0x2AF68ED52DC74B7D(&uLocal_242);
				iLocal_67 = 1;
			}
		}
		else if (((func_27(iLocal_244, 242628503, 1) && unk_0x221830F81FA80744(iLocal_244) < 1) && !iLocal_68) && (((((unk_0x0852C405AF94F670(unk_0xA16EC202D9D35357(), Local_36, Local_36.f_3, Local_36.f_6, 0, 1, 0) || unk_0xBAF095F1E70C8C9D(iLocal_244, 122)) || unk_0xBAF095F1E70C8C9D(iLocal_244, 123)) || unk_0xBAF095F1E70C8C9D(iLocal_244, 124)) || unk_0xBAF095F1E70C8C9D(iLocal_244, 23)) || func_26(Global_96151.f_35, 134217728)))
		{
			unk_0xD14A21CF793D510E(iLocal_244, iLocal_243, unk_0xA16EC202D9D35357(), 8, 30f, Local_36.f_16, 1000f, 0f, 1);
			iLocal_68 = 1;
		}
		else if ((!func_27(iLocal_244, 242628503, 1) && !func_27(iLocal_244, -1273030092, 1)) || !unk_0x202EF5D8203705EF(iLocal_244, 0))
		{
			if (!func_27(iLocal_244, 1805844857, 1))
			{
				unk_0xEA36CC2E7750344B(iLocal_244, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 1);
			}
		}
		else if (unk_0xAD203DB71ADF6E57(iLocal_244, iLocal_243, 1) && (((unk_0x5E8694417D361328(iLocal_243, 0, 3000) || unk_0x5E8694417D361328(iLocal_243, 1, 3000)) || unk_0x5E8694417D361328(iLocal_243, 2, 8000)) || unk_0x5E8694417D361328(iLocal_243, 3, 8000)))
		{
			if (!func_27(iLocal_244, 451360105, 1))
			{
				unk_0x3CB6843C8C4A8A21(iLocal_244, iLocal_243, 0);
			}
		}
		if (Local_36.f_20)
		{
			if (!bLocal_69)
			{
				if ((((unk_0xBF8ADDCADFC4691E(iLocal_244, unk_0xA16EC202D9D35357(), 1) || unk_0xBF8ADDCADFC4691E(iLocal_243, unk_0xA16EC202D9D35357(), 1)) || unk_0xBAF095F1E70C8C9D(iLocal_244, 122)) || unk_0xBAF095F1E70C8C9D(iLocal_244, 123)) || unk_0xBAF095F1E70C8C9D(iLocal_244, 124))
				{
					bLocal_69 = true;
				}
			}
			if (bLocal_69)
			{
				if ((unk_0x221AC1EF116F6053(iLocal_244, 242628503) == 1 && unk_0x221830F81FA80744(iLocal_244) == 1) || unk_0x221AC1EF116F6053(iLocal_244, -1273030092) == 1)
				{
					if (!unk_0xAF9B87C916A46819(iLocal_244))
					{
						unk_0x73C81D40F6EC64F7(iLocal_244, joaat("weapon_microsmg"));
						unk_0x251805FE1B74A3C4(iLocal_244, unk_0xA16EC202D9D35357(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_243) && unk_0xECFECDAD51A6184F(iLocal_243, 0))
		{
			if (!iLocal_71)
			{
				if ((func_27(iLocal_244, 242628503, 1) && unk_0x221830F81FA80744(iLocal_244) == 1) || func_27(iLocal_244, -1273030092, 1))
				{
					if (unk_0x45B7DFCE888B2A02("TAKINGS", 0))
					{
						unk_0x9AF4B23C594DCEE5(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_243, 0, 0, 0);
						iLocal_71 = 1;
					}
				}
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_245) && !unk_0x2DE0B96E966FD817(iLocal_245))
	{
		if (!unk_0x202EF5D8203705EF(iLocal_245, 0) && !func_27(iLocal_245, 1805844857, 1))
		{
			unk_0xEA36CC2E7750344B(iLocal_245, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 1);
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_244) && !unk_0x2DE0B96E966FD817(iLocal_244))
	{
		if (unk_0x7F40BDE5E3EA9E62(iLocal_244) && !unk_0x202EF5D8203705EF(iLocal_244, 0))
		{
			if (func_73())
			{
				func_66();
			}
		}
		else if (func_33(unk_0xA16EC202D9D35357(), iLocal_244, 1) < 15f)
		{
			switch (iLocal_237)
			{
				case 0:
					if (func_25())
					{
						MemCopy(&cVar0, {Local_36.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_72, &cLocal_239, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 1:
					if (func_25())
					{
						if (!unk_0xEE1AFCD91E6C4A4B(iLocal_244))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_244, &cVar0, 10);
							iLocal_238 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 2:
					if (func_25() && (unk_0x09560C7DE2A384BD() - iLocal_238) > 3500)
					{
						MemCopy(&cVar0, {Local_36.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_72, &cLocal_239, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_237++;
						}
					}
					break;
				
				case 3:
					if (func_25() && (unk_0x09560C7DE2A384BD() - iLocal_238) > 1500)
					{
						if (!unk_0xEE1AFCD91E6C4A4B(iLocal_244))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_244, &cVar0, 10);
							iLocal_238 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_237 = (iLocal_237 - 1);
						}
					}
					break;
				}
			}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_244))
	{
		if (unk_0x2DE0B96E966FD817(iLocal_244))
		{
			if (Local_36.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_36.f_27)
		{
			if (iLocal_251 == -1)
			{
				if (!unk_0x7F40BDE5E3EA9E62(iLocal_244))
				{
					iLocal_251 = unk_0x09560C7DE2A384BD();
				}
			}
			else if ((unk_0x09560C7DE2A384BD() - iLocal_251) > 2000)
			{
				unk_0x67565210B706E956(iLocal_244, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_245))
	{
		if (unk_0x2DE0B96E966FD817(iLocal_245))
		{
			if (Local_36.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_36.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!unk_0x7F40BDE5E3EA9E62(iLocal_245))
				{
					iLocal_252 = unk_0x09560C7DE2A384BD();
				}
			}
			else if ((unk_0x09560C7DE2A384BD() - iLocal_252) > 2000)
			{
				unk_0x67565210B706E956(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_96151.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	unk_0xD550A19A432377FF(iParam0, cParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
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

int func_5()
{
	return func_6(Global_96151.f_20, Global_96151.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
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
					func_22();
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
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_20();
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
				func_13();
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
				if (func_12())
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
			if (func_11())
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
			func_10();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_9();
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
		func_22();
	}
	return 0;
}

void func_9()
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

void func_10()
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

int func_11()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
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

void func_13()
{
	if (func_19(14))
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
		Global_14394 = func_14();
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

int func_14()
{
	func_15();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_18(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_17(unk_0xA16EC202D9D35357());
			if (func_16(iVar0) && (!func_19(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_16(Global_97439.f_1729.f_539.f_3213))
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

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_20()
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

bool func_21(int iParam0, int iParam1)
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

void func_22()
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

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
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

struct<4> func_24(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_14())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_25()
{
	if (func_73())
	{
		return 0;
	}
	if (unk_0xFD672F92EEA2DC13())
	{
		if (unk_0xCE3402BDFD2ADED8())
		{
			return 0;
		}
	}
	return 1;
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x221AC1EF116F6053(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (unk_0xCE3402BDFD2ADED8())
	{
		return 0;
	}
	if (unk_0xFD672F92EEA2DC13())
	{
		if (func_73() && !func_29())
		{
			return 0;
		}
	}
	return 1;
}

int func_29()
{
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

float func_30(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE44A580B551C3645(uParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(uParam0, 0) };
	}
	return unk_0x4970185D4CC64616(Var0, Param1, iParam4);
}

void func_31()
{
	func_81(1);
	func_80();
}

void func_32(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x5660C8AFDD9C1721(uParam0))
	{
		if ((unk_0x538DF9E5B1DF01EB(uParam1) && unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357())) && !unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x9FF5D51C24AD2308(iParam1))
			{
				if (unk_0xECFECDAD51A6184F(unk_0xF22EE5E4C0C2704B(iParam1), 0))
				{
					fVar1 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iParam1, 1), 1);
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
						unk_0x864CE7B9AD07DDDE(uParam0, 1);
						unk_0xE30CC26FBB1F8075(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x864CE7B9AD07DDDE(uParam0, 0);
						unk_0xE30CC26FBB1F8075(uParam0, 255);
					}
				}
			}
			else if (unk_0xA34B85701D8A1FA8(iParam1))
			{
				if (!unk_0x2DE0B96E966FD817(unk_0xA7CC89FF539E1376(iParam1)))
				{
					fVar1 = unk_0x4970185D4CC64616(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(iParam1, 1), 1);
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
						unk_0x864CE7B9AD07DDDE(uParam0, 1);
						unk_0xE30CC26FBB1F8075(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x864CE7B9AD07DDDE(uParam0, 0);
						unk_0xE30CC26FBB1F8075(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_33(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE44A580B551C3645(uParam0))
	{
		Var0 = { unk_0xBF8499F46AD9093A(uParam0, 1) };
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

void func_34(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_35(iParam0, uParam1, sParam2, iParam3, iParam4, 2, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0);
}

void func_35(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_37(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328903.f_1 = 1;
		func_36(0, iVar0);
		Global_1328903.f_946[iVar0] = uParam0;
		Global_1328903.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1328903.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1328903.f_946.f_194[iVar0] = uParam3;
		Global_1328903.f_946.f_183[iVar0] = uParam4;
		Global_1328903.f_946.f_216[iVar0] = iParam5;
		Global_1328903.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1328903.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1328903.f_946.f_258[iVar0] = iParam8;
		Global_1328903.f_946.f_269[iVar0] = uParam9;
		Global_1328903.f_946.f_312[iVar0] = iParam10;
		Global_1328903.f_946.f_323[iVar0] = iParam11;
		Global_1328903.f_946.f_334[iVar0] = iParam12;
		Global_1328903.f_946.f_345[iVar0] = iParam13;
		Global_1328903.f_941 = 1;
		Global_1328903.f_946.f_356[iVar0] = iParam14;
		Global_1328903.f_946.f_367[iVar0] = iParam15;
	}
}

void func_36(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1328903.f_4506[iParam0]), iParam1);
}

bool func_37(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_1328903.f_4506[iParam0], iParam1);
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_39()
{
	func_81(2);
	func_80();
}

void func_40(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_41(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_41(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x99483D9B7795CE90())
	{
		if (unk_0x09560C7DE2A384BD() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x8CD18E96F1984EE6(iVar0))
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_60(iVar0))
	{
		func_59();
	}
	if (func_58(uParam1) && unk_0x01F2C76388A112CD(uParam1))
	{
		iVar1 = 0;
		if (unk_0xA34B85701D8A1FA8(uParam1))
		{
			unk_0x363DCD6DE9075276(unk_0xA7CC89FF539E1376(iParam1));
			unk_0x4A31EF84AD2D3B0D(unk_0xA7CC89FF539E1376(iParam1), 1);
			if (unk_0x586DEB4EEF97DE25(unk_0xA7CC89FF539E1376(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x9FF5D51C24AD2308(iParam1))
		{
			unk_0x0FD7A44935EE7114(unk_0xF22EE5E4C0C2704B(iParam1));
			if (unk_0xCA9E7F1048FD317D(unk_0xF22EE5E4C0C2704B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x15CE956C279F4825(iParam1))
		{
			unk_0xB7077310F4F4B405(unk_0xEF9CAED9122967A6(iParam1));
			if (unk_0x6F24C2390E9E1291(unk_0xEF9CAED9122967A6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x99483D9B7795CE90())
		{
			if (func_53(uParam0, bParam7, bParam9, 0))
			{
				func_49(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_45(iVar0))
				{
					if ((unk_0x8CD18E96F1984EE6(uParam0->f_3) && !unk_0x8CD18E96F1984EE6(iVar0)) && unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
					{
						if ((iVar1 && !unk_0x11A809BBE3889742()) && uParam8)
						{
							if (!func_60(iVar0))
							{
								func_69(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x9BA82E09A986BA4B("CMN_HINT", iVar0))
								{
									func_44(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0))
			{
				if (unk_0x8CD18E96F1984EE6(uParam0->f_3) && !unk_0x8CD18E96F1984EE6(iVar0))
				{
					if (((unk_0x98666858610065B8(iParam1) && iVar1) && !unk_0x11A809BBE3889742()) && uParam8)
					{
						if (!func_60(iVar0))
						{
							func_69(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x9BA82E09A986BA4B("CMN_HINT", iVar0))
							{
								func_44(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x8CD18E96F1984EE6(sParam5))
			{
				if (func_60(sParam5))
				{
					unk_0xFD1E0AEC770DAF2E(1);
				}
			}
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
			{
				if (unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(3) == 3 || unk_0x95AD511976EEFC6B(3) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(6) == 3 || unk_0x95AD511976EEFC6B(6) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(4) == 3 || unk_0x95AD511976EEFC6B(4) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(5) == 3 || unk_0x95AD511976EEFC6B(5) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
				{
					if (unk_0x95AD511976EEFC6B(2) == 3 || unk_0x95AD511976EEFC6B(2) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC89B7DD8E2CD22E5() == 3 || unk_0xC89B7DD8E2CD22E5() == 4)
				{
					func_64(uParam0, iVar0, 1);
				}
			}
			if (!func_53(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_43(uParam0))
				{
					func_42(uParam0);
				}
			}
		}
	}
	else
	{
		func_64(uParam0, iVar0, 0);
	}
}

void func_42(var uParam0)
{
	if (func_58(unk_0xA16EC202D9D35357()))
	{
		unk_0x574CC08ACCB0F5FC(unk_0xA16EC202D9D35357());
	}
	if (unk_0x99483D9B7795CE90())
	{
		unk_0x7FF5364DCE67B621(1);
		unk_0x1CCF3860AEBA07CC(0);
		unk_0x124843CE93F39C27("HINT_CAM_SCENE");
		unk_0xBB74A3D7C0228EBE("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xDF3B1A0343547226("FocusOut", 0, 0);
			unk_0xC2E1777941B4536E(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_43(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x09560C7DE2A384BD()
		{
			return 1;
		}
	}
	return 0;
}

int func_44(bool bParam0)
{
	switch (Global_34915)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97439.f_8303.f_100++;
			}
			return Global_97439.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97439.f_8303.f_101++;
			}
			return Global_97439.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97439.f_8303.f_102++;
			}
			return Global_97439.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_45(char* sParam0)
{
	if (!func_46(1, 1, 0))
	{
		if ((!unk_0x06771AF7795B3ECF(sParam0) && func_60(sParam0)) || func_60("CMN_HINT"))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
		return 0;
	}
	switch (Global_34915)
	{
		case 0:
		case 3:
			if (func_44(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB4B5BF5882A555F9())
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	if (unk_0x6E6ED37B068198D0())
	{
		return 0;
	}
	if (Global_67066)
	{
		return 0;
	}
	if (unk_0x16CDA1894CFE0781(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51940)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
		{
			if (unk_0xB302E5F6DEB1F735(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(3) == 3 || unk_0x95AD511976EEFC6B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(6) == 3 || unk_0x95AD511976EEFC6B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(4) == 3 || unk_0x95AD511976EEFC6B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(5) == 3 || unk_0x95AD511976EEFC6B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x414274D1CFE88167(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x95AD511976EEFC6B(2) == 3 || unk_0x95AD511976EEFC6B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC89B7DD8E2CD22E5() == 3 || unk_0xC89B7DD8E2CD22E5() == 4)
			{
				return 0;
			}
			if (unk_0xE7F9BEE8EDDF19C2())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_47()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

int func_48(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_49(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xE44A580B551C3645(uParam1))
	{
		func_64(uParam0, 0, 0);
	}
	if (func_52(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xA34B85701D8A1FA8(iParam1))
		{
			uVar0 = unk_0xA7CC89FF539E1376(iParam1);
			if (!unk_0x202EF5D8203705EF(uVar0, 0))
			{
				if (unk_0x2303B9FE7CF81971(iVar0))
				{
					if (!func_50())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x998FA6EE0C28BE23(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x7FF5364DCE67B621(0);
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
	unk_0x82AA7722DE6421AE(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x4745F9C50C63A48C(unk_0xA16EC202D9D35357(), iParam1, -1, iVar3, iVar4);
	unk_0xDF3B1A0343547226("FocusIn", 0, 0);
	unk_0x3EF2F05E6EA65602("HINT_CAM_SCENE");
	unk_0xC2E1777941B4536E(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x09560C7DE2A384BD();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_50()
{
	return func_51(unk_0x1788E93557766241());
}

int func_51(var uParam0)
{
	if (unk_0xA609E58449080951(unk_0xFF34D923BFB5E9FB(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_53(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x09560C7DE2A384BD() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					if (func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x09560C7DE2A384BD();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x09560C7DE2A384BD();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x09560C7DE2A384BD();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_43(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x09560C7DE2A384BD() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
					{
						if (!func_57(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x09560C7DE2A384BD();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x09560C7DE2A384BD();
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
				if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_56(bParam1, bParam2, bParam3) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || unk_0x662678D772BA810F(unk_0xA16EC202D9D35357(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x09560C7DE2A384BD() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1))
					{
						if (func_55(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 1) || unk_0x662678D772BA810F(unk_0xA16EC202D9D35357(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_55(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_43(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_59();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0xDE31A932C72990F1(unk_0x1788E93557766241()))
		{
			unk_0x4B404C739A9AFC7A(0, 140, 1);
			unk_0x4B404C739A9AFC7A(0, 80, 1);
			if (unk_0xAFD068D020C517F6(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		unk_0x4B404C739A9AFC7A(0, 80, 1);
		if (unk_0x0898B12B629D9B74())
		{
			if (unk_0xAFD068D020C517F6(0, 80))
			{
				unk_0x7FF5364DCE67B621(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (!unk_0xDE31A932C72990F1(unk_0x1788E93557766241()))
		{
			unk_0x4B404C739A9AFC7A(0, 140, 1);
			unk_0x4B404C739A9AFC7A(0, 80, 1);
			if (unk_0x4E151C54AB29940C(0, 80) && unk_0x09560C7DE2A384BD() > Global_97)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		unk_0x4B404C739A9AFC7A(0, 80, 1);
		if (unk_0x0898B12B629D9B74())
		{
			if (unk_0x4E151C54AB29940C(0, 80) && unk_0x09560C7DE2A384BD() > Global_97)
			{
				unk_0x7FF5364DCE67B621(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (unk_0x9FF5D51C24AD2308(iParam0))
		{
			if (unk_0xECFECDAD51A6184F(unk_0xF22EE5E4C0C2704B(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xA34B85701D8A1FA8(iParam0))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA7CC89FF539E1376(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x15CE956C279F4825(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_59()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2265, 4);
}

bool func_60(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

var func_61(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x5660C8AFDD9C1721(uVar0)) && unk_0xC929DDA58687736B(&(Global_97439.f_29795[iParam2 /*29*/].f_3)))
	{
		unk_0xFDA1FE98ECD75505(uVar0, &(Global_97439.f_29795[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(iParam0);
	if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_63(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
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
		unk_0xBE97A5A41C1F5C4C(uVar0, func_63(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(iParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_63(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
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

void func_64(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_2446992.f_4405, 25))
		{
			return;
		}
	}
	if (unk_0x99483D9B7795CE90())
	{
		unk_0x1CCF3860AEBA07CC(iParam2);
		unk_0xBB74A3D7C0228EBE("FocusIn");
		unk_0x124843CE93F39C27("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xDF3B1A0343547226("FocusOut", 0, 0);
			unk_0xC2E1777941B4536E(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x7FF5364DCE67B621(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x8CD18E96F1984EE6(sVar0))
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x8CD18E96F1984EE6(uParam0->f_3))
	{
		if (func_60(uParam0->f_3))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
	}
	if (!unk_0x8CD18E96F1984EE6(sVar0))
	{
		if (func_60(sVar0))
		{
			unk_0xFD1E0AEC770DAF2E(1);
		}
	}
}

int func_65(var uParam0)
{
	var uVar0;
	
	if (!unk_0x27C40BD761A1E76F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE86F8FB78D76001F(uParam0);
	unk_0xBE97A5A41C1F5C4C(uVar0, func_63(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
	return uVar0;
}

void func_66()
{
	Global_14559 = 0;
	func_67();
}

void func_67()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
	}
}

int func_68(int iParam0)
{
	if (((((unk_0xBAF095F1E70C8C9D(uParam0, 122) || unk_0xBAF095F1E70C8C9D(iParam0, 123)) || unk_0xBAF095F1E70C8C9D(iParam0, 124)) || unk_0xBAF095F1E70C8C9D(iParam0, 41)) || (unk_0x864FA69DF1FAD1ED(iParam0, unk_0xA16EC202D9D35357()) && unk_0xBAF095F1E70C8C9D(iParam0, 29))) || unk_0xBF8ADDCADFC4691E(iParam0, unk_0xA16EC202D9D35357(), 1))
	{
		return 1;
	}
	else
	{
		unk_0xFAF4121083211853(iParam0);
	}
	return 0;
}

void func_69(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

void func_70(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8E9A80E27DB553E5(cParam0);
	unk_0x6E070B8EEA199511(iParam1, 1);
}

int func_71(var uParam0, bool bParam1, bool bParam2)
{
	return func_62(uParam0, !bParam1, bParam2);
}

void func_72(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(uParam2))
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

int func_73()
{
	if (Global_15693 != 0 || unk_0xD47B332729054512())
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	func_75(&Local_36);
	unk_0x0B29CE7F19BFE6C0("relThief", &iLocal_250);
	unk_0x2966D41514EAE84B(5, joaat("player"), iLocal_250);
	unk_0x2966D41514EAE84B(5, iLocal_250, joaat("player"));
	switch (func_14())
	{
		case 0:
			func_72(&uLocal_72, 0, unk_0xA16EC202D9D35357(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_72(&uLocal_72, 1, unk_0xA16EC202D9D35357(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_72(&uLocal_72, 2, unk_0xA16EC202D9D35357(), "TREVOR", 0, 1);
			break;
	}
	unk_0xABC4F2A6D7D56CF4(0.1f);
}

void func_75(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	unk_0xD0E2BFCE93AE3ABD(&iVar3, 3);
	unk_0xD0E2BFCE93AE3ABD(&iVar3, 4);
	unk_0xD0E2BFCE93AE3ABD(&iVar4, 3);
	unk_0xD0E2BFCE93AE3ABD(&iVar4, 4);
	unk_0xD0E2BFCE93AE3ABD(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_79())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_76(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_77(func_78(Param1 - Vector(0f, 174.58f, 335.5574f)), func_78(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_77(func_78(Param1 - Vector(0f, -711.023f, 393.0992f)), func_78(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_77(func_78(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_78(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_77(func_78(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_78(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_77(func_78(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_78(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_77(func_78(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_78(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_77(func_78(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_78(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_78(struct<3> Param0)
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

int func_79()
{
	return Global_96151.f_20;
}

void func_80()
{
	if (unk_0x538DF9E5B1DF01EB(iLocal_244))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_244))
		{
			unk_0xEA36CC2E7750344B(iLocal_244, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 1);
		}
		unk_0x6B3DDEE91652BE59(&iLocal_244);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_245))
	{
		if (!unk_0x2DE0B96E966FD817(iLocal_245))
		{
			unk_0xEA36CC2E7750344B(iLocal_245, unk_0xA16EC202D9D35357(), 1000f, -1, 0, 1);
		}
		unk_0x6B3DDEE91652BE59(&iLocal_245);
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_243))
	{
		unk_0x3A3C5A6572B3C611(&iLocal_243);
	}
	if (unk_0x27C40BD761A1E76F(uLocal_246))
	{
		unk_0x4B96753E257A5CA4(uLocal_246);
	}
	if (unk_0x27C40BD761A1E76F(uLocal_247))
	{
		unk_0x4B96753E257A5CA4(uLocal_247);
	}
	if (unk_0x5660C8AFDD9C1721(uLocal_248))
	{
		unk_0xB6FB9702660D84F6(&uLocal_248);
	}
	if (unk_0x5660C8AFDD9C1721(uLocal_249))
	{
		unk_0xB6FB9702660D84F6(&uLocal_249);
	}
	unk_0x32DC163A33A4AB6D(Local_36.f_7, 0);
	unk_0xABC4F2A6D7D56CF4(1f);
	unk_0x101360578835A5F9(iLocal_250);
	unk_0x82706E6C897B0FA1();
}

void func_81(int iParam0)
{
	Global_96151.f_22 = iParam0;
}

