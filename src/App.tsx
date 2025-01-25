import React, { useState, useEffect } from 'react';
import { SakuraParticles } from './components/SakuraParticles';
import { ThemeToggle } from './components/ThemeToggle';
import { Dashboard } from './components/Dashboard';
import { ConceptGrid } from './components/ConceptGrid';
import { CodeViewer } from './components/CodeViewer';
import { CppFile, UserProgress } from './types';
import { Code2 } from 'lucide-react';

function App() {
  const [isDark, setIsDark] = useState(false);
  const [files, setFiles] = useState<CppFile[]>([]);
  const [selectedFile, setSelectedFile] = useState<CppFile | null>(null);
  const [progress] = useState<UserProgress>({
    totalHours: 25,
    completedConcepts: 2,
    totalConcepts: 400
  });

  useEffect(() => {
    // Load files from the cpp-scripts directory
    const loadFiles = async () => {
      try {
        // Example files for demonstration
        setFiles([
          {
            name: 'Hello World',
            path: '/cpp-scripts/hello_world.cpp',
            content: '#include <iostream>\n\nint main() {\n    std::cout << "Hello, World!" << std::endl;\n    return 0;\n}',
            timeSpent: 1,
            difficulty: 'Beginner',
            category: 'Basics'
          },
          {
            name: 'Vectors',
            path: '/cpp-scripts/vectors.cpp',
            content: `#include <iostream>\n#include <vector>\n\nint main() {\n    std::vector<int> numbers = {1, 2, 3, 4, 5};\n    numbers.push_back(6);\n    std::cout << "First element: " << numbers[0] << std::endl;\n    for(const auto& num : numbers) {\n        std::cout << num << " ";\n    }\n    return 0;\n}`,
            timeSpent: 1,
            difficulty: 'Beginner',
            category: 'Memory Management'
          },
          {
            name: 'Templates',
            path: '/cpp-scripts/templates.cpp',
            content: 'template<typename T>\nT max(T a, T b) {\n    return (a > b) ? a : b;\n}',
            timeSpent: 2,
            difficulty: 'Intermediate',
            category: 'Generic Programming'
          },
          {
            name: 'Variables',
            path: '/cpp-scripts/variables.cpp',
            content: `#include <iostream>\n\nint main() {\n    int a = 5;\n    float b = 3.14;\n    char c = 'A';\n    std::string d = "Hello, World!";\n    std::cout << "Integer: " << a << std::endl;\n    std::cout << "Float: " << b << std::endl;\n    std::cout << "Character: " << c << std::endl;\n    std::cout << "String: " << d << std::endl;\n    return 0;\n}`,
            timeSpent: 1,
            difficulty: 'Beginner',
            category: 'Basics'
          }
        ]);
      } catch (error) {
        console.error('Error loading files:', error);
      }
    };

    loadFiles();
  }, []);

  const handleFileSelect = (file: CppFile) => {
    console.log('Selected file:', file);
    setSelectedFile(file);
  };

  return (
    <div className={`min-h-screen ${isDark ? 'dark bg-slate-900' : 'bg-gray-50'}`}>
      <SakuraParticles />
      <ThemeToggle isDark={isDark} onToggle={() => setIsDark(!isDark)} />

      <div className="container mx-auto px-4 py-8 relative z-20">
        {selectedFile ? (
          <CodeViewer
            file={selectedFile}
            isDark={isDark}
            onBack={() => setSelectedFile(null)}
          />
        ) : (
          <>
            <div className="text-center mb-12">
              <div className="flex items-center justify-center mb-4">
                <Code2 className="w-12 h-12 text-pink-500" />
              </div>
              <h1 className="text-4xl font-bold mb-4 dark:text-white">
                C++ Learning Journey
              </h1>
              <p className="text-gray-600 dark:text-gray-300 max-w-2xl mx-auto">
                Embark on a journey through C++ concepts, with carefully crafted examples
                and interactive challenges. Track your progress and master one concept at a time.
              </p>
            </div>

            <Dashboard progress={progress} />
            <ConceptGrid
              files={files}
              onFileSelect={handleFileSelect}
            />
          </>
        )}
      </div>
    </div>
  );
}

export default App;