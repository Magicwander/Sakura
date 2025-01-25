import React from 'react';
import { Light as SyntaxHighlighter } from 'react-syntax-highlighter';
import cpp from 'react-syntax-highlighter/dist/esm/languages/hljs/cpp';
import { atomOneDark, atomOneLight } from 'react-syntax-highlighter/dist/esm/styles/hljs';
import { ArrowLeft } from 'lucide-react';
import { CppFile } from '../types';

SyntaxHighlighter.registerLanguage('cpp', cpp);

interface CodeViewerProps {
  file: CppFile;
  isDark: boolean;
  onBack: () => void;
}

export const CodeViewer: React.FC<CodeViewerProps> = ({ file, isDark, onBack }) => {
  return (
    <div className="max-w-4xl mx-auto px-4 py-8">
      <button
        onClick={onBack}
        className="flex items-center space-x-2 text-gray-600 dark:text-gray-300 hover:text-indigo-500 
                   dark:hover:text-indigo-400 mb-6 transition-colors duration-200"
      >
        <ArrowLeft className="w-5 h-5" />
        <span>Back to Concepts</span>
      </button>

      <div className="bg-white dark:bg-slate-800 rounded-xl shadow-lg p-6 mb-6">
        <h1 className="text-2xl font-bold mb-2 dark:text-white">{file.name}</h1>
        <div className="flex space-x-4 mb-4">
          <span className="text-sm text-gray-600 dark:text-gray-300">
            Category: {file.category}
          </span>
          <span className="text-sm text-gray-600 dark:text-gray-300">
            Difficulty: {file.difficulty}
          </span>
          <span className="text-sm text-gray-600 dark:text-gray-300">
            Time: {file.timeSpent}h
          </span>
        </div>
      </div>

      <div className="bg-white dark:bg-slate-800 rounded-xl shadow-lg overflow-hidden">
        <SyntaxHighlighter
          language="cpp"
          style={isDark ? atomOneDark : atomOneLight}
          customStyle={{
            margin: 0,
            padding: '1.5rem',
            borderRadius: '0.75rem',
            fontSize: '1rem',
            lineHeight: '1.5',
          }}
          showLineNumbers
        >
          {file.content}
        </SyntaxHighlighter>
      </div>
    </div>
  );
};